#include "LinearShooting.h"
#include "math.h"
LinearShooting::LinearShooting() :
	CommandBase("LinearShooting") {

}

// Called just before this Command runs the first time
void LinearShooting::Initialize() {
	SmartDashboard::PutBoolean("shooter ready",false);
	counter = 0;
}

// Called repeatedly when this Command is scheduled to run
void LinearShooting::Execute() {
	if (shooter->GetRPM() > (shooter->GetSetpoint() - 200.0)
			&& shooter->GetRPM() < (shooter->GetSetpoint() + 3000.0))
		counter++;
	else if (counter > 0) 
	{
		counter--;
	}
	SmartDashboard::PutNumber("counter", counter);
}

// Make this return true when this Command no longer needs to run execute()
bool LinearShooting::IsFinished() {

	if (shooter->firstFrizb && counter > 30) {
		shooter->firstFrizb = false;
		return true;
	}
	return !shooter->firstFrizb 
			&& (counter > 10 );//|| IsTimedOut());
}

// Called once after isFinished returns true
void LinearShooting::End() {
	SmartDashboard::PutBoolean("shooter ready",true);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LinearShooting::Interrupted() {
	End();
}
