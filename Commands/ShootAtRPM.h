#ifndef SHOOTATRPM_H
#define SHOOTATRPM_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class ShootAtRPM: public CommandBase {
protected:
	float rpm;
public:
	ShootAtRPM(float rpm);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
