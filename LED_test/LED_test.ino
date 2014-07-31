void setup() {
  analogWrite(9, 250);
  analogWrite(10, 250);
  analogWrite(11, 250);
}

void loop() {
  delay(1000);
  analogWrite(9, 170);
  analogWrite(10, 170);
  analogWrite(11, 170);
}
