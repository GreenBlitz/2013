#include "SpinStackMotorForTime.h"

SpinStackMotorForTime::SpinStackMotorForTime(float speed, float time)
: CommandBase("SpinStackMotorForTime"){
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(spinner);
	this->speed = speed;
	this->time = time;
}

// Called just before this Command runs the first time
void SpinStackMotorForTime::Initialize() {
	SmartDashboard::PutBoolean("spinmotorfor time", true);
	SetTimeout(this->time);
}

// Called repeatedly when this Command is scheduled to run
void SpinStackMotorForTime::Execute() {
	spinner->SetMotorSpeed(speed);
}

// Make this return true when this Command no longer needs to run execute()
bool SpinStackMotorForTime::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void SpinStackMotorForTime::End() {
	//spinner->SetMotorSpeed(0.0);
	SmartDashboard::PutBoolean("spinmotorfor time", false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinStackMotorForTime::Interrupted() {
	End();
}
