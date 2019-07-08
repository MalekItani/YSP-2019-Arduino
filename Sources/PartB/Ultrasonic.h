#ifndef Ultrasonic_h_
#define Ultrasonic_h_

class UltrasonicSensor{
  private:
  int trigPin, echoPin;
  public:
  int get_distance();
  UltrasonicSensor(int trig, int echo);
  UltrasonicSensor();
};

#endif
