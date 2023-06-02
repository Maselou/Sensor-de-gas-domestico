#include <Servo.h>

const int pinoLed1 = 11; //PINO DIGITAL UTILIZADO PELO LED
const int pinoSensor = 3; //PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoLed2 = 10; //PINO DIGITAL UTILIZADO PELO LED

Servo myservo;




void setup() {
   myservo.attach(2);  // Diz que o objeto "myservo" está ligado ao pino 9
pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed1, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed1, LOW); //LED INICIA DESLIGADO
  pinMode(pinoLed2, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed2, HIGH); //LED INICIA DESLIGADO
  myservo.write(0); // Comando para mandar o servo para posição 0

}

void loop() {
  if(digitalRead(pinoSensor) == LOW)
     { 
      digitalWrite(pinoLed1, HIGH); //ACENDE O LED
  digitalWrite(pinoLed2, LOW);
  myservo.write(180);
  
  }else
  
  { //SENÃO, FAZ
  
    digitalWrite(pinoLed1, LOW); //APAGA O LED
  digitalWrite(pinoLed2, HIGH);
  myservo.write(0);
  
  
  }
    
     
}
