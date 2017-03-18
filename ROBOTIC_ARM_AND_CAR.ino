int inByte;
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);

}
void loop()
{
  if (Serial.available() > 0)
  {
  inByte = Serial.read();
  switch (inByte)
  {
    case '1':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      Serial.println("FRONT");
      break;
    case '2':
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      Serial.println("BACK");
      break;
    case '3':
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      Serial.println("LEFT");
      break;
    case '4':
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      Serial.println("RIGHT");
      break;
    case '5':
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      Serial.println("STOP");
      break;
     case 'A':
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      Serial.println("JOINT 1 CLOCK");
      delay(200);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
     case 'B':
      digitalWrite(6, HIGH );
      digitalWrite(7, LOW);
      Serial.println("JOINT 1 ANTICLOCK");
      delay(200);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
     case 'C':
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      Serial.println("JOINT 2 CLOCK");
      delay(200);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      break;
     case 'D':
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      Serial.println("JOINT 2 ANTICLOCK");
      delay(200);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      break;
     case 'E':
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      Serial.println("JOINT 3 CLOCK");
      delay(200);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      break;
     case 'F':
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      Serial.println("JOINT 3 ANTICLOCK");
      delay(200);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      break;
     case 'G':
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      Serial.println("JOINT 4 CLOCK");
      delay(200);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
     case 'H':
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      Serial.println("JOINT 4 ANTICLOCK");
      delay(200);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      break;
     case 'I':
      digitalWrite(14, LOW);
      digitalWrite(15, HIGH);
      Serial.println("JOINT 5 CLOCK");
      delay(200);
      digitalWrite(14, LOW);
      digitalWrite(15, LOW);
      break;
     case 'J':
      digitalWrite(14, HIGH);
      digitalWrite(15, LOW);
      Serial.println("JOINT 5 ANTICLOCK");
      delay(200);
      digitalWrite(14, LOW);
      digitalWrite(15, LOW);
      break;
  }
}}

