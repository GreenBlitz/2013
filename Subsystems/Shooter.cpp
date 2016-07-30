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
	
	encoderVals = new queue<double>;
	
	LiveWindow::GetInstance()->AddActuator("Shooter", "Motor1", motor1);
	LiveWindow::GetInstance()->AddActuator("Shooter", "Motor2", motor2);
	
}


double Shooter::ReturnPIDInput() {
	return 0;//GetRPM();
}


void Shooter::setBothMotors(){
	motor2->Set(motor1->Get());
}

void Shooter::UsePIDOutput(double output) {
	//double KF;
	//if(output <= 0)
	//{
	//	output = 0;
	//	KF=0;
	//}
	//else
	//	KF=0.1;
	
	//motor1->Set(output + KF);
	//motor2->Set(output + KF);
}

void Shooter::InitDefaultCommand() {
	SetDefaultCommand(new ShooterDoNothing());
}

void Shooter::SetMotors(float motor1Val, float motor2Val){

	SmartDashboard::PutNumber("output to shooter", motor1Val);
	motor1->Set(motor1Val);
	motor2->Set(motor2Val);
}

double Shooter::GetRawRPM(){
	return encoder->GetRate();
}

float Shooter::GetRPM(){
	encoderVals->push(encoder->GetRate());
	if(encoderVals->size() > 50)
		encoderVals->pop();
	
	queue<double> temp(*encoderVals);
	double sum = 0;
	
	while(!temp.empty()){
		sum += temp.front();
		temp.pop();
	}
	SmartDashboard::PutNumber("encoder vals sum", sum / encoderVals->size());
	SmartDashboard::PutNumber("encoder vals size", encoderVals->size());
	
	return sum / encoderVals->size();
}

float Shooter::GetMotorSpeed()
{
	return motor1->Get();
}

void Shooter::Status() {
	SmartDashboard::PutNumber("encoder_rate", GetRPM());
	
}
void Shooter::ResetPID()
{
	this->GetPIDController()->Reset();
}
