#include "SpinnerAlwaysOut.h"


SpinnerAlwaysOut::SpinnerAlwaysOut():CommandBase("SpinnerAlwaysOut") {
	// Use requires() here to declare subsystem dependencies
	Requires(buchnah);
}

// Called just before this Command runs the first time
void SpinnerAlwaysOut::Initialize() {
	buchnah->BuchnahOut();
}

// Called repeatedly when this Command is scheduled to run
void SpinnerAlwaysOut::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool SpinnerAlwaysOut::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SpinnerAlwaysOut::End() {
	buchnah->BuchnahIn();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpinnerAlwaysOut::Interrupted() {
	End();
}
