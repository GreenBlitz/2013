#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ShooterDoNothing.h"
#include "Commands/SetShooterLiftState.h"
#include "Commands/ShootAtRPM.h"
#include "Commands/LoadX.h"
#include "Commands/SpinStackMotorForTime.h"
class CommandBasedRobot : public IterativeRobot {
private:
	Command* shoot;
	virtual void RobotInit() {
		CommandBase::init();
		shoot=new ShootAtRPM(2800);
		LiveWindow::GetInstance()->AddActuator("stack", "stack?>", CommandBase::spinner->motor);
		CommandBase::compressor->Start();
		SmartDashboard::PutData(Scheduler::GetInstance());
		SmartDashboard::PutData("^^loadx", new LoadX(1));
		SmartDashboard::PutData("^^shootAt800RPM", new ShootAtRPM(800.0));
		SmartDashboard::PutData("^^SpinStackMotorForTime", new SpinStackMotorForTime(-0.5f, 0.5));
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
		while(IsTest()) {
			LiveWindow::GetInstance()->Run();
			Wait(0.05);
		}
	}
	
	virtual void DisabledInit() {
		Scheduler::GetInstance()->RemoveAll();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

