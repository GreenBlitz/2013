#ifndef SETSHOOTERLIFTSTATE_H
#define SETSHOOTERLIFTSTATE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SetShooterLiftState: public CommandBase {
private:
	bool up;
public:
	SetShooterLiftState(bool up);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
