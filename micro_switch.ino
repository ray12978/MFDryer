void micro_switch_DHT()
{
  int switchStatus = digitalRead(micro_switch);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if(switchStatus==1)
    {   
     Serial.print("Temp:");
     Serial.println(t);
     Serial.print("Humi:");
     Serial.println(h);
     D2_flag=1;
     D3_flag=1;
     clothe_flag=1;
     if(t>30)
     {D1_flag=0;D2_flag=0;D3_flag=0;}
    }
  else if ((switchStatus==0))
     if(clothe_flag==1)
     {
     D2_flag=0;
     D3_flag=0;
     clothe_flag=0;
     }
}
