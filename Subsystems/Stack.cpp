#include "Stack.h"
#include "../Robotmap.h"
#include "../Commands/DefaultStack.h"

Stack::Stack() : Subsystem("Stack") {
	motor = new Talon(STACK_TALON_PORT);
	sole = new DoubleSolenoid(
			STACK_DOUBLE_SOLENOID_PORT_F, 
			STACK_DOUBLE_SOLENOID_PORT_R);
	
	motor->SetSafetyEnabled(true);
}
    
void Stack::InitDefaultCommand() {
	SetDefaultCommand(new DefaultStack());
}

void Stack::SetMotorSpeed(float speed)
{
	motor->Set(speed);
}

void Stack::PushPistonInside()
{
	sole->Set(DoubleSolenoid::kForward);
}

void Stack::PushPistonOutside()
{
	sole->Set(DoubleSolenoid::kReverse);
}

bool Stack::IsPistonInside()
{
	return sole->Get() == DoubleSolenoid::kForward;
}

void Stack::Status()
{
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
