#include "Spinner.h"
#include "../Robotmap.h"
#include "../Commands/DefaultStack.h"

Spinner::Spinner() : Subsystem("Spinner") {
	motor = new Victor(STACK_VICTOR_PORT);
	motor->SetExpiration(0.5);
}
    
void Spinner::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DefaultStack());
}

void Spinner::SetMotorSpeed(float speed){
	motor->Set(speed);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
