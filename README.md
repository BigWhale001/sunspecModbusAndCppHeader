# sunspecModbusAndCppHeader（created by AI）
## 项目概述

sunspecModbusAndCppHeader 项目包含：

- **Python 实现**：位于 `pysunspec2-master` 目录，提供完整的 SunSpec 协议支持
- **C++ 头文件生成器**：自动从 JSON 模型定义生成 C++ 头文件
- **C++ 解码器**：基于生成的头文件实现的 SunSpec 数据解码器
- **Modbus Server/Client**：基于 C++ 实现的简单 Modbus TCP 服务端和客户端，用于演示数据交互
- **验证工具**：确保生成的 C++ 头文件与 JSON 模型定义一致

## 目录结构

```
/home/user/桌面/pysunspec2-master/
├── bin/                    # 编译生成的可执行文件 (mb_server, mb_client, sunspec_demo)
├── generated/              # 自动生成的 SunSpec 模型 C++ 头文件
├── include/                # 核心 C++ 头文件库
│   ├── sunspec_decoder.hpp       # SunSpec 解码器核心类
│   ├── simple_modbus_server.hpp  # 简易 Modbus TCP 服务端实现
│   └── simple_modbus_client.hpp  # 简易 Modbus TCP 客户端实现
├── scripts/                # Python 工具脚本
│   ├── generate_sunspec_headers.py  # 生成器脚本
│   └── verify_headers.py            # 验证脚本
├── src/                    # C++ 源代码
│   ├── modbus_server_main.cpp    # Modbus Server 入口
│   ├── modbus_client_main.cpp    # Modbus Client 入口
│   └── sunspec_decoder_demo.cpp  # SunSpec 解码演示
├── pysunspec2-master/      # 原 Python SunSpec 实现 (包含原始 JSON 模型)
├── Makefile                # 项目构建脚本
└── README.md               # 项目说明
```

## 构建与运行

### 1. 生成 C++ 头文件

如果修改了 JSON 模型或生成逻辑，需要重新生成头文件：

```bash
python3 scripts/generate_sunspec_headers.py
```

### 2. 编译 C++ 项目

使用 `make` 编译所有目标：

```bash
make
```

### 3. 运行演示

**运行 Modbus Server** (监听端口 1502):

```bash
./bin/mb_server
```

**运行 Modbus Client** (连接 Server 并解码 SunSpec 数据):

```bash
./bin/mb_client
```

**运行纯解码演示**:

```bash
./bin/sunspec_demo
```
