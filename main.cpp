// main.cpp
#include "predictor.h"
#include <iostream>
#include <iomanip>

std::string getGreeting()
{
  return "Hello, World!\n";
}

#ifndef TESTING
int main()
{
  SwingData swing;
  CourseConditions course;

  std::cout << "Enter swing data:\n";
  std::cout << "Club head speed (mph): ";
  std::cin >> swing.clubHeadSpeed;

  std::cout << "Enter course conditions:\n";
  std::cout << "Hole distance (yards): ";
  std::cin >> course.holeDistance;

  double probability = HoleInOnePredictor::calculateProbability(swing, course);
  std::cout << "Hole-in-one probability: " << std::fixed << std::setprecision(6)
            << probability * 100 << "%\n";

  return 0;
}
#endif