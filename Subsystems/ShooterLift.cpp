#include "ShooterLift.h"
#include "../Robotmap.h"
#include "../CommandBase.h"

ShooterLift::ShooterLift() : Subsystem("ShooterLift") {
	sole = new DoubleSolenoid(SHOOTERLIFT_SOLENOID_F, SHOOTERLIFT_SOLENOID_R);
	GoToLowAngle();
	//todo: autonomous start in forward
}
    
void ShooterLift::InitDefaultCommand() {
}

bool ShooterLift::IsCurrentlyUp()
{
	return sole->Get() == DoubleSolenoid::kForward;

}



void ShooterLift::GoToHighAngle()
{
	sole->Set(DoubleSolenoid::kForward);

}

void ShooterLift::GoToLowAngle()
{
	sole->Set(DoubleSolenoid::kReverse);
	

}

void ShooterLift::Status() {
	SmartDashboard::PutBoolean("is shooter up?", IsCurrentlyUp());
}
