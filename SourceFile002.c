#pragma config(Motor,  port1,           ArmMotor,      tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           rightmotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           indep,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          leftmotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main ()
{
while(1 ==1){
	motor[leftmotor]= vexRT[Ch3];
	float n; 
	n = vexRT[Ch2];
	motor[rightmotor]= -n;

	if(vexRT[Btn7U]==1){
			motor[ArmMotor]=-127;
	}
	else if(vexRT[Btn7D] ==1){
		motor[ArmMotor]= 127;
	}
	else{
		motor[ArmMotor]=0;
	}
	if(vexRT[Btn8U]==1){
		motor[indep]= 127;
	}
	else if(vexRT[Btn8D]==1){
		motor[indep] = -127;
	}
	else{
		motor[indep]= 0;
	}


}


}

