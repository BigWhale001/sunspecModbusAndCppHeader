#pragma once
#include <vector>
#include <map>
#include <memory>
#include <iostream>

// 引入生成的工厂类
#include "sunspec_cpp_headers/sunspec_factory.hpp"

class SunSpecDecoder {
public:
    // 存储解析结果
    // Key: Model ID
    // Value: 该 ID 对应的所有模型实例列表 (支持同一模型出现多次)
    std::map<uint16_t, std::vector<std::shared_ptr<SunSpecModelBase>>> models;

    // 获取特定模型的泛型方法
    // 示例: auto m103 = decoder.get_model<Model103>(103);
    template <typename T>
    std::shared_ptr<T> get_model(uint16_t id, size_t index = 0) {
        auto it = models.find(id);
        if (it != models.end() && index < it->second.size()) {
            return std::dynamic_pointer_cast<T>(it->second[index]);
        }
        return nullptr;
    }

    // 解析入口
    void decode(const uint16_t* buffer, size_t length) {
        models.clear(); // 清空上次解析结果
        size_t cursor = 0;

        // 1. 寻找 SunS 头部 (0x5375, 0x6e53)
        bool found_header = false;
        while (cursor + 1 < length) {
            if (buffer[cursor] == 0x5375 && buffer[cursor+1] == 0x6e53) {
                found_header = true;
                cursor += 2; // 跳过头部
                break;
            }
            cursor++;
        }

        if (!found_header) {
            std::cerr << "Error: SunS header not found!" << std::endl;
            return;
        }

        // 2. 遍历模型链表
        while (cursor + 1 < length) {
            // 字节序转换
            uint16_t id = be16toh_custom(buffer[cursor]);
            uint16_t len = be16toh_custom(buffer[cursor + 1]);

            if (id == 0xFFFF) {
                // std::cout << "End of SunSpec map found at offset " << cursor << std::endl;
                break;
            }

            // 安全检查
            if (cursor + 2 + len > length) {
                std::cerr << "Error: Model length exceeds buffer!" << std::endl;
                break;
            }

            // std::cout << "Found Model ID: " << id << ", Length: " << len << std::endl;

            // 3. 使用工厂创建模型
            auto model = SunSpecFactory::create_model(id);
            if (model) {
                const uint8_t* model_start_ptr = (const uint8_t*)&buffer[cursor];
                model->from_buffer(model_start_ptr);
                models[id].push_back(model);
            } else {
                std::cout << "Warning: No implementation for Model ID " << id << std::endl;
            }

            // 4. 跳转到下一个模型
            cursor += (2 + len);
        }
    }
};