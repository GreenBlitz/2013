#include "OI.h"
#include "Commands/TurnByXDegrees.h"
#include "Commands/SetShooterLiftState.h"
#include "Commands/ShootAtRPM.h"
#include "Commands/SDBShooting.h"
#include "Commands/ShootAtVoltage.h"
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
	mainDriver = new Joystick(1);
	subDriver = new Joystick(2);
	mainDriverButtons =  new JoystickButton*[13];
	subDriverButtons = new JoystickButton*[13];
	for (int i=1; i<13; i++){
		mainDriverButtons[i] = new JoystickButton(mainDriver,i);
		subDriverButtons[i] = new JoystickButton(subDriver,i);
	}

	/*
	 * snir
	 */
	mainDriverSmallAxis = new AxisButton*[4];
	
	
	
	mainDriverButtons[OI::LOG_RB]->WhenPressed(new SetShooterLiftState(true));
	mainDriverButtons[OI::LOG_LB]->WhenPressed(new SetShooterLiftState(false));
	mainDriverButtons[OI::LOG_A]->WhenPressed(new LoadX(1));
	mainDriverButtons[OI::LOG_X]->WhenPressed(new ShootAtVoltage(0.8));
	mainDriverButtons[OI::LOG_B]->WhenPressed(new ShootAtVoltage(0.5));
	mainDriverButtons[OI::LOG_Y]->WhenPressed(new ShooterDoNothing());
	mainDriverButtons[OI::LOG_Start]->WhenPressed(new SpinnerInAndOut());
	
	
	
	
	/*
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
*/



}

float OI::GetMainRight()
{
	return mainDriver->GetY();
}



float OI::GetMainLeft()
{
	return mainDriver->GetRawAxis(5);
}



