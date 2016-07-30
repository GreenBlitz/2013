#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "AxisButton.h"
class OI {
private:
	typedef enum PS3 { PS3_Traingle = 1, PS3_Circle = 2, PS3_X = 3, PS3_Square = 4, PS3_L1 = 5, PS3_R1 = 6,
		PS3_L2 = 7, PS3_R2 = 8, PS3_Select = 9, PS3_Start = 10, PS3_LeftJoystickPressed = 11,
		PS3_RightJoystickPressed = 12
	};
	typedef enum LOG{
		LOG_A=1, LOG_B = 2, LOG_Y = 4, LOG_X= 3, LOG_LB =5, LOG_RB=6, LOG_Select= 7, LOG_Start= 8, LOG_LeftJoystickPressed= 9 , LOG_RightJoystickPressed=10 
	};

	typedef enum PS3_SMALL_AXIS_BUTTONS {
		SMALL_AXIS_UP, SMALL_AXIS_RIGHT, SMALL_AXIS_DOWN, SMALL_AXIS_LEFT
	};

	Joystick *mainDriver, *subDriver;
	JoystickButton **mainDriverButtons,**subDriverButtons;
	JoystickButton **leftHandButtons,**rightHandButtons;
	AxisButton** subDriverSmallAxis, **mainDriverSmallAxis;

public:
	OI();
	float GetMainLeft();
	float GetMainRight();
	Joystick* GetSubDriverJoystick();

	JoystickButton* GetLeftJSButton(int n);
	JoystickButton* GetRightJSButton(int n);
	JoystickButton* GetSubJSButton(int n);
	
	typedef enum PS3_SMALL_AXIS_AXES{
		PS3_SMALL_AXIS_UP_DOWN = 6, PS3_SMALL_AXIS_LEFT_RIGHT = 5
	};

	//LEFT_RIGHT - LEFT is minus, RIGHT is plus;
	typedef enum LOG_SMALL_AXIS_AXES{
		LOG_SMALL_AXIS_LEFT_RIGHT = 6
	};

};

#endif
