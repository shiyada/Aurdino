#include <SoftwareSerial.h>
SoftwareSerial s(5,6);
void setup() {
  s.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int data=50;
if(s.available()>0)
{
 s.write(data);
}
delay(1000);
  // put your main code here, to run repeatedly:

}
