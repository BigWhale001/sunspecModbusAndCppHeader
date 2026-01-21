import json
import os
import glob

# 配置路径
JSON_DIR = "/home/user/桌面/pysunspec2-master/pysunspec2-master/sunspec2/models/json"
HEADER_DIR = "sunspec_cpp_headers" 

def get_json_field_count(json_path):
    with open(json_path, 'r', encoding='utf-8') as f:
        try:
            data = json.load(f)
            return len(data['group']['points'])
        except:
            return 0

def get_header_field_count(header_path):
    with open(header_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 提取 struct ModelXXX_Raw { ... } 之间的内容
    start_tag = "struct Model"
    end_tag = "};"
    
    try:
        start_idx = content.index(start_tag)
        content_after_start = content[start_idx:]
        end_idx = content_after_start.index(end_tag)
        struct_body = content_after_start[:end_idx]
        
        # 统计分号数量 (每个字段一行一个分号)
        # 排除第一行 struct 定义
        lines = struct_body.split('\n')[1:]
        count = 0
        for line in lines:
            if ";" in line:
                count += 1
        return count
    except ValueError:
        return 0

def verify():
    json_files = glob.glob(os.path.join(JSON_DIR, "model_*.json"))
    json_files.sort()
    
    print(f"{'Model':<8} | {'JSON':<6} | {'HPP':<6} | {'Status'}")
    print("-" * 40)
    
    mismatch_count = 0
    
    for json_path in json_files:
        filename = os.path.basename(json_path)
        try:
            mid = int(filename.replace('model_', '').replace('.json', ''))
        except:
            continue
            
        header_path = os.path.join(HEADER_DIR, f"sunspec_model_{mid}.hpp")
        
        if not os.path.exists(header_path):
            print(f"{mid:<8} | {'-':<6} | {'-':<6} | MISSING")
            mismatch_count += 1
            continue
            
        json_count = get_json_field_count(json_path)
        header_count = get_header_field_count(header_path)
        
        if json_count == header_count:
            # Pass (不输出 Pass 以减少刷屏，只输出 Fail)
            # print(f"{mid:<8} | {json_count:<6} | {header_count:<6} | OK")
            pass
        else:
            print(f"{mid:<8} | {json_count:<6} | {header_count:<6} | FAIL")
            mismatch_count += 1
            
    if mismatch_count == 0:
        print("\nALL MODELS PASSED VERIFICATION!")
    else:
        print(f"\nFound {mismatch_count} mismatches.")

if __name__ == "__main__":
    verify()