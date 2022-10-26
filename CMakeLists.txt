cmake_minimum_required(VERSION 2.8)

if (POLICY CMP0048)
    cmake_policy(SET CMP0048 NEW)
endif(POLICY CMP0048)

project(sample 
    LANGUAGES CXX 
    VERSION 0.0.1
)

add_subdirectory(src)
add_subdirectory(example)
