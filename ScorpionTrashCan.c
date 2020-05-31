#pragma config(Motor,  port2,           motorLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           motorRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           motorHinge,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           motorPinch,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1 == 1)
	{
		motor[motorLeft] = vexRT[Ch2];
		motor[motorRight] = vexRT[Ch3];
			if(vexRT[Btn5U] == 1)
			{
				motor[motorHinge] = 32;
			}
			else if(vexRT[Btn5D] == 1)
			{
			motor[motorHinge] = -32;
			}
			else
			{
				motor[motorHinge] = 0;
			}
			if(vexRT[Btn6U] == 1)
			{
				motor[motorPinch] = 90;
			}
			else if(vexRT[Btn6D] == 1)
			{
				motor[motorPinch] = -90;
			}
			else
			{
				motor[motorPinch] = 0;
			}
	}
}
