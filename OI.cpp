#include "OI.h"
#include "Commands/TurnByXDegrees.h"
#include "Commands/SetShooterLiftState.h"
#include "Commands/ShootAtRPM.h"
#include "Commands/SDBShooting.h"
#include "Commands/LoadX.h"
#include "Commands/SetArcadeDrive.h"
#include "Commands/SetSpinnerState.h"
#include "Commands/ShooterDoNothing.h"
#include "Commands/SpinnerInAndOut.h"
#include "Commands/SlowTankDrive.h"

#include "Commands/SpinStackMotorForTime.h"
#include "Commands/SpinnerAlwaysOut.h"
#include "Commands/ChangeShooterSetpoint.h"
OI::OI() {
	leftStick = new Joystick(LEFT_JOYSTICK_PORT);
	rightStick = new Joystick(RIGHT_JOYSTICK_PORT);
	subStick = new Joystick(SUB_JOYSTICK_PORT);

	for (int i = 0; i < JOYSTICK_BUTTONS_COUNT; i++) {
		leftStickButtons[i] = new JoystickButton(leftStick, i + 1);
		rightStickButtons[i] = new JoystickButton(rightStick, i + 1);
		subStickButtons[i] = new JoystickButton(subStick, i + 1);
	}
	topAxis = new AxisButton(subStick, 6, 1);
	bottomAxis = new AxisButton(subStick, 6, -1);
	leftAxis = new AxisButton(subStick, 5, 1);
	rightAxis = new AxisButton(subStick, 5, -1);
	//SmartDashboard::PutData(new DriveForXCentimeters(0,false));
	mapJoysticks();
}

void OI::mapJoysticks() {
	Command *shooterLiftUp = new SetShooterLiftState(true);
	Command *shooterLiftDown = new SetShooterLiftState(false);

	Command* slowTankDrive = new SlowTankDrive();
	//left
	GetLeftJSButton(1)->WhileHeld(slowTankDrive);
	GetLeftJSButton(2)->WhenPressed(new SetArcadeDrive(0.35, 0.0, 0.2));
	GetLeftJSButton(3)->WhenPressed(new SetArcadeDrive(-0.35, 0.0, 0.1));
	GetLeftJSButton(4)->WhenPressed(new SetArcadeDrive(0.0, -0.35, 0.1));
	GetLeftJSButton(5)->WhenPressed(new SetArcadeDrive(0.0, 0.35, 0.1));

	//right
	GetRightJSButton(1)->WhileHeld(slowTankDrive);
	GetRightJSButton(2)->WhenPressed(shooterLiftDown);
	GetRightJSButton(3)->WhenPressed(shooterLiftUp);
	GetRightJSButton(11)->WhileHeld(new SpinnerAlwaysOut());
	//sub
	GetSubJSButton(1)->WhenPressed(new LoadX(1));
	GetSubJSButton(2)->WhenPressed(new ShooterDoNothing());
	GetSubJSButton(3)->WhenPressed(new SpinnerInAndOut());
	GetSubJSButton(4)->WhenPressed(shooterLiftDown);
	GetSubJSButton(5)->WhenPressed(new SpinStackMotorForTime(-0.5, 100.0));
	GetSubJSButton(6)->WhenPressed(shooterLiftUp);
	GetSubJSButton(7)->WhenPressed(new SDBShooting());
	GetSubJSButton(8)->WhenPressed(new ShootAtRPM(2750));
	GetSubJSButton(9)->WhenPressed(new ChangeShooterSetpoint(-25));
	GetSubJSButton(10)->WhenPressed(new ChangeShooterSetpoint(25));
	topAxis->WhenPressed(new SetArcadeDrive(0.35, 0.0, 0.2));
	bottomAxis->WhenPressed(new SetArcadeDrive(-0.35, 0.0, 0.2));
	leftAxis->WhenPressed(new SetArcadeDrive(0.0, 0.7, 0.2));
	rightAxis->WhenPressed(new SetArcadeDrive(0.0, -0.7, 0.2));
}

JoystickButton* OI::GetLeftJSButton(int n) {
	return leftStickButtons[n - 1];
}

JoystickButton* OI::GetRightJSButton(int n) {
	return rightStickButtons[n - 1];
}

JoystickButton* OI::GetSubJSButton(int n) {
	return subStickButtons[n - 1];
}

Joystick* OI::GetLeftJoystick() {
	return leftStick;
}
Joystick* OI::GetRightJoystick() {
	return rightStick;
}
Joystick* OI::GetSubDriverJoystick() {
	return subStick;
}
