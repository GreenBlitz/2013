#include "SetSpinnerState.h"

SetSpinnerState::SetSpinnerState(bool in) 
:CommandBase("SetSpinnerState~"){
	// Use requires() here to declare subsystem dependencies
	Requires(buchnah);
	mIn= in;
}

// Called just before this Command runs the first time
void SetSpinnerState::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SetSpinnerState::Execute() {
	if(mIn)
		buchnah->BuchnahIn();
	else
		buchnah->BuchnahOut();
}

// Make this return true when this Command no longer needs to run execute()
bool SetSpinnerState::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void SetSpinnerState::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetSpinnerState::Interrupted() {
}
