/*
 * AxisButton.h
 *
 *  Created on: 08/03/2013
 *      Author: user
 */

#ifndef AXISBUTTON_H_
#define AXISBUTTON_H_
#include "WPILib.h"


class AxisButton: public Button {
private:
	Joystick * stick;
	UINT32 axis;
	float value;
public:
	AxisButton(Joystick * stick, UINT32 axis,float value);
	bool Get();
};

#endif /* AXISBUTTON_H_ */
