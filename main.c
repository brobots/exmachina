#pragma config(Motor,  port3,           leftForwardMotor,  tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port2,           rightForwardMotor,  tmotorNormal, openLoop)
#pragma config(Motor,  port4,           rightBackMotor,  tmotorNormal, openLoop)
#pragma config(Motor,  port5,           leftBackMotor,  tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port6,           UpperLiftMotor1,  tmotorNormal, openLoop)
#pragma config(Motor,  port7,           UpperLiftMotor2,  tmotorNormal, openLoop)
#pragma config(Motor,  port8,           BaseLiftMotor1,  tmotorNormal, openLoop)
#pragma config(Motor,  port9,           BaseLiftMotor2,  tmotorNormal, openLoop)

#pragma platform(VEX)
//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)   //Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"


/* BroBots - The Bishop's School 2011-2012 Robotics Team JV Bot */
/* v0.1 */
/*5U clawbaseleft, clawbaseright both 127
5D clawbaseleft, clawbaseright both -127

6U clawmidleft, clawmidright both 127
6D clawmidleft, clawmidright both -127
*/

int threshold = 12;

/* Strategy methods */

void AI()
{
	return;
}


/* Control flow */


void startAutonomousFunctions()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................
	AI();
}

task autonomous()
{
	startAutonomousFunctions(); // so we don't have to deal with multitasking weirdness
}

void startManualMode()
{
	// User control code here, inside the loop

	while (1)
	{

/*	if(vexRT[Btn7D] == 1)
	{
		motor[motorTest] = 127;
	}
	else
	{
		motor[motorTest] = 0;
	}
*/
  //Base Wheels
  //Left Base Wheel
  while (abs(vexRT[Ch3]) > threshold)
  {
    motor[leftForwardMotor] = (vexRT[Ch3]);//Left joystick Y value
    motor[leftBackMotor] = (vexRT[Ch3]);//Left joystick Y value
    motor[rightForwardMotor] = (vexRT[Ch3]);//Right joystick Y value
    motor[rightBackMotor] = (vexRT[Ch3]);//Right joystick Y value

    if(vexRT[Btn7U] == 1)
  {
    motor[BaseLiftMotor1] = 127;
    motor[BaseLiftMotor2] = 127;
  }
  if(vexRT[Btn7D] == 1)
  	{
  	motor[BaseLiftMotor1] = -127;
    motor[BaseLiftMotor2] = -127;
  	}
  if ((vexRT[Btn7D] == 0) && (vexRT[Btn7D] == 0))
  {
    motor[BaseLiftMotor1] = 0;
    motor[BaseLiftMotor2] = 0;
  }

  }
 /* else
  {
    motor[leftForwardMotor] = 0;//Stop the left motor
    motor[leftBackMotor] = 0;//Stop the left motor
    motor[rightForwardMotor] = 0; //Stop the right motor
    motor[rightBackMotor] = 0; //Stop the right motor
  }*/
  while (abs(vexRT[Ch4]) > threshold)
  {
    motor[leftForwardMotor] = (vexRT[Ch4]);//Left joystick Y value
    motor[leftBackMotor] = (-vexRT[Ch4]);//Left joystick Y value
    motor[rightForwardMotor] = (-vexRT[Ch4]);//Right joystick Y value
    motor[rightBackMotor] = (vexRT[Ch4]);//Right joystick Y value

    if ((vexRT[Ch1]) > 13)
    	{
    		motor[leftForwardMotor] = (vexRT[Ch4]);//Left joystick Y value
    motor[leftBackMotor] = (-vexRT[Ch4]);//Left joystick Y value
    motor[rightForwardMotor] = (-vexRT[Ch4])/2;//Right joystick Y value
    motor[rightBackMotor] = (vexRT[Ch4])/2;//Right joystick Y value

    }

    if ((vexRT[Ch1]) < -13)
    	{
    		motor[leftForwardMotor] = (vexRT[Ch4])/2;//Left joystick Y value
    motor[leftBackMotor] = (-vexRT[Ch4])/2;//Left joystick Y value
    motor[rightForwardMotor] = (-vexRT[Ch4]);//Right joystick Y value
    motor[rightBackMotor] = (vexRT[Ch4]);//Right joystick Y value

    }

    if(vexRT[Btn7U] == 1)
  {
    motor[BaseLiftMotor1] = 127;
    motor[BaseLiftMotor2] = 127;
  }
  if(vexRT[Btn7D] == 1)
  	{
  	motor[BaseLiftMotor1] = -127;
    motor[BaseLiftMotor2] = -127;
  	}
  if ((vexRT[Btn7D] == 0) && (vexRT[Btn7D] == 0))
  {
    motor[BaseLiftMotor1] = 0;
    motor[BaseLiftMotor2] = 0;
  }
  }

if(vexRT[Btn7U] == 1)
  {
    motor[BaseLiftMotor1] = 127;
    motor[BaseLiftMotor2] = 127;
  }
  if(vexRT[Btn7D] == 1)
  	{
  	motor[BaseLiftMotor1] = -127;
    motor[BaseLiftMotor2] = -127;
  	}
  if ((vexRT[Btn7D] == 0) && (vexRT[Btn7D] == 0))
  {
    motor[BaseLiftMotor1] = 0;
    motor[BaseLiftMotor2] = 0;
  }
 /* else
  {
    motor[leftForwardMotor] = 0;//Stop the left motor
    motor[leftBackMotor] = 0;//Stop the left motor
    motor[rightForwardMotor] = 0; //Stop the right motor
    motor[rightBackMotor] = 0; //Stop the right motor
  }
  if (abs(vexRT[Ch3]) > threshold)
  {
    motor[leftForwardMotor] = -127;
    motor[leftBackMotor] = 127;
    motor[rightForwardMotor] = 127;
    motor[rightBackMotor] = -127;
  }*/
  while (abs(vexRT[Ch1]) > threshold)
  {
    motor[leftForwardMotor] = (vexRT[Ch1]);//Left joystick Y value
    motor[leftBackMotor] = (vexRT[Ch1]);//Left joystick Y value
    motor[rightForwardMotor] = (-vexRT[Ch1]);//Right joystick Y value
    motor[rightBackMotor] = (-vexRT[Ch1]);//Right joystick Y value

    if(vexRT[Btn7U] == 1)
  {
    motor[BaseLiftMotor1] = 127;
    motor[BaseLiftMotor2] = 127;
  }
  if(vexRT[Btn7D] == 1)
  	{
  	motor[BaseLiftMotor1] = -127;
    motor[BaseLiftMotor2] = -127;
  	}
  if ((vexRT[Btn7D] == 0) && (vexRT[Btn7D] == 0))
  {
    motor[BaseLiftMotor1] = 0;
    motor[BaseLiftMotor2] = 0;
  }
  }

  if ((0 < abs(vexRT[Ch3]) < threshold) || (0 < abs(vexRT[Ch4]) < threshold) || (0 < abs(vexRT[Ch2]) < threshold) || (0 < abs(vexRT[Ch1]) < threshold))
  	{
  		motor[leftForwardMotor] = 0;
    motor[leftBackMotor] = 0;
    motor[rightForwardMotor] = 0;
    motor[rightBackMotor] = 0;
  }

/*  else
  {
  	motor[leftForwardMotor] = 0;//Left joystick Y value
    motor[leftBackMotor] = 0;//Left joystick Y value
    motor[rightForwardMotor] = 0;//Right joystick Y value
    motor[rightBackMotor] = 0;//Right joystick Y value
  }*/
  /*
	   //Base Wheels
  //Left Base Wheel
  if (vexRT[Btn5U] == 1)
  {
  motor[clawbaseleft] = 127;
  motor[clawbaseright] = 127;
  }
  else
  {
  motor[clawbaseleft] = 0;
  motor[clawbaseright] = 0;
  }

  if (vexRT[Btn5D] == 1)
  {
  motor[clawbaseleft] = -127;
  motor[clawbaseright] = -127;
  }
  else
  {
  motor[clawbaseleft] = 0;
  motor[clawbaseright] = 0;
  }

  if (vexRT[Btn6U] == 1)
  {
   motor[clawmidleft] = 127;
   motor[clawmidright] = 127;
  }
  else
  {
   motor[clawmidleft] = 0;
   motor[clawmidright] = 0;
  }

  if (vexRT[Btn6D] == 1)
  {
   motor[clawmidleft] = -127;
   motor[clawmidright] = -127;
  }
  else
  {
   motor[clawmidleft] = 0;
   motor[clawmidright] = 0;
  }
*/
 }
}
task usercontrol()
{
	startManualMode(); // so we don't have to deal with multitasking weirdness
}

void pre_auton()
{
	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...

	// Nothing here.

}
