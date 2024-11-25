// C++ code
//
int hmd = 0;

void setup()
{
  pinMode(A0, INPUT); //capteur
  pinMode(12, OUTPUT); //LED Rouge
  pinMode(11, OUTPUT); //LED Bleu
  pinMode(10, OUTPUT); //LED Verte
}

void loop()
{
  hmd = analogRead(A0);
  hmd = hmd/8.76;
  
  if(hmd<40)
  {
  	digitalWrite(12,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  
  
  if(hmd>40&&hmd<80)
  {
    digitalWrite(12,LOW);
  	digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  
  
  if(hmd>80)
  {
  	digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(12,LOW);
  }
}