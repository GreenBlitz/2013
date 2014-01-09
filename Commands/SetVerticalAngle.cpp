#include "SetVerticalAngle.h"

SetVerticalAngle::SetVerticalAngle(float angle):CommandBase("SetVerticalAngle") {
	// Use requires() here to declare subsystem dependencies
	Requires(cameraTilt);
	this->angle= angle;
}

// Called just before this Command runs the first time
void SetVerticalAngle::Initialize() {
	cameraTilt->SetAngle(angle);
	//cameraTilt->SetLedState(true);
}

// Called repeatedly when this Command is scheduled to run
void SetVerticalAngle::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool SetVerticalAngle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SetVerticalAngle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetVerticalAngle::Interrupted() {
	
}
