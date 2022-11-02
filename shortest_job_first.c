// SJF Code
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 7;
int led5 = 6;
int led6 = 5;

void setup()
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
 
}
void loop()

{

  digitalWrite(led5, HIGH);
  delay(1000); // Delay time for 1 second(s)
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(2000); // Delay time for 2 second(s)
  digitalWrite(led6, LOW);
  digitalWrite(led4, HIGH);
  delay(3000); // Delay time for 3 second(s)
  digitalWrite(led4, LOW);
  digitalWrite(led2, HIGH);
  delay(5000); // Delay time for 5 second(s)
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(8000); // Delay time for 8 second(s)
  digitalWrite(led3, LOW);
  digitalWrite(led1, HIGH);
  delay(10000); // Delay time for 10 second(s)
  digitalWrite(led1, LOW);

}
