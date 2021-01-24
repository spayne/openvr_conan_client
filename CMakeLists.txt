cmake_minimum_required(VERSION 2.8.12)
project(testvr_init)

# add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(test_vr_init test_vr_init.cpp)
target_link_libraries(test_vr_init ${CONAN_LIBS})
