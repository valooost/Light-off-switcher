#include <Servo.h>

const int trigPin = 7;
const int echoPin = 6;
const int servoPin = 8;

//A Variable to change the Servo's "Angle", to adjust your Switch's location
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

  if (distance < 100) {
    Serial.println("Now I'll move the Servo");
    myServo.write(position);
    delay(500);
    
  }

  myServo.write(0); 
  delay(500);
}
