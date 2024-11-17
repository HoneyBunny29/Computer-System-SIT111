 #include "DHT.h"
 #define DHTPIN 2 //The DHT22 digital pin
 #define DHTTYPE DHT22 //DHT 22 (AM2302)
 #define MOISTURE_PIN A0 //The soli moisture sensor's analogue pin
 #define GREEN_LED 9 //LED Green Pin
 #define RED_LED 10 //LED Red Pin

 DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int moistureLevel = analogRead(MOISTURE_PIN);

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print("%, Temp: ");
Serial.print(temperature);
Serial.print(" °C, Moisture: ");
Serial.print(moistureLevel);
Serial.print();

digitalwrite(GREEN_LED, HIGH); //Keep the green led going.

//Specify thresholds to activate the red LED.
if (temperature >30 && humidity <40 && moisturelevel <300) {
  digitalWrite(RED_LED, HIGH); //RED LED Turn on
} else {
  digitalWrite(RED_LED, LOW); // RED LED Turn off
}

delay(2000); //Manage your time between reading

}
