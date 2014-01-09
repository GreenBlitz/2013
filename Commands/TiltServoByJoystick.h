#ifndef TILTSERVOBYJOYSTICK_H
#define TILTSERVOBYJOYSTICK_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class TiltServoByJoystick: public CommandBase {
	
public:
	TiltServoByJoystick();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
