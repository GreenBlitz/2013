#include "SDBShooting.h"


// Called just before this Command runs the first time
SDBShooting::SDBShooting() : ShootAtRPM(0)  {
	SmartDashboard::PutNumber("wanted rpm", 4590.0);
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	
}

void SDBShooting::Execute() {
	rpm = SmartDashboard::GetNumber("wanted rpm");
	shooter->SetSetpoint(rpm);
}


