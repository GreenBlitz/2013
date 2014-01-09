#ifndef SETSPINNERSTATE_H
#define SETSPINNERSTATE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SetSpinnerState: public CommandBase {
private:
	bool mIn;
public:
	SetSpinnerState(bool in);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
