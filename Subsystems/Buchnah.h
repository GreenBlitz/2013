#ifndef BUCHNAH_H
#define BUCHNAH_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Buchnah: public Subsystem {
private:
	DoubleSolenoid* DS;
public:
	Buchnah();
	void BuchnahOut();
	void BuchnahIn();
	void InitDefaultCommand();
};

#endif
