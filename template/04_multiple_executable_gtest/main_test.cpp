#include "mymath.h"
#include <gtest/gtest.h>

namespace {

TEST(MyMathTest, Sum_1_2) {
  int expected = 3;
  int actual = mymath::sum(1, 2);
  ASSERT_EQ(expected, actual);
}

TEST(MyMathTest, Sum_3_4_const) {
  const int expected = 7;
  const int actual = mymath::sum(3, 4);
  ASSERT_EQ(expected, actual);
}

TEST(MyMathTest, Sum_5_6_auto) {
  const auto expected = 11;
  const auto actual = mymath::sum(5, 6);
  ASSERT_EQ(expected, actual);
}

} // namespace