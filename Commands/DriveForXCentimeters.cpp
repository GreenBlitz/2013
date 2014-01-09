#include "DriveForXCentimeters.h"
#include "math.h"

DriveForXCentimeters::DriveForXCentimeters(float x, bool backwards)
	:CommandBase("DriveForXCentimeters"){
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
	distance = x;
	if(backwards)
		speed = BACKWARD_SPEED;
	else
		speed = SPEED;
}

// Called just before this Command runs the first time
void DriveForXCentimeters::Initialize() {
	chassis->ResetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void DriveForXCentimeters::Execute() {
	chassis->ArcadeDrive(speed, 0.0f);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForXCentimeters::IsFinished() {
	return fabs(chassis->GetEncodersDistance()) >= distance;
}


// Called once after isFinished returns true
void DriveForXCentimeters::End() {
	chassis->ArcadeDrive(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForXCentimeters::Interrupted() {
	End();
}
