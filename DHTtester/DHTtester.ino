/*
 * Visit techiesms youtube channel for more project tutorials
 * 
 * https://www.youtube.com/techiesms
 * 
 * 
 * 
 */

// Library Declaration
// -> A library is collection of pre-written codes which we can call inside the main function as per the need of code.
// -> Library makes our code short, easy to understrand and less complex.
#include "DHT.h"


// Defining the pin where we have conencted DHT 11 Sensor
#define DHTPIN 15     // Digital pin connected to the DHT sensor


// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// This is the function used in DHT library.
// Using this function we are telling the controller that we have attached the sensor at particular pin and the sensor is of particular type.
DHT dht(DHTPIN, DHTTYPE);


// Setup part of code. --> The code written in setup function will run once only 
void setup() 

{

  // Serial.begin() will start the serial monitor at a particular baud rate.
  // Baud rate means at what speed we are sending the data. Commonly used baud rates are - 9600, 115200
  Serial.begin(9600);

  // Serial.println() will print whatever data we want to print on serial monitor
  // For Eg. Serial.println("Hello"); --> this line will print Hello on Serial monitor.
  Serial.println("Starting DHT 11 Sensor");

   // This is the function which we are calling from DHT library
   // Using this function we are activating the sensor and now the sensor will start sending the data.
  dht.begin();
}



// Loop part of code --> The code written in loop function will run forever 
void loop() 
{
  
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");   
  Serial.print ("Temperature: ");
  Serial.print(t);
  Serial.println("°C ");

  delay(1000);
}
