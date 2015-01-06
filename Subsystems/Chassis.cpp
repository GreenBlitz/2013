#include "Chassis.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "../Commands/TankDriveCommand.h"

Chassis::Chassis() : PIDSubsystem("Chassis", Kp, Ki, Kd) {
	frontLeft = new Talon(CHASSIS_TALON_TL_PORT);
	rearLeft = new Talon(CHASSIS_TALON_BL_PORT);
	frontRight = new Talon(CHASSIS_TALON_TR_PORT);
	rearRight = new Talon(CHASSIS_TALON_BR_PORT);
	drive = new RobotDrive(frontLeft, rearLeft, frontRight, rearRight);
	drive->SetExpiration(0.5);
	gyro = new Gyro(CHASSIS_GYRO_PORT);
}

double Chassis::ReturnPIDInput() {
	return gyro->GetAngle();
}

void Chassis::UsePIDOutput(double output) {
	drive->ArcadeDrive(0.0, output, false);
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TankDriveCommand());
}

void Chassis::ArcadeDrive(Joystick *stick)
{
	drive->ArcadeDrive(stick);
}

void Chassis::ArcadeDrive(float forward, float rotation)
{
	drive->ArcadeDrive(forward, rotation, false);
}


void Chassis::SetSafety(bool safety){
	drive->SetSafetyEnabled(safety);
}

void Chassis::ResetGyro()
{
	gyro->Reset();
}

float Chassis::GetAngle()
{
	return gyro->GetAngle();
}

void Chassis::TankDrive(Joystick* leftStick,Joystick* rightStick){
	this->TankDrive(leftStick->GetY(), rightStick->GetY());
}

void Chassis::Status() {
}

void Chassis::TankDrive(float left, float right)
{

	drive->TankDrive(left,right,false);
}
