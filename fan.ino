void fans_control()
{
  if((D1_flag!=0)||(D2_flag!=0)||(D3_flag!=0))
    {fan_flag=1;}
  else 
    {fan_flag=0;}
  if (fan_flag==0)
    {digitalWrite(fan_relay,HIGH);}
  else if(fan_flag==1)
    {digitalWrite(fan_relay,LOW);}
}
