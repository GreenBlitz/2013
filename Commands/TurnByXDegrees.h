#ifndef TURNBYXDEGREES_H
#define TURNBYXDEGREES_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class TurnByXDegrees: public CommandBase {
protected:
	float degrees;
	int counter;
public:
	TurnByXDegrees(float xDegrees);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
