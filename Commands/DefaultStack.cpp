#include "DefaultStack.h"

DefaultStack::DefaultStack() : CommandBase("DefaultStack") {
	// Use requires() here to declare subsystem dependencies
	Requires(spinner);
}

// Called just before this Command runs the first time
void DefaultStack::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DefaultStack::Execute() {
	//if(shooter->GetRPM()<50.0)
	spinner->SetMotorSpeed(-0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultStack::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DefaultStack::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultStack::Interrupted() {
}
