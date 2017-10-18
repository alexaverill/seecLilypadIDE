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
if(A5==1)
{
digitalWrite(6,HIGH);
}
else{
digitalWrite(6,LOW);
}
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
if(analogRead(A5)==1)
{
digitalWrite(6,HIGH);
}
else{
digitalWrite(6,LOW);
}
}
void setup(){
pinMode(A1,INPUT);
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(A1,HIGH);
delay(1000);
analogWrite(5,76);
analogWrite(5,255);
analogWrite(5,2);
analogWrite(5,255);
if(analogRead(A5)==1)
{
digitalWrite(6,HIGH);
}
else{
digitalWrite(6,LOW);
}
}
void setup(){
}
void loop(){
while(X<10)
{
}
}
void setup(){
}
void loop(){
while(1==1)
{
}
}
float X=0;
void setup(){
}
void loop(){
while(1==1)
{
}
}
float X=0;
float X=X+1;
void setup(){
}
void loop(){
while(1==1)
{
}
}
float X=0;
void setup(){
}
void loop(){
while(1==1)
{
}
}
void setup(){
pinMode(5,OUTPUT);
}
void loop(){
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==){
digitalWrite(5,HIGH);
}
if(analogRead(A5)==){
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==40)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==37)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==37.84)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==38)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==39)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==10)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==10)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==1)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==1)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==1)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if(analogRead(A1)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
void setup(){
pinMode(A2,OUTPUT);
}
void loop(){
digitalWrite(A2,HIGH);
analogWrite(A2,127);
delay(1000);
if((((analogRead(A1)*.00488)-.5)*100)==100)
{
digitalWrite(5,HIGH);
}
if(analogRead(A5)==0)
{
}
}
