// golf_types.h
#ifndef GOLF_TYPES_H
#define GOLF_TYPES_H

struct SwingData
{
  double clubHeadSpeed; // mph
  double launchAngle;   // degrees
  double ballSpeed;     // mph
  double spinRate;      // rpm
};

struct CourseConditions
{
  double windSpeed;     // mph
  double windDirection; // degrees (0-360)
  double humidity;      // percentage
  double temperature;   // fahrenheit
  double greenSlope;    // degrees
  double holeDistance;  // yards
};

#endif