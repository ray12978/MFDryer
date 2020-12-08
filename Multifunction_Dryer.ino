//cny70_test
#include <DHT.h>
#include <SoftwareSerial.h>
/****************Digital腳位******************/
//Dryer
const byte D1B_relay=23;//23.2
const byte D1S_relay=25;//25.3
const byte D2B_relay=27;//27.4
const byte D2S_relay=29;//29.5
const byte D3B_relay=31;//31.6
const byte D3S_relay=33;//33.7

//fogger
const byte FOG_relay=35;//35.8
const byte fogger_switch_button=47;//49.10

//fan
const byte fan_relay=37;//37.9

//button
const byte closing_button=49;//51.11
const byte Dry1Btn;
const byte Dry2Btn;
const byte Dry3Btn;

//switch
const byte micro_switch=53;//12

//dht22
const byte dht_pin=51;//53.13

//bluetooth
SoftwareSerial BT(10, 9);  // 接收腳(RX), 傳送腳(TX)；接HC-06之TXD、RXD
char BTVal;
String BTStr = "";
/**************流程控制用變數**************/
byte fogger_switch_temp_cleaning_flag=0;
byte closing_temp_cleaning_flag=0;

byte D1_flag=0;
byte D2_flag=0;
byte D3_flag=0;
int fogger_flag=0;
byte clothe_flag=0;
byte cnyflag=1;
byte butflag=0;

byte D1temp_cleaning_flag=1;
byte D2temp_cleaning_flag=1;
byte D3temp_cleaning_flag=1;
byte fan_flag=1;

/**************副程式********************/
