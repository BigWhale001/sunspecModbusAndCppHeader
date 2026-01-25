CXX = g++
MODBUS_DIR = ThirdParty/x86_64/libmodbus
CXXFLAGS = -std=c++11 -Iinclude -Igenerated -I. $(MODBUS_INC) -pthread
MODBUS_INC = -I$(MODBUS_DIR)/include
MODBUS_LDFLAGS = -L$(MODBUS_DIR)/lib -lmodbus -Wl,-rpath,$(abspath $(MODBUS_DIR)/lib)
LDFLAGS = -pthread

# Output directories
BIN_DIR = bin
SRC_DIR = src

# Targets
all: $(BIN_DIR)/mb_server $(BIN_DIR)/mb_client $(BIN_DIR)/sunspec_demo

$(BIN_DIR)/mb_server: $(SRC_DIR)/modbus_server_main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS) $(MODBUS_LDFLAGS)

$(BIN_DIR)/mb_client: $(SRC_DIR)/modbus_client_main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS) $(MODBUS_LDFLAGS)

$(BIN_DIR)/sunspec_demo: $(SRC_DIR)/sunspec_decoder_demo.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(BIN_DIR)/mb_server $(BIN_DIR)/mb_client $(BIN_DIR)/sunspec_demo
