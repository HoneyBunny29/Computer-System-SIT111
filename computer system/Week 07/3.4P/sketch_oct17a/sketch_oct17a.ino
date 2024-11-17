int sensorPin = A1; // The soil moisture sensor's analogue input pin

void setup() {
  Serial.begin(9600); //Launch the serial communication.

}

void loop() {
  int sensorValue = analogRead(sensorPin); //Obtain the sensor's value.
  int moistureLevel = map(sensorValue, 0, 1023, 100, 0); //Convert it to a range of 0-100.
  Serial.print("Moisture Level: ");
  Serial.print(moistureLevel);
  Serial.println("%");
  delay(2000); //Interval between readings

}
