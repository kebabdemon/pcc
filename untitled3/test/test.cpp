#include "math.h"
#include "complex.h" // Corrected include statement

TEST(multiply_tests, TestIntegerOne_One)
{
const auto expected = 1;
const auto actual = multiply(1, 1);
ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}