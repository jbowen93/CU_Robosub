void pid(int error, int time)
{
  //Gains
  #define KP 1
  #define KI 1
  #define KD 1
  
  //Calculate Delta t
  int current_time = (time - timer);
  int delta_t = current_time - previous_time;
  int previous_time = current_time;

  //Calculate Integrator Error
  int I_error = I_error + error*delta_t;
  
  //Calculate Derivative Error
  int D_error = (error-previous_error)/delta_t;
  int previous_error = error;
  
  return ((error * KP) + (I_error * KI) + (D_error * KD))
}



  
  