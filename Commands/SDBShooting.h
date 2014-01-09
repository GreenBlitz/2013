#ifndef SDBSHOOTING_H
#define SDBSHOOTING_H

#include "../CommandBase.h"
#include "ShootAtRPM.h"
/**
 *
 *
 * @author user
 */
class SDBShooting: public ShootAtRPM {
public:
	SDBShooting();
	virtual void Execute();
};

#endif
