#ifndef SETARCADEDRIVE_H
#define SETARCADEDRIVE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author user
 */
class SetArcadeDrive: public CommandBase {
private:
	float speed;
	float rotation;
	float m_timeout;
	
public:
	SetArcadeDrive(float speed, float rotation, float timeout);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
