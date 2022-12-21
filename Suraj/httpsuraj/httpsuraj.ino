//change in  firmare git hub name and 
//edit url in cloud tab
#include <FS.h>                   //this needs to be first, or it all crashes and burns...
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager


#ifdef ESP32
#include <SPIFFS.h>
#endif

#include <ArduinoJson.h>          //https://github.com/bblanchon/ArduinoJson

unsigned long previousMillis_2 = 0;
unsigned long previousMillis = 0;        // will store last time LED was updated
const long interval = 60000;
const long mini_interval = 1000;



#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>


#include <Arduino_JSON.h>

#include <DMDESP.h>
#include <fonts/ElektronMart6x8.h>



//String nw="SERIAL_8N1";
int s = 9600;




#include <ESP8266WiFi.h>
#include <PubSubClient.h>

#include <FS.h>                   //this needs to be first, or it all crashes and burns...
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager

#ifdef ESP32
#include <SPIFFS.h>
#endif

#include <ArduinoJson.h>          //https://github.com/bblanchon/ArduinoJson

#include <Adafruit_ADS1X15.h>







#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266httpUpdate.h>
#include <WiFiClientSecure.h>
#include <CertStoreBearSSL.h>
BearSSL::CertStore certStore;
#include <time.h>

const String FirmwareVer = {"0.8"};
#define URL_fw_Version "/eklavyainfo/Textit/main/Suraj/version.txt"
#define URL_fw_Bin "https://raw.githubusercontent.com/eklavyainfo/Textit/main/Suraj/firmware.bin"
const char* host2 = "raw.githubusercontent.com";
const int httpsPort = 443;

// DigiCert High Assurance EV Root CA
const char trustRoot[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDrzCCApegAwIBAgIQCDvgVpBCRrGhdWrJWZHHSjANBgkqhkiG9w0BAQUFADBh
MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD
QTAeFw0wNjExMTAwMDAwMDBaFw0zMTExMTAwMDAwMDBaMGExCzAJBgNVBAYTAlVT
MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j
b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IENBMIIBIjANBgkqhkiG
9w0BAQEFAAOCAQ8AMIIBCgKCAQEA4jvhEXLeqKTTo1eqUKKPC3eQyaKl7hLOllsB
CSDMAZOnTjC3U/dDxGkAV53ijSLdhwZAAIEJzs4bg7/fzTtxRuLWZscFs3YnFo97
nh6Vfe63SKMI2tavegw5BmV/Sl0fvBf4q77uKNd0f3p4mVmFaG5cIzJLv07A6Fpt
43C/dxC//AH2hdmoRBBYMql1GNXRor5H4idq9Joz+EkIYIvUX7Q6hL+hqkpMfT7P
T19sdl6gSzeRntwi5m3OFBqOasv+zbMUZBfHWymeMr/y7vrTC0LUq7dBMtoM1O/4
gdW7jVg/tRvoSSiicNoxBN33shbyTApOB6jtSj1etX+jkMOvJwIDAQABo2MwYTAO
BgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUA95QNVbR
TLtm8KPiGxvDl7I90VUwHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUw
DQYJKoZIhvcNAQEFBQADggEBAMucN6pIExIK+t1EnE9SsPTfrgT1eXkIoyQY/Esr
hMAtudXH/vTBH1jLuG2cenTnmCmrEbXjcKChzUyImZOMkXDiqw8cvpOp/2PV5Adg
06O/nVsJ8dWO41P0jmP6P6fbtGbfYmbW0W5BjfIttep3Sp+dWOIrWcBAI+0tKIJF
PnlUkiaY4IBIqDfv8NZ5YBberOgOzW6sRBc4L0na4UU+Krk2U886UAb3LujEV0ls
YSEY1QSteDwsOoBrp+uvFRTp2InBuThs4pFsiv9kuXclVzDAGySj4dzp30d8tbQk
CAUw7C29C79Fv1C5qfPrmAESrciIxpg0X40KPMbp1ZWVbd4=
-----END CERTIFICATE-----
)EOF";
X509List cert(trustRoot);


extern const unsigned char caCert[] PROGMEM;
extern const unsigned int caCertLen;

//const char* ssid = "vivo Y21";
//const char* password = "321321321";





//Adafruit_ADS1115 ads;  /* Use this for the 16-bit version */
Adafruit_ADS1015 ads;     /* Use this for the 12-bit version */


#define Configpin 5



long RefreshTime = 0;


//define your default values here, if there are different values in config.json, they are overwritten.
//char mqtt_server[40];
char mqtt_port[6] = "1";
char api_token[50] = "8b270780342687984aa2655851990f2fcd15495a";
char UserName[40] = "Ravi";
char Password[40] = "test";



char fingerprint[]   = "8b270780342687984aa2655851990f2fcd15495a";


char loomNo[40] = "1";

//
//char ssid[30] = "DAYAL FABTEX";
//char password[30] = "Dayal@1234";
char mqtt_server[40] = "142.93.212.39";
char MQTT_CLIENT_ID[40] = "esp";
char MQTT_USER[40] = "devices";
char MQTT_PASSWORD[40] = "password@123";
char TOPIC[40] = "nodemcu/test";

char BaudRate[40] = "9600";



int   InternateFlag = 0;



WiFiClient espClient;
PubSubClient client(espClient);
unsigned long lastMsg = 0;
#define MSG_BUFFER_SIZE  (50)
char msg[MSG_BUFFER_SIZE];
int value = 0;


//flag for saving data
bool shouldSaveConfig = false;





#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPClient.h>


#include <Arduino_JSON.h>

#include <DMDESP.h>
#include <fonts/ElektronMart6x8.h>

//SETUP DMD
#define DISPLAYS_WIDE 1 // Kolom Panel
#define DISPLAYS_HIGH 1 // Baris Panel
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  // Jumlah Panel P10 yang digunakan (KOLOM,BARIS)

#include <Ticker.h>  //Ticker Library
Ticker blinker;

float abc1 = 0;
unsigned long int Counter = 600000;

unsigned long int Counter2 = 10;

long ResCounter = 0;
static char *teks[] = {"No Internet"};


//Link to read data from https://jsonplaceholder.typicode.com/comments?postId=7
//Web/Server address to read/write from
const char *host = "api.texit.app";
//const int httpsPort = 443;  //HTTPS= 443 and HTTP = 80

//SHA1 finger print of certificate use web browser to view and copy



#include <EEPROM.h>

// pin 11 of 74HC595 (SHCP) //clk
const int bit_clock_pin1 = 0;  //PB1
// pin 12 of 74HC595 (STCP)  // latch
const int digit_clock_pin1 = 2;  //PB0
// pin 14 of 74HC595 (DS) // datain
const int data_pin1 = 16; // PB2
int resetstate = 1000, MotorState = 0, UnloadStop = 0;
long  unloadTime = 100;

int i = 0;


int l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0,  l6 = 0, l7 = 0, l8 = 0, l9 = 0, l10 = 1;
volatile byte dc = 0xff;


StaticJsonDocument<256> doc;


void setup() {
  // put your setup code here, to run once:
  //  Serial.begin(atoi(BaudRate)) ;

  EEPROM.begin(512);  // setup

  Serial.begin(9600);



  Disp.start(); // Jalankan library DMDESP
  Disp.setBrightness(200); // Tingkat kecerahan
  Disp.setFont(ElektronMart6x8); // Tentukan huruf



  blinker.attach(0.001, TimerLoop); //Use attach_ms



  Disp.clear();

  ReadEpromVal();
  if (SPIFFS.begin()) {
    Serial.println("mounted file system");
    if (SPIFFS.exists("/config.json")) {
      //file exists, reading and loading
      Serial.println("reading config file");
      File configFile = SPIFFS.open("/config.json", "r");
      if (configFile) {
        Serial.println("opened config file");
        size_t size = configFile.size();
        // Allocate a buffer to store contents of the file.
        std::unique_ptr<char[]> buf(new char[size]);

        configFile.readBytes(buf.get(), size);

#ifdef ARDUINOJSON_VERSION_MAJOR >= 6
        DynamicJsonDocument json(1024);
        auto deserializeError = deserializeJson(json, buf.get());
        serializeJson(json, Serial);
        if ( ! deserializeError ) {
#else
        DynamicJsonBuffer jsonBuffer;
        JsonObject& json = jsonBuffer.parseObject(buf.get());
        json.printTo(Serial);
        if (json.success()) {
#endif
          Serial.println("\nparsed json");
          strcpy(mqtt_server, json["mqtt_server"]);
          strcpy(mqtt_port, json["mqtt_port"]);
          strcpy(api_token, json["api_token"]);
          strcpy(UserName, json["UserName"]);
          strcpy(Password, json["Password"]);

        } else {
          Serial.println("failed to load json config");
        }
        configFile.close();
      }
    }
  }
  else {
    Serial.println("failed to mount FS");
  }


  pinMode(Configpin, INPUT);
  if (digitalRead(Configpin))
  {
    Serial.println("mounting FS...");

    //    ssid[10] = '123';

    //clean FS, for testing
    //SPIFFS.format();

    //read configuration from FS json


    if (SPIFFS.begin()) {
      Serial.println("mounted file system");
      if (SPIFFS.exists("/config.json")) {
        //file exists, reading and loading
        Serial.println("reading config file");
        File configFile = SPIFFS.open("/config.json", "r");
        if (configFile) {
          Serial.println("opened config file");
          size_t size = configFile.size();
          // Allocate a buffer to store contents of the file.
          std::unique_ptr<char[]> buf(new char[size]);

          configFile.readBytes(buf.get(), size);

#ifdef ARDUINOJSON_VERSION_MAJOR >= 6
          DynamicJsonDocument json(1024);
          auto deserializeError = deserializeJson(json, buf.get());
          serializeJson(json, Serial);
          if ( ! deserializeError ) {
#else
          DynamicJsonBuffer jsonBuffer;
          JsonObject& json = jsonBuffer.parseObject(buf.get());
          json.printTo(Serial);
          if (json.success()) {
#endif
            Serial.println("\nparsed json");
            strcpy(mqtt_server, json["mqtt_server"]);
            strcpy(mqtt_port, json["mqtt_port"]);
            strcpy(api_token, json["api_token"]);
            strcpy(UserName, json["UserName"]);
            strcpy(Password, json["Password"]);

          } else {
            Serial.println("failed to load json config");
          }
          configFile.close();
        }
      }
    }
    else {
      Serial.println("failed to mount FS");
    }
    //end read

    // The extra parameters to be configured (can be either global or just in the setup)
    // After connecting, parameter.getValue() will get you the configured value
    // id/name placeholder/prompt default length


    WiFiManagerParameter custom_mqtt_server("server", "mqtt server", mqtt_server, 40);
    WiFiManagerParameter custom_mqtt_port("port", "Loom", mqtt_port, 6);
    WiFiManagerParameter custom_api_token("apikey", "SSL Code", api_token, 50);

    WiFiManagerParameter custom_UserName("UserName", "Refresh Time", UserName, 40);
    WiFiManagerParameter custom_Password("Password", "Password", Password, 40);


    //WiFiManager
    //Local intialization. Once its business is done, there is no need to keep it around
    WiFiManager wifiManager;

    //set config save notify callback
    wifiManager.setSaveConfigCallback(saveConfigCallback);

    //set static ip
    //wifiManager.setSTAStaticIPConfig(IPAddress(10, 0, 1, 99), IPAddress(10, 0, 1, 1), IPAddress(255, 255, 255, 0));

    //add all your parameters here
    //    wifiManager.addParameter(&custom_mqtt_server);
    wifiManager.addParameter(&custom_mqtt_port);
    wifiManager.addParameter(&custom_api_token);
    wifiManager.addParameter(&custom_UserName);
    //    wifiManager.addParameter(&custom_Password);

    wifiManager.setTimeout(120);


    if (!wifiManager.startConfigPortal("texIT_Device", "texit@1234")) {
      Serial.println("failed to connect and hit timeout");
      delay(3000);
      //reset and try again, or maybe put it to deep sleep
      ESP.restart();
      delay(5000);
    }
    Serial.println("connected...yeey :)");

    //read updated parameters
    strcpy(mqtt_server, custom_mqtt_server.getValue());
    strcpy(mqtt_port, custom_mqtt_port.getValue());
    strcpy(api_token, custom_api_token.getValue());
    strcpy(UserName, custom_UserName.getValue());
    strcpy(Password, custom_Password.getValue());
    Serial.println("The values in the file are: ");
    Serial.println("\tmqtt_server : " + String(mqtt_server));
    Serial.println("\tmqtt_port : " + String(mqtt_port));
    Serial.println("\tapi_token : " + String(api_token));
    Serial.println("\tUserName: " + String(UserName));
    Serial.println("\tPassword : " + String(Password));

    //save the custom parameters to FS
    if (shouldSaveConfig) {
      Serial.println("saving config");
#ifdef ARDUINOJSON_VERSION_MAJOR >= 6
      DynamicJsonDocument json(1024);
#else
      DynamicJsonBuffer jsonBuffer;
      JsonObject& json = jsonBuffer.createObject();
#endif
      json["mqtt_server"] = mqtt_server;
      json["mqtt_port"] = mqtt_port;
      json["api_token"] = api_token;
      json["UserName"] = UserName;
      json["Password"] = Password;

      File configFile = SPIFFS.open("/config.json", "w");
      if (!configFile) {
        Serial.println("failed to open config file for writing");
      }

#ifdef ARDUINOJSON_VERSION_MAJOR >= 6
      serializeJson(json, Serial);
      serializeJson(json, configFile);
#else
      json.printTo(Serial);
      json.printTo(configFile);
#endif
      configFile.close();
      //end save
    }

  }
  Serial.println("local ip");
  Serial.println(WiFi.localIP());

  setup_wifi();


  RefreshTime = atoi(UserName);

  RefreshTime=20;

  Serial.println("RefreshTime");
  Serial.println(RefreshTime);



   


    for (int j = 64; j > -100; j--)
    {



      for (int i = 0; i < 60; i++)
      {

        Disp.clear();
        Disp.drawText(j, 0 , "texIT"); // Tampilkan teks
        delay(1000);


      }

      delay(1000);

    }



FirmwareUpdate();

  Disp.clear();

//  GetCloudData();
delay(100);
 Page();


  repeatedCall(); 
}


void Page()
{
  if (digitalRead(Configpin)) {
    Serial.println("CONFIGURATION");
    delay(100);
    for (int i = 0; i < 5; i++)
    {


    }

    ESP.restart();
  }

   setClock();
      FirmwareUpdate();

      
}
void loop() {




  Disp.loop(); // Jalankan Disp loop untuk refresh LED

  //Disp.drawText(0, 2, String(abc1)); // Tampilkan teks
 





   


   
  
  
    for (int i = 30; i > -64; i--)
    {
      Disp.drawText(0, 0, String(abc1, 1)  + "     "); // Tampilkan teks
      delay(100);
    }


  if (Counter2 > (8))
  {
    GetCloudData();
    Counter2 = 0;
  }
  Counter2++;

//  Serial.println( Counter2);


for(int i=0;i<10000;i++)
{
  delay(80000);
}

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Disconnected");

    ESP.reset();
  }



if(abc1==0)
  {
     GetCloudData();
  }
}


void TeksJalan(int y, uint8_t kecepatan) {

  static uint32_t pM;
  static uint32_t x;
  int width = Disp.width();
  Disp.setFont(ElektronMart6x8);
  int fullScroll = Disp.textWidth(teks[0]) + width;
  if ((millis() - pM) > kecepatan) {
    pM = millis();
    if (x < fullScroll) {
      ++x;
    } else {
      x = 0;
      return;
    }
    Disp.drawText(width - x, y, teks[0]);
  }

}







void TimerLoop()
{

  //  if (  InternateFlag == 0)
  //  {
  Disp.loop();
  //  }
}
