
project (app)

set (PROJECT_ROOT_DIR
    ../../
)
include_directories(
    ${PROJECT_ROOT_DIR}/include
)

add_executable(app main.cpp)

target_link_libraries(app
    PRIVATE
    test
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)