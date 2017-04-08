/* here are code for turn ON\OFF LED by IR RECIVER and TV remote
you can use this code by changing two values by your tv remote value by using sample program
sample program used to detect vlue for differnt button of your remote
so kindly use sample program first of all to get value then put those value in this program
and your job is DONE*/
#include <IRremote.h>



int RECV_PIN2 = 2;

IRrecv irrecv2(RECV_PIN2);

int led1 =8;
int led2 =9;
int led3 =10;
int led4 =11;
decode_results results2;


void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  irrecv2.enableIRIn(); // Start the receiver
 
}
void loop() {
  if (irrecv2.decode(&results2))

  {
    if (results2.value == 1086218909)
    {
      digitalWrite(led1, HIGH);
      Serial.println("1ST SWITCH ON");
    }
    else if (results2.value == 1086204629)
    {
      digitalWrite(led1, LOW);
      Serial.println("1ST OFF");
    }
    else if (results2.value == 1086206669)
    {
      digitalWrite(led2, HIGH);
      Serial.println("2 ON");
    }
     else if (results2.value == 1086236759)
    {
      digitalWrite(led2, LOW);
      Serial.println("2 OFF");
    }
     else if (results2.value == 32)
    {
      digitalWrite(led1,HIGH);
      Serial.println("3.1 ON");
    }
     else if (results2.value == 33)
    {
      digitalWrite(led1, LOW);
      Serial.println("3.2 OFF");
    }
     else if (results2.value == 16)
    {
      digitalWrite(led4, HIGH);
      Serial.println("4.1 ON");
    }
     else if (results2.value == 17)
    {
      digitalWrite(led4, LOW);
      Serial.println("4.2 OFF");
    }
    else if (results2.value == 33441975)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println("all OFF");
    }
    else if (results2.value == 33454215)
    {
      digitalWrite(led1, 1);
      digitalWrite(led2,1);
      digitalWrite(led3, 1);
      digitalWrite(led4,1);
      Serial.println("all on");
    }
    else if (results2.value == 3778927144)
    {
      digitalWrite(led1, HIGH);
      Serial.println("1ST SWITCH ON android");
    }
    else if (results2.value == 2908251746)
    {
      digitalWrite(led1, LOW);
      Serial.println("1ST OFF and");
    }
    else if (results2.value == 4120482440)
    {
      digitalWrite(led2, HIGH);
      Serial.println("2 ON and");
    }
     else if (results2.value == 1931099650)
    {
      digitalWrite(led2, LOW);
      Serial.println("2 OFF");
    }
     else if (results2.value == 1167253836)
    {
      digitalWrite(led3,HIGH);
      Serial.println("3 ON");
    }
     else if (results2.value == 1747313982)
    {
      digitalWrite(led3, LOW);
      Serial.println("3 OFF");
    }
     else if (results2.value == 3492333085)
    {
      digitalWrite(led4, HIGH);
      Serial.println("4 ON");
    }
     else if (results2.value == 3119867746)
    {
      digitalWrite(led4, LOW);
      Serial.println("4 OFF");
    }
    else if (results2.value == 591444258)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println("all OFF");
    }
    else if (results2.value == 4105841032)
    {
      digitalWrite(led1, 1);
      digitalWrite(led2,1);
      digitalWrite(led3, 1);
      digitalWrite(led4,1);
      Serial.println("all on");
    }
    irrecv2.resume(); // Receive the nex
    
    }
    

    }



