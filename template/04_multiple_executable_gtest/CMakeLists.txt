add_executable(${PROJECT_NAME}_template_04_multiple_executable_gtest main.cpp mymath.cpp)

add_executable(
        ${PROJECT_NAME}_template_04_multiple_executable_gtest_test
        main_test.cpp
        mymath.cpp
)
target_link_libraries(
        ${PROJECT_NAME}_template_04_multiple_executable_gtest_test
        PRIVATE
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_template_04_multiple_executable_gtest_test)
