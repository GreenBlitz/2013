#ifndef STACK_H
#define STACK_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author user
 */
class Stack: public Subsystem {
private:
	DoubleSolenoid *sole;
	Talon *motor;
	
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Stack();
	void SetMotorSpeed(float speed);
	void PushPistonInside();
	void PushPistonOutside();
	bool IsPistonInside();
	void InitDefaultCommand();
	void Status();
};

#endif
