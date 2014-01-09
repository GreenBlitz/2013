#ifndef SHOOTER_H
#define SHOOTER_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"


/**
 *
 *
 * @author user
 */
class Shooter: public PIDSubsystem {
private:
	//p=0.0000005
	//i=0.000002
	static const double Kp = 0.0; // 5
	static const double Ki = 0.000005; //0.000003; // 2
	static const double Kd = 0.0;
	// for 2 points 4400, 13degrees, 
	//p=0.0000005, i=  0.000002
	Jaguar *motor1;
	Jaguar *motor2;
	Encoder * encoder;
	
public:
	Shooter();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	float GetRPM();
	float GetMotorSpeed();
	void Status();
	void ResetPID();
	bool firstFrizb;
};

#endif
