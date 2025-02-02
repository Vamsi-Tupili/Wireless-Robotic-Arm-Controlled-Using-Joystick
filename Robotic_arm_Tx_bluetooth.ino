
#define sw 5
#define screenWidth 900
#define screenHeight 900
int value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop()
{
  int X = analogRead(A0);
  int Y = analogRead(A1);
  int X1 = analogRead(A2);
  int Y1 = analogRead(A3);
  int x = map(X, 0, 1023,0,screenWidth);
  int y = map(Y, 0, 1023,0,screenHeight); 
  int x1 = map(X1, 0, 1023,0,screenWidth);
  int y1 = map(Y1, 0, 1023,0,screenHeight);
  int sStat = digitalRead(sw);
    if(x >= 550)
  {
    Serial.println("F");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Forward");
    delay(200);
  }
  else if(x <= 250)
  {
    Serial.println("B");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Backward");
    delay(200);
  }
  else if(y <= 250)
  {
    Serial.println("L");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Left");
    delay(200);
  }
  else if(y >= 650)
  {
    Serial.println("R");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Right");
    delay(200);
  }
  if(x1 >= 550)
  {
    Serial.println("M");
    Serial.println(x1);
    Serial.println(y1);
    Serial.println("Forward");
    delay(200);
  }
  else if(x1 <= 250)
  {
    Serial.println("N");
    Serial.println(x1);
    Serial.println(y1);
    Serial.println("Backward");
    delay(200);
  }
  else if(y1 <= 250)
  {
    Serial.println("O");
    Serial.println(x1);
    Serial.println(y1);
    Serial.println("Left");
    delay(200);
  }
  else if(y1 >= 650)
  {
    Serial.println("P");
    Serial.println(x1);
    Serial.println(y1);
    Serial.println("Right");
    delay(200);
  }
  /*else if(x >= 700 && y <= 150)
  {
    Serial.println("A");
    delay(500);
    Serial.println(x);
    Serial.println(y);
    Serial.println("Spin Left");
    delay(200);
  }
  else if(x >= 700 && y >= 700)
  {
    Serial.println("C");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Spin Right");
    delay(200);
  }
  else if(x == 150 && y == 150)
  {
    Serial.println("D");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Spin Right");
    delay(200);
  }
  else if(x <= 100 && y >= 700)
  {
    Serial.println("E");
    Serial.println(x);
    Serial.println(y);
    Serial.println("Spin left");
    delay(200);
  }*/
  delay(200);
}


