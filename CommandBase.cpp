#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Robotmap.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

// Initialize a single static instance of all of your subsystems to NULL
OI* CommandBase::oi = NULL;
Chassis * CommandBase::chassis = NULL;
ShooterLift * CommandBase::shooterLift = NULL;
Compressor * CommandBase::compressor = NULL;
Spinner* CommandBase::spinner = NULL;
Buchnah* CommandBase::buchnah =NULL;
Shooter * CommandBase::shooter = NULL;
CameraTilt* CommandBase::cameraTilt = NULL;


void CommandBase::init() {
	chassis = new Chassis();
	shooterLift = new ShooterLift();
	spinner = new Spinner();
	buchnah = new Buchnah();
	shooter = new Shooter();
	cameraTilt = new CameraTilt();
	
	compressor = new Compressor(COMPRESSOR_PRESSURE_SWITCH, COMPRESSOR_RELAY);
	compressor->Start();
	
	oi = new OI();
}



void CommandBase::Status() {
	chassis->Status();
	shooterLift->Status();
	shooter->Status();
	cameraTilt->Status();
	SmartDashboard::PutData(spinner);
}
