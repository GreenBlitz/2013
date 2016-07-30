#ifndef SHOOTATVOLTAGEFROMSDB_H
#define SHOOTATVOLTAGEFROMSDB_H

#include "../CommandBase.h"

/**
 *
 *
 * @author programer
 */
class ShootAtVoltageFromSDB: public CommandBase {
private:
	double lastVolt, currentVolt;
	int count;
	static const int MAX_COUNT = 750;
public:
	ShootAtVoltageFromSDB();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
