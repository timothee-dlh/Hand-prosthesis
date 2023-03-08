#include <Servo.h>

Servo index; Servo pouce; Servo majeur; Servo annulaire; Servo auriculaire;
const int capteurs[5] = {A0, A1, A2, A3, A4};
int cap_val[]={};

void setup(){
  for (int i=0; i<=5; i++){
    pinMode(i, INPUT);
  }
}

void loop(){
  for(int i=0; i<=5; i++){
    cap_val[i] = read_value(i);
    delay(5);
  }
}

int read_value(int x){
  int val = analogRead(capteurs[x]);
  return val;
}
