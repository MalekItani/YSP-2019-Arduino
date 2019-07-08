// TODO: Define the what pins will function as trigPin and echoPin.

int get_distance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int duration = pulseIn(echoPin, HIGH);
  int distance= duration*0.034/2;
  return distance; 
}

void setup() {
  // TODO: Initialize the pins. Are they inputs or outputs?
  
  Serial.begin(9600); // This initializes the serial monitor.
}

void loop() {
  // TODO: Read the distance measure by the sensor and print it.

}
