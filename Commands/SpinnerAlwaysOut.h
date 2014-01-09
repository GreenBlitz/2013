#ifndef SPINNERALWAYSOUT_H
#define SPINNERALWAYSOUT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SpinnerAlwaysOut: public CommandBase {
public:
	SpinnerAlwaysOut();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
