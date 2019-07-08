#include "Rover.h"
#include "Motor.h"

#include <Arduino.h>

Rover::Rover(int rfp, int rrp, int rpp, int lfp, int lrp, int lpp){
  pinMode(rfp, OUTPUT);
  pinMode(rrp, OUTPUT);
  pinMode(rpp, OUTPUT);
  pinMode(lfp, OUTPUT);
  pinMode(lrp, OUTPUT);
  pinMode(lpp, OUTPUT);
  this->rightMotor = Motor(rfp, rrp, rpp);
  this->leftMotor = Motor(lfp, lrp, lpp);
}

Rover::Rover(){}

void Rover::driveForward(int speed){
  (this->rightMotor).forward(speed);
  (this->leftMotor).forward(speed);
}

void Rover::driveBackward(int speed){
  (this->rightMotor).reverse(speed);
  (this->leftMotor).reverse(speed);
}

void Rover::turnLeft(int speed){
  (this->rightMotor).reverse(speed);
  (this->leftMotor).forward(speed);
}

void Rover::turnRight(int speed){
  (this->rightMotor).forward(speed);
  (this->leftMotor).reverse(speed);
}
