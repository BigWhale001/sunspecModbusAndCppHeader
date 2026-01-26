cmake_minimum_required(VERSION 3.10)
project(sunspec_modbus CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable fully static compilation
set(CMAKE_EXE_LINKER_FLAGS "-static")

# Export compile commands for IDE support (replaces compile_flags.txt)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}) # For sunspec_hpp references
include_directories(${CMAKE_SOURCE_DIR}/ThirdParty/x86_64/libmodbus/include)

# Library paths
# link_directories(${CMAKE_SOURCE_DIR}/ThirdParty/x86_64/libmodbus/lib)

# Static libmodbus
set(LIBMODBUS_STATIC ${CMAKE_SOURCE_DIR}/ThirdParty/x86_64/libmodbus/lib/libmodbus.a)

# Find threads
find_package(Threads REQUIRED)

# Executables

# Modbus Server
add_executable(mb_server 
    src/modbus_server_main.cpp 
    src/modbus_server.cpp
)
target_link_libraries(mb_server ${LIBMODBUS_STATIC} Threads::Threads)

# Modbus Client
add_executable(mb_client 
    src/modbus_client_main.cpp 
    src/modbus_client.cpp
)
target_link_libraries(mb_client ${LIBMODBUS_STATIC} Threads::Threads)

# SunSpec Demo
add_executable(sunspec_demo 
    src/sunspec_decoder_demo.cpp
)
target_link_libraries(sunspec_demo Threads::Threads)
