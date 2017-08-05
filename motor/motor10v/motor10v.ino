int MOTOR = 3;
int i;

void setup() {
  pinMode(MOTOR, OUTPUT);
  Serial.begin(9600);
  analogWrite(MOTOR,0);
}

void loop() {
  for(i=60; i<=158; i++){
    analogWrite(MOTOR, i);
    Serial.println(i);
    delay(500);
  }
  for(i=158; i>=60; i--){
    analogWrite(MOTOR, i);
    Serial.println(i);
    delay(500);
  }
}
