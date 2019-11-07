int Sensorpin=4;
int switch=3;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  
  
}

void loop()
{sensorvalue=analogRead(4);
 
serial.PrintIn(4);
 delay(100);
 if(digitalRead(3,HIGH);)
 {if(sensor value>300)
 {
  digitalWrite(2,HIGH); 
  else  
 digitalWrite(2,LOW); 
 }
    
    else
    {digitalRead(3,LOW);
    }
     
  
}