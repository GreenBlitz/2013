#include "ShootAtVoltage.h"

double ShootAtVoltage::lastVolt = 0.0;

ShootAtVoltage::ShootAtVoltage(double volt) : CommandBase("ShootAtVoltage") {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	this->volt = volt;
}

// Called just before this Command runs the first time
void ShootAtVoltage::Initialize() {
	count = 0;
}

// Called repeatedly when this Command is scheduled to run
void ShootAtVoltage::Execute() {
	if(count < MAX_COUNT)
		count++;
	double output = ShootAtVoltage::lastVolt + (volt - ShootAtVoltage::lastVolt) * ((double)count / MAX_COUNT); // Lerp
	shooter->SetMotors(output, output);
}

// Make this return true when this Command no longer needs to run execute()
bool ShootAtVoltage::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootAtVoltage::End() {
	ShootAtVoltage::lastVolt = volt;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootAtVoltage::Interrupted() {
	End();
}
