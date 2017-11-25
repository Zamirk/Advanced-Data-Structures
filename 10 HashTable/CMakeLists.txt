cmake_minimum_required(VERSION 3.3)
project(untitled21)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BucketNode.cpp BucketNode.h HashTable.cpp HashTable.h)
add_executable(untitled21 ${SOURCE_FILES})