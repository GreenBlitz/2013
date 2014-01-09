#include "CameraTilt.h"
#include "../Robotmap.h"

CameraTilt::CameraTilt() :
	Subsystem("CameraTilt") {
	servo = new Servo(CAMERA_SERVO_VERTICAL_PORT);
	led = new Relay(CAMERA_LED_PORT, Relay::kForwardOnly);
	
	SetLedState(true);
}

void CameraTilt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
}

void CameraTilt::SetAngle(float angle) {
	servo->SetAngle(angle);
}

float CameraTilt::GetAngle() {
	return servo->GetAngle();
}

void CameraTilt::SetAngleRelative(float dAngle) {
	float absAngle = servo->GetAngle() + dAngle;
	if (absAngle > Servo::GetMaxAngle())
		servo->SetAngle(Servo::GetMaxAngle());
	else if (absAngle < Servo::GetMinAngle())
		servo->SetAngle(servo->GetMinAngle());
	else
		servo->SetAngle(absAngle);
}

void CameraTilt::SetLedState(bool on) {
	if (on)
		led->Set(Relay::kForward);
	else
		led->Set(Relay::kOff);
}
void CameraTilt::Status() {

}

void CameraTilt::GoToLowAngle() {
	servo->SetAngle(MIDDLE_ANGLE + LOW_ANGLE);
}

void CameraTilt::GoToHighAngle() {
	servo->SetAngle(MIDDLE_ANGLE + HIGH_ANGLE);
}
