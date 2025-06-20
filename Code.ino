const int trigPin = 7;
const int echoPin = 6;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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

  delay(500);
  
  if (distance < 100) 
  {
    Serial.print("Now I would switch the light off  ");
  }
}
