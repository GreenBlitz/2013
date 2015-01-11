#include "TankDriveCommand.h"

TankDriveCommand::TankDriveCommand() :CommandBase("TankDrive"){
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
}

// Called just before this Command runs the first time
void TankDriveCommand::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void TankDriveCommand::Execute() {
	chassis->TankDrive(oi->GetMainLeft(),oi->GetMainRight());

}

// Make this return true when this Command no longer needs to run execute()
bool TankDriveCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDriveCommand::End() {
	chassis->ArcadeDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDriveCommand::Interrupted() {
}
