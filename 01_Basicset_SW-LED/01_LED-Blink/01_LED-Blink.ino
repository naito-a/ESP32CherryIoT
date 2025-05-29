void setup() {
    pinMode(13,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);

    pinMode(13,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT); 
}

void loop() {
  digitalWrite(12, HIGH); //ON 青
  digitalWrite(2, HIGH); //ON 歩行者青
  delay(2000); //2秒
  digitalWrite(2, LOW); //OFF 歩行者点滅
  delay(500); //2秒
  digitalWrite(2, HIGH); //ON
  delay(500); //2秒
  digitalWrite(2, LOW); //OFF
  delay(500); //2秒
  digitalWrite(2, HIGH); //ON
  delay(500); //2秒
  digitalWrite(2, LOW); //OFF
  digitalWrite(3, HIGH); //ON　歩行者赤
  delay(700); //
  digitalWrite(12, LOW); //OFF
  digitalWrite(10, HIGH); //ON　黄
  delay(2000); //2秒
  digitalWrite(10, LOW); //OFF
  digitalWrite(8, HIGH); //ON　赤
  delay(5000); //５秒
  digitalWrite(8, LOW); //OFF
  digitalWrite(3, LOW); //OFF




 
}

