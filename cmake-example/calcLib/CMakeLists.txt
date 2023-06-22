add_library(calcLib src/Calc.cpp)

target_include_directories(calcLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
