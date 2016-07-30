#include "SlowTankDrive.h"

SlowTankDrive::SlowTankDrive():
CommandBase("SlowTankDrive"){
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
}

// Called just before this Command runs the first time
void SlowTankDrive::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void SlowTankDrive::Execute() {
	chassis->TankDrive(oi->GetMainLeft()/2,
			oi->GetMainRight()/2);
}

// Make this return true when this Command no longer needs to run execute()
bool SlowTankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SlowTankDrive::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SlowTankDrive::Interrupted() {
}
