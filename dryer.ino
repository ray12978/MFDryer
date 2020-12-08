void dryer_statement()
{
  int switchStatus = digitalRead(micro_switch);
  //if((irVal1>=400) && (D1temp_cleaning_flag==1))
  if((irVal1>=430) && (D1temp_cleaning_flag==1))
    {D1_flag++;
     D1_flag==2?D1_flag=0:D1_flag=D1_flag;
     D1temp_cleaning_flag=0;
     }
  //else if(irVal1<400)
  else if(irVal1<430)
    {
      D1temp_cleaning_flag=1;
      }

 // if((irVal2>=330) && (D2temp_cleaning_flag==1) && (clothe_flag==0) && (switchStatus==0))
    if((irVal2>=400) && (D2temp_cleaning_flag==1) && (clothe_flag==0) && (switchStatus==0))
    {
      D2_flag++;
    D2_flag==3?D2_flag=0:D2_flag=D2_flag;
     D2temp_cleaning_flag=0;
     }
  //else if(irVal2<330 && (clothe_flag==0) && (switchStatus==0))
  else if(irVal2<400 && (clothe_flag==0) && (switchStatus==0))
    {D2temp_cleaning_flag=1;
   }
  //if((irVal3>=430) && (D3temp_cleaning_flag==1) && (clothe_flag==0)&& (switchStatus==0))
  if((irVal3>=450) && (D3temp_cleaning_flag==1) && (clothe_flag==0)&& (switchStatus==0))
    {
      D3_flag++;
     D3_flag==3?D3_flag=0:D3_flag=D3_flag;
     D3temp_cleaning_flag=0;
     }
  //else if(irVal3<430 && (clothe_flag==0)&& (switchStatus==0))  
  else if(irVal3<450 && (clothe_flag==0)&& (switchStatus==0))
    {
      D3temp_cleaning_flag=1;
   }    
}

void dryer_control()
{
  if (D1_flag==0)
    {digitalWrite(D1S_relay,HIGH);digitalWrite(D1B_relay,HIGH);}
   // {digitalWrite(D1S_relay,HIGH);digitalWrite(D1B_relay,HIGH);}
  else if(D1_flag==1)
    {digitalWrite(D1S_relay,HIGH);digitalWrite(D1B_relay,LOW);}
  else if(D1_flag==2)
    {digitalWrite(D1S_relay,LOW);digitalWrite(D1B_relay,HIGH);}
  if (D2_flag==0)
    {digitalWrite(D2S_relay,HIGH);digitalWrite(D2B_relay,HIGH);}
    //{digitalWrite(D2S_relay,HIGH);digitalWrite(D2B_relay,HIGH);}
  else if(D2_flag==2)
    {digitalWrite(D2S_relay,HIGH);digitalWrite(D2B_relay,LOW);}
  else if(D2_flag==1)
    {digitalWrite(D2S_relay,LOW);digitalWrite(D2B_relay,HIGH);}
  if (D3_flag==0)
  {digitalWrite(D3S_relay,HIGH);digitalWrite(D3B_relay,HIGH);}
    //{digitalWrite(D3S_relay,HIGH);digitalWrite(D3B_relay,HIGH);}
  else if(D3_flag==2)
    {digitalWrite(D3S_relay,HIGH);digitalWrite(D3B_relay,LOW);}
  else if(D3_flag==1)
    {digitalWrite(D3S_relay,LOW);digitalWrite(D3B_relay,HIGH);}
}
//繼電器low動作
