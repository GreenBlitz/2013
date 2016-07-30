# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := C:/Users/user/Documents/GitHub/2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Final2013_NoVision/$(MODE_DIR)/Final2013_NoVision.out


#Rules

# Final2013_NoVision
ifeq ($(DEBUG_MODE),1)
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Final2013_NoVision/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Final2013_NoVision/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h 
Final2013_NoVision/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Final2013_NoVision/$(MODE_DIR)/% : IDE_DEFINES = 
Final2013_NoVision/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Final2013_NoVision/$(MODE_DIR)/% : DEFINES = 
Final2013_NoVision/$(MODE_DIR)/% : EXPAND_DBG = 0
Final2013_NoVision/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Final2013_NoVision/$(MODE_DIR)/% : CPU = PPC603
Final2013_NoVision/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Final2013_NoVision/$(MODE_DIR)/% : TOOL = gnu
Final2013_NoVision/$(MODE_DIR)/% : TOOL_PATH = 
Final2013_NoVision/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Final2013_NoVision/$(MODE_DIR)/% : LIBPATH = 
Final2013_NoVision/$(MODE_DIR)/% : LIBS = 
Final2013_NoVision/$(MODE_DIR)/% : OBJ_DIR := Final2013_NoVision/$(MODE_DIR)

Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/AxisButton.o : $(PRJ_ROOT_DIR)/AxisButton.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/AutoGitlitz.o : $(PRJ_ROOT_DIR)/Commands/AutoGitlitz.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ChangeShooterSetpoint.o : $(PRJ_ROOT_DIR)/Commands/ChangeShooterSetpoint.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DefaultStack.o : $(PRJ_ROOT_DIR)/Commands/DefaultStack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DriveForXCentimeters.o : $(PRJ_ROOT_DIR)/Commands/DriveForXCentimeters.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LinearShooting.o : $(PRJ_ROOT_DIR)/Commands/LinearShooting.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LoadX.o : $(PRJ_ROOT_DIR)/Commands/LoadX.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SDBShooting.o : $(PRJ_ROOT_DIR)/Commands/SDBShooting.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetArcadeDrive.o : $(PRJ_ROOT_DIR)/Commands/SetArcadeDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetShooterLiftState.o : $(PRJ_ROOT_DIR)/Commands/SetShooterLiftState.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetSpinnerState.o : $(PRJ_ROOT_DIR)/Commands/SetSpinnerState.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetVerticalAngle.o : $(PRJ_ROOT_DIR)/Commands/SetVerticalAngle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShootAtRPM.o : $(PRJ_ROOT_DIR)/Commands/ShootAtRPM.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShooterDoNothing.o : $(PRJ_ROOT_DIR)/Commands/ShooterDoNothing.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SlowTankDrive.o : $(PRJ_ROOT_DIR)/Commands/SlowTankDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinStackMotorForTime.o : $(PRJ_ROOT_DIR)/Commands/SpinStackMotorForTime.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerAlwaysOut.o : $(PRJ_ROOT_DIR)/Commands/SpinnerAlwaysOut.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerInAndOut.o : $(PRJ_ROOT_DIR)/Commands/SpinnerInAndOut.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TankDriveCommand.o : $(PRJ_ROOT_DIR)/Commands/TankDriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TiltServoByJoystick.o : $(PRJ_ROOT_DIR)/Commands/TiltServoByJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TurnByXDegrees.o : $(PRJ_ROOT_DIR)/Commands/TurnByXDegrees.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Buchnah.o : $(PRJ_ROOT_DIR)/Subsystems/Buchnah.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/CameraTilt.o : $(PRJ_ROOT_DIR)/Subsystems/CameraTilt.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/ShooterLift.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterLift.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Spinner.o : $(PRJ_ROOT_DIR)/Subsystems/Spinner.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Stack.o : $(PRJ_ROOT_DIR)/Subsystems/Stack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Final2013_NoVision = Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/AxisButton.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBase.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBasedRobot.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/AutoGitlitz.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ChangeShooterSetpoint.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DefaultStack.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DriveForXCentimeters.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LinearShooting.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LoadX.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SDBShooting.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetArcadeDrive.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetShooterLiftState.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetSpinnerState.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetVerticalAngle.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShootAtRPM.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShooterDoNothing.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SlowTankDrive.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinStackMotorForTime.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerAlwaysOut.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerInAndOut.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TankDriveCommand.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TiltServoByJoystick.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TurnByXDegrees.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/OI.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Buchnah.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/CameraTilt.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Chassis.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Shooter.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/ShooterLift.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Spinner.o \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Stack.o

Final2013_NoVision/$(MODE_DIR)/Final2013_NoVision.out : $(OBJECTS_Final2013_NoVision)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Final2013_NoVision) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Final2013_NoVision) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Final2013_NoVision/$(MODE_DIR)/Final2013_NoVision_compile_file : $(FILE) ;

_clean :: Final2013_NoVision/$(MODE_DIR)/Final2013_NoVision_clean

Final2013_NoVision/$(MODE_DIR)/Final2013_NoVision_clean : 
	$(TRACE_FLAG)if [ -d "Final2013_NoVision" ]; then cd "Final2013_NoVision"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/AxisButton.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBase.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/CommandBasedRobot.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/AutoGitlitz.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ChangeShooterSetpoint.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DefaultStack.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/DriveForXCentimeters.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LinearShooting.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/LoadX.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SDBShooting.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetArcadeDrive.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetShooterLiftState.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetSpinnerState.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SetVerticalAngle.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShootAtRPM.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/ShooterDoNothing.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SlowTankDrive.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinStackMotorForTime.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerAlwaysOut.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/SpinnerInAndOut.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TankDriveCommand.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TiltServoByJoystick.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Commands/TurnByXDegrees.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/OI.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Buchnah.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/CameraTilt.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Chassis.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Shooter.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/ShooterLift.d Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Spinner.d \
	 Final2013_NoVision/$(MODE_DIR)/Objects/Final2013_NoVision/Subsystems/Stack.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
