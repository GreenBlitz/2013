#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "AxisButton.h"
class OI {
private:
	static const int LEFT_JOYSTICK_PORT =1;
	static const int RIGHT_JOYSTICK_PORT =2;
	static const int SUB_JOYSTICK_PORT = 3;
	static const int JOYSTICK_BUTTONS_COUNT =12;

	Joystick* leftStick, * rightStick, * subStick;

	JoystickButton* leftStickButtons[JOYSTICK_BUTTONS_COUNT];
	JoystickButton* rightStickButtons[JOYSTICK_BUTTONS_COUNT];
	JoystickButton* subStickButtons[JOYSTICK_BUTTONS_COUNT];
	AxisButton* topAxis, * bottomAxis, *leftAxis, *rightAxis; 
	void mapJoysticks();
public:
	OI();
	Joystick* GetLeftJoystick();
	Joystick* GetRightJoystick();
	Joystick* GetSubDriverJoystick();

	JoystickButton* GetLeftJSButton(int n);
	JoystickButton* GetRightJSButton(int n);
	JoystickButton* GetSubJSButton(int n);
};

#endif
