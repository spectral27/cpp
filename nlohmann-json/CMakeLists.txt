cmake_minimum_required(VERSION 3.26)
project(nlohmann_json)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(nlohmann_json
        src/main.cpp
        src/processor.cpp
        src/processor.h
        src/processor_mapper.cpp
        src/processor_mapper.h
)
