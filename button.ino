void fogger_button()
{
   int switchStatus = digitalRead(fogger_switch_button); 
   if((fogger_switch_temp_cleaning_flag==1) && (switchStatus==1))
   {
    fogger_flag==1?fogger_flag=0:fogger_flag=1;
    digitalWrite(FOG_relay,fogger_flag);
    fogger_switch_temp_cleaning_flag=0;
   }
   else if (switchStatus==0)
   {fogger_switch_temp_cleaning_flag=1;}
}
void close_button()
{
  int switchStatus = digitalRead(closing_button); 
   if((closing_temp_cleaning_flag==1) && (switchStatus==1))
   {
    butflag++;
    butflag>=3?butflag=0:butflag=butflag; 
    closing_temp_cleaning_flag=0; 
   }
   else if (switchStatus==0)
   {closing_temp_cleaning_flag=1;}
   if (butflag==1)
   {
    D1_flag=1;
    D2_flag=1;
    D3_flag=1;
    fan_flag=1;
    D1temp_cleaning_flag=0;
    D2temp_cleaning_flag=0;
    D3temp_cleaning_flag=0;
    } 
   else if (butflag==2)
   {
    D1_flag=0;
    D2_flag=0;
    D3_flag=0;
    fan_flag=0;
    D1temp_cleaning_flag=0;
    D2temp_cleaning_flag=0;
    D3temp_cleaning_flag=0;
    butflag=0;
   }
   }
