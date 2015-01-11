#ifndef SPINNERDONOTHING_H
#define SPINNERDONOTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author programer
 */
class SpinnerDoNothing: public CommandBase {
public:
	SpinnerDoNothing();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
