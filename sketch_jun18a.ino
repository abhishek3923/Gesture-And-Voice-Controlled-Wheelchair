
int xPin=A7;
int yPin=A6;
int zPin=A5;

int out1=8;     
int out2=9;     
int out3=10;    
int out4=11;    

void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);

  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
}


void loop() 
{

  


  
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
  

  if ((xval>340 && xval<380) && (yval>340 && yval<380)) //stop
  {
    digitalWrite(out1,LOW);  
    digitalWrite(out2,LOW);   
    digitalWrite(out3,LOW);   
    digitalWrite(out4,LOW);
  } 

  else 
  { 
    if ((xval>280 && xval<320) && (yval>340 && yval<370)) //forward
   {
     digitalWrite(out1,HIGH);  
     digitalWrite(out2,LOW);   
     digitalWrite(out3,HIGH);  
     digitalWrite(out4,LOW);
      
    }
    if ((xval>390 && xval<430) && (yval>340 && yval<370)) //backward
  {
   digitalWrite(out1,LOW);   
   digitalWrite(out2,HIGH);  
   digitalWrite(out3,LOW);   
   digitalWrite(out4,HIGH);
      
    }   

    if ((xval>340 && xval<380) && (yval>280 && yval<320)) //left
    {
      digitalWrite(out1,HIGH);  
      digitalWrite(out2,LOW);   
      digitalWrite(out3,LOW);   
      digitalWrite(out4,LOW);
     }


    if ((xval>340 && xval<380) && (yval>390 && yval<420
    ))//right
    {
      digitalWrite(out1,LOW);  
      digitalWrite(out2,LOW);   
      digitalWrite(out3,HIGH);   
      digitalWrite(out4,LOW);
      
    }
  }
 
}
