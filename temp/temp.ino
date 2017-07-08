
int outputPins[] = {5,6,A2,A3,A4,3,7,12}; int inputPins[]  = { A5,A6,A1,2};
void setup(){
pinMode(5,OUTPUT);
for(int x=0;x<8;x++){pinMode(outputPins[x],OUTPUT);}for(int x = 0; x<4; x++){pinMode(inputPins[x],INPUT);  } Serial.begin(9600);
}
void loop(){
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
}
