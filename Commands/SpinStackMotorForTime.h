#ifndef SPINSTACKMOTORFORTIME_H
#define SPINSTACKMOTORFORTIME_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SpinStackMotorForTime: public CommandBase {
private:
	float speed;
	float time;
public:
	SpinStackMotorForTime(float speed, float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
