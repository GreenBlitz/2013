#include "TiltServoByJoystick.h"
#include "math.h"

TiltServoByJoystick::TiltServoByJoystick():CommandBase("TiltServoByJoystick") {
	// Use requires() here to declare subsystem dependencies
	Requires(cameraTilt);
}

// Called just before this Command runs the first time
void TiltServoByJoystick::Initialize() {
	//cameraTilt->SetLedState(true);
}

// Called repeatedly when this Command is scheduled to run
void TiltServoByJoystick::Execute() {
	float z = -oi->GetSubDriverJoystick()->GetTwist();
	cameraTilt->SetAngle(128.5+(41.5*z));
}

// Make this return true when this Command no longer needs to run execute()
bool TiltServoByJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TiltServoByJoystick::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltServoByJoystick::Interrupted() {
	
}
