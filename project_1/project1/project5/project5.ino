#define led 13
#define lp 4
#define ln 7
#define el 12
#define rp 12
#define rn 8
#define er 6
#define sen 3
void setup()
{
pinMode(lp,OUTPUT);
pinMode(ln,OUTPUT);
pinMode(rp,OUTPUT);
pinMode(rn,OUTPUT);
pinMode(er,OUTPUT);
pinMode(el,OUTPUT);
pinMode(sen,INPUT);
digitalWrite(er,HIGH);
digitalWrite(el,HIGH);
}

void loop()
{
  digitalWrite(lp,HIGH);
  digitalWrite(ln,LOW);
  analogWrite(el,175);
}
