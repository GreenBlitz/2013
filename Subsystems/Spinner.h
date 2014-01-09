#ifndef SPINNER_H
#define SPINNER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Spinner: public Subsystem {
private:
	Talon* motor;
public:
	Spinner();
	void InitDefaultCommand();
	void SetMotorSpeed(float speed);
};

#endif
