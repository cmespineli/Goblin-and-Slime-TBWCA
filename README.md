# Goblin-and-Slime-TBWCA
Final Project for Media and Technology Class at UT Austin SPR2023. Interactive story based of the Boy Who Cried Wolf.

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
const int buttonPin = 2;
const int buttonPin2 = 6;
const int buttonPin3 = 8;

void setup() {
  myservo.attach(4);
  myservo2.attach(10);
  myservo3.attach(12);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  if (digitalRead(buttonPin)==HIGH){
    myservo.write(180);
  }else{
    myservo.write(45);
  }
  
  if (digitalRead(buttonPin2)==HIGH){
    myservo3.write(180);
  }else{
    myservo3.write(45);
  }
  
  if (digitalRead(buttonPin3)==HIGH){
    myservo2.write(45);
  }else{
    myservo2.write(0);
  }
}
