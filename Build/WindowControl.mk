#! 
# @file vera_target.tmf
# @brief Template Makefile for VERA 3.0 RapidControlPrototyping System
# @author Michael Kiausch
# @date 18.02.2014
#
# Copyright VEMAC GmbH & Co. KG, Aachen 2014
# 
#

.SUFFIXES: .cc .ss .cxx .C .cpp .c .o .S

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = make
HOST            = PPC
BUILD           = no
SYS_TARGET_FILE = vera_target.tlc
BUILD_SUCCESS	= *** Created

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to were MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  SOLVER              - Solver source file name
#  NUMST               - Number of sample times
#  TID01EQ             - yes (1) or no (0): Are sampling rates of continuous task
#                        (tid=0) and 1st discrete task equal.
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.


MODEL                = WindowControl
MODULES              = 
MAKEFILE             = WindowControl.mk
MATLAB_ROOT          = "D:\Program Files\MATLAB\R2020b"
ALT_MATLAB_ROOT      = D:\Program Files\MATLAB\R2020b
MATLAB_BIN           = D:\Program Files\MATLAB\R2020b\bin
ALT_MATLAB_BIN       = D:\Program Files\MATLAB\R2020b\bin
S_FUNCTIONS_LIB      = 
SOLVER               = 
NUMST                = 1
TID01EQ              = 0
NCSTATES             = 0
BUILDARGS            = MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  MAT_FILE=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=0"
DEFINES_OTHER        = -DHAVESTDIO -DRT -DUSE_RTMODEL
MULTITASKING         = 0
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000
MODELREFS            = 


#--------------------------- Model and reference models -----------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = WindowControl_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..
# NONE: standalone, SIM: modelref sim, RTW: modelref rtw
MODELREF_TARGET_TYPE       = NONE


ifneq ($(wildcard ../Simulink/$(MODEL)_vera_rtw/rt_nonfinite.c) ,)
MODULES += rt_nonfinite.c
endif

# ---------------------- VERA ToolChain Settings-------------------------------
VERA_TOOLCHAIN = "C:\Users\Mindmotiv\Desktop\beckhoff\VeRaBuild\publish"
MODELPATH = "C:\Users\Mindmotiv\Desktop\arttest\arttest-workspace\Window Control Beckhoff_4\Environment\WindowControl\Build"
MODELVERSION = 0x00000000
#------------- Target Makefile for VeRa (5674F) using clang compiler -------------
SHELL := cmd.exe
AS := clang
CC := clang
OBJCOPY := llvm-objcopy
LINKER := ld.lld
SREC := srec_cat.exe
ASFLAGS := -target powerpc-none-eabi -mcpu=e500 -Ih
CCFLAGS := -O3 -Wall -target powerpc-none-eabi -mcpu=e500 -mefpu2 -mlong-double-64 -ftls-model=local-exec -fno-zero-initialized-in-bss -fno-asynchronous-unwind-tables
CCINCLUDES = \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(VERA_TOOLCHAIN)/VeRa_Lib/include \
	-I$(VERA_TOOLCHAIN)/VeRa_Lib/include/picolibc \
	-I$(VERA_TOOLCHAIN)/VeRa_Lib/include/MCAL \
	-I$(VERA_TOOLCHAIN)/VeRa_Lib/include/OSEK \
	-I$(VERA_TOOLCHAIN)/VeRa_Lib/include/toolbox \
	-I../Simulink/$(MODEL)_vera_rtw \
	-I../Simulink/include
CCDEFINES = -DMODEL=$(MODEL) -DNCSTATES=$(NCSTATES) -DNUMST=$(NUMST) -DRT -DUSE_RTMODEL -DVERA
LINKER_FLAGS = -O0 -nostdlib -melf32ppc --Map=linker.map -L$(VERA_TOOLCHAIN)/VeRa_Lib/clang -L../Simulink/libs --start-group -lvera3 -lc -lm -lbuiltins --end-group
LINKER_COMMAND = -Tvera.dld

PROJECT_SOURCES = vera_configuration.c VeRaModelFrame.c $(addprefix ../Simulink/$(MODEL)_vera_rtw/,$(MODULES) $(MODEL).c)

ifneq ($(wildcard CO_OD.c) ,)
CCINCLUDES += -I$(VERA_TOOLCHAIN)/VeRa_Lib/include/CANopen
endif

#add .c files from src directory
PROJECT_SOURCES += $(wildcard ../src/*.c)

# add all .c files from build directory
PROJECT_SOURCES += $(wildcard *.c)

PROJECT_OBJECTS := $(sort $(patsubst %.c,%.o,$(PROJECT_SOURCES)))

all: $(MODEL).s19

$(MODEL).s19: $(MODEL).hex
	$(SREC) $(MODEL).hex -Intel -unfill 0xff 16 -o $(MODEL).s19 -al=4 -obs=20 -obp -disable=data-count -esa=0x20000

$(MODEL).elf: $(PROJECT_OBJECTS) vera_proginfo.o
	$(LINKER) -o $(MODEL).elf $(notdir $(PROJECT_OBJECTS)) vera_proginfo.o $(LINKER_FLAGS) $(LINKER_COMMAND)
	
$(MODEL).hex: $(MODEL).elf
	$(OBJCOPY) -O ihex $(MODEL).elf $(MODEL).hex
	
vera_proginfo.c: $(MODEL)_codeonly.hex
	$(SREC) ( ( $(MODEL)_codeonly.hex -Intel -fill 0xff -over $(MODEL)_codeonly.hex -Intel ) -CRC16_b_e 0x2 0x8005 -l_t_m -xmodem ( $(MODEL)_codeonly.hex -Intel -ex_length_b_e 0x4 4 ) -generate 0x0 0x2 -constant-b-e 0x96a5 2 -generate 0x8 0xc -constant_b_e $(MODELVERSION) 4 -generate 0xc 0x20 -constant_b_e 0x00 1 ) -crop 0x00 0x20 -output vera_proginfo.c -c_array __osinfo -prefix '__attribute__((section(".osinfo")))'
	
$(MODEL)_firstpass.elf: $(PROJECT_OBJECTS)
	$(LINKER) -o $(MODEL)_firstpass.elf $(notdir $(PROJECT_OBJECTS)) $(LINKER_FLAGS) $(LINKER_COMMAND)

$(MODEL)_codeonly.hex: $(MODEL)_firstpass.elf
	$(OBJCOPY) -O ihex --remove-section=.param_ram $(MODEL)_firstpass.elf $(MODEL)_codeonly.hex

%.o: %.c
	$(CC) $(CCFLAGS) $(CCDEFINES) $(CCINCLUDES) -c $<
