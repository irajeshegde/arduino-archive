#include<SoftwareSerial.h>
//char val=0;
SoftwareSerial mySerial(9,10);
void setup() {
  mySerial.begin(9600);
Serial.begin(9600);


}

void loop() {
if(mySerial.available()>0)

//{
// val=Serial.read();
// Serial.print(val);}
//}
{Serial.write(mySerial.read());
  }
}

