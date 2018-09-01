cmake_minimum_required(VERSION 3.7)

project(TRYTESTS)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)


find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})


