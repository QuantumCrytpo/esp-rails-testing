#include "ESP8266WiFi.h"

const char* ssid = "IZZI-8199";
const char* pass = "F8F5329A8199";
int LED_PIN = 13;

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  WiFi.begin(ssid, pass);
  connectToWifi();
}

void loop() {
  // put your main code here, to run repeatedly:

}

boolean connectToWifi(){
  Serial.print("Connecting...");
  while(WiFi.status() != WL_CONNECTED){
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
    Serial.print("."); 
  }
  
  for(int i=0; i<8; i++){
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  }
}
