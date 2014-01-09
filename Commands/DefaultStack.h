#ifndef DEFAULTSTACK_H
#define DEFAULTSTACK_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class DefaultStack: public CommandBase {
public:
	DefaultStack();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
