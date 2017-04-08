/* CONNET OUT TO PIN NO 2 AND DOWNLOAD THE LIBRARY*//* CONNET OUT TO PIN NO 2 AND DOWNLOAD THE LIBRARY*/
#include <IRremote.h>

int RECV_PIN2 = 2;

IRrecv irrecv2(RECV_PIN2);
int led =8;
decode_results results2;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  irrecv2.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv2.decode(&results2)) {
    if (results2.value ==1874349765)
    {
      digitalWrite(led, HIGH);
      Serial.println(".");
    }
    else if (results2.value ==427268799)
    {
      digitalWrite(led, LOW);
      Serial.println("....");
    }
   
      Serial.println(results2.value);
    irrecv2.resume(); // Receive the next value
  }
}
