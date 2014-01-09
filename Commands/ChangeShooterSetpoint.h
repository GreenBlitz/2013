#ifndef CHANGESHOOTERSETPOINT_H
#define CHANGESHOOTERSETPOINT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class ChangeShooterSetpoint: public CommandBase {
private:
	float increaseValue;
public:
	ChangeShooterSetpoint(float increaseValue);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
