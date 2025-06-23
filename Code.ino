#include <Servo.h>

#define C4  262

const int trigPin = 7;
const int echoPin = 6;
const int servoPin = 8;

int speakPin = 9;

int position = 80;

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(servoPin);
  myServo.write(90);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.0343 / 2;
  
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 200) {
    Serial.println("Now I'll move the Servo");
    tone(speakPin, 262);
    //262 ^= C4
    myServo.write(position);
    delay(500);
    myServo.write(0); 
    noTone(speakPin);
  }

  myServo.write(0); 
  delay(500);
}
