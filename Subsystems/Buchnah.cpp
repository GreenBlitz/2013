#include "Buchnah.h"
#include "../Robotmap.h"

Buchnah::Buchnah() : Subsystem("Buchnah") {
	DS = new DoubleSolenoid(STACK_DOUBLE_SOLENOID_PORT_F,
							STACK_DOUBLE_SOLENOID_PORT_R);
	
}
    
void Buchnah::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Buchnah::BuchnahOut(){
	DS->Set(DoubleSolenoid::kReverse);
}

void Buchnah::BuchnahIn(){
	DS->Set(DoubleSolenoid::kForward);
}
