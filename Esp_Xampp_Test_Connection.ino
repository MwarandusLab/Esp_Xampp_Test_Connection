#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "TRUSTKISIA-TECH";
const char* password = "37526308";
const char* server_ip = "192.168.0.107";
const int server_port = 80;

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { 
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
}

void loop() {
  if (Serial.available()) {
    String receivedData = Serial.readStringUntil('\n');
    
    // Process received data
    //Serial.println("Received data from Arduino Mega: " + receivedData);
    if(receivedData == "A"){
      Serial.println("211171111163180");
      delay(1000);
    }else if (receivedData == "B"){
      Serial.println("147217126163151");
      delay(1000);
    }else if (receivedData == "C"){
      Serial.println("147217126163151");
      delay(1000);
    }
    delay(500);
  }
  // if (WiFi.status() == WL_CONNECTED) {
  //   HTTPClient http;
  //   String url = "http://" + String(server_ip) + ":" + String(server_port) + "/receive.php";
    
  //   // Use WiFiClient instead of HTTPClient for ESP8266
  //   WiFiClient client;
  //   http.begin(client, url);
    
  //   int httpCode = http.GET();
  //   if (httpCode > 0) {
  //     String payload = http.getString();
  //     Serial.println(payload);
  //   }
  //   http.end();
  // }
  // delay(5000);  // Wait for 5 seconds before the next request
}
