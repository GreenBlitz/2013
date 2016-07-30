#include "SetShooterLiftState.h"

SetShooterLiftState::SetShooterLiftState(bool up)
	: CommandBase("SetShooterLiftState"){
	// Use requires() here to declare subsystem dependencies
	Requires(shooterLift);
	this->up = up;
}

// Called just before this Command runs the first time
void SetShooterLiftState::Initialize() {
	if(up) {
		shooterLift->GoToHighAngle();
	}
	else {
		shooterLift->GoToLowAngle();
	}
	
	
}

// Called repeatedly when this Command is scheduled to run
void SetShooterLiftState::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooterLiftState::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SetShooterLiftState::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterLiftState::Interrupted() {
}
