/*
 * Visit techiesms youtube channel for more project tutorials
 * 
 * https://www.youtube.com/techiesms
 * 
 * 
 * 
 */
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "pLR7TGG9sMtK9yyCKk0Dmp8iKeAHRuSA";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "SmS_jiofi";
char pass[] = "sms123458956";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
