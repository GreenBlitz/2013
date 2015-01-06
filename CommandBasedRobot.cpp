#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ShooterDoNothing.h"
#include "Commands/SetShooterLiftState.h"
#include "Commands/ShootAtRPM.h"
#include "Commands/LoadX.h"
class CommandBasedRobot : public IterativeRobot {
private:
	Command* shoot;
	virtual void RobotInit() {
		CommandBase::init();
		shoot=new ShootAtRPM(2800);
		LiveWindow::GetInstance()->AddActuator("stack", "stack?>", CommandBase::spinner->motor);
		CommandBase::compressor->Start();
	}
	
	virtual void AutonomousInit() {
	}
	
	virtual void AutonomousPeriodic() {
		CommandBase::Status();
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		CommandBase::buchnah->BuchnahIn();
		CommandBase::chassis->SetSafety(true);
		shoot->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
		CommandBase::Status();
	}
	
	virtual void TestPeriodic() {
		
	}
	
	virtual void DisabledInit() {
		Scheduler::GetInstance()->RemoveAll();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

