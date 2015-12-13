cmake_minimum_required(VERSION 3.3)
project(cauth)

include_directories(/opt/local/include)
link_directories(/opt/local/lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/hash/hash.h src/hash/md5hash.cpp)
add_executable(cauth ${SOURCE_FILES})
target_link_libraries(cauth crypto)