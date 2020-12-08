void setup() 
{ 
  dht.begin();
  Serial.begin(115200);
  //微動開關
  pinMode(micro_switch, INPUT);
  //按鈕
  pinMode(closing_button , INPUT);
  pinMode(fogger_switch_button, INPUT);
  //光遮斷
  pinMode(cnyPin1 , INPUT);
  pinMode(cnyPin2 , INPUT);
  pinMode(cnyPin3 , INPUT);
  //吹風機之繼電器
  pinMode(D1B_relay, OUTPUT);
  pinMode(D1S_relay, OUTPUT);
  pinMode(D2B_relay, OUTPUT);
  pinMode(D2S_relay, OUTPUT);
  pinMode(D3B_relay, OUTPUT);
  pinMode(D3S_relay, OUTPUT);
  //風扇
  pinMode(fan_relay, OUTPUT);
// 水霧
  pinMode(FOG_relay, OUTPUT);
}
void loop() 
{
  cny70();
  dryer_statement();
  dryer_control();
  fogger_button();
  close_button();
  micro_switch_DHT();
  fans_control();
  delay(200);
}
