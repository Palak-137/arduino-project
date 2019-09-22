#define led 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(A0,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(A0);
  Serial.println(a);

}
