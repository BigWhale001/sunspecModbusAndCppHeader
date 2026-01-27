CXX = g++
MODBUS_DIR = ThirdParty/x86_64/libmodbus
CXXFLAGS = -std=c++11 -Iinclude -Isunspec_hpp -I. $(MODBUS_INC) -pthread
MODBUS_INC = -I$(MODBUS_DIR)/include
MODBUS_LDFLAGS = -L$(MODBUS_DIR)/lib -lmodbus -Wl,-rpath,$(abspath $(MODBUS_DIR)/lib)
LDFLAGS = -pthread

# Output directories
BIN_DIR = bin
SRC_DIR = src

# Ensure bin directory exists
$(shell mkdir -p $(BIN_DIR))

# Targets
all: $(BIN_DIR)/mb_server $(BIN_DIR)/mb_client $(BIN_DIR)/sunspec_demo $(BIN_DIR)/simple_demo

# Objects
$(BIN_DIR)/modbus_server.o: $(SRC_DIR)/modbus_server.cpp include/modbus_server.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BIN_DIR)/modbus_client.o: $(SRC_DIR)/modbus_client.cpp include/modbus_client.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Executables
$(BIN_DIR)/mb_server: $(SRC_DIR)/modbus_server_main.cpp $(BIN_DIR)/modbus_server.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(MODBUS_LDFLAGS)

$(BIN_DIR)/mb_client: $(SRC_DIR)/modbus_client_main.cpp $(BIN_DIR)/modbus_client.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(MODBUS_LDFLAGS)

$(BIN_DIR)/sunspec_demo: $(SRC_DIR)/sunspec_decoder_demo.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

$(BIN_DIR)/simple_demo: $(SRC_DIR)/simple_server_demo.cpp $(BIN_DIR)/modbus_server.o
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(MODBUS_LDFLAGS)

clean:
	rm -rf $(BIN_DIR)/*
