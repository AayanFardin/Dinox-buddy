Serial.begin(115200);

#include <SPI.h>
#include <Wire.h>
#include <AdafruitGFX.h>
#include <AdafruitSSD1306.h>
#include <DHT.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <FluxGarage_RoboEyes.h>

Adafruit_MPU6050 motion_sensor;


#define screan_width = 128;
#define screan_height = 64;

#define DHTpin = 15;
#define DHTtype = DHT11;
#define switch1pin = 18;
#define switch2pin = 19;
#define i2c_SDA pin = 21;
#define i2c_SCL pin = 22;

Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); 

DHT dht(DHTpin,DHTtype);
float temp;
float humi;

  float shakeThreshold;   //will be given the threshole after testing the motion sensor

int switch1;          //switch1
int switch2;          //switch2

bool shake = false     //motion sensor shake detaction

reading();


//dino

int dinoY = 45;
int velocity = 0;
int cactusX = 128;
int score = 0;

bool gameStarted = false;
bool jumping = false;
bool gameOver = false;

bool lastSwitch1 = HIGH;
bool lastSwitch2 = HIGH;

unsigned long lastPressTime = 0;
int pressCount = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(switch1,INPUT_PULLUP);
pinMode(switch2,INPUT_PULLUP);

wire.begin(i2c_SDA,i2c_SCL)
motion_sensor.begin();
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

  oled.clearDisplay();            
  oled.setTextSize(1);            
  oled.setTextColor(WHITE);       
  oled.setCursor(64,32);   


 eyes.begin(SCREEN_WIDTH, SCREEN_HEIGHT, 30);

  // Enable automated animations so the robot feels alive
  eyes.setAutoblinker(true, 4, 2); // Random blink every 4-6 seconds
  eyes.setIdleMode(true, 6, 2);    
  
  // eye formatting
  eyes.setWidth(30, 30);           // Width of left and right eye
  eyes.setHeight(36, 36);          // Height of left and right eye
  eyes.setBorderradius(8, 8);      //corner rounded
  eyes.setSpacebetween(15);        // Space between both eyes
  unsigned long lastMoodChange = 0;
int currentMood = 0;
}

unsigned long lastMoodChange = 0;
int currentMood = 0;



void loop() {
  // put your main code here, to run repeatedly:

display_temp_humi();

millis();

if(shake==true){
  confused();
  delay(3000);
  tired();
  delay(3000);
  angry();
}
else{
  happy();
}
dino
}
