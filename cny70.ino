void cny70()
{
  irVal1 = analogRead(cnyPin1);//analogRead(cnyPin1);
  irVal2 = analogRead(cnyPin2);//analogRead(cnyPin2);
  irVal3 = analogRead(cnyPin3);//analogRead(cnyPin3);
  Serial.print(" cny1: ");
  Serial.print(irVal1);
  Serial.print(" cny2: ");
  Serial.print(irVal2);
  Serial.print(" cny3: ");
  Serial.println(irVal3);
}
