include(FetchContent)

# Fetch and include Google Test
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add the target for your tests
add_executable(
        multiply_test
        test.cpp
)

# Link your test executable with Google Test and your 'multiply' library
target_link_libraries(multiply_test
        PRIVATE
        GTest::gtest
        GTest::gtest_main
        multiply
)

# Add a test
add_test(multiply_gtests multiply_test)

# Discover tests using Google Test
include(GoogleTest)
gtest_discover_tests(multiply_test)
