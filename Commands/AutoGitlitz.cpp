#include "AutoGitlitz.h"
#include "DriveForXCentimeters.h"
#include "LoadX.h"
#include "SetShooterLiftState.h"
#include "ShootAtRPM.h"
#include "DriveForXCentimeters.h"
#include "ShooterDoNothing.h"
#include "SpinnerInAndOut.h"
AutoGitlitz::AutoGitlitz() {
	AddSequential(new SpinnerInAndOut());
	AddParallel(new ShootAtRPM(2750));
	AddSequential(new DriveForXCentimeters(70, true));
	AddSequential(new SetShooterLiftState(true));
	AddSequential(new WaitCommand(1.5));
	AddSequential(new LoadX(6));
	AddParallel(new ShooterDoNothing());
	AddSequential(new SetShooterLiftState(false));
}
