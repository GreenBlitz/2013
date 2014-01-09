#include "TurnByXDegrees.h"
#include "math.h"

TurnByXDegrees::TurnByXDegrees(float xDegrees) 
	: CommandBase("TurnByXDegrees") {
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
	//chassis->SetPercentTolerance(5);
	this->degrees = xDegrees;
	counter = 0;
}

// Called just before this Command runs the first time
void TurnByXDegrees::Initialize() {
	chassis->ResetGyro();
	chassis->SetSetpoint(degrees);
	chassis->Enable();
	SmartDashboard::PutBoolean("centered",false);
}

// Called repeatedly when this Command is scheduled to run
void TurnByXDegrees::Execute() {
	if(fabs((chassis->GetPosition()) 
			- (chassis->GetSetpoint())) < 0.5f)
		counter++;
	else
		counter = 0;	
}

// Make this return true when this Command no longer needs to run execute()
bool TurnByXDegrees::IsFinished() {
	return counter > 10
			|| fabs(oi->GetLeftJoystick()->GetY())>0.3   
			|| fabs(oi->GetRightJoystick()->GetY())>0.3 ;
}

// Called once after isFinished returns true
void TurnByXDegrees::End() {
	chassis->Disable();
	chassis->ArcadeDrive(0.0f, 0.0f);

	SmartDashboard::PutBoolean("centered",true);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnByXDegrees::Interrupted() {
	End();
}
