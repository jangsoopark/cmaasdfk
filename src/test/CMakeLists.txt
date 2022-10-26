
project (test)

set (PROJECT_ROOT_DIR
    ../../
)
add_definitions(
    -DTEST_DLL_EXPORT
)

add_library(
    ${PROJECT_NAME}
    SHARED
    ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp
    ${PROJECT_ROOT_DIR}/include/${PROJECT_NAME}/test.hpp
    ${PROJECT_ROOT_DIR}/include/${PROJECT_NAME}/export.hpp
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${PROJECT_ROOT_DIR}/include
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)