#ifndef SHOOTATVOLTAGE_H
#define SHOOTATVOLTAGE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author programer
 */
class ShootAtVoltage: public CommandBase {
private:
	double volt;
	static double lastVolt;
	int count;
	static const int MAX_COUNT = 750;
public:
	ShootAtVoltage(double volt);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
