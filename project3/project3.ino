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
 
 

}

void loop() {
digitalWrite(lp,HIGH);
digitalWrite(ln,LOW);

}
