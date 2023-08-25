cmake_minimum_required(VERSION 3.26)
project(main)

set(CMAKE_CXX_STANDARD 17)

find_package(cpprestsdk REQUIRED)

add_executable(main
        src/main.cpp
        src/myapi.cpp
)

target_link_libraries(main PUBLIC cpprestsdk::cpprest)
target_link_libraries(main PUBLIC crypto ssl)
