#ifndef PREDICTOR_H
#define PREDICTOR_H

#include "golf_types.h"

class HoleInOnePredictor
{
public:
  static double calculateProbability(const SwingData &swing, const CourseConditions &course);
  static bool validateInputs(const SwingData &swing, const CourseConditions &course);

private:
  static double calculateTrajectory(const SwingData &swing, const CourseConditions &course);
};

#endif