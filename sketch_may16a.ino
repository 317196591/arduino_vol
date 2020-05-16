int brillo;
int estado1;
int estado2;
int estado3;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  brillo=analogRead(A0);
  if((brillo>0)&&(brillo<50)) digitalWrite(2,HIGH);
  if((brillo>50)&&(brillo<100)) digitalWrite(3,HIGH);
  if(brillo>100) digitalWrite(4,HIGH);
  estado1=digitalRead(2);
  estado2=digitalRead(3);
  estado3=digitalRead(4);
  if((estado1==1)&&(estado2==1)&&(estado3==1)){
    if(brillo>75){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
    }
  }
  if((estado1==1)&&(estado2==1)&&(estado3==0)){
     if((brillo>50)&&(brillo<75)){
       digitalWrite(2,HIGH);
       digitalWrite(3,LOW);
       digitalWrite(4,LOW);
     }
    }
   if((estado1==1)&&(estado2==0)&&(estado3==0)){
    if(brillo<50){
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
    }
   }
}
