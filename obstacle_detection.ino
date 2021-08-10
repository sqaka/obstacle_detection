const int trigPin = 2;
const int echoPin = 4;
const int ledPin = 13;
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  Serial.println(String(distance));

  if(distance > 11){
    digitalWrite(ledPin, LOW);
    } else {
      digitalWrite(ledPin, HIGH);
      }
  delay(50);
}
