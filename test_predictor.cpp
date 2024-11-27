// test_predictor.cpp
#define TESTING
#include <gtest/gtest.h>
#include "predictor.h"

TEST(PredictorTest, ValidateInputs)
{
  SwingData swing{100, 15, 150, 2500};
  CourseConditions course{5, 90, 70, 75, 1, 150};

  EXPECT_TRUE(HoleInOnePredictor::validateInputs(swing, course));
}

TEST(PredictorTest, InvalidInputs)
{
  SwingData swing{0, 15, 150, 2500};
  CourseConditions course{5, 90, 70, 75, 1, 150};

  EXPECT_FALSE(HoleInOnePredictor::validateInputs(swing, course));
}

TEST(PredictorTest, ProbabilityRange)
{
  SwingData swing{100, 15, 150, 2500};
  CourseConditions course{5, 90, 70, 75, 1, 150};

  double prob = HoleInOnePredictor::calculateProbability(swing, course);
  EXPECT_GE(prob, 0.0);
  EXPECT_LE(prob, 1.0);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}