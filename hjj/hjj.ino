//Arduino code
#include <SoftwareSerial.h>
SoftwareSerial s(5,6);
 int data;
void setup() {
s.begin(115200);
Serial.begin(115200);
data=50;
}
 
void loop() {

  data=data+1;
  s.write(data);

  delay(2000);
}
