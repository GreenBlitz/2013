#include "SetArcadeDrive.h"

SetArcadeDrive::SetArcadeDrive(float speed, float rotation,
		 float timeout) : 
CommandBase("Set Arcade Drive"){
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
	this->speed = speed;
	this->rotation = rotation;
	this->m_timeout = timeout;
	//timer = new Timer();
	
}

// Called just before this Command runs the first time
void SetArcadeDrive::Initialize() {
	SetTimeout(m_timeout);
}

// Called repeatedly when this Command is scheduled to run
void SetArcadeDrive::Execute() {
	chassis->ArcadeDrive(speed, rotation);
}

// Make this return true when this Command no longer needs to run execute()
bool SetArcadeDrive::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void SetArcadeDrive::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetArcadeDrive::Interrupted() {
}
