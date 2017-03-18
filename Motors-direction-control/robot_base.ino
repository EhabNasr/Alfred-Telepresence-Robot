#define r_pwm 4 
#define r_dir 5 
#define l_pwm 6 
#define l_dir 7
#define base_speed 130

class MOTORM {
  public:
    void attach( byte, byte);
    void write(boolean, byte);
    void stop();
  private:
    byte enm;
    byte in1m;
    boolean statem;
    boolean pstatem;
}
MOT_R, MOT_L;


void stop()
{
MOT_R.stop();
MOT_L.stop();
}

void setup() {
Serial.begin(9600);
MOT_R.attach(r_pwm, r_dir);
MOT_L.attach(l_pwm, l_dir);
}

void loop() 
{
   if (Serial.available() > 0)
  {
    char c = Serial.read();
   if(c == 'u')
   {
    forward();
   }
   else if(c == 'd')
   {
    backward();
   }
   else if(c == 'r')
   {
    rotate_clk();
   }
   else if(c == 'l')
   {
    rotate_anticlk();
   }
   delay(500);
  }
   else
   {
      stop();
   }
}
