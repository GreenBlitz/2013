#ifndef LOADX_H
#define LOADX_H

#include "Commands/CommandGroup.h"

/**
 *
 *
 * @author user
 */
class LoadX: public CommandGroup {
private:
	static const double WAIT_TIME = 0.1;
protected:
	virtual bool IsFinished();
public:	
	LoadX(int x);
};

#endif
