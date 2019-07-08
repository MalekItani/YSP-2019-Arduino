#include "Ultrasonic.h"
#include <Arduino.h>


UltrasonicSensor::UltrasonicSensor(){}

UltrasonicSensor::UltrasonicSensor(int trig, int echo){
  this->trigPin = trig;
  this->echoPin = echo;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

int UltrasonicSensor::get_distance(){
    int pulseDuration, distance;
    int tries = 0;
    digitalWrite(this->trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(this->trigPin, LOW);
    do
    {
        pulseDuration = pulseIn( this->echoPin, HIGH, 75000);
        distance = 0.034 * pulseDuration / 2;
        if ( pulseDuration == 0 ) {
            delay(50);
            pinMode(this->echoPin, OUTPUT);
            digitalWrite(this->echoPin, LOW);
            delay(50);
            pinMode(this->echoPin, INPUT);
        }
    } while (pulseDuration == 0 && ++tries < 2);
    if(distance ==0)
    distance = 999;
    return distance;
}
