int pinLED1 = 5;
int pinLED2 = 6;
int pinLED3 = 9;
int pinLED4 = 10;
int pinLED5 = 11;

int pinPhoto = A0;
int photoValue1 = 40;
int photoValue2 = 75;
int photoValue3 = 125;
int photoValue4 = 175;
int photoValue5 = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  photoValue1 = analogRead(pinPhoto);
  photoValue2 = analogRead(pinPhoto);
  photoValue3 = analogRead(pinPhoto);
  photoValue4 = analogRead(pinPhoto);
  photoValue5 = analogRead(pinPhoto);
  
  analogWrite(pinLED1, photoValue1);
  analogWrite(pinLED2, photoValue2);
  analogWrite(pinLED3, photoValue3);
  analogWrite(pinLED4, photoValue4);
  analogWrite(pinLED5, photoValue5);
  
  Serial.println(photoValue1);
   delay(1000);
  Serial.println(photoValue2);
   delay(1000);
  Serial.println(photoValue3);
   delay(1000);
  Serial.println(photoValue4);
   delay(1000);
  Serial.println(photoValue5);
   delay(1000);
  
}
