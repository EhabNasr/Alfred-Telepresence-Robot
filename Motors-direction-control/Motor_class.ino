void MOTORM::attach( byte MOen, byte MO1 )
{
  
 MOTORM::enm=MOen;
 MOTORM::in1m=MO1;
 
 
 pinMode(MOen,OUTPUT);
  pinMode(MO1,OUTPUT);
  pstatem=0;
  statem=0;
 
}


void MOTORM::write(boolean MOdir,byte MOspeed)
{ 
      MOTORM::statem=MOdir ;
      
      if(statem!=pstatem)
      {
  analogWrite(enm,0);
  digitalWrite(in1m,HIGH);
  
  delay(20);
  //Serial.println("here");
      }
      
 MOspeed=constrain(MOspeed,0,254);
 analogWrite(enm,MOspeed);
  digitalWrite(in1m,MOdir);
 
  pstatem=statem ;
}

void MOTORM::stop()
{
  analogWrite(enm,0);
  digitalWrite(in1m,HIGH);
 
}
