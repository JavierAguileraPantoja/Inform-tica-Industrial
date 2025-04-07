int CN1,CN2,CN3;
char CH1,CH2,CH3;
void setup() {
  // initialize serial comunications at 9600 bps:
  Serial.begin(9600);
}
void loop() {
  // red the analog in value:
  CN1=analogRead(A0)/5;
  CN2=analogRead(A1)/5;
  //CN3=analogRead(A2)/5;
  //Serial.print(CN1);
  //Serial.print(' ');
  //Serial.println(CN2);
  //Serial.print(' ');
  //Serial.print(CN3);
  CH1=CN1;
  CH2=CN2;
  //CH3=CN3;
  Serial.print(CH1);
  Serial.println(CH2);
  //Serial.println(CH3);
  delay(2);
}
