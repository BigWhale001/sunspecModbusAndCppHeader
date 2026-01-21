import json
import os
import sys
import glob

TYPE_MAP = {
    'uint16': 'uint16_t',
    'int16': 'int16_t',
    'sunssf': 'int16_t',
    'enum16': 'uint16_t',
    'bitfield16': 'uint16_t',
    'uint32': 'uint32_t',
    'int32': 'int32_t',
    'acc32': 'uint32_t',
    'enum32': 'uint32_t',
    'bitfield32': 'uint32_t',
    'string': 'char',
    'pad': 'uint16_t'
}

def clean_name(name):
    if name in ['int', 'float', 'char', 'long', 'short', 'double', 'struct', 'class', 'public', 'private', 'protected', 'virtual', 'override']:
        return f"{name}_val"
    return name

def generate_cpp_header(json_path, output_dir):
    with open(json_path, 'r', encoding='utf-8') as f:
        try:
            data = json.load(f)
        except:
            return None

    points = data['group']['points']
    
    # 获取 Model ID
    filename = os.path.basename(json_path)
    try:
        model_id = int(filename.replace('model_', '').replace('.json', ''))
    except:
        for p in points:
            if p.get('name') == 'ID':
                model_id = p.get('value')
                break
        else:
            return None

    struct_name = f"Model{model_id}_Raw"
    class_name = f"Model{model_id}"
    header_filename = f"sunspec_model_{model_id}.hpp"
    header_path = os.path.join(output_dir, header_filename)

    with open(header_path, 'w', encoding='utf-8') as h:
        h.write(f"// Generated C++ Header for Model {model_id}\n")
        h.write(f"#pragma once\n\n")
        h.write("#include <cstdint>\n")
        h.write("#include <cmath>\n")
        h.write("#include <cstring>\n")
        h.write("#include <algorithm>\n")
        h.write("#include \"sunspec_utils.hpp\"\n")
        h.write("#include \"sunspec_model_base.hpp\"\n\n") # 引用基类

        # 2. 生成 Raw Struct
        h.write("#pragma pack(push, 1)\n")
        h.write(f"struct {struct_name} {{\n")
        
        fields = []
        total_len = 0

        for p in points:
            name = clean_name(p['name'])
            ptype = p['type']
            size = p.get('size', 1)
            sf_name = p.get('sf') 
            
            c_type = TYPE_MAP.get(ptype, 'uint16_t')
            
            fields.append({
                'name': name,
                'type': ptype,
                'c_type': c_type,
                'sf': sf_name,
                'size': size
            })

            if ptype == 'string':
                h.write(f"    {c_type} {name}[{size * 2}];\n")
            elif size > 1 and '32' not in ptype:
                h.write(f"    {c_type} {name}[{size}];\n")
            elif ptype == 'pad':
                h.write(f"    {c_type} pad_{total_len};\n")
            else:
                h.write(f"    {c_type} {name};\n")
            
            if '32' in ptype: total_len += 2
            else: total_len += size

        h.write(f"}};\n")
        h.write("#pragma pack(pop)\n\n")

        # 3. 生成 Wrapper Class (继承自 SunSpecModelBase)
        h.write(f"class {class_name} : public SunSpecModelBase {{\n")
        h.write("public:\n")
        h.write(f"    {struct_name} raw;\n\n")
        
        h.write(f"    uint16_t get_id() const override {{ return {model_id}; }}\n\n")

        h.write("    void from_buffer(const uint8_t* buffer) override {\n")
        h.write(f"        std::memcpy(&raw, buffer, sizeof({struct_name}));\n")
        h.write("    }\n\n")

        # 生成 Getter 方法
        for f in fields:
            name = f['name']
            ptype = f['type']
            sf = f['sf']
            
            if ptype in ['uint16', 'int16', 'enum16', 'bitfield16']:
                if sf:
                    h.write(f"    float get_{name}() const {{\n")
                    # 检查 sf 是否为常量数字
                    is_const_sf = isinstance(sf, (int, float))
                    
                    if is_const_sf:
                        h.write(f"        int16_t sf_val = {sf};\n")
                    else:
                        sf_clean = clean_name(sf)
                        h.write(f"        int16_t sf_val = be16toh_custom_s(raw.{sf_clean});\n")
                    
                    h.write(f"        if (sf_val == (int16_t)0x8000) return NAN;\n")
                    if ptype.startswith('u'):
                        h.write(f"        uint16_t val = be16toh_custom(raw.{name});\n")
                    else:
                        h.write(f"        int16_t val = be16toh_custom_s(raw.{name});\n")
                    h.write(f"        return (float)val * std::pow(10.0f, sf_val);\n")
                    h.write(f"    }}\n\n")
                
                h.write(f"    {f['c_type']} get_raw_{name}() const {{\n")
                if ptype.startswith('u'):
                    h.write(f"        return be16toh_custom(raw.{name});\n")
                else:
                    h.write(f"        return be16toh_custom_s(raw.{name});\n")
                h.write(f"    }}\n\n")

        h.write(f"}};\n")
    
    return model_id

def generate_factory(model_ids, output_dir):
    factory_path = os.path.join(output_dir, "sunspec_factory.hpp")
    with open(factory_path, 'w', encoding='utf-8') as f:
        f.write("// Generated SunSpec Factory\n")
        f.write("#pragma once\n")
        f.write("#include <memory>\n")
        f.write("#include \"sunspec_model_base.hpp\"\n")
        
        # Include all headers
        for mid in model_ids:
            f.write(f"#include \"sunspec_model_{mid}.hpp\"\n")
            
        f.write("\nclass SunSpecFactory {\n")
        f.write("public:\n")
        f.write("    static std::shared_ptr<SunSpecModelBase> create_model(uint16_t id) {\n")
        f.write("        switch (id) {\n")
        
        for mid in model_ids:
            f.write(f"            case {mid}: return std::make_shared<Model{mid}>();\n")
            
        f.write("            default: return nullptr;\n")
        f.write("        }\n")
        f.write("    }\n")
        f.write("};\n")

def main():
    base_dir = os.path.dirname(os.path.abspath(__file__))
    input_dir = os.path.join(base_dir, "pysunspec2-master", "sunspec2", "models", "json")
    output_dir = os.path.join(base_dir, "sunspec_cpp_headers")
    
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    files = glob.glob(os.path.join(input_dir, "model_*.json"))
    files.sort()
    
    generated_ids = []
    for path in files:
        mid = generate_cpp_header(path, output_dir)
        if mid:
            generated_ids.append(mid)
            print(f"Generated Model {mid}")
            
    # 生成工厂
    generate_factory(generated_ids, output_dir)
    print(f"Generated sunspec_factory.hpp with {len(generated_ids)} models")

if __name__ == "__main__":
    main()