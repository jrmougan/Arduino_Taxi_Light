void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH){
    Serial.write('1');
  } else {
    Serial.write(' ');
  }

}
