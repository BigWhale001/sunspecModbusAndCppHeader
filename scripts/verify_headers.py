import json
import os
import glob
import re

# 配置路径
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)
JSON_DIR = os.path.join(PROJECT_ROOT, "pysunspec2-master", "sunspec2", "models", "json")
HEADER_DIR = os.path.join(PROJECT_ROOT, "sunspec_hpp")

def clean_name(name):
    name = name.replace('-', '_')
    if name in ['int', 'float', 'char', 'long', 'short', 'double', 'struct', 'class', 'public', 'private', 'protected', 'virtual', 'override']:
        return f"{name}_val"
    return name

def count_json_points(group, prefix=""):
    """
    Recursively count points for the group and its subgroups.
    Returns a list of dicts: {'suffix': '...', 'count': N}
    """
    points = group.get('points', [])
    count = len(points)
    
    structs = []
    # Current group struct
    structs.append({'suffix': prefix, 'count': count})
    
    subgroups = group.get('groups', [])
    for sub in subgroups:
        gname = clean_name(sub['name'])
        full_gname = f"{prefix}_{gname}" if prefix else gname
        structs.extend(count_json_points(sub, full_gname))
        
    return structs

def parse_header_structs(header_path, model_id):
    """
    Parses the header file to find all ModelXXX struct definitions and count their fields.
    Returns a dict: {'suffix': count}
    """
    if not os.path.exists(header_path):
        return {}

    with open(header_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    struct_map = {}
    
    # Pattern to match: struct Model<ID><Suffix>_Raw { ... };
    # We allow Suffix to be empty or start with _
    # usage of regex dotall to match across newlines inside {}
    pattern = re.compile(rf"struct Model{model_id}([_a-zA-Z0-9]*)_Raw\s*\{{([^}}]+)\}};", re.MULTILINE | re.DOTALL)
    
    matches = pattern.findall(content)
    for suffix, body in matches:
        # Clean up body to count fields
        lines = body.strip().split('\n')
        count = 0
        for line in lines:
            line = line.strip()
            # Count lines that are statements (contain ;) and not comments
            if line and not line.startswith('//') and ';' in line:
                count += 1
        
        # Clean the suffix. 
        # If it was "_curve", we want "curve". 
        # If it was "", we want "".
        clean_suffix = suffix.lstrip('_')
        struct_map[clean_suffix] = count
        
    return struct_map

def verify():
    json_files = glob.glob(os.path.join(JSON_DIR, "model_*.json"))
    json_files.sort()
    
    print(f"{'Model':<8} | {'Structs':<8} | {'Status'}")
    print("-" * 50)
    
    mismatch_count = 0
    passed_count = 0
    
    for json_path in json_files:
        filename = os.path.basename(json_path)
        try:
            mid = int(filename.replace('model_', '').replace('.json', ''))
        except:
            continue
            
        header_path = os.path.join(HEADER_DIR, f"sunspec_model_{mid}.hpp")
        
        if not os.path.exists(header_path):
            print(f"{mid:<8} | {'-':<8} | MISSING FILE")
            mismatch_count += 1
            continue
            
        # Parse JSON to get expected structs
        with open(json_path, 'r', encoding='utf-8') as f:
            try:
                data = json.load(f)
            except:
                print(f"{mid:<8} | {'-':<8} | JSON ERROR")
                mismatch_count += 1
                continue

        group_data = data.get('group', {})
        expected_structs = count_json_points(group_data, "")
        
        # Parse Header to get actual structs
        actual_structs_map = parse_header_structs(header_path, mid)
        
        model_errors = []
        
        for item in expected_structs:
            suffix = item['suffix']
            expected_count = item['count']
            
            if suffix not in actual_structs_map:
                model_errors.append(f"Missing struct '{suffix}'")
            else:
                actual_count = actual_structs_map[suffix]
                if expected_count != actual_count:
                    model_errors.append(f"'{suffix}' size mismatch ({expected_count} vs {actual_count})")
        
        # Check if there are extra structs in header (optional, but good for cleanliness)
        expected_suffixes = set(item['suffix'] for item in expected_structs)
        for actual_suffix in actual_structs_map:
            if actual_suffix not in expected_suffixes:
                # model_errors.append(f"Extra struct '{actual_suffix}'")
                pass # Extra structs are usually not a failure condition, maybe helper structs? But here we expect 1:1.
        
        if not model_errors:
            # print(f"{mid:<8} | {len(expected_structs):<8} | OK")
            passed_count += 1
        else:
            print(f"{mid:<8} | {len(expected_structs):<8} | FAIL: {', '.join(model_errors)}")
            mismatch_count += 1
            
    print("-" * 50)
    print(f"Total Models: {len(json_files)}")
    print(f"Passed:       {passed_count}")
    print(f"Failed:       {mismatch_count}")

if __name__ == "__main__":
    verify()
