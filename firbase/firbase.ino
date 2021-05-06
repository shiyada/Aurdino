#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <SoftwareSerial.h>
SoftwareSerial s(D6,D5);
#define FIREBASE_HOST "kichen-garden.firebaseio.com"
#define FIREBASE_AUTH "9KJ0XSnsjLqf4ucMMgHj4kGjKz0cdkw0fQmliGj2"
#define WIFI_SSID "shiyad"
#define WIFI_PASSWORD "iamshiyad"
int data;
float data1;
void setup() {
  Serial.begin(115200);
  s.begin(115200);
  // put your setup code here, to run once:
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());

  //firbase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.set("Value",10.6);
  delay(5000);

}

void loop() {
  if (s.available())
  {
    data=s.read();
    Serial.println(data);
    data1=(float)data/100;
    Serial.println(data1);
    Firebase.setFloat("Value", data1);
    delay(1500);
  }
  
  // put your main code here, to run repeatedly:

}
