#ifndef DRIVEFORXCENTIMETERS_H
#define DRIVEFORXCENTIMETERS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class DriveForXCentimeters: public CommandBase {
private:
	static const float SPEED = 0.5;//0.3
	static const float BACKWARD_SPEED = -0.4;
	float distance;
	float speed;
public:
	DriveForXCentimeters(float x, bool backwards);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
