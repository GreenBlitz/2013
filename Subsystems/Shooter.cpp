#include "Shooter.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "../Commands/ShooterDoNothing.h"
#include "math.h"

Shooter::Shooter() : PIDSubsystem("Shooter", Kp, Ki, Kd) {
	motor1=new Jaguar(SHOOTER_MOTOR1_PORT);
	motor2=new Jaguar(SHOOTER_MOTOR2_PORT);
	motor1->SetExpiration(0.5);
	motor2->SetExpiration(0.5);
	encoder=new Encoder(SHOOTER_ENCODER_A_PORT,
			SHOOTER_ENCODER_B_PORT);
	encoder->SetReverseDirection(true);
	encoder->SetDistancePerPulse(6.0/25.0);
	encoder->Start();
	
	LiveWindow::GetInstance()->AddActuator("Shooter", "Motor1", motor1);
	LiveWindow::GetInstance()->AddActuator("Shooter", "Motor2", motor2);
	
}

double Shooter::ReturnPIDInput() {
	return GetRPM();
}



void Shooter::UsePIDOutput(double output) {
	double KF;
	if(output <= 0)
	{	
		output = 0;
		KF=0;
	}
	else
		KF=0.1;
	
	motor1->Set(output + KF);
	motor2->Set(output + KF);
}

void Shooter::InitDefaultCommand() {
	SetDefaultCommand(new ShooterDoNothing());
}

float Shooter::GetRPM(){
	return encoder->GetRate();
}

float Shooter::GetMotorSpeed()
{
	return motor1->Get();
}

void Shooter::Status() {
	SmartDashboard::PutNumber("encoder_rate", GetRPM());
	SmartDashboard::PutNumber("encoder_get", encoder->Get());
	SmartDashboard::PutNumber("encoder_distance", encoder->GetDistance());
	SmartDashboard::PutNumber("encoder_raw", encoder->GetRaw());
	SmartDashboard::PutNumber("setpoint RPM", GetSetpoint());
	
}
void Shooter::ResetPID()
{
	this->GetPIDController()->Reset();
}
