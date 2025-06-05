const int motorPin = 3; //3:ConnectorA 4:ConnectorB
const int swPin = 4; //3:ConnectorA 4:ConnectorB 10:Builtin

void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);;
  pinMode(motorPin, OUTPUT);
}

void loop() {
  if (digitalRead(swPin) == HIGH) {
    Serial.println("Pushed"); 
    digitalWrite(motorPin, HIGH);
    delay(200);
  } else {
    Serial.println("Not Pushed");
    digitalWrite(motorPin, LOW);
    delay(200);
  }
}