#include "sunspec_decoder.hpp"
#include <vector>
#include <iostream>
#include <cstring>

// 辅助：大端转换宏 (模拟网络数据)
#define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))

int main() {
    // 构造模拟数据流
    std::vector<uint16_t> stream;

    // 1. SunS Header (0x5375, 0x6e53)
    stream.push_back(0x5375); 
    stream.push_back(0x6e53);

    // 2. Model 1 (Common)
    // ID=1, Len=66
    stream.push_back(HTONS(1));   
    stream.push_back(HTONS(66));  
    for(int i=0; i<66; i++) stream.push_back(0); 

    // 3. Model 103 (Three Phase Inverter)
    // ID=103, Len=50
    stream.push_back(HTONS(103)); 
    stream.push_back(HTONS(50));  
    
    std::vector<uint16_t> m103_body(50, 0);
    
    // 设置电流 A = 12345, SF = -2 -> 123.45 A
    m103_body[0] = HTONS(12345);    // A (uint16)
    m103_body[4] = HTONS(0xFFFE);   // A_SF (sunssf/int16)
    
    stream.insert(stream.end(), m103_body.begin(), m103_body.end());

    // 4. End Model (0xFFFF)
    stream.push_back(0xFFFF); 
    stream.push_back(0x0000);

    std::cout << "Stream constructed. Total size: " << stream.size() << " registers." << std::endl;

    // --- 开始解码 ---
    SunSpecDecoder decoder;
    decoder.decode(stream.data(), stream.size());

    // --- 验证结果 ---
    std::cout << "\n--- Verification ---" << std::endl;
    
    // 使用新的泛型 API 获取模型
    auto m1 = decoder.get_model<Model1>(1);
    if (m1) {
        std::cout << "[PASS] Model 1 found (ID: " << m1->get_id() << ")." << std::endl;
    } else {
        std::cout << "[FAIL] Model 1 missing." << std::endl;
    }

    auto m103 = decoder.get_model<Model103>(103);
    if (m103) {
        std::cout << "[PASS] Model 103 found." << std::endl;
        
        // 验证数值计算
        float amps = m103->get_A();
        std::cout << "Decoded Amps: " << amps << " A (Expected: 123.45)" << std::endl;
        
        // 验证原始值
        uint16_t raw_a = m103->get_raw_A();
        std::cout << "Raw A: " << raw_a << std::endl;
    } else {
        std::cout << "[FAIL] Model 103 missing." << std::endl;
    }

    // 验证一个不存在的模型
    auto m803 = decoder.get_model<SunSpecModelBase>(803); // 假设我们要找 Model 803
    if (!m803) {
        std::cout << "[PASS] Model 803 correctly not found in this stream." << std::endl;
    }

    return 0;
}