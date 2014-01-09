/*
 * AxisButton.cpp
 *
 *  Created on: 08/03/2013
 *      Author: user
 */

#include "AxisButton.h"

AxisButton::AxisButton(Joystick *stick, UINT32 axis, float value)
{
	this->stick=stick;
	this->axis=axis;
	this->value=value;
}



bool AxisButton::Get()
{
	return stick->GetRawAxis(axis)==value;
}


