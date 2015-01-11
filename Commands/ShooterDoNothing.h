#ifndef SHOOTERDONOTHING_H
#define SHOOTERDONOTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class ShooterDoNothing: public CommandBase {
private:
public:
	ShooterDoNothing();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
