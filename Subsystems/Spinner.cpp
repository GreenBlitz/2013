#include "Spinner.h"
#include "../Robotmap.h"
#include "../Commands/SpinnerDoNothing.h"

Spinner::Spinner() : Subsystem("Spinner") {
	motor = new Victor(STACK_VICTOR_PORT);
	motor->SetExpiration(0.5);
	LiveWindow::GetInstance()->AddActuator("Shooter", "Victor", motor);
		
}
    
void Spinner::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new SpinnerDoNothing());
}

void Spinner::SetMotorSpeed(float speed){
	motor->Set(speed);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
