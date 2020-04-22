void setup()
{
 
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}

int n =1;
int i =100;
void loop()
{
  tone(8,200,500);
  delay(250);
  tone(8,400,100);
  
    if(digitalRead(2)==1)
    {
    if(digitalRead(2)==0)
    {
     Serial.println("Faster X 2 (Current Speed : X2)");
        Serial.println(n);
        n++;
       i = i/(2*n);
    i =i /2;
    
   }
    else
   {
    i =100;
   }
   }
   digitalWrite(3,1);
    delay(i);
    digitalWrite(3,0);
    digitalWrite(4,1);
    delay(i);
    digitalWrite(4,0);
    digitalWrite(5,1);
    delay(i);
    digitalWrite(5,0);
    digitalWrite(6,1);
    delay(i);
    digitalWrite(6,0);
    digitalWrite(7,1);
    delay(i);
    digitalWrite(7,0);
    digitalWrite(9,1);
    delay(i);
    digitalWrite(9,0);
    digitalWrite(10,1);
    delay(i);
    digitalWrite(10,0);
    digitalWrite(11,1);
    delay(i);
    digitalWrite(11,0);
    digitalWrite(12,1);
    delay(i);
    digitalWrite(12,0);
    digitalWrite(13,1);
    delay(i);  
    digitalWrite(13,0);
    digitalWrite(12,1);
    delay(i);  
    digitalWrite(12,0);
    digitalWrite(11,1);
    delay(i);  
    digitalWrite(11,0);
    digitalWrite(10,1);
    delay(i); 
    digitalWrite(10,0);
    digitalWrite(9,1);
    delay(i);
    digitalWrite(9,0);
    digitalWrite(7,1);
    delay(i);  
    digitalWrite(7,0);
    digitalWrite(6,1);
    delay(i);  
    digitalWrite(6,0);
    digitalWrite(5,1);
    delay(i);
    digitalWrite(5,0);
    digitalWrite(4,1);
    delay(i);  
    digitalWrite(4,0);
    digitalWrite(3,1);
    delay(i);  
    digitalWrite(3,0); 
    
}
