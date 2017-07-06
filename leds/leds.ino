volatile boolean ledOn = false;

//Serial leds
int serailLed1 = 13;
int serailLed2 = 12;
int serailLed3 = 11;
//Interrupt
int interruptLed1 = 2;
int interruptLed2 = 10;

void setup() {
  pinMode(serailLed1, OUTPUT);
  pinMode(serailLed2, OUTPUT);
  pinMode(serailLed3, OUTPUT);

  pinMode(interruptLed1, INPUT);
  pinMode(interruptLed2, OUTPUT);

  //Event Handlers
  attachInterrupt(0, onInterruptPressed, RISING); // 0 stands for  pin 2, supposedly...
  //attachInterrupt(0, onInterruptPressed, FALLING); // TODO do more research
}

void onInterruptPressed() {
  if (ledOn) {
    ledOn = false;
    digitalWrite(interruptLed2, LOW);
  } else {
    ledOn = true;
    digitalWrite(interruptLed2, HIGH);
  }
}

void loop() {
  digitalWrite(serailLed1, HIGH);    // turn on LED1
  delay(200);                  // wait for 200ms
  digitalWrite(serailLed2, HIGH);    // turn on LED2
  delay(200);                  // wait for 200ms
  digitalWrite(serailLed3, HIGH);    // turn on LED3
  delay(200);                  // wait for 200ms
  digitalWrite(serailLed1, LOW);     // turn off LED1
  delay(300);                  // wait for 300ms
  digitalWrite(serailLed2, LOW);     // turn off LED2
  delay(300);                  // wait for 300ms
  digitalWrite(serailLed3, LOW);     // turn off LED3
}
