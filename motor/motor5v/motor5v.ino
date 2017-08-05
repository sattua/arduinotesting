int motorPin = 9, i;
void setup() {
 pinMode(motorPin, OUTPUT);
 analogWrite(motorPin,0);
}
void loop() {
  for(i=60; i<=158; i++){
    analogWrite(motorPin, 200);
    delay(5);
  }
}
