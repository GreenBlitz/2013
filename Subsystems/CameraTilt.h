#ifndef CAMERATILT_H
#define CAMERATILT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class CameraTilt: public Subsystem {
private:
	Servo* servo;
	Relay* led;
	
	static const float LOW_ANGLE = 13.9;
	static const float HIGH_ANGLE = 35.5;

public:
	static const float MIDDLE_ANGLE = 170.0f / 2.0f;
	CameraTilt();
	void InitDefaultCommand();
	void SetAngle(float angle);
	void SetAngleRelative(float dAngle);
	float GetAngle();
	void SetLedState(bool on);
	void GoToLowAngle();
	void GoToHighAngle();
	void Status();
};

#endif
