#include <ESP32Servo.h> //ESP32Servo by Kevin Harrington

const int motorPin = 3; //3:ConnectorA 4:ConnectorB

Servo myservo;

void setup() {
  myservo.attach(motorPin);
}

void loop() {
  // 0-30 right
  for(int angle = 0; angle <= 30; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 30-60 right
  for(int angle = 30; angle <= 60; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 60-90 right
  for(int angle = 60; angle <= 90; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 90-120 right
  for(int angle = 90; angle <= 120; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 120-150 right
  for(int angle = 120; angle <= 150; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 150-180 right
  for(int angle = 150; angle <= 180; angle++) {                        
    myservo.write(angle);
    delay(500);
  }
  // 180-0  left 
  for(int angle = 180; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(500);      
  }
  // 180-150  left 
  for(int angle = 180; angle >= 150; angle--) {                 
    myservo.write(angle);  
    delay(500);      
  }
  // 150-120  left 
  for(int angle = 150; angle >= 120; angle--) {                 
    myservo.write(angle);  
    delay(500);      
  } 
  // 120-90  left 
  for(int angle = 120; angle >= 90; angle--) {                 
    myservo.write(angle);  
    delay(500);      
  }
  // 90-60  left 
  for(int angle = 90; angle >= 60; angle--) {                 
    myservo.write(angle);  
    delay(500); 
  }
  // 60-30  left 
  for(int angle = 60; angle >= 30; angle--) {                 
    myservo.write(angle);  
    delay(500);  
  }
  // 30-0  left 
  for(int angle = 30; angle >= 0; angle--) {                 
    myservo.write(angle);  
    delay(500);  
  }    
}
