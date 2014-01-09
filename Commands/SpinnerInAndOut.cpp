#include "SpinnerInAndOut.h"
#include "SetSpinnerState.h"
#include "SpinStackMotorForTime.h"

SpinnerInAndOut::SpinnerInAndOut() {
	AddSequential(new SetSpinnerState(false));
	AddSequential(new WaitCommand(0.2));
	AddSequential(new SetSpinnerState(true));
}

