#include "predictor.h"
#include <cmath>
#include <algorithm> // Add this for std::min/max

double HoleInOnePredictor::calculateProbability(const SwingData &swing, const CourseConditions &course)
{
  // Base probability increases for very short distances
  double BASE_PROBABILITY;

  if (course.holeDistance <= 10.0)
  {
    // Much higher base probability for chip shots
    BASE_PROBABILITY = 1.0 / 100.0; // 1% base for very short shots
  }
  else
  {
    BASE_PROBABILITY = 1.0 / 12500.0; // Regular base probability
  }

  // Adjust for club head speed
  double speedFactor = std::pow(swing.clubHeadSpeed / 100.0, 2);

  // Enhanced distance factor calculation
  double optimalDistance = 150.0;
  double distanceFactor;

  if (course.holeDistance <= 10.0)
  {
    // Dramatic increase for very short distances
    distanceFactor = std::exp((20.0 - course.holeDistance) / 10.0);
  }
  else if (course.holeDistance <= optimalDistance)
  {
    // Progressive increase as distance gets shorter
    distanceFactor = std::exp((optimalDistance - course.holeDistance) / 30.0);
  }
  else
  {
    // Exponential decrease for longer distances
    distanceFactor = std::exp(-(course.holeDistance - optimalDistance) / 100.0);
  }

  double finalProb = BASE_PROBABILITY * speedFactor * distanceFactor;

  // Cap maximum probability at 25% for very short distances
  return std::min(std::max(finalProb, 0.000001), 0.25);
}

bool HoleInOnePredictor::validateInputs(const SwingData &swing, const CourseConditions &course)
{
  return swing.clubHeadSpeed > 0 &&
         swing.clubHeadSpeed < 200 &&
         course.holeDistance > 0 &&
         course.holeDistance < 300;
}