# sunspecModbusAndCppHeader（created by AI）
## 项目概述

sunspecModbusAndCppHeader 项目包含：

- **Python 实现**：位于 `pysunspec2-master` 目录，提供完整的 SunSpec 协议支持
- **C++ 头文件生成器**：自动从 JSON 模型定义生成 C++ 头文件
- **C++ 解码器**：基于生成的头文件实现的 SunSpec 数据解码器
- **验证工具**：确保生成的 C++ 头文件与 JSON 模型定义一致

## 目录结构

```
├── pysunspec2-master/      # Python SunSpec 实现
│   ├── sunspec2/           # 核心实现
│   │   ├── models/         # 模型定义 (JSON)
│   │   ├── tests/          # 测试代码
│   │   └── ...
├── sunspec_cpp_headers/    # 生成的 C++ 头文件
├── sunspec_decoder.hpp     # C++ 解码器实现
├── sunspec_decoder_demo.cpp # 解码器使用示例
├── generate_sunspec_headers.py # C++ 头文件生成器
├── verify_headers.py       # 头文件验证工具
└── README.md               # 本文档
```

## C++ 头文件生成

### 生成思路

1. **数据源**：使用 `pysunspec2-master/sunspec2/models/json` 目录下的 JSON 文件作为数据源
2. **类型映射**：将 SunSpec 数据类型映射到 C++ 类型
3. **结构生成**：为每个模型生成两个主要部分：
   - `ModelXXX_Raw` 结构体：按原始字节顺序存储数据
   - `ModelXXX` 类：提供高级访问方法，支持缩放因子处理
4. **工厂模式**：生成 `sunspec_factory.hpp` 文件，实现模型的动态创建

### 生成步骤

1. **准备环境**：确保 Python 3 已安装
2. **运行生成器**：

```bash
python generate_sunspec_headers.py
```

3. **查看结果**：生成的头文件将保存在 `sunspec_cpp_headers` 目录中

### 生成的文件结构

- `sunspec_model_XXX.hpp`：每个模型的头文件
- `sunspec_factory.hpp`：模型工厂类
- `sunspec_model_base.hpp`：基础模型类
- `sunspec_utils.hpp`：工具函数

## C++ 头文件使用

### 使用思路

1. **数据获取**：从设备读取原始 SunSpec 数据
2. **数据解析**：使用生成的头文件解析数据
3. **数据访问**：通过生成的类方法访问解析后的数据
4. **数据处理**：根据业务需求处理数据

### 基本使用示例

```cpp
#include "sunspec_decoder.hpp"

int main() {
    // 模拟从设备读取的原始数据
    uint16_t raw_data[] = {
        0x5375, 0x6e53,  // SunS 头部
        1, 6,            // 模型 ID 1, 长度 6
        0, 1,            // ID=1, L=1
        0, 50,           // A=50 (电流)
        0, 230,          // V=230 (电压)
        0xFFFF, 0xFFFF   // 结束标记
    };

    // 创建解码器
    SunSpecDecoder decoder;
    
    // 解析数据
    decoder.decode(raw_data, sizeof(raw_data) / sizeof(uint16_t));
    
    // 获取特定模型并访问数据
    auto model1 = decoder.get_model<Model1>(1);
    if (model1) {
        std::cout << "Model 1 ID: " << model1->get_id() << std::endl;
        std::cout << "Current (A): " << model1->get_A() << std::endl;
        std::cout << "Voltage (V): " << model1->get_V() << std::endl;
    }

    return 0;
}
```

### 编译和运行

```bash
g++ -std=c++11 sunspec_decoder_demo.cpp -o decoder_demo
./decoder_demo
```

## 验证工具

### 验证思路

1. **字段计数**：统计 JSON 文件中的字段数量
2. **头文件验证**：统计生成的头文件中的字段数量
3. **一致性检查**：确保两者字段数量一致

### 运行验证

```bash
python verify_headers.py
## 注意事项

项目使用以下开源仓库：
1. pysunspec2
   版权所有 (c) SunSpec Alliance
   项目地址：https://github.com/sunspec/pysunspec2
   协议全文：https://www.apache.org/licenses/LICENSE-2.0

2. sunspec/models
   版权所有 (c) SunSpec Alliance
   项目地址：https://github.com/sunspec/models
   协议全文：https://www.apache.org/licenses/LICENSE-2.0