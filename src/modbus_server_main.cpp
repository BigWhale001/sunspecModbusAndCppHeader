#include <iostream>
#include <modbus/modbus.h>
#include <errno.h>
#include <unistd.h>
#include <cstring>
#include <vector>
#include <cstdint>

// 辅助：大端转换宏 (模拟网络数据)
#define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))
#define HTONL(x) ((uint32_t)((((x) & 0xFF) << 24) | (((x) & 0xFF00) << 8) | (((x) & 0xFF0000) >> 8) | (((x) >> 24) & 0xFF)))

int main() {
    std::cout << "Starting Modbus TCP Server with SunSpec Simulation..." << std::endl;

    // Create a new Modbus TCP context
    modbus_t *ctx = modbus_new_tcp("127.0.0.1", 1502);
    if (ctx == nullptr) {
        std::cerr << "Unable to create the libmodbus context" << std::endl;
        return -1;
    }

    // Listen for incoming connections
    int server_socket = modbus_tcp_listen(ctx, 1);
    if (server_socket == -1) {
        std::cerr << "Unable to listen: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    std::cout << "Listening on 127.0.0.1:1502" << std::endl;

    // Allocate mapping (holding registers)
    // 500 registers for holding registers
    modbus_mapping_t *mb_mapping = modbus_mapping_new(0, 0, 500, 0);
    if (mb_mapping == nullptr) {
        std::cerr << "Failed to allocate the mapping: " << modbus_strerror(errno) << std::endl;
        modbus_free(ctx);
        return -1;
    }

    // --- Construct SunSpec Data Stream ---
    std::vector<uint16_t> stream;

    // 1. SunS Header (0x5375, 0x6e53)
    stream.push_back(0x5375); 
    stream.push_back(0x6e53);

    // 2. Model 1 (Common)
    // ID=1, Len=66
    stream.push_back(HTONS(1));   
    stream.push_back(HTONS(66));  
    
    // Mn (Manufacturer) = "SunSpec"
    // "Su" (0x5375), "nS" (0x6e53), "pe" (0x7065), "c\0" (0x6300)
    // HTONS handles the conversion to Big Endian for network, 
    // but here we are populating the holding registers which libmodbus expects in Host Order.
    // If we assume Host is Little Endian, and we want 0x5375 to be stored, we just push 0x5375.
    // Wait, HTONS in this file swaps bytes. 
    // If we want register value 0x5375, we should pass 0x7553 to HTONS? 
    // No, let's just use raw values and let libmodbus handle it?
    // Actually, the macro defined in this file: #define HTONS(x) ((uint16_t)((((x) & 0xFF) << 8) | (((x) >> 8) & 0xFF)))
    // This swaps.
    // If I want the register to hold 0x5375.
    // stream.push_back(0x5375); -> stored as 0x5375 in vector.
    // Modbus mapping copies vector to tab_registers.
    // If I use HTONS(1), I get 0x0100 (256).
    // The previous code used HTONS(1).
    // ID 1 is 0x0001. 
    // If stored as 0x0100.
    // Client (LE) reads it. Network sends 01 00.
    // Client receives 01 00 -> 0x0100.
    // Client decoder: id = (buffer[0] >> 8) | (buffer[0] << 8);
    // 0x0100 >> 8 = 1. 0x0100 << 8 = 0. OR is 1.
    // So Client expects SWAPPED values in the buffer?
    // Yes, the Client decoder MANUALY swaps:
    // uint16_t id = (buffer[cursor] >> 8) | (buffer[cursor] << 8);
    
    // This implies the Client buffer contains Big Endian data (as uint16s)?
    // Libmodbus `modbus_read_registers` converts Network (BE) to Host (LE).
    // So if Network sent 00 01 (ID=1).
    // Client (LE) gets 0x0001. Memory: 01 00.
    // Decoder: (0x0001 >> 8) | (0x0001 << 8) = 0 | 0x0100 = 256. WRONG.
    
    // Wait. If Client gets 0x0001.
    // Decoder code:
    // uint16_t id = (buffer[cursor] >> 8) | (buffer[cursor] << 8);
    // This swaps 0x0001 to 0x0100.
    
    // So the decoder expects the data in the uint16_t array to be SWAPPED relative to the actual value?
    // i.e. it expects Big Endian value stored in uint16_t on a LE machine?
    // e.g. 0x0001 stored as 0x0001?
    
    // If Decoder swaps, it means it thinks the data is in the "wrong" endianness.
    // If I have 1 (0x0001). Decoder produces 0x0100.
    // Unless the input was 0x0100. Then Decoder produces 0x0001.
    
    // So for ID=1 to be decoded correctly, buffer[cursor] must be 0x0100.
    // For buffer[cursor] to be 0x0100 on Client (LE).
    // Network must have sent 01 00? No.
    // If Client (LE) has 0x0100. Memory is 00 01.
    // Network sent 01 00? 
    // Libmodbus receives 01 00. Converts to Host (LE): 0x0100.
    
    // So yes, we need to send 0x0100 (Big Endian 1) over the wire.
    // So Server must put 0x0100 in its registers?
    // Server (LE) has 0x0100. Memory 00 01.
    // Libmodbus Server: Host to Network. 0x0100 -> 01 00.
    // Correct.
    
    // So Server MUST store values in Big Endian (swapped) format in its `uint16_t` array.
    // HTONS(1) does exactly that (0x0001 -> 0x0100).
    
    // So for "Su" (0x5375). HTONS(0x5375) -> 0x7553.
    // Server stores 0x7553.
    // Network sends 75 53.
    // Client (LE) receives 75 53 -> 0x7553.
    // Client Decoder logic for ID/Len swaps it back.
    // BUT, for `memcpy` into char array?
    
    // Client `from_buffer` does `memcpy`.
    // Source: 0x7553. Memory: 53 75.
    // Destination: char[0]=0x53 ('S'), char[1]=0x75 ('u').
    // THIS IS CORRECT!
    
    // So if I use HTONS() for everything, `memcpy` works for strings on LE machine!
    // Because `HTONS` swaps. Network sends swapped. Client receives swapped.
    // Swapped value in LE memory has bytes in original order.
    // 0x1234 -> HTONS -> 0x3412.
    // Memory of 0x3412 on LE: 12 34.
    // Correct order!
    
    // So I should use HTONS for the string characters too.
    
    stream.push_back(HTONS(0x5375)); // Su
    stream.push_back(HTONS(0x6e53)); // nS
    stream.push_back(HTONS(0x7065)); // pe
    stream.push_back(HTONS(0x6300)); // c\0
    
    // Remaining 12 regs (24 bytes) of Mn
    for(int i=0; i<12; i++) stream.push_back(0);

    // Md (32 bytes = 16 regs)
    for(int i=0; i<16; i++) stream.push_back(0);
    
    // Opt (16 bytes = 8 regs)
    for(int i=0; i<8; i++) stream.push_back(0);
    
    // Vr (16 bytes = 8 regs)
    for(int i=0; i<8; i++) stream.push_back(0);
    
    // SN (32 bytes = 16 regs)
    for(int i=0; i<16; i++) stream.push_back(0);
    
    // DA + pad (2 regs)
    stream.push_back(0);
    stream.push_back(0); 

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
    m708_body.push_back(HTONS(708)); // ID copy
    m708_body.push_back(HTONS(29));  // L
    m708_body.push_back(0); // Ena
    m708_body.push_back(0); // AdptCrvReq
    m708_body.push_back(0); // AdptCrvRslt
    m708_body.push_back(HTONS(2)); // NPt = 2 (Max points per curve)
    m708_body.push_back(HTONS(1)); // NCrvSet = 1
    m708_body.push_back(0); // V_SF
    m708_body.push_back(0); // Tms_SF
    // Root size = 9 regs.

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

    std::cout << "SunSpec Stream constructed. Total size: " << stream.size() << " registers." << std::endl;

    if (stream.size() > 500) {
        std::cerr << "Error: Stream size exceeds mapping size!" << std::endl;
    }

    // Copy stream to modbus mapping
    for (size_t i = 0; i < stream.size() && i < 500; ++i) {
        mb_mapping->tab_registers[i] = stream[i];
    }

    while (true) {
        modbus_tcp_accept(ctx, &server_socket);
        
        uint8_t query[MODBUS_TCP_MAX_ADU_LENGTH];
        int rc;

        while (true) {
            rc = modbus_receive(ctx, query);
            if (rc > 0) {
                modbus_reply(ctx, query, rc, mb_mapping);
            } else if (rc == -1) {
                // Connection closed by the client or error
                break;
            }
        }
        std::cout << "Client disconnected." << std::endl;
    }

    modbus_mapping_free(mb_mapping);
    close(server_socket);
    modbus_free(ctx);

    return 0;
}
