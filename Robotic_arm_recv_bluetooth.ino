
#include<Servo.h>
int pos = 90;
int pos1 = 90;
int pos2 = 90;
int pos3 = 90;

Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  s1.attach(3);          //Servo motor attached to pin 3
  s1.write(pos);
  s2.attach(5);
  s2.write(pos1);
  s3.attach(10);
  s3.write(pos2);
  s4.attach(11);
  s4.write(pos3);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char val = Serial.read();
    if(val == 'F')
    {
      Serial.println(val);
      if(pos <= 180)
      {
        pos = pos + 20;
        s1.write(pos);
        Serial.println("Servo reached maximum");
       }
    }
    else if(val == 'B')
    {
      Serial.println(val);
      if(pos >= 0)
  {
   pos = pos - 20;
   s1.write(pos);
  }
    }
    else if(val == 'L')
    {
     if(pos1 <= 180)
  {
  pos1 = pos1 + 20;
  s2.write(pos1);
  }
  digitalWrite(3,HIGH);
    }
    else if(val == 'R')
    {
      if(pos1 >= 0)
  {
   pos1 = pos1 - 20;
   s2.write(pos1);
  }
    }
    else if(val == 'M')
    {
      Serial.println(val);
      if(pos2 <= 180)
  {
  pos2 = pos2 + 20;
  s3.write(pos2);
  }
    }
    else if(val == 'N')
    {
      Serial.println(val);
      if(pos2 >= 0)
  {
   pos2 = pos2 - 20;
   s3.write(pos2);
  }
    }
    else if(val == 'O')
    {
     if(pos3 <= 180)
  {
  pos3 = pos3 + 20;
  s4.write(pos3);
  }
    }
    else if(val == 'P')
    {
      if(pos3 >= 0)
  {
   pos3 = pos3 - 20;
   s4.write(pos3);
  }
    }
    else
    {
      Serial.print("stop");
    }
  }
}



