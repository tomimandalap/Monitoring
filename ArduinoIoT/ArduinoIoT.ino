#include "DHT.h"
#include "ThingSpeak.h"
#include <ESP8266WiFi.h>

// set sensor DHT11
DHT dht(2, DHT11);
float temp, humd;

// setwifi
const char* ssid = "YONA HOME";
const char* pass = "JOKONDOKONDO";
unsigned long myChannelNumber = 1408714;
const char * myWriteAPIKey = "SDW4IF29RNKRQ49W";
WiFiClient  client;

void sambunganWifi() {
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Menyambungakan ke: ");
    Serial.println(ssid);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nBerhasil tersambung.");
  }  
}

void setup() {
  Serial.begin(9600);
  dht.begin();
  // wifi
  sambunganWifi();
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
}

void loop() {
  temp = dht.readTemperature();
  humd = dht.readHumidity();

  if (isnan(temp) || isnan(humd)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // serial monitor
  Serial.print("Humidity: ");
  Serial.print(humd,2);
  Serial.print("%  Temperature: ");
  Serial.print(temp,2);
  Serial.print("°C \n");

  // set the fields with the values
  ThingSpeak.setField(1, String(temp,2));
  ThingSpeak.setField(2, String(humd,2));
  // send data
  int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if (x == 200)
  {
    Serial.println("Update data success.\n\n");
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
    sambunganWifi();
  }
  delay(20000);
}
