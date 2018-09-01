project(TESTS)

add_executable(tests tester.cpp tester.h)

include_directories(${GTEST_INCLUDE_DIRS})
find_package(GTest REQUIRED)

target_link_libraries(tests my_lib_to_test ${GTEST_LIBRARIES} pthread)

add_test(NAME testsLOL COMMAND tests)