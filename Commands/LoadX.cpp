#include "LoadX.h"
#include "SetSpinnerState.h"
#include "LinearShooting.h"
#include "ShooterDoNothing.h"
#include "SpinStackMotorForTime.h"
#include "SpinnerInAndOut.h"
#include "../CommandBase.h"
//bool LoadX::IsFinished()
//{
	//return CommandGroup::IsFinished();
//}

LoadX::LoadX(int x) {
	for(int i=0;i<x;i++){
		//AddSequential(new LinearShooting());
		AddSequential(new SpinStackMotorForTime(1.0, 0.1));
		AddSequential(new SpinStackMotorForTime(-0.3, 0.5));
		AddSequential(new SpinnerInAndOut());
	}
}
