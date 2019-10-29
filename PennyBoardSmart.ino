/**
 * ---------------------------------------------------------
 * Project: Penny Board Smart
 * Author: Aninu Apps
 * URL: https://aninu.ro/home
 * ---------------------------------------------------------
 */

// LEDs for Top - Left
int Top_Left_Yellow = 2;
int Top_Left_Blue = 3;
int Top_Left_White = 4;

// LEDs for Top - Right
int Top_Right_Yellow = 5;
int Top_Right_Blue = 6;
int Top_Right_White = 7;

// LEDs for Bottom - Left
int Bottom_Left_Yellow = 8;
int Bottom_Left_Red = 9;

// LEDs for Bottom - Right
int Button_Right_Yellow = 10;
int Bottom_Right_Red = 11;

// Random Start
int RandomStart = 0;

// Setup PINs
void setup() {
  Serial.begin(9600);
  
  pinMode(Top_Left_Yellow, OUTPUT);
  pinMode(Top_Left_Blue, OUTPUT);
  pinMode(Top_Left_White, OUTPUT);
  
  pinMode(Top_Right_Yellow, OUTPUT);
  pinMode(Top_Right_Blue, OUTPUT);
  pinMode(Top_Right_White, OUTPUT);
  
  pinMode(Bottom_Left_Yellow, OUTPUT);
  pinMode(Bottom_Left_Red, OUTPUT);

  pinMode(Button_Right_Yellow, OUTPUT);
  pinMode(Bottom_Right_Red, OUTPUT);

  randomSeed(analogRead(0));
}

void Led_Full(){
  digitalWrite(Top_Left_Yellow, HIGH);
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Left_White, HIGH);
  
  digitalWrite(Top_Right_Yellow, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);
  digitalWrite(Top_Right_White, HIGH);
  
  digitalWrite(Bottom_Left_Yellow, HIGH);
  digitalWrite(Bottom_Left_Red, HIGH);
  
  digitalWrite(Button_Right_Yellow, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
  
  delay(300);
  
  digitalWrite(Top_Left_Yellow, LOW);
  digitalWrite(Top_Left_Blue, LOW);
  digitalWrite(Top_Left_White, LOW);
  
  digitalWrite(Top_Right_Yellow, LOW);
  digitalWrite(Top_Right_Blue, LOW);
  digitalWrite(Top_Right_White, LOW);
  
  digitalWrite(Bottom_Left_Yellow, LOW);
  digitalWrite(Bottom_Left_Red, LOW);
  
  digitalWrite(Button_Right_Yellow, LOW);
  digitalWrite(Bottom_Right_Red, LOW);
  
  delay(300);

}

void Led_PlayDefault(){
  for (int i = 3; i < 6; i++){
    digitalWrite(Top_Left_Yellow, HIGH);
    digitalWrite(Top_Right_Yellow, HIGH);
    digitalWrite(Bottom_Left_Yellow, HIGH);
    digitalWrite(Button_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Top_Right_Yellow, LOW);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Button_Right_Yellow, LOW);
    
    digitalWrite(Top_Left_Blue, HIGH);
    digitalWrite(Top_Right_Blue, HIGH);
    digitalWrite(Bottom_Left_Red, HIGH);
    digitalWrite(Bottom_Right_Red, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Blue, LOW);
    digitalWrite(Top_Right_Blue, LOW);
    digitalWrite(Bottom_Left_Red, LOW);
    digitalWrite(Bottom_Right_Red, LOW);

    digitalWrite(Top_Left_Yellow, HIGH);
    digitalWrite(Top_Right_Yellow, HIGH);
    digitalWrite(Bottom_Left_Yellow, HIGH);
    digitalWrite(Button_Right_Yellow, HIGH);
    digitalWrite(Top_Left_Blue, HIGH);
    digitalWrite(Top_Right_Blue, HIGH);
    digitalWrite(Bottom_Left_Red, HIGH);
    digitalWrite(Bottom_Right_Red, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Top_Right_Yellow, LOW);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Button_Right_Yellow, LOW);
    digitalWrite(Top_Left_Blue, LOW);
    digitalWrite(Top_Right_Blue, LOW);
    digitalWrite(Bottom_Left_Red, LOW);
    digitalWrite(Bottom_Right_Red, LOW);
  }
}

void Led_Standard(){
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);
  digitalWrite(Bottom_Left_Red, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
};

void Led_StandardX(){
  digitalWrite(Top_Left_White, HIGH);
  digitalWrite(Top_Right_White, HIGH);  
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);
  digitalWrite(Bottom_Left_Red, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
  digitalWrite(Top_Left_Yellow, HIGH);
  digitalWrite(Top_Right_Yellow, HIGH);
  digitalWrite(Bottom_Left_Yellow, HIGH);
  digitalWrite(Button_Right_Yellow, HIGH);
};

void Led_StandardFull(){
  digitalWrite(Top_Left_White, HIGH);
  digitalWrite(Top_Right_White, HIGH);  
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);
  digitalWrite(Bottom_Left_Red, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
};

void Led_StandardFullX(){
  digitalWrite(Top_Left_White, HIGH);
  digitalWrite(Top_Right_White, HIGH);  
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);
  digitalWrite(Bottom_Left_Red, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
  digitalWrite(Top_Left_Yellow, HIGH);
  digitalWrite(Top_Right_Yellow, HIGH);
  digitalWrite(Bottom_Left_Yellow, HIGH);
  digitalWrite(Button_Right_Yellow, HIGH);
};

void Led_Round(){
  for (int i = 1; i < 3; i++){
    digitalWrite(Top_Left_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Blue, HIGH);
    delay(i*100);
    digitalWrite(Top_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Top_Right_Blue, HIGH);
    delay(i*100);
    digitalWrite(Button_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Right_Red, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Left_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Left_Red, HIGH);
    delay(i*100);

    digitalWrite(Top_Left_Yellow, LOW);
    delay(i*100);
    digitalWrite(Top_Left_Blue, LOW);
    delay(i*100);
    digitalWrite(Top_Right_Yellow, LOW);
    delay(i*100);
    digitalWrite(Top_Right_Blue, LOW);
    delay(i*100);
    digitalWrite(Button_Right_Yellow, LOW);
    delay(i*100);
    digitalWrite(Bottom_Right_Red, LOW);
    delay(i*100);
    digitalWrite(Bottom_Left_Yellow, LOW);
    delay(i*100);
    digitalWrite(Bottom_Left_Red, LOW);
    delay(i*100);   
  }
  for (int i = 1; i < 3; i++){
    digitalWrite(Top_Left_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Top_Left_Blue, HIGH);
    delay(i*100);
    digitalWrite(Top_Left_Blue, LOW);
    digitalWrite(Top_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Top_Right_Yellow, LOW);
    digitalWrite(Top_Right_Blue, HIGH);
    delay(i*100);
    digitalWrite(Top_Right_Blue, LOW);
    digitalWrite(Button_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Button_Right_Yellow, LOW);
    digitalWrite(Bottom_Right_Red, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Right_Red, LOW);
    digitalWrite(Bottom_Left_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Bottom_Left_Red, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Left_Red, LOW);
  }
}

/**
 * Turn on White Leds
 * Game with remained leds 
 */
void Led_Mode_One(){
  /* Turn ON White Leds */
  digitalWrite(Top_Left_White, HIGH);
  digitalWrite(Top_Right_White, HIGH);

  /** One */
  digitalWrite(Bottom_Left_Red, HIGH);
  digitalWrite(Bottom_Right_Red, HIGH);
  digitalWrite(Top_Left_Blue, HIGH);
  digitalWrite(Top_Right_Blue, HIGH);

  /** Two */
  for (int i = 1; i <= 4; i++){
    digitalWrite(Bottom_Left_Yellow, HIGH);
    digitalWrite(Top_Left_Yellow, HIGH);
    digitalWrite(Button_Right_Yellow, HIGH);
    digitalWrite(Top_Right_Yellow, HIGH);
    delay(i*100);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Button_Right_Yellow, LOW);
    digitalWrite(Top_Right_Yellow, LOW);
    delay(i*100);
  }

  /** Three */
  for (int i = 1; i <= 4; i++){
    digitalWrite(Bottom_Left_Yellow, HIGH);
    digitalWrite(Top_Left_Yellow, HIGH);
    delay(200);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Button_Right_Yellow, HIGH);
    digitalWrite(Top_Right_Yellow, HIGH);
    delay(200);
    digitalWrite(Button_Right_Yellow, LOW);
    digitalWrite(Top_Right_Yellow, LOW);
  }

  /** Four */
  for (int i = 1; i <= 5; i++){
    digitalWrite(Bottom_Left_Red, HIGH);
    digitalWrite(Bottom_Right_Red, HIGH);
    digitalWrite(Top_Left_Blue, HIGH);
    digitalWrite(Top_Right_Blue, HIGH);
    delay(150);
    digitalWrite(Bottom_Left_Red, LOW);
    digitalWrite(Bottom_Right_Red, LOW);
    digitalWrite(Top_Left_Blue, LOW);
    digitalWrite(Top_Right_Blue, LOW);
    delay(150);
  }

  /** Five */
  for (int i = 1; i <= 15; i++){
    digitalWrite(Bottom_Left_Yellow, HIGH);
    digitalWrite(Button_Right_Yellow, HIGH);
    delay(200);
    digitalWrite(Bottom_Left_Yellow, LOW);
    digitalWrite(Button_Right_Yellow, LOW);
    digitalWrite(Top_Left_Yellow, HIGH);
    digitalWrite(Top_Right_Yellow, HIGH);
    delay(200);
    digitalWrite(Top_Left_Yellow, LOW);
    digitalWrite(Top_Right_Yellow, LOW);
    delay(200);
  }
}

// Loop Control
void loop() {
  if (RandomStart == 0){
    RandomStart = random(0, 12);
     Serial.println(RandomStart);
  }else if(RandomStart == 1){
    Led_PlayDefault();
  }else if(RandomStart == 2){
    Led_Full();
  }else if(RandomStart == 3){
    Led_StandardFullX();
  }else if(RandomStart == 4){
    Led_StandardFull();
  }else if(RandomStart == 5){
    Led_StandardX();
  }else if(RandomStart == 6){
    Led_Round();
  }else if(RandomStart == 7){
    Led_PlayDefault();
    Led_Round();
    Led_Full;
  }else if(RandomStart == 8 or RandomStart == 9){
    Led_Mode_One();
  }else{
    Led_Standard();
  }
}
