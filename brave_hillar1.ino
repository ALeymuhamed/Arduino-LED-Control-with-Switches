// C++ code
//
int button = 12 ;
int button_2 = 8;
void setup()
{
 pinMode(13,OUTPUT);
 pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 pinMode(button,INPUT);
 pinMode(button_2,INPUT);
}

void loop()
{
  if(digitalRead(button)) 
{
 
 
digitalWrite(13,HIGH);
    digitalWrite(11,HIGH);
  }
   
    else
   {
digitalWrite(13,LOW);
      digitalWrite(11,LOW);
    }
     if(digitalRead(button_2))
{
 
 
digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
   
    else
   {
digitalWrite(9,LOW);
      digitalWrite(10,LOW);
    }
   

  }

