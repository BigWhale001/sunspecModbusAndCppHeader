/**
 * @file sunspec_decoder_demo.cpp
 * @brief SunSpec 解码器演示 (无需 Modbus)
 * 
 * 该程序演示了如何在不连接 Modbus 的情况下，直接构建模拟数据流并使用 SunSpecDecoder 进行解码。
 * 主要用于测试解码逻辑和理解 SunSpec 复杂模型 (如 Model 708) 的结构。
 */

#include "sunspec_decoder.hpp"
#include <vector>
#include <iostream>
#include <cstring>
#include <cstdint>
#include "endian_utils.hpp"

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


    std::vector<uint16_t> m708_body;
    
    // Root Params
    m708_body.push_back(HTONS(708)); // ID copy (often repeated in struct, but depends on definition) - Actually Model708_Raw has ID.
    m708_body.push_back(HTONS(29));  // L
    m708_body.push_back(0); // Ena
    m708_body.push_back(0); // AdptCrvReq
    m708_body.push_back(0); // AdptCrvRslt
    m708_body.push_back(HTONS(2)); // NPt = 2 (Max points per curve)
    m708_body.push_back(HTONS(1)); // NCrvSet = 1
    m708_body.push_back(0); // V_SF
    m708_body.push_back(0); // Tms_SF
    // Root size = 9 regs. Correct.

    // Crv[0]
    m708_body.push_back(HTONS(0)); // ReadOnly

    // MustTrip
    m708_body.push_back(HTONS(2)); // ActPt = 2
    // Pt[0]: V=100, Tms=10
    m708_body.push_back(HTONS(100)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(10)); // Tms is uint32
    // Pt[1]: V=110, Tms=20
    m708_body.push_back(HTONS(110)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(20));

    // MayTrip
    m708_body.push_back(HTONS(2)); // ActPt
    // Pt[0]
    m708_body.push_back(HTONS(105)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(15));
    // Pt[1]
    m708_body.push_back(HTONS(115)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(25));

    // MomCess
    m708_body.push_back(HTONS(2)); // ActPt
    // Pt[0]
    m708_body.push_back(HTONS(120)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(5));
    // Pt[1]
    m708_body.push_back(HTONS(130)); 
    m708_body.push_back(0); m708_body.push_back(HTONS(1));

    stream.insert(stream.end(), m708_body.begin(), m708_body.end());

    // 5. End Model (0xFFFF)
    stream.push_back(0xFFFF); 
    stream.push_back(0x0000);

    std::cout << "Stream constructed. Total size: " << stream.size() << " registers." << std::endl;

    // --- 开始解码 ---
    SunSpecDecoder decoder;
    // stream.data() 是 uint16_t*, 但 decoder 需要 uint16_t* (兼容). 
    decoder.decode(stream.data(), stream.size());

    std::cout << "\n--- Decoded Models Attributes ---\n";
    for (const auto& pair : decoder.models) {
        uint16_t model_id = pair.first;
        const auto& instances = pair.second;
        
        std::cout << "Model " << model_id << " (" << instances.size() << " instance(s)):" << std::endl;
        for (size_t i = 0; i < instances.size(); ++i) {
            std::cout << "  Instance " << i + 1 << ":" << std::endl;
            instances[i]->print_attributes();
            std::cout << std::endl;
        }
    }

    return 0;
}

