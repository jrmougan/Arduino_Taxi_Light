char message;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Encendemos Luz Cartel
  digitalWrite(6, HIGH);
  if (Serial.available()){
    message = Serial.read();
    if (message == '1'){
      digitalWrite(3, HIGH);
    } else {
      digitalWrite(3, LOW);
    }
  }

}
