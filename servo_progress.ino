#include <Servo.h>
Servo myservo;
Servo myservo2;
Servo myservo3;
Servo myservo4;
const int buttonPin = 2;
const int ledPin = 13;
const int buttonPin2 = 3;
const int ledPin2 = 12;
const int buttonPin3 = 4;
const int ledPin3 = 11;
int pos = 0;
bool tornOff = false;
bool tornOff2 = false;


void setup() {
  myservo.attach(9);
  myservo2.attach(10);
  myservo3.attach(7);
  myservo4.attach(8);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(ledPin3, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  if (digitalRead(buttonPin2) == HIGH) {
    myservo.write(90);
    digitalWrite(ledPin, HIGH);
  } else {
    myservo.write(0);
    digitalWrite(ledPin, LOW);
  }

  if (digitalRead(buttonPin) == HIGH) {
    tornOff = true;
    tornOff2 = true;
    myservo2.write(90);
    digitalWrite(ledPin2, HIGH);
  } else {
    myservo2.write(0);
    digitalWrite(ledPin2, LOW);
  }
  if (tornOff == false) {



    for (pos = 0; pos <= 180; pos += 1) {

      myservo3.write(pos);
      delay(5);
    }
    for (pos = 180; pos >= 0; pos -= 1) {
      myservo3.write(pos);
      delay(1);
    }
    if (tornOff2 == false) {



      for (pos = 0; pos <= 180; pos += 1) {

        myservo4.write(pos);
        delay(5);
      }
      for (pos = 180; pos >= 0; pos -= 1) {
        myservo4.write(pos);
        delay(1);
      }
    }
  }
  }
  // put your main code here, to run repeatedly:
