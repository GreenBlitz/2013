#ifndef LINEARSHOOTING_H
#define LINEARSHOOTING_H

#include "../CommandBase.h"

class LinearShooting: public CommandBase {
private:
	
	int counter;
public:
	LinearShooting();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
