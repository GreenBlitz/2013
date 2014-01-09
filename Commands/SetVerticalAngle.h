#ifndef SETVERTICALANGLE_H
#define SETVERTICALANGLE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SetVerticalAngle: public CommandBase {
protected:
	float angle;
public:
	SetVerticalAngle(float angle);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
