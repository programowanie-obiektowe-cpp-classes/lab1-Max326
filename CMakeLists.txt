cmake_minimum_required(VERSION 3.8)

project(lab1_zal)

add_executable(zal test.cpp)
target_include_directories(zal PUBLIC include)
set_target_properties(zal PROPERTIES
    CXX_STANDARD 17
)
