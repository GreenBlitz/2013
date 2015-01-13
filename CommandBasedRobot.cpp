#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/ShooterDoNothing.h"
#include "Commands/ShootAtVoltageFromSDB.h"
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
		CommandBase::compressor->Start();
		SmartDashboard::PutData("ShooterBySDB", new ShootAtVoltageFromSDB());
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
		SmartDashboard::PutNumber("Avg. RPM", CommandBase::shooter->GetRPM());
		SmartDashboard::PutNumber("RPM", CommandBase::shooter->GetRawRPM());
		
		CommandBase::Status();
	}
	
	virtual void TestPeriodic() {
		while(IsTest()) {
			LiveWindow::GetInstance()->Run();
			LiveWindow::GetInstance()->AddActuator("shooter", "motor2", CommandBase::shooter->motor2);
			CommandBase::shooter->motor1->Set(CommandBase::shooter->motor2->Get());
			Wait(0.05);
		}
	}
	
	virtual void DisabledInit() {
		Scheduler::GetInstance()->RemoveAll();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

