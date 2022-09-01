#include <gtest/gtest.h>

#include "../include/point.hpp"

class TestPoint : public ::testing::Test {
protected:
  void SetUp() override {}

public:
  Point p0{};
  Point p1{1, 3}, p2{2, 4};
};
TEST_F(TestPoint, initialize_no_args) {
  EXPECT_EQ(p0.x, 0.0);
  EXPECT_EQ(p0.y, 0.0);
}

TEST_F(TestPoint, initialize) {
  EXPECT_EQ(p1.x, 1);
  EXPECT_EQ(p1.y, 3);
}
