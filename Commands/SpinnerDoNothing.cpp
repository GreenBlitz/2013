#include "SpinnerDoNothing.h"

SpinnerDoNothing::SpinnerDoNothing() : CommandBase("SpinnerDoNothing") {
	Requires(spinner);
}

// Called just before this Command runs the first time
void SpinnerDoNothing::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SpinnerDoNothing::Execute() {
	spinner->SetMotorSpeed(-0.3f);
}

// Make this return true when this Command no longer needs to run execute()
bool SpinnerDoNothing::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SpinnerDoNothing::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinnerDoNothing::Interrupted() {
}
