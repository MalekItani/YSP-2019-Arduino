#include "Motor.h"
#include <Arduino.h>


Motor::Motor(int _pinF, int _pinR, int _pinP){
  this->pinF = _pinF;
  this->pinR = _pinR;
  this->pinP = _pinP;
}

Motor::Motor(){}

void Motor::forward(int speed){
  digitalWrite(this->pinF, HIGH);
  digitalWrite(this->pinR, LOW);
  analogWrite(this->pinP, speed);
}

void Motor::reverse(int speed){
  digitalWrite(this->pinF, LOW);
  digitalWrite(this->pinR, HIGH);
  analogWrite(this->pinP, speed);
}
