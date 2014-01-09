#include "ChangeShooterSetpoint.h"

ChangeShooterSetpoint::ChangeShooterSetpoint(float increaseValue)
	: CommandBase("ChangeShooterSetpoint"){
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	this->increaseValue = increaseValue;
}

// Called just before this Command runs the first time
void ChangeShooterSetpoint::Initialize() {
	if(shooter->GetMotorSpeed()>0.1)
	{
		shooter->SetSetpoint(shooter->GetSetpoint() + increaseValue);
		SmartDashboard::PutNumber("wanted rpm",shooter->GetSetpoint());
	}
}

// Called repeatedly when this Command is scheduled to run
void ChangeShooterSetpoint::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ChangeShooterSetpoint::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ChangeShooterSetpoint::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChangeShooterSetpoint::Interrupted() {
}
