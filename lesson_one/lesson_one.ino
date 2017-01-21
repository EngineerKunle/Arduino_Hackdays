int blueLED = 9;
int onTime = 500;
int offTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blueLED, HIGH);
  delay(onTime);
  digitalWrite(blueLED, LOW);
  delay(offTime);
}