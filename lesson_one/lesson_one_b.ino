int blueLED = 8;
int yellowLED = 9;
int onTime = 900;
int offTime = 900;
void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blueLED, HIGH);
  digitalWrite(yellowLED, LOW);
  delay(onTime);
  digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(offTime);
}