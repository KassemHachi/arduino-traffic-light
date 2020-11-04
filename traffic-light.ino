int  green = 2 ;
int  orange = 3 ;
int  red = 4 ;
long reddelay = 50000 ;
long greendelay = 30000 ;
long orangedelay = 3000 ;
void setup()
{
  pinMode(green, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  low();
  digitalWrite(red, HIGH);
  delay(reddelay);
  low();
  digitalWrite(green, HIGH);
  delay(greendelay);
  low();
  digitalWrite(orange, HIGH);
  delay(orangedelay);
}
void low(){
digitalWrite(green, LOW);
digitalWrite(orange, LOW);
digitalWrite(red, LOW);
}
