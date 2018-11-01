// --------------------------------------------------------- //
// Project: Penny Board Smart                                //
// Author: Aninu                                             //
// --------------------------------------------------------- //

// LEDs for Top - Left
int Top_Left_Yellow = 1;
int Top_Left_Blue = 2;
int Top_Left_White = 3;

// LEDs for Top - Right
int Top_Right_Yellow = 4;
int Top_Right_Blue = 5;
int Top_Right_White = 6;

// LEDs for Bottom - Left
int Bottom_Left_Yellow = 7;
int Bottom_Left_Red = 8;

// LEDs for Bottom - Right
int Button_Right_Yellow = 9;
int Button_Right_Red = 10;

// Setup PINs
void setup() {
  pinMode(Top_Left_Yellow, OUTPUT);

}

// Loop Control
void loop() {
  digitalWrite(Top_Left_Yellow, HIGH);
  delay(300);
  digitalWrite(Top_Left_Yellow, LOW);
  delay(300);
}
