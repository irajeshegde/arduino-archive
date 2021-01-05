int a = 7;
int b = 8;
int c = 9;
int d = 10;


#define tp 3
#define ep 2
void setup() {

  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(tp,OUTPUT);
  pinMode(ep, INPUT);
 


}

void loop() {
  int time;
  float dist;
  digitalWrite(tp,HIGH);
  delayMicroseconds(1000);
  digitalWrite(tp,LOW);
  time = pulseIn(ep,HIGH);
  dist = (time/2)/29.1;
  
  Serial.print(dist);
  Serial.println("m");
  delay(500);
front();
  if (dist <= 7.00) 
  {
    back();
    delay(1500);
    right();
    delay(500);
    front();
 
  }


}
void front()
{
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
}
void back()
{
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
}
void left()
{
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
}
void right()
{
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
}
