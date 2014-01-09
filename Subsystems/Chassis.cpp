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
	drive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
	drive->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
	drive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	drive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	drive->SetExpiration(0.5);
	gyro = new Gyro(CHASSIS_GYRO_PORT);
	leftEncoder = new Encoder(CHASSIS_LEFT_ENCODER_A, CHASSIS_LEFT_ENCODER_B);
	rightEncoder = new Encoder(CHASSIS_RIGHT_ENCODER_A, CHASSIS_RIGHT_ENCODER_B);
	leftEncoder->SetDistancePerPulse(DISTANCE_PER_PULSE);
	rightEncoder->SetDistancePerPulse(DISTANCE_PER_PULSE);
	leftEncoder->Start();
	rightEncoder->Start();
	leftEncoder->SetReverseDirection(true);
	ResetEncoders();
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
	SmartDashboard::PutNumber("leftEncoder",leftEncoder->GetDistance());
	SmartDashboard::PutNumber("rightEncoder",rightEncoder->GetDistance());
	SmartDashboard::PutNumber("average Encoder",GetEncodersDistance());
	//SmartDashboard::PutNumber("gyro angle", gyro->GetAngle());
}

float Chassis::GetEncodersDistance() {
	return (leftEncoder->GetDistance() + rightEncoder->GetDistance()) / 2;
}

void Chassis::TankDrive(float left, float right)
{

	drive->TankDrive(left,right,false);
}

void Chassis::ResetEncoders() {
	leftEncoder->Reset();
	rightEncoder->Reset();
}
