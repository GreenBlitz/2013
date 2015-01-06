#ifndef SPINNER_H
#define SPINNER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Spinner: public Subsystem {
private:
public:
	Victor* motor;
	Spinner();
	void InitDefaultCommand();
	void SetMotorSpeed(float speed);
};

#endif
