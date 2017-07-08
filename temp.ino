int outputPins[] = {5,6,A2,A3,A4,3,7,12}; int inputPins[]  = { A5,A6,A1,2};
void setup(){
pinMode(A2,INPUT);
for(int x=0;x<8;x++){pinMode(outputPins[x],OUTPUT);}for(int x = 0; x<4; x++){pinMode(inputPins[x],INPUT);  } Serial.begin(9600);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
analogWrite(LED1,255.0);
analogWrite(LED1,2.55);
analogWrite(LED1,25500.0);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
analogWrite(LED1,255.0);
analogWrite(LED1,2.55);
analogWrite(LED1,25500.0);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
analogWrite(LED1,100);
analogWrite(LED1,2.55);
analogWrite(LED1,100);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
analogWrite(LED1,255.0);
analogWrite(LED1,2.55);
analogWrite(LED1,25500.0);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76.5);
analogWrite(LED1,255.0);
analogWrite(LED1,2.55);
analogWrite(LED1,255);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(LED1,76);
analogWrite(LED1,255);
analogWrite(LED1,2);
analogWrite(LED1,255);
}
void setup(){
pinMode(A2,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
delay(1000);
analogWrite(5,76);
analogWrite(5,255);
analogWrite(5,2);
analogWrite(5,255);
}
