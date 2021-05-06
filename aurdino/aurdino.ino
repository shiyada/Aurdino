
#include <SoftwareSerial.h>
SoftwareSerial s(D6,D5);
int data;
void setup() {
s.begin(115200);
Serial.begin(115200);
}
 
void loop() {
  if (s.available())
  {
    data=s.read();
    Serial.println(data);
  }
 delay(1000);
 
}
