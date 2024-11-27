
#include "predictor.h"
#include <gtest/gtest.h>
#include <string>

std::string getGreeting();

TEST(PredictorTest, BasicProbability)
{
  SwingData swing{100.0};         // 100 mph club head speed
  CourseConditions course{150.0}; // 150 yards

  double prob = HoleInOnePredictor::calculateProbability(swing, course);
  EXPECT_GT(prob, 0.0);
  EXPECT_LT(prob, 1.0);
}

TEST(GreetingTest, ReturnsHello)
{
  EXPECT_EQ(getGreeting(), "Hello, World!\n");
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}