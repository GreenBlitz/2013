#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "OI.h"
#include "SubSystems/Chassis.h"
#include "SubSystems/ShooterLift.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Spinner.h"
#include "Subsystems/Buchnah.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	static void init();
	static void Status();
	// Create a single static instance of all of your subsystems
	static Chassis * chassis;
	static OI *oi;
	static Compressor *	compressor;
	static ShooterLift* shooterLift;
	static Buchnah* buchnah;
	static Spinner* spinner;
	static Shooter * shooter;
	
};

#endif
