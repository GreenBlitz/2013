#include "ShootAtRPM.h"

ShootAtRPM::ShootAtRPM(float rpm) : CommandBase("ShootAtRPM"){
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	this->rpm = rpm;
}

// Called just before this Command runs the first time
void ShootAtRPM::Initialize() {
	compressor->Stop();
	shooter->ResetPID();
	shooter->SetSetpoint(rpm);
	shooter->Enable();
	shooter->firstFrizb=true;
}

// Called repeatedly when this Command is scheduled to run
void ShootAtRPM::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool ShootAtRPM::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootAtRPM::End() {
	shooter->Disable();
	shooter->UsePIDOutput(0.0);
	compressor->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootAtRPM::Interrupted() {
	End();
}
