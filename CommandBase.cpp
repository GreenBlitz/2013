#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Robotmap.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

// Initialize a single static instance of all of your subsystems to NULL
OI* CommandBase::oi = NULL;
Compressor * CommandBase::compressor = NULL;
Chassis * CommandBase::chassis = NULL;
ShooterLift * CommandBase::shooterLift = NULL;
Spinner* CommandBase::spinner = NULL;
Buchnah* CommandBase::buchnah =NULL;
Shooter * CommandBase::shooter = NULL;


void CommandBase::init() {
	compressor = new Compressor(COMPRESSOR_PRESSURE_SWITCH, COMPRESSOR_RELAY);
	chassis = new Chassis();
	shooterLift = new ShooterLift();
	spinner = new Spinner();
	buchnah = new Buchnah();
	shooter = new Shooter();
	
	oi = new OI();
}



void CommandBase::Status() {
	chassis->Status();
	shooterLift->Status();
	shooter->Status();
	SmartDashboard::PutData(spinner);
}
