int pinBlink = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinBlink, OUTPUT);
}

void loop() {
  digitalWrite(pinBlink, HIGH);
  delay(1000);
  digitalWrite(pinBlink, LOW);
  delay(1000);
}
