#include<SoftwareSerial.h> //Included SoftwareSerial Library
//Started SoftwareSerial at RX and TX pin of ESP8266/NodeMCU
SoftwareSerial s(3,1);
int k;
void setup() {
  //Serial S Begin at 9600 Baud
  s.begin(9600);
}

void loop() {
    
  k=10;
  k=k+1;
  //Write '123' to Serial
  if(s.available()>0)
  {
    s.write(k);
  }
  delay(1000);
}
