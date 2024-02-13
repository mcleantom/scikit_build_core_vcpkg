#include <CoreLib/core_lib_math.h>
#include <gtest/gtest.h>

TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(4, add(2, 2));
    EXPECT_EQ(5, add(2, 3));
    EXPECT_EQ(6, add(3, 3));
}


TEST(SubtractTest, PositiveNumbers)
{
    EXPECT_EQ(0, subtract(2, 2));
    EXPECT_EQ(-1, subtract(2, 3));
    EXPECT_EQ(0, subtract(3, 3));
}
