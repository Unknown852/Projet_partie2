int pinBlink = 7;

void setup() {
  // initialize digital pin 7 as an output.
  pinMode(pinBlink, OUTPUT);
}

void loop() {
  digitalWrite(pinBlink, HIGH);
  delay(500);
  digitalWrite(pinBlink, LOW);
  delay(500);
}
