void GetCloudData()
{


  Serial.print("Loom= ");
  Serial.println(atoi(mqtt_port));

  int loomnumber = atoi(mqtt_port);

  String payload;
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client;
    HTTPClient http;

    //      String serverPath = serverName + "?temperature=24.37";
    String serverName = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px";





    String serverPath = serverName ;

    if (loomnumber == 1)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%201%20to%206";

    }

    if (loomnumber == 2)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%207%20to%2012";
    }
    if (loomnumber == 3)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2013%20to%2018";

    }
    if (loomnumber == 4)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2019%20to%2024";

    }
    if (loomnumber == 5)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2025%20to%2030";

    }


    if (loomnumber == 6)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2031%20to%2036";

    }

    if (loomnumber == 7)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2037%20to%2042";

    }

    if (loomnumber == 8)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2043%20to%2048";

    }

    if (loomnumber == 9)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2049%20to%2054";

    }



 if (loomnumber == 101)
    {
      serverPath = "http://api.texit.app/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook&token=In1nTAV4FHMXkI1WPpkSOWNTeocfc0Q2YfcFCyvfABBJH3MINxhxvzmgE0Px&group=Loom%2049%20to%2054";

    }


    Serial.println("serverPath : " + serverPath);

    //serverPath = serverName + "?temperature=24.37";




    // Your Domain name with URL path or IP address with path
    http.begin(client, serverPath.c_str());

    // If you need Node-RED/server authentication, insert user and password below
    //http.setAuthorization("REPLACE_WITH_SERVER_USERNAME", "REPLACE_WITH_SERVER_PASSWORD");

    // Send HTTP GET request
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      Serial.print("HTTP Response code: ");
      Serial.println(httpResponseCode);
      payload = http.getString();
      Serial.println(payload);
    }
    else {
      Serial.print("Error code: ");
      Serial.println(httpResponseCode);
    }
    // Free resources
    http.end();
  }





  JSONVar myObject = JSON.parse(payload);

  // JSON.typeof(jsonVar) can be used to get the type of the var
  if (JSON.typeof(myObject) == "undefined") {
    Serial.println("Parsing input failed!");
    return;
  }

  Serial.print("JSON object = ");
  Serial.println(myObject);



  Serial.print("statusCode: ");

//
////  Serial.println(myObject["data"]["efficiency"]);
//  //      (const char*)
//  int abc = 1;
//
//  if (loomnumber == 1)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 1 to  6"]);
//  }
//  if (loomnumber == 2)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 7 to 12"]);
//  }
//  if (loomnumber == 3)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 13 to 18"]);
//  }
//  if (loomnumber == 4)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 19 to 24"]);
//  }
//  if (loomnumber == 5)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 25 to 30"]);
//  }
//  if (loomnumber == 6)
//  {
//    abc = (int) (myObject["data"]["efficiency"]);
//  }
//
//  if (loomnumber == 7)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 37 to 42"]);
//  }
//  if (loomnumber == 8)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 43 to 48"]);
//  }


int abc=(int)myObject["data"]["efficiency"];
  abc1 = abc;
  abc1 = abc1 / 100;



  Serial.println(abc);
  Serial.println("==========");
  Serial.println("closing connection");

  delay(2000);  //GET Data at every 2 seconds
  Counter = 0;
}


//callback notifying us of the need to save config
void saveConfigCallback () {
  Serial.println("Should save config");
  shouldSaveConfig = true;
}





void setup_wifi() {

  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  //  Serial.println(ssid);



  pinMode(data_pin1, OUTPUT);
  pinMode(bit_clock_pin1, OUTPUT);
  pinMode(digit_clock_pin1, OUTPUT);

  WiFi.mode(WIFI_STA);
  //  WiFi.begin(ssid, password);


  //  while (WiFi.status() != WL_CONNECTED) {
  //    Page();
  //
  //
  //    delay(250);
  //  }



  WiFiManager wifiManager;

  //set config save notify callback
  wifiManager.setSaveConfigCallback(saveConfigCallback);


  wifiManager.setTimeout(120);


  if (!wifiManager.autoConnect("AutoConnectAP", "password")) {
    Serial.println("failed to connect and hit timeout");
    delay(3000);

    for (int j = 64; j > -100; j--)
    {



      for (int i = 0; i < 60; i++)
      {

        Disp.clear();
        Disp.drawText(j, 0 , "No Internet"); // Tampilkan teks
        delay(1000);


      }

      delay(1000);

    }
    //reset and try again, or maybe put it to deep sleep
    ESP.restart();
    delay(5000);
  }

  //if you get here you have connected to the WiFi
  Serial.println("connected...yeey :)");


  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}


//void GetCloudData()
//{
//  WiFiClientSecure httpsClient;    //Declare object of class WiFiClient
//
//  //  Serial.println(host);
//  //
//  //  Serial.printf("Using fingerprint '%s'\n", api_token);
//  //    httpsClient.setFingerprint(fingerprint);
//  //api_token[41]="9d8bf788e39dab2f88ff26e493e03008fe412f56";
//  String Data = "9d8bf788e39dab2f88ff26e493e03008fe412f56";
//
//  //const char fingerprint2[] =Data.c_str();
//
//
//
//  //  fingerprint =Data;
//
//  httpsClient.setFingerprint("14CC1E5D3A16866E7DC14E9241B1FA7EACEEF8CE");
//
//
//
//  httpsClient.setTimeout(15000); // 15 Seconds
//  //  delay(1000);
//
//  //  Serial.print("HTTPS Connecting");
//
//
//
//  //  int r = 0; //retry counter
//  //  while ((!httpsClient.connect(host, httpsPort)) && (r < 30)) {
//  //    delay(10);
//  //    Serial.print(".");
//  //    r++;
//  ////    Disp.loop();
//  //  }
//  Disp.clear();
//  httpsClient.connect(host, httpsPort);
//  //  Disp.clear();
//  Disp.drawText(0, 0, String(abc1, 1)  + "     "); // Tampilkan teks
//  //    Disp.drawText(0, 0, String(abc1)); // Tampilkan teks
//
//  //  httpsClient.connect(host, httpsPort);
//  //  if (r == 30) {
//  //    Serial.println("Connection failed");
//  //  }
//  //  else {
//  //    Serial.println("Connected to web");
//  //  }
//
//  String ADCData, getData, Link;
//
//  Link = "/api/v1?client=SurajtexCom&action=getEfficiency&namespace=ProductionDisplayWebhook";
//  Serial.print("requesting URL: ");
//  Serial.println(host + Link);
//
//  httpsClient.print(String("GET ") + Link + " HTTP/1.1\r\n" +
//                    "Host: " + host + "\r\n" +
//                    "Connection: close\r\n\r\n");
//
//  Serial.println("request sent");
//
//
//  if (httpsClient.connected())
//  {
//    while (httpsClient.connected()) {
//      String line = httpsClient.readStringUntil('\n');
//      if (line == "\r") {
//              Serial.println("headers received");
//        break;
//      }
//    }
//
//    InternateFlag = 0;
//  }
//
//  else
//  {
//    InternateFlag = 1;
//  }
//      Serial.println("reply was:");
//      Serial.println("==========");
//  String line;
//  while (httpsClient.available()) {
//    line = httpsClient.readStringUntil('\n');  //Read Line by Line
//            Serial.println(line); //Print response
//  }
//
//
//  JSONVar myObject = JSON.parse(line);
//
//  // JSON.typeof(jsonVar) can be used to get the type of the var
//  if (JSON.typeof(myObject) == "undefined") {
//           Serial.println("Parsing input failed!");
//    return;
//  }
//
//    Serial.print("JSON object = ");
//    Serial.println(myObject);
//  //
//  //   Serial.print("Loom= ");
//  //  Serial.println(atoi(mqtt_port));
//
//  int loomnumber = atoi(mqtt_port);
//
//  //  Serial.print("statusCode: ");
//  //
//  //
//  //  Serial.println(myObject["data"]["efficiency"]["Loom 1 to  6"]);
//  //      (const char*)
//  int abc = 1;
//
//  if (loomnumber == 1)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 1 to  6"]);
//  }
//  if (loomnumber == 2)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 7 to 12"]);
//  }
//  if (loomnumber == 3)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 13 to 18"]);
//  }
//  if (loomnumber == 4)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 19 to 24"]);
//  }
//  if (loomnumber == 5)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 25 to 30"]);
//  }
//  if (loomnumber == 6)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Loom 31 to 36"]);
//  }
//
//  if (loomnumber == 200)
//  {
//    abc = (int) (myObject["data"]["efficiency"]["Total Efficiency"]);
//  }
//
//
//  abc1 = abc;
//  abc1 = abc1 / 100;
//
//    Serial.println(abc);
//    Serial.println("==========");
//  //  Serial.println("closing connection");
//
//  //  delay(2000);  //GET Data at every 2 seconds
//  Counter = 0;
//}
//
//
////callback notifying us of the need to save config
//void saveConfigCallback () {
//  Serial.println("Should save config");
//  shouldSaveConfig = true;
//}
//
//
//
//
//
//void setup_wifi() {
//
//  delay(10);
//  // We start by connecting to a WiFi network
//  Serial.println();
//  Serial.print("Connecting to ");
//  //  Serial.println(ssid);
//
//
//
//  pinMode(data_pin1, OUTPUT);
//  pinMode(bit_clock_pin1, OUTPUT);
//  pinMode(digit_clock_pin1, OUTPUT);
//
//  WiFi.mode(WIFI_STA);
//  //  WiFi.begin(ssid, password);
//
//
//  //  while (WiFi.status() != WL_CONNECTED) {
//  //    Page();
//  //
//  //
//  //    delay(250);
//  //  }
//
//
//
//  WiFiManager wifiManager;
//
//  //set config save notify callback
//  wifiManager.setSaveConfigCallback(saveConfigCallback);
//
//
//  wifiManager.setTimeout(2);
//
//
//  if (!wifiManager.autoConnect("AutoConnectAP", "password")) {
//    Serial.println("failed to connect and hit timeout");
//    delay(3000);
//
//    for (int j = 64; j > -100; j--)
//    {
//
//
//
//      for (int i = 0; i < 60; i++)
//      {
//
//        Disp.clear();
//        Disp.drawText(j, 0 , "No Internet"); // Tampilkan teks
//        delay(1000);
//
//
//      }
//
//      delay(1000);
//
//    }
//    //reset and try again, or maybe put it to deep sleep
//    ESP.restart();
//    delay(5000);
//  }
//
//  //if you get here you have connected to the WiFi
//  Serial.println("connected...yeey :)");
//
//
//  randomSeed(micros());
//
//  Serial.println("");
//  Serial.println("WiFi connected");
//  Serial.println("IP address: ");
//  Serial.println(WiFi.localIP());
//}
