#include <SoftwareSerial.h>
SoftwareSerial s(D5,D6);
int data;
void setup() {
s.begin(9600);
Serial.begin(9600);
}
 
void loop() {
  s.write("s");
  
  if (s.available()>0)
  {
    data=s.read();
    Serial.println(data);
  }
 delay(1000);
 
}
