#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ShooterDoNothing.h"
#include "Commands/AutoGitlitz.h"
#include "Commands/SetShooterLiftState.h"
#include "Commands/ShootAtRPM.h"
#include "Commands/LoadX.h"
class CommandBasedRobot : public IterativeRobot {
private:
	Command* autonom;
	Command* shoot;
	virtual void RobotInit() {
		CommandBase::init();
		autonom=new AutoGitlitz();
		shoot=new ShootAtRPM(2800);
	}
	
	virtual void AutonomousInit() {
		autonom->Start();
	}
	
	virtual void AutonomousPeriodic() {
		CommandBase::Status();
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		CommandBase::buchnah->BuchnahIn();
		CommandBase::chassis->SetSafety(true);
		shoot->Cancel();
		autonom->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
		CommandBase::Status();
	}
	
	virtual void TestPeriodic() {
		
	}
	
	virtual void DisabledInit() {
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

