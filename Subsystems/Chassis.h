#ifndef CHASSIS_H
#define CHASSIS_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author user
 */
class Chassis: public PIDSubsystem {
private:
	Talon* frontLeft, * rearLeft, * frontRight, * rearRight;
	RobotDrive * drive;
	Gyro* gyro;
	//TODO: change the pid
	static const double Kp = 1.0 / 24.0; 
	static const double Ki = 1.0/750.0;
	static const double Kd = 0.0;

public:
	Chassis();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void ArcadeDrive(Joystick* stick);
	void SetSafety(bool safety);
	void ArcadeDrive(float forward, float rotation);
	void TankDrive(Joystick* leftStick,Joystick* rightStick);
	void TankDrive(float left,float right);
	void ResetGyro();
	float GetAngle();
	void Status();
};

#endif
