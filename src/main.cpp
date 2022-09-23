#include <Arduino.h>

/*
"StAuth10222: I Michael Mena, 000817498 certify that this material is my original work. 
No other person's work has been used without due acknowledgement. I have not made my work available to anyone else."
*/

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int iVal;
  iVal = analogRead(A0);
  /*
  part 1
  double percentage = ((double)iVal / 1024);
  double answer = 3.3 * percentage;
  //Serial.println("iVal: "+String(iVal));
  //Serial.println("Percentage: "+String(percentage));
  Serial.println("Digitized Value of " + String(iVal) + " is equal to the digital value of " + String(answer));
  delay(500);
  // put your main code here, to run repeatedly:
  */
  // part 2
  double percentage = ((double)iVal / 1024);
  int answer = 50 * percentage;
  String feels = "";


if (answer < 10){
  feels += "Too cold!";
  }else if (answer < 15)
  {
    feels += "Cool";
  }
  else if (answer < 20)
  {
    feels += "Perfect";
  }
  else if (answer < 25)
  {
    feels += "Warm";
  }
  else if (answer < 30)
  {
    feels += "Hot";
  }
  else
  {
    feels += "Too Hot!";
  }
  

  Serial.println("The temperature is "+ (String)answer + " which is "+ feels);
  delay(500);
}
