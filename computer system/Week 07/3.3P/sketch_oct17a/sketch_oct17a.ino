//Describe the button and LED pins.
int led1 = 8;
int led2 = 12;
int button1 = 2;
int button2 = 4;

void setup() {
  // Set the LED pins to outputs.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  // Set the inputs for the button pins.
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

}

void loop() {
  // Check each button's condition 
  int buttonState1 = digitalRead(button1); 
  int buttonState2 = digitalRead(button2);

  // Depending on the button status, turn the matching LED on or off. 
  if (buttonState1 == HIGH) { 
  digitalWrite(led1, HIGH); 
    
  // Turn on LED 1 
  } else { 
  digitalWrite(led1, LOW); 
  // Turn off LED 1 
  }
  
  if (buttonState2 == HIGH) {
  digitalWrite(led2, HIGH); 
  // Turn on LED 2 
  } else { 
  digitalWrite(led2, LOW); 
  // Turn off LED 2 
  }
}

