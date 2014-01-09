#ifndef SLOWTANKDRIVE_H
#define SLOWTANKDRIVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SlowTankDrive: public CommandBase {
public:
	SlowTankDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
