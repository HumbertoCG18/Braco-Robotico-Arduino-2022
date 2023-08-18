#include <Servo.h>
 
Servo meuServo;
Servo meuServo2;
 
int pinoPot = A0;
int pinoPot2 = A1;
int valorPot;
int valorPot2; 

void setup(){
  meuServo.attach(9);
  meuServo2.attach(11);
}
 
void loop(){
  valorPot = analogRead(pinoPot);
  valorPot = map(valorPot, 0, 1023, 0, 180); // mapeia os valores do potenciometro (entre 0 e 1023) para os valores do servo (entre 0 e 180)
  meuServo.write(valorPot); // manda o valor para o servo

  valorPot2 = analogRead(pinoPot2);
  valorPot2 = map(valorPot2, 0, 1000, 0, 180); // mapeia os valores do potenciometro (entre 0 e 1023) para os valores do servo (entre 0 e 180)
  meuServo2.write(valorPot2); // manda o valor para o servo
  delay(15);
}
