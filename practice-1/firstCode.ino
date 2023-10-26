void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // pinMode dice que voy a usar uno de mis pines de mi tarjeta arduino
  //pinMode(13,) voy a usar el pin #13, para que lo voy a usar recibir o enviar informacion 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //Escritura digital tiene dos parametros que son el pin y high es que va estar prendido mi led
  //pausa entre las dos sentencias
  delay(1000); //Comando para esperar
  digitalWrite(13, LOW);
  delay(1000);
}
