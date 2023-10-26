
void setup() {
  pinMode(8,OUTPUT); //Estoy especificando que pin voy a usar y para que;entrada y salida

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); //le pasamos el pin y si lo queremos prender y apagar
  delay(50);
  digitalWrite(8, LOW);
  delay(50);

  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);

  digitalWrite(8, HIGH); 
  delay(50);
  digitalWrite(8, LOW);
  delay(50);

  digitalWrite(8, HIGH); //le pasamos el pin y si lo queremos prender y apagar
  delay(500);
  digitalWrite(8, LOW);
  delay(500);

  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);

  digitalWrite(8, HIGH); 
  delay(500);
  digitalWrite(8, LOW);
  delay(500);

  delay(2000);
}
