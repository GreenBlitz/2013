#include "ShootAtVoltageFromSDB.h"

ShootAtVoltageFromSDB::ShootAtVoltageFromSDB() : CommandBase("ShootAtVoltageFromSDB"){
	Requires(shooter);
}

// Called just before this Command runs the first time
void ShootAtVoltageFromSDB::Initialize() {
	SmartDashboard::PutNumber("shooter voltage", 0.0);
	lastVolt = 0.0;
	count = 0;
}

// Called repeatedly when this Command is scheduled to run
void ShootAtVoltageFromSDB::Execute() {
	double volt = SmartDashboard::GetNumber("shooter voltage");
	if(currentVolt != volt){
		lastVolt = lastVolt + (volt - lastVolt) * (count / MAX_COUNT);
		currentVolt = volt;
		count = 0;
	}
	
	if(count < MAX_COUNT)
		count++;
	double output = lastVolt + (currentVolt - lastVolt) * ((double)count / MAX_COUNT); // Lerp
	shooter->SetMotors(output, output);
}

// Make this return true when this Command no longer needs to run execute()
bool ShootAtVoltageFromSDB::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootAtVoltageFromSDB::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootAtVoltageFromSDB::Interrupted() {
}
