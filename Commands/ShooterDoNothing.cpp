#include "ShooterDoNothing.h"

ShooterDoNothing::ShooterDoNothing() : CommandBase("ShooterDoNothing") {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	Requires(spinner);
}

// Called just before this Command runs the first time
void ShooterDoNothing::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShooterDoNothing::Execute() {
	double k = -0.3;
	shooter->UsePIDOutput(0.0);
	
	spinner->SetMotorSpeed(k);
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterDoNothing::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShooterDoNothing::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterDoNothing::Interrupted() {
}
