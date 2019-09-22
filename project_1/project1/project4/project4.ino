#define led 13
#define sen 3
#define lp 4
#define ln 7
#define el 12
#define rp 12
#define rn 8
#define er 6
void setup() {
 pinMode(lp,OUTPUT);
 pinMode(ln,OUTPUT); 
 pinMode(el,OUTPUT); 
 pinMode(rp,OUTPUT);
 pinMode(rn,OUTPUT);
 pinMode(er,OUTPUT) ;
 digitalWrite(er,HIGH);
 digitalWrite(el,HIGH); 
 pinMode(led,OUTPUT);
 pinMode(sen,INPUT);

}

void loop() {
   digitalWrite  (led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   digitalWrite(er,HIGH);
  digitalWrite(el,HIGH);
  digitalWrite(rp,HIGH);
  digitalWrite(rn,LOW);
  digitalWrite(lp,HIGH);
  digitalWrite(ln,LOW);
  
  delay(2500);
  int a=digitalRead(sen);
  if(a==1)
  //turning right
 { while(1)
  digitalWrite(rn,HIGH);
  digitalWrite(ln,HIGH);
  digitalWrite(lp,LOW);
  digitalWrite(rp,LOW);
  
 }
}

 
