#include "sunspec_decoder.hpp"
#include <vector>
#include <iostream>
#include <cstring>
#include <cstdint>

// 辅助：大端转换宏 (模拟网络数据)
#define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))
#define HTONL(x) ((uint32_t)((((x) & 0xFF) << 24) | (((x) & 0xFF00) << 8) | (((x) & 0xFF0000) >> 8) | (((x) >> 24) & 0xFF)))

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
    // 注意: SunSpec 协议中长度是按寄存器(uint16)计，但 memcpy 按字节计。
    // decoder.decode 接收的是 uint16_t* buffer 和 length (寄存器数? No, check impl)
    // Impl: decode(const uint16_t* buffer, size_t length)
    // 并且里面 buffer[cursor] 是按 uint16 访问。
    decoder.decode(stream.data(), stream.size());

    // --- 验证结果 ---
    std::cout << "\n--- Verification ---" << std::endl;
    
    auto m1 = decoder.get_model<Model1>(1);
    if (m1) std::cout << "[PASS] Model 1 found." << std::endl;

    auto m103 = decoder.get_model<Model103>(103);
    if (m103) {
        std::cout << "[PASS] Model 103 found. Amps: " << m103->get_A() << " A" << std::endl;
    }

    auto m708 = decoder.get_model<Model708>(708);
    if (m708) {
        std::cout << "[PASS] Model 708 found." << std::endl;
        
        // 验证 Root
        uint16_t n_crv = m708->get_raw_NCrvSet();
        uint16_t n_pt = m708->get_raw_NPt();
        std::cout << "  NCrvSet: " << n_crv << ", NPt: " << n_pt << std::endl;

        // 手动遍历嵌套组 (Manual Traversal of Nested Groups)
        size_t offset = sizeof(Model708_Raw); // 跳过 Root
        
        for (int i = 0; i < n_crv; i++) {
            std::cout << "  [Curve Set " << i << "]" << std::endl;
            
            // 1. Crv Struct
            auto crv = SunSpecDecoder::get_group_at<Model708_Crv_Raw>(m708, offset);
            offset += sizeof(Model708_Crv_Raw);
            std::cout << "    ReadOnly: " << be16toh_custom(crv->ReadOnly) << std::endl;
            
            // 2. MustTrip Group
            auto must = SunSpecDecoder::get_group_at<Model708_Crv_MustTrip_Raw>(m708, offset);
            offset += sizeof(Model708_Crv_MustTrip_Raw);
            uint16_t act_pt = be16toh_custom(must->ActPt);
            std::cout << "    MustTrip (ActPt=" << act_pt << "):" << std::endl;
            
            // MustTrip Points
            for (int j = 0; j < n_pt; j++) {
                auto pt = SunSpecDecoder::get_group_at<Model708_Crv_MustTrip_Pt_Raw>(m708, offset);
                offset += sizeof(Model708_Crv_MustTrip_Pt_Raw);
                
                // 只打印有效的点
                if (j < act_pt) {
                    uint16_t v = be16toh_custom(pt->V);
                    std::cout << "      Pt[" << j << "]: V=" << v << std::endl;
                }
            }
            
            // 3. MayTrip Group
            // Skip MayTrip struct
            offset += sizeof(Model708_Crv_MayTrip_Raw);
            // Skip MayTrip Points
            offset += n_pt * sizeof(Model708_Crv_MayTrip_Pt_Raw);
            
            // 4. MomCess Group
            // Skip MomCess struct
            offset += sizeof(Model708_Crv_MomCess_Raw);
            // Skip MomCess Points
            offset += n_pt * sizeof(Model708_Crv_MomCess_Pt_Raw);
        }
    } else {
        std::cout << "[FAIL] Model 708 missing." << std::endl;
    }

    return 0;
}
