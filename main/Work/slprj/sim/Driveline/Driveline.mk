# Copyright 1994-2017 The MathWorks, Inc.
#
# File    : ert_lcc64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based stand-alone embedded real-time 
#       version of Simulink model using generated C code and 
#			LCC compiler Version 2.4
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g4. 
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths 
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#                          (For Lcc, have a '/'as file seperator before the 
#                          file name instead of a '\' . 
#                          i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any
COMPILER_TOOL_CHAIN = lcc

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = "LCC-win64 v2.4.1 | gmake (64-bit Windows)"

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of additional S-function modules.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                = Driveline
MODULES              = Driveline.c Driveline_capi.c
MAKEFILE             = Driveline.mk
MATLAB_ROOT          = C:/Program Files/MATLAB/R2018a
ALT_MATLAB_ROOT      = C:/PROGRA~1/MATLAB/R2018a
MATLAB_BIN           = C:/Program Files/MATLAB/R2018a/bin
ALT_MATLAB_BIN       = C:/PROGRA~1/MATLAB/R2018a/bin
MASTER_ANCHOR_DIR    = 
START_DIR            = C:/Users/zwc66/MATLAB/Projects/experiments/DblLaneChange/main/Work
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
NUMST                = 2
NCSTATES             = 19
BUILDARGS            =  GENERATE_ASAP2=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 OPTS="-DSLMSG_ALLOW_SYSTEM_ALLOC -DMATLAB_MEX_FILE"
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 0
ALLOCATIONFCN        = 0
ONESTEPFCN           = 0
TERMFCN              = 1
B_ERTSFCN            = 0
MEXEXT               = mexw64
MULTI_INSTANCE_CODE  = 0
CLASSIC_INTERFACE    = 0
MODELREFS            = 
SHARED_SRC           = ../../../slprj/sim/_sharedutils/*.c*
SHARED_SRC_DIR       = ../../../slprj/sim/_sharedutils
SHARED_BIN_DIR       = ../../../slprj/sim/_sharedutils
SHARED_LIB           = ../../../slprj/sim/_sharedutils/rtwshared.lib
SHARED_LIB_LINK      = $(subst /,\,$(SHARED_LIB))
GEN_SAMPLE_MAIN      = 0
MEX_OPT_FILE         = -f C:/PROGRA~1/MATLAB/R2018a/rtw/c/tools/LCC-WI~1.XML
SHRLIBTARGET         = 0
MAKEFILEBUILDER_TGT  = 0
ENABLE_SLEXEC_SSBRIDGE  = 1
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = -DNDEBUG
ADDITIONAL_LDFLAGS      = 
DEFINES_CUSTOM          = 
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = Drivelinelib.lib
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = Driveline_ref.rsp
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE       = SIM
MODELREF_SFCN_SUFFIX       = _msf
ISPROTECTINGMODEL          = NOTPROTECTING
PROT_CAPIC_SUFFIX          = _capi.c
PROT_CAPIO_SUFFIX          = _capi_host.obj


#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Tool Specifications -------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

# Determine if we are generating an s-function
SFCN = 0
ifeq ($(MODELREF_TARGET_TYPE),SIM)
  SFCN = 1
endif
ifeq ($(B_ERTSFCN),1)
  SFCN = 1
endif

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include Path -----------------------------------

# Additional includes 

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/sim/Driveline \
	-IC:/Users/zwc66/MATLAB/Projects/experiments/DblLaneChange/refs/Driveline/Plant \


# see MATLAB_INCLUDES and COMPILER_INCLUDES from lcctool.mak

SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES) $(MODELREF_INC_PATH) \
           $(SHARED_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(ANSI_OPTS)  $(OPTIMIZATION_FLAGS)
MEX_OPT_OPTS = OPTIMFLAGS="$(OPTIMIZATION_FLAGS)"
else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(ANSI_OPTS) 
MEX_OPT_OPTS = $(OPT_OPTS)
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
CPP_REQ_DEFINES += -DMDL_REF_SIM_TGT=1 
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif
else
CPP_REQ_DEFINES += -DMT=$(MULTITASKING)
endif


CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CFLAGS = $(DEFAULT_CFLAGS) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES) -w -noregistrylookup 

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LDFLAGS = -s -L$(LIB)
else
LDFLAGS = -L$(LIB)
endif

ifeq ($(MODELREF_TARGET_TYPE),SIM)
CFLAGS += -dll -Zp8 -noregistrylookup -DLCC_WIN64
endif

MEX_LDFLAGS = -s -dll -L"$(MATLAB)/sys/lcc64/lcc64/lib64" $(ADDITIONAL_LDFLAGS)

#-------------------------- Additional Libraries ------------------------------

LIBS =


LIBS +=  $(S_FUNCTIONS_LIB)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBMWIPP = $(MATLAB_ROOT)\lib\win64\libmwipp.lib
LIBS += $(LIBMWIPP)
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
  LIBMWSLEXEC_SIMBRIDGE = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwslexec_simbridge.lib
  LIBS += $(LIBMWSLEXEC_SIMBRIDGE)
endif
ifneq ($(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS), 0)
  LIBMWSL_SFCN_LOADER = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_sfcn_loader.lib
  LIBS += $(LIBMWSL_SFCN_LOADER)
endif
endif

ifeq ($(SFCN),1)
LIBFIXPT = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libfixedpoint.lib
LIBS += $(LIBFIXPT)
endif

LIBMWSLEXEC_SIMLOG = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwslexec_simlog.lib
LIBS += $(LIBMWSLEXEC_SIMLOG)

LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmathutil.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_fileio.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_simtarget_instrumentation.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_simtarget_core.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwcoder_ToAsyncQueueTgtAppSvc.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_AsyncioQueue.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\sf_runtime.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwslio_core.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwslio_clients.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsimulink.lib
LIBS += $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwstringutil.lib


ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBMX = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmx.lib
LIBMEX = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmex.lib
LIBS += $(LIBMX) $(LIBMEX) 
endif


#----------------------------- Source Files ------------------------------------
ADD_SRCS =

ifeq ($(SFCN),0)
  SRCS = $(ADD_SRCS) $(S_FUNCTIONS)
  SRC_DEP =
  ifeq ($(MODELREF_TARGET_TYPE), NONE)
    ifeq ($(SHRLIBTARGET),1)
#--- Shared library target (.dll) ---
      PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)_win32.dll
      BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -dll -o $(PRODUCT) $(SYSLIBS) 
      BUILD_PRODUCT_TYPE = dynamically linked library
      SRCS               += $(MODULES) lcc_dll_main.c  
    else
      ifeq ($(MAKEFILEBUILDER_TGT),1)
        PRODUCT            = $(MODEL).exe
        BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT) $(SYSLIBS) 
        BUILD_PRODUCT_TYPE = executable
        PREBUILT_OBJS       = $(MODULES:.c=.obj)
      else
        ifeq ($(STANDALONE_SUPPRESS_EXE),1)
#--- Build library only for top level model
          PRODUCT            = ObjectModulesOnly
          BUILD_PRODUCT_TYPE = object modules
          SRCS               += $(MODULES) 
        else
#--- Stand-alone model (.exe) ---
          PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL).exe
          BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT) $(SYSLIBS) 
          BUILD_PRODUCT_TYPE = executable
          SRCS               += $(MODULES)
        endif
      endif
    endif
  else
    # Model reference coder target
    SRCS               += $(MODULES) 
    PRODUCT            = $(MODELLIB)
    BUILD_PRODUCT_TYPE = library
  endif
else
  ifeq ($(MODELREF_TARGET_TYPE), SIM)
  PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)$(MODELREF_SFCN_SUFFIX).$(MEXEXT)
  RTW_SFUN_SRC       = $(MODEL)$(MODELREF_SFCN_SUFFIX).c
  SRCS               = $(MODULES) $(ADD_SRCS) c_mexapi_version.c
  else
  PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)_sf.$(MEXEXT)
  RTW_SFUN_SRC       = $(MODEL)_sf.c
  SRCS               = $(MODULES) $(ADD_SRCS) $(S_FUNCTIONS) c_mexapi_version.c
  BIN_SETTING        = $(LD) -s -dll $(MEX_OPT_OPTS) $(MEX_LDFLAGS) $(RTW_SFUN_SRC) $(MEX_OPT_FILE) $(INCLUDES) -o $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL).$(MEXEXT) c_mexapi_version.obj
  endif  
  BUILD_PRODUCT_TYPE = mex file
  SRC_DEP            = $(RTW_SFUN_SRC)
endif

USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)
PROT_CAPIC  = $(addsuffix $(PROT_CAPIC_SUFFIX), $(MODEL))
PROT_CAPIO  = $(addsuffix $(PROT_CAPIO_SUFFIX), $(MODEL))

SHARED_SRC := $(wildcard $(SHARED_SRC))
SHARED_OBJS_NO_PATH = $(addsuffix .obj, $(basename $(notdir $(SHARED_SRC))))
SHARED_OBJS = $(addprefix $(join $(SHARED_BIN_DIR), /), $(SHARED_OBJS_NO_PATH))
FMT_SHARED_OBJS = $(subst /,\,$(SHARED_OBJS))

DEF_FILE = $(MODEL).def

#--------------------------------- Rules ---------------------------------------
ifeq ($(MODELREF_TARGET_TYPE),NONE)
  ifeq ($(SHRLIBTARGET),1)
    $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS) $(MODEL).def
#--- Comment out the next line to retain .lib and .exp files ---
	@del $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL)_win32.lib $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL)_win32.exp
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
  else
    ifeq ($(MAKEFILEBUILDER_TGT),1)
      $(PRODUCT) : $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(PREBUILT_OBJS) @$(CMD_FILE) $(LOCAL_USER_OBJS) $(MODELLIB) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
    else
      ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
        .PHONY: $(PRODUCT)
        $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
      else
        $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS) 
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
      endif
    endif
  endif
else
 ifeq ($(MODELREF_TARGET_TYPE),SIM)
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  all : $(PRODUCT) $(PROT_CAPIO)
  endif
  $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(DEF_FILE) lccstub.obj
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
	$(CC) $(CFLAGS) -DMDL_REF_SIM_TGT=1 -c $(RTW_SFUN_SRC) $(INCLUDES) 
	$(LD) $(MEX_LDFLAGS) -o $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)$(MODELREF_SFCN_SUFFIX).$(MEXEXT) $(MODEL)$(MODELREF_SFCN_SUFFIX).obj lccstub.obj c_mexapi_version.obj $(MODELLIB) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS) -entry LibMain $(DEF_FILE)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  $(PROT_CAPIO) : $(PROT_CAPIC)
	$(CC) -c $(CFLAGS) -DHOST_CAPI_BUILD $(PROT_CAPIC) /Fo$(PROT_CAPIO)
  endif
 else
  $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(SRC_DEP)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
 endif
endif

%.obj : %.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : %.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

lccstub.obj : $(LCC)/mex/lccstub.c
	$(CC) $(CFLAGS) $(INCLUDES) $(LCC)/mex/lccstub.c -o ./lccstub.obj

c_mexapi_version.obj : $(MATLAB_ROOT)/extern/version/c_mexapi_version.c
	$(CC) $(CFLAGS) $(INCLUDES) $(MATLAB_ROOT)/extern/version/c_mexapi_version.c -o ./c_mexapi_version.obj

# compile rt_main.c or rt_malloc_main.c from rtw/c/src/common if one was not generated
ifeq ($(GEN_SAMPLE_MAIN),0)
%.obj : $(MATLAB_ROOT)/rtw/c/src/common/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<
endif

# compile lcc_dll_main.c
ifeq ($(SHRLIBTARGET),1)
%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<
endif

%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

# Libraries:





#----------------------------- Dependencies ------------------------------------

$(DEF_FILE) : $(OBJS)
	@echo LIBRARY $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)$(MODELREF_SFCN_SUFFIX).$(MEXEXT) EXPORTS mexFunction mexfilerequiredapiversion> $(DEF_FILE)

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_OBJS) : $(SHARED_BIN_DIR)/%.obj : $(SHARED_SRC_DIR)/%.c  
	$(CC) -c -Fo$@ $(CFLAGS) $<

$(SHARED_LIB) : $(SHARED_OBJS)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$(SHARED_LIB_LINK) $(FMT_SHARED_OBJS)
	@cmd /C "echo ### $@ Created"

