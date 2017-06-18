int redLED = 9;
int yellowLED = 10;
int redOnTime = 900;
int redOffTime = 100;
int yellowOnTime = 900;
int yellowOffTime = 100;
int runRedBlink = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j = 1; j < runRedBlink; j=j+1){
    String value = "value is :";
    String printAll = value + j;
    digitalWrite(redLED, HIGH);
    delay(redOnTime);
    digitalWrite(redLED, LOW);
    delay(redOffTime);
    Serial.println(printAll);
    }
  
  digitalWrite(yellowLED, HIGH);
  delay(yellowOnTime);
  digitalWrite(yellowLED, LOW);
  delay(yellowOffTime);
}
