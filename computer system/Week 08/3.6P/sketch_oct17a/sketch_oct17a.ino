#include <Servo.h>
Servo myservo; 
#define  servoPin 9


void setup() {
  myservo.attach(servoPin); 
}

void loop() {
  myservo.write(45);
  delay(1000); 

  //Test 1
  myservo.write(90); 
  delay(1000);
  myservo.write(135);
  delay(1000); 
  myservo.write(180); 
  delay(1000); 
  myservo.write(0); 
  delay(1000);

  //Test 2
  for (int i = 0; i <= 180; i++)
  {
    myservo.write(i); 
    delay(50); 
  }

  for (int i = 180; i >= 0; i--)
  {
    myservo.write(i); 
    delay(50); 
  }

  myservo.write(0); 
  delay(100); 
}
