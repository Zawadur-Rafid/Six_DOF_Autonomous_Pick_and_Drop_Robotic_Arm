#include <Arduino.h>
#include <Servo.h>

Servo mg996_1, mg996_2, mg996_3;
Servo mg90s_1, mg90s_2, mg90s_3;

int dir=2;
int stp=3;

int baseR(int i,int n);
int baseL(int i,int n);
int shoulderU(int i,int n);
int shoulderD(int i,int n);
int elbowU(int i,int n);
int elbowD(int i,int n);
int wristU(int i,int n);
int wristD(int i,int n);
int endeff(int i);
void stepperRight();
void stepperLeft();


void setup() {
  mg996_1.attach(11);   
  mg996_2.attach(10);  
  mg996_3.attach(9);  
  mg90s_1.attach(6);   
  mg90s_2.attach(5);   
  mg90s_3.attach(4);

  mg996_1.write(90);
  mg996_2.write(130);
  mg996_3.write(90);
  mg90s_1.write(90);
  mg90s_2.write(60);

  pinMode(dir,OUTPUT);
  pinMode(stp,OUTPUT);

  delay(1000);
}

void loop() {
  int b=90;
  int s=130;
  int el=90;
  int w=90;
  int ef=60;

  b=baseL(b,120);
  delay(1000);

  s=shoulderD(s,80);
  delay(1000);

  el=elbowD(el,160);
  delay(1000);

  w=wristD(w,20);
  delay(1000);

  ef=endeff(ef);
  delay(1000);


  el=elbowU(el,90);
  delay(1000);

  s=shoulderU(s,130);
  delay(1000);

  b=baseR(b,90);
  delay(1000);

  stepperRight();

  b=baseR(b,60);
  delay(1000);

  s=shoulderD(s,80);
  delay(1000);

  el=elbowD(el,160);
  delay(1000);

  w=wristD(w,20);
  delay(1000);

  ef=endeff(ef);
  delay(1000);

  w=wristU(w,90);
  delay(1000);

  el=elbowU(el,90);
  delay(1000);

  s=shoulderU(s,130);
  delay(1000);

  b=baseL(b,90);
  delay(1000);

  stepperLeft();
  
}

int baseR(int i,int n)
{
  int k;
  for(int j=i;i>=n;i--)
  {
    mg996_1.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int baseL(int i,int n)
{
  int k;
  for(int j=i;i<=n;i++)
  {
    mg996_1.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int shoulderD(int i,int n)
{
  int k;
  for(int j=i;i>=n;i--)
  {
    mg996_2.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int shoulderU(int i,int n)
{
  int k;
  for(int j=i;i<=n;i++)
  {
    mg996_2.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int elbowD(int i,int n)
{
  int k;
  for(int j=i;i<=n;i++)
  {
    mg996_3.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int elbowU(int i,int n)
{
  int k;
  for(int j=i;i>=n;i--)
  {
    mg996_3.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int wristD(int i,int n)
{
  int k;
  for(int j=i;i>=n;i--)
  {
    mg90s_1.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int wristU(int i,int n)
{
  int k;
  for(int j=i;i<=n;i++)
  {
    mg90s_1.write(i);
    k=i;
    delay(50);
  }
  return k;
}

int endeff(int i)
{
  if(i==60)
  {
    mg90s_2.write(5);
    return 5;
  }
  else 
  {
    mg90s_2.write(60);
    return 60;
  }
}

void stepperRight()
{
  digitalWrite(dir,HIGH);
  for(int i=0;i<13;i++)
  {
    for(int i=0;i<200;i++)
    {
      digitalWrite(stp,HIGH);
      delayMicroseconds(1000);
      digitalWrite(stp,LOW);
      delayMicroseconds(1000);
    }
  }
  delay(1000);
}

void stepperLeft()
{
  digitalWrite(dir,LOW);
  for(int i=0;i<13;i++)
  {
    for(int i=0;i<200;i++)
    {
      digitalWrite(stp,HIGH);
      delayMicroseconds(1000);
      digitalWrite(stp,LOW);
      delayMicroseconds(1000);
    }
  }
  delay(1000); 
}

