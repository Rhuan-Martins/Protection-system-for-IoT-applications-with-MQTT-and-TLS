#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <WiFiClientSecure.h>

const char* ssid = "wifi_name";
const char* password = "wifi_pass";
const char* mqtt_server = "192.168.0.100";
const int mqttPort = 8883;
const char* mqttUser = "openhabian_user";
const char* mqttPassword = "openhabian_pass";

const char* cert = "-----BEGIN CERTIFICATE-----\n"
"MIIDVTCCAj2gAwIBAgIUBxvuDeL5L9scIMHBCrbfZJeIuGAwDQYJKoZIhvcNAQEL"
"BQAwOjELMAkGA1UEBhMCQlIxDDAKBgNVBAoMA0lPVDEPMA0GA1UECwwGY2xpZW50"
"MQwwCgYDVQQDDAN0Y2MwHhcNMjMwMzI4MTg1NjA3WhcNMjgwNDAzMTg1NjA3WjA6"
"MQswCQYDVQQGEwJCUjEMMAoGA1UECgwDSU9UMQ8wDQYDVQQLDAZjbGllbnQxDDAK"
"BgNVBAMMA3RjYzCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKaS70v3"
"ABnocMqEV3TBEJrcnko+L1qyhGhNKmKBSTTGMne5+OA/c3w/fjPKhKT8TjMidkOI"
"r1edrM8CAmYLhgdDJT69dbqED0Wt6AzT5NYldroY1riINJLsArt+aX7BJoGRaY8N"
"PWFZf4bAC9JWF2oLU5Z6GNQq/BnzG3u9EcPSsulfIvQXcd4kiuoDJiq8FUjBkXmh"
"u19s+TIMmC8aaxyfOJQz3DtqOEftttlNmMKgCloPaz99gz/LLrDlNx6J9KWrHn5V"
"ON3OpLbLBTbUdMTW7cDiJH3xZsRUxDxME7Mu3ENeKnNEq74Bh1CxxUvpAawr6neZ"
"MvEhbKALtUyb8H0CAwEAAaNTMFEwHQYDVR0OBBYEFOiyhY83eaoLXetsjTvtXpvS"
"e8skMB8GA1UdIwQYMBaAFOiyhY83eaoLXetsjTvtXpvSe8skMA8GA1UdEwEB/wQF"
"MAMBAf8wDQYJKoZIhvcNAQELBQADggEBAKL4rZ2S/fwoULvZiH1QEQyJIOqzQoqc"
"tQWDgzGsz9oLgjs0ZW5Jt9cve2yM1JpmBk0kQBga3wNhjnSLQusLRgGBtwTEdePl"
"MeaV6FPRsQRas5wD2B9qjWZIywyjFZUI3MXhp2tPLbMnYTwtRQ90nBva4cYQnSNZ"
"bgw6wEHc+ZKSyFluC4f/dKShcYaTAlceyJ7D1ooj5JBDNmzY1Dg+Jc0bLHgqmYOA"
"sx16MgMZQRWwSfgp7AHOCAeQUy0sxqL8/fsZkENJ5ikkfifQjHsyPH2pujqVxVHl"
"wKUy9qWL0ojdMlAJEwQCW7RSmvXzLhAfi4mEWlDV68JKbPa0wMPWZok="
"-----END CERTIFICATE-----\n";

WiFiClientSecure espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];
int value = 0;

int gas = 34;  

void setup() {
  Serial.begin(115200);
  // default settings
 
  setup_wifi();
  client.setServer(mqtt_server, mqttPort);
  espClient.setCACert(cert);
}

void setup_wifi() {
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Conectando a rede ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Conexão ao MQTT
  while (!client.connected()) {
    Serial.print("Conectando ao MQTT Broker...");
    // Attempt to connect
    if (client.connect("ESP32",mqttUser,mqttPassword)) {
      Serial.println("Conectado");
      // Subscribe
      client.subscribe("esp32/output");
    } else {
      Serial.print("Erro, rc=");
      Serial.print(client.state());
      Serial.println("Tentando novamente em 5 segundos...");
      delay(5000);
    }
  }
}
void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  int gasValue = analogRead(gas);
  // Publica o valor do sensor
  String gasValueStr = String(gasValue);
  client.publish("myHome/gasSensor", gasValueStr.c_str(), gasValueStr.length());
  Serial.println(gasValueStr);
  Serial.println(analogRead(gas));
  delay(500);
}
