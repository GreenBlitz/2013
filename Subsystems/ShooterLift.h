#ifndef SHOOTERLIFT_H
#define SHOOTERLIFT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author user
 */
class ShooterLift: public Subsystem {
private:
	DoubleSolenoid* sole;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ShooterLift();
	void InitDefaultCommand();
	void GoToHighAngle();
	void GoToLowAngle();
	bool IsCurrentlyUp();
	void Status();
};

#endif
