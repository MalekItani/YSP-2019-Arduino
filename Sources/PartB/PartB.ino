#include "Rover.h"
#include "Ultrasonic.h"

Rover myRover;
/* A rover can do  4 things:
 * - It can drive forward
 * - It can drive backward
 * - It can turn to the left
 * - It can turn to the right 
 * It can do these at different speeds too! You can make it do these by calling this functions:
 *  myRover.driveForward(speed);
 *  myRover.driveBackward(speed);
 *  myRover.turnLeft(speed);
 *  myRover.turnRight(speed);
 *  
 *  where "speed" is an integer from 0 to 255.  
 */



UltrasonicSensor mySensor;
/* 
 *  An ultrasonic sensor is used to read the distance.
 *  To get the distance of the nearest object to your rover, call: 
 *  mySensor.get_distance();
 *  
 *  This will return an integer representing the distance to the nearest object in cm.
 */


void setup() {
  myRover = Rover(4, 5, 3, 7, 8, 6); // This initializes the pins of the rover
  mySensor = UltrasonicSensor(11, 12); // This initializes the pins of the sensor
}

void loop() {
  // Code here will be executed over and over.
}
