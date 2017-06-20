// Set Variable names
int pushA = 13;
int pushB = 12;
int pushC = 11;
int pushD = 10;
int pushE = 9;

int LED = 8;
int BUZZ = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(13, INPUT_PULLUP);
pinMode(12, INPUT_PULLUP);
pinMode(11, INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);

pinMode(8, OUTPUT);
pinMode(7, OUTPUT);

Serial.begin(9600);
}

void loop() {
  digitalWrite(LED,LOW);
  unsigned int j = 0;
  // put your main code here, to run repeatedly:
  int readA = digitalRead(pushA);
  if(readA == 0) {
   j++;}
    char readB = digitalRead(pushB);
  if(readB == 0) {
   j++;}
  char readC = digitalRead(pushC);
  if(readC == 0) {
    j++;}
  char readD = digitalRead(pushD);
 if(readD == 0) {
   j++;}
 char readE = digitalRead(pushE);
  if(readE == 0) {
   j++;}
  Serial.print(j);

 switch (j) {
    case 1:
      digitalWrite(LED,HIGH);
      delay(50);
      digitalWrite(LED,LOW);
      delay(1000);
      break;
    case 2:
      digitalWrite(LED,HIGH);
      delay(50);
      digitalWrite(LED,LOW);
      delay(500);
      break;
      case 3:
      digitalWrite(LED,HIGH);
      delay(50);
      digitalWrite(LED,LOW);
      delay(250);x`
      break;
      case 4:
      digitalWrite(LED,HIGH);
      delay(50);
      digitalWrite(LED,LOW);
      delay(125);
      break;
      case 5:
      digitalWrite(LED,HIGH);
      delay(50);
      digitalWrite(LED,LOW);
      delay(63);
      break;
    default: 
    break;
  }
 
}
