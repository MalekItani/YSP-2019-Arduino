#ifndef Rover_h_
#define Rover_h_

#include "Motor.h"


class Rover{
  public:
    Rover(int, int, int, int, int, int);
    Rover();
    void driveForward(int);
    void driveBackward(int);
    void turnLeft(int);
    void turnRight(int);
  private:
    Motor rightMotor, leftMotor;
};



#endif
