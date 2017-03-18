
void forward() {
MOT_R.write(1,base_speed);
MOT_L.write(1,base_speed);
}

void backward(){
MOT_R.write(0,base_speed);
MOT_L.write(0,base_speed);
}

void rotate_clk()
{
MOT_R.write(1,base_speed);
MOT_L.write(0,base_speed);
}
  
void rotate_anticlk()
{
MOT_R.write(0,base_speed);
MOT_L.write(1,base_speed);
}

