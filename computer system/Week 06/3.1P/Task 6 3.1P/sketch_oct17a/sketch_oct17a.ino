const int ledPin = 13; //The led's pin

void setup() {
  pinMode(ledPin, OUTPUT); //Pin 13 should be set as the output.
}

void loop() {
  digitalWrite(ledPin, HIGH); //LED turn on
  delay(1000); // Wait for one secound
  digitalWrite(ledPin, LOW); //LED Turn off
  delay(1000); // Wait for one secound

}
