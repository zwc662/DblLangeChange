#include "__cf_PassVeh7DOF.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME PassVeh7DOF_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "PassVeh7DOF_types.h"
#include "PassVeh7DOF.h"
#include "PassVeh7DOF_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "PassVeh7DOF" , "PassVeh7DOF" , 0 } ;
const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const
char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { hcqlainyez * localX = (
hcqlainyez * ) ssGetContStates ( S ) ; real_T * o_o_B_10_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_10_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_B_10_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_B_10_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_B_10_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_B_10_18 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; hcqlainyez * localX = ( hcqlainyez * )
ssGetContStates ( S ) ; hzczw4rimi ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlReset ( SimStruct * S ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; hcqlainyez * localX = ( hcqlainyez * )
ssGetContStates ( S ) ; ps1ayp5pv5 ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid
) { pqca3kvywqf * dw = ( pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; const real_T
* i_gv4haohkct = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; const real_T *
i_lbskr0v4dh = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; const real_T *
i_cvjvi1cyd4 = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; const real_T *
i_cidlqjuouw = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; const real_T *
i_fvzwjmjlkg = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; const real_T *
i_aftq3lpaar = ( real_T * ) ssGetInputPortSignal ( S , 5 ) ; real_T *
o_B_10_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_10_2 =
( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_10_3 = ( real_T *
) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_B_10_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_10_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_10_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_10_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_10_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_10_9 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_10_10 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_10_11 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_B_10_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_10_13 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_10_14 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_B_10_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_B_10_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_10_17 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_o_B_10_18 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; real_T * o_B_10_19 = ( real_T * )
ssGetOutputPortSignal ( S , 18 ) ; real_T * o_B_10_20 = ( real_T * )
ssGetOutputPortSignal ( S , 19 ) ; hcqlainyez * localX = ( hcqlainyez * )
ssGetContStates ( S ) ; dn0l2t323g * localXdis = ( dn0l2t323g * )
ssGetContStateDisabled ( S ) ; if ( tid == 0 ) { PassVeh7DOF ( & ( dw -> rtm
) , i_gv4haohkct , i_lbskr0v4dh , i_cvjvi1cyd4 , i_cidlqjuouw , i_fvzwjmjlkg
, i_aftq3lpaar , o_B_10_1 , o_B_10_2 , o_B_10_3 , o_o_B_10_4 , o_o_B_10_5 ,
o_B_10_6 , o_B_10_7 , o_B_10_8 , o_B_10_9 , o_B_10_10 , o_B_10_11 ,
o_o_B_10_12 , o_B_10_13 , o_B_10_14 , o_o_B_10_15 , o_o_B_10_16 , o_B_10_17 ,
o_o_B_10_18 , o_B_10_19 , o_B_10_20 , & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localX , & ( dw -> rtzce ) , localXdis ) ; ii3iorkudk ( & ( dw -> rtm ) , & (
dw -> rtb ) , & ( dw -> rtdw ) ) ; } } static void mdlInitializeSizes (
SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S
-> mdlInfo -> genericFcn ) ( S , GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK ,
- 1 , ( NULL ) ) ) ) { return ; } ssSetNumSFcnParams ( S , 0 ) ;
ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; real_T lifeSpan = 1.0 ; real_T startTime = 0.0 ;
real_T stopTime = rtInf ; int_T hwSettings [ 17 ] ; int_T opSettings [ 2 ] ;
boolean_T concurrTaskSupport = 0 ; boolean_T disallowsMdlRefFromVarStepTop =
0 ; ModelRefChildSolverInfo solverInfo = { 0 , - 1 , 0.003 , 0.2 , 0.0 , 0.0
} ; ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 1 , ( NULL ) ) ; (
fcn ) ( S , GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ; if ( ! ( fcn ) (
S , GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , & startTime ) ) return ;
if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME , - 1 , & stopTime ) )
return ; hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ; hwSettings [ 2 ] = 32
; hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ; hwSettings [ 5 ] = 64 ;
hwSettings [ 6 ] = 64 ; hwSettings [ 7 ] = 64 ; hwSettings [ 8 ] = 64 ;
hwSettings [ 9 ] = 0 ; hwSettings [ 10 ] = 1 ; hwSettings [ 11 ] = 64 ;
hwSettings [ 12 ] = 1 ; hwSettings [ 13 ] = 0 ; hwSettings [ 14 ] = 0 ;
hwSettings [ 15 ] = 64 ; slmrAddResetEvents ( S , "" ) ; hwSettings [ 16 ] =
0 ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS , 17 ,
hwSettings ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_DATA_DICTIONARY , 0 , ( void * ) "" ) ) return ;
opSettings [ 0 ] = 0 ; opSettings [ 1 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS , 2 , opSettings ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT , ( int_T )
concurrTaskSupport , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE , 0 , & disallowsMdlRefFromVarStepTop ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_NAME , 0 , ( void *
) "ode23tb" ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_MODE , SOLVER_MODE_SINGLETASKING , ( NULL ) ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_VSOLVER_OPTS , - 1 , &
solverInfo ) ) return ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS , 2 , ( NULL ) ) ; }
slmrSetModelRefMaxFreqHz ( S , - 1.000000 ) ;
slmrSetModelRefAutoSolverStatusFlags ( S , 329 ) ; ssSetRTWGeneratedSFcn ( S
, 2 ) ; ssSetNumContStates ( S , 20 ) ; ssSetNumDiscStates ( S , 0 ) ;
ssSetNumPeriodicContStates ( S , 0 ) ; { const char * modelNames [ ] = { "" }
; const size_t numModelNames = 0 ; slmrSetHasNonBuiltinLoggedState ( S ,
numModelNames , modelNames ) ; } ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 6 , 20 ) ; if ( ! ssSetNumInputPorts (
S , 6 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 4 ) )
return ; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 , false )
; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 0
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 , false )
; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 1
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 , false )
; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 2
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 , false )
; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime ( S , 3
, 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 4 ) ) return ;
ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "Pa" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 5 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 5 ,
false ) ; ssSetInputPortSampleTime ( S , 5 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 5 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 20 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 0 , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 1 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 1 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 1 , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 2 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 2 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 2 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 2 , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
3 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 3 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 3 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 3 , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 4 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 4 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 4 , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 5 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 5 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 5 , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 6 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 6 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 6 , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 7 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 7 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 7 , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "gn" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
8 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 8 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 8 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 8 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 8 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 8 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 8 , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 9 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 9 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 9 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
9 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 9 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 9 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 9 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 9 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 9 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 9 , false ) ;
ssSetOutputPortOptimOpts ( S , 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 10 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 10 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 10 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 10 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 10 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 10 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 10 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 10 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 10 , false ) ;
ssSetOutputPortOptimOpts ( S , 10 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 11 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 11 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 11 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 11 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 11 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 11 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 11 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 11 , false ) ;
ssSetOutputPortOptimOpts ( S , 11 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 12 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 12 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 12 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 12 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 12 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 12 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 12 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 12 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 12 , false ) ;
ssSetOutputPortOptimOpts ( S , 12 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 13 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 13 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 13 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 13 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 13 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 13 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 13 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 13 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 13 , false ) ;
ssSetOutputPortOptimOpts ( S , 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 14 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 14 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 14 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 14 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 14 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 14 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 14 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 14 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 14 , false ) ;
ssSetOutputPortOptimOpts ( S , 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 15 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 15 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 15 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 15 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 15 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 15 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 15 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 15 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 15 , false ) ;
ssSetOutputPortOptimOpts ( S , 15 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 16 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 16 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 16 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 16 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 16 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 16 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 16 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 16 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 16 , false ) ;
ssSetOutputPortOptimOpts ( S , 16 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 17 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 17 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 17 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 17 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 17 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 17 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 17 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 17 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 17 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 17 , false , true , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 17 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 17 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 17 , false ) ;
ssSetOutputPortOptimOpts ( S , 17 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 18 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 18 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 18 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 18 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 18 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 18 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 18 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 18 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 18 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 18 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 18 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 18 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 18 , false ) ;
ssSetOutputPortOptimOpts ( S , 18 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 19 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 19 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 19 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 19 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 19 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 19 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 19 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 19 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 19 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 19 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 19 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 19 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 19 , false ) ;
ssSetOutputPortOptimOpts ( S , 19 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
slmrModelRefSetHasStatesModifiedInOutputUpdate ( S , false ) ;
slmrModelRefSetHasDescExpFcnMdl ( S , false ) ;
slmrModelRefSetHasDescAdaptedMdl ( S , false ) ; { real_T minValue =
rtMinusInf ; real_T maxValue = rtInf ; ssSetModelRefInputSignalDesignMin ( S
, 0 , & minValue ) ; ssSetModelRefInputSignalDesignMax ( S , 0 , & maxValue )
; } { real_T minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 1 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 1 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 2 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 2 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 3 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 3 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 4 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 4 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 5 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 5 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 0 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 1 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 1 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 2 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 2 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 3 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 3 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 4 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 4 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 5 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 5 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 6 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 6 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 7 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 7 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 8 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 8 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 9 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 9 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 10 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 10 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 11 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 11 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 12 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 12 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 13 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 13 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 14 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 14 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 15 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 15 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 16 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 16 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 17 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 17 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 18 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 18 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 19 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 19 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_PassVeh7DOF_RegisterSimStateChecksum ( S ) ; { static ssRTWStorageType
storageClass [ 26 ] = { SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO } ;
ssSetModelRefPortRTWStorageClasses ( S , storageClass ) ; }
ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ;
ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Input" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_DISC ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "Input" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "Input" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "Input" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
} ssSetZCCacheNeedsReset ( S , 1 ) ; ssSetOutputPortIsNonContinuous ( S , 0 ,
0 ) ; ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 9 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 9 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 10 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 10 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 11 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 11 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 12 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 12 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 13 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 13 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 14 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 14 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 15 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 15 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 16 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 16 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 17 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 17 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 18 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 18 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 19 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 19 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 0 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S , 0 )
; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetAcceptsFcnCallInputs ( S ) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:BlkWithStatePortNotSupported\" pr=\"d\"><arguments><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg><arg type=\"encoded\">UABhAHMAcwBWAGUAaAA3AEQATwBGAC8ATABvAG4AZwBpAHQAdQBkAGkAbgBhAGwAIABXAGgAZQBlAGwAcwAgADQARABPAEYALwBUAGkAcgBlAHMALwBMAG8AbgBnAGkAdAB1AGQAaQBuAGEAbAAgAFcAaABlAGUAbAAgAC0AIABEAGkAcwBrACAAQgByAGEAawBlAC8ATABvAG4AZwBpAHQAdQBkAGkAbgBhAGwAIABXAGgAZQBlAGwAIAB3AGkAdABoACAAQgByAGEAawBlACAARQB4AHQAIABtAHUALwBXAGgAZQBlAGwAIABNAG8AZAB1AGwAZQAvAFUAbgBsAG8AYwBrAGUAZAAvAE8AdQB0AHAAdQB0ACAASQBuAHQAZQBnAHIAYQB0AG8AcgAAAA==</arg></arguments><hs><h>AAAAJIL8ykD+</h></hs></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetModelRefHasParforForEachSS
( S , false ) ; ssSetModelRefHasVariantModelOrSubsystem ( S , true ) ;
slmrRegisterContinuousOrDiscreteRateInfo ( S , 0 , 0 , 0 ) ;
slmrSetHasContinuousSampleTime ( S , true ) ;
slmrRegisterContinuousOrDiscreteRateInfo ( S , 1 , 0 , 1 ) ;
ssSetNumExplicitTaskingTs ( S , 0 ) ; ssSetParameterChangeEventTID ( S , - 1
) ; ssSetOptions ( S , SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ; if ( S -> mdlInfo -> genericFcn != ( NULL
) ) { if ( ! ssRegModelRefChildModel ( S , 1 , childModels ) ) { return ; } }
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_PassVeh7DOF_MdlInfoRegFcn ( S , "PassVeh7DOF" , & retVal ) ; if ( ! retVal
) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( pqca3kvywqf ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrSetDataTypeOverrideSettings ( S , 0 , 0 ) ;
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "9.1" ) ; ssSetNeedAbsoluteTime ( S , 1
) ; slmrSetHasBlockUsingZOHContinuousSampleTime ( S , true ) ;
ssSetModelRefHasEnablePort ( S , 0 ) ; } static void mdlInitializeSampleTimes
( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; hcqlainyez * localX = ( hcqlainyez * )
ssGetContStates ( S ) ; real_T * o_o_B_10_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_10_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_B_10_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_B_10_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_B_10_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_B_10_18 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; ssNonContDerivSigFeedingOutports
mr_nonContOutput6 [ 10 ] ; ssNonContDerivSigFeedingOutports mr_nonContOutput8
[ 11 ] ; ssNonContDerivSigFeedingOutports mr_nonContOutput12 [ 11 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput13 [ 11 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput18 [ 2 ] ;
ssNonContDerivSigFeedingOutports mr_nonContOutput19 [ 2 ] ;
ssNonContDerivSigFeedingOutports * mr_nonContOutputArray [ 20 ] ; void *
sysRanPtr = ( NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , &
sysRanPtr ) ; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid ==
CONSTANT_TID ) { sysTid = 0 ; } mr_nonContOutputArray [ 0 ] = ( NULL ) ;
mr_nonContOutputArray [ 1 ] = ( NULL ) ; mr_nonContOutputArray [ 2 ] = ( NULL
) ; mr_nonContOutputArray [ 3 ] = ( NULL ) ; mr_nonContOutputArray [ 4 ] = (
NULL ) ; mr_nonContOutputArray [ 5 ] = ( NULL ) ; mr_nonContOutputArray [ 6 ]
= mr_nonContOutput6 ; mr_nonContOutputArray [ 7 ] = ( NULL ) ;
mr_nonContOutputArray [ 8 ] = mr_nonContOutput8 ; mr_nonContOutputArray [ 9 ]
= ( NULL ) ; mr_nonContOutputArray [ 10 ] = ( NULL ) ; mr_nonContOutputArray
[ 11 ] = ( NULL ) ; mr_nonContOutputArray [ 12 ] = mr_nonContOutput12 ;
mr_nonContOutputArray [ 13 ] = mr_nonContOutput13 ; mr_nonContOutputArray [
14 ] = ( NULL ) ; mr_nonContOutputArray [ 15 ] = ( NULL ) ;
mr_nonContOutputArray [ 16 ] = ( NULL ) ; mr_nonContOutputArray [ 17 ] = (
NULL ) ; mr_nonContOutputArray [ 18 ] = mr_nonContOutput18 ;
mr_nonContOutputArray [ 19 ] = mr_nonContOutput19 ; lahi4jyhaj ( S ,
mr_nonContOutputArray , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , sysRanPtr , sysTid
, ( NULL ) , ( NULL ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw ->
rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) {
_GenericFcn fcn = S -> mdlInfo -> genericFcn ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 6 , mr_nonContOutput6 ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 8 , mr_nonContOutput8 ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 12 ,
mr_nonContOutput12 ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 13 , mr_nonContOutput13 ) ) return ; if (
! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 18 , mr_nonContOutput18 )
) return ; if ( ! ( fcn ) ( S , GEN_FCN_REG_MODELREF_NONCONTSIGS , 19 ,
mr_nonContOutput19 ) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { pqca3kvywqf * dw = ( pqca3kvywqf * )
ssGetDWork ( S , 0 ) ; real_T * o_o_B_10_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_10_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_o_B_10_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_o_B_10_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_B_10_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_o_B_10_18 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; aoae4c423r ( o_o_B_10_4 , o_o_B_10_5 ,
o_o_B_10_12 , o_o_B_10_15 , o_o_B_10_16 , o_o_B_10_18 , & ( dw -> rtb ) , & (
dw -> rtdw ) ) ; }
#define RTW_GENERATED_DISABLE
static void mdlDisable ( SimStruct * S ) { pqca3kvywqf * dw = ( pqca3kvywqf *
) ssGetDWork ( S , 0 ) ; dn0l2t323g * localXdis = ( dn0l2t323g * )
ssGetContStateDisabled ( S ) ; g3iefm0j4w ( & ( dw -> rtm ) , & ( dw -> rtdw
) , localXdis ) ; return ; } static void mdlOutputs ( SimStruct * S , int_T
tid ) { pqca3kvywqf * dw = ( pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; const
real_T * i_gv4haohkct = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; const
real_T * i_lbskr0v4dh = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; const
real_T * i_cvjvi1cyd4 = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; const
real_T * i_cidlqjuouw = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; const
real_T * i_fvzwjmjlkg = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; const
real_T * i_aftq3lpaar = ( real_T * ) ssGetInputPortSignal ( S , 5 ) ; real_T
* o_B_10_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_10_2
= ( real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_10_3 = ( real_T
* ) ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_B_10_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_o_B_10_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_10_6 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_10_7 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_10_8 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_10_9 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_10_10 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_10_11 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_o_B_10_12 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_10_13 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_10_14 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_o_B_10_15 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_o_B_10_16 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_10_17 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_o_B_10_18 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; real_T * o_B_10_19 = ( real_T * )
ssGetOutputPortSignal ( S , 18 ) ; real_T * o_B_10_20 = ( real_T * )
ssGetOutputPortSignal ( S , 19 ) ; hcqlainyez * localX = ( hcqlainyez * )
ssGetContStates ( S ) ; dn0l2t323g * localXdis = ( dn0l2t323g * )
ssGetContStateDisabled ( S ) ; if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { PassVeh7DOF ( & ( dw -> rtm ) , i_gv4haohkct ,
i_lbskr0v4dh , i_cvjvi1cyd4 , i_cidlqjuouw , i_fvzwjmjlkg , i_aftq3lpaar ,
o_B_10_1 , o_B_10_2 , o_B_10_3 , o_o_B_10_4 , o_o_B_10_5 , o_B_10_6 ,
o_B_10_7 , o_B_10_8 , o_B_10_9 , o_B_10_10 , o_B_10_11 , o_o_B_10_12 ,
o_B_10_13 , o_B_10_14 , o_o_B_10_15 , o_o_B_10_16 , o_B_10_17 , o_o_B_10_18 ,
o_B_10_19 , o_B_10_20 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX , & ( dw
-> rtzce ) , localXdis ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; ii3iorkudk ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; kg2zcpxtlx * localZCSV = ( kg2zcpxtlx
* ) ssGetNonsampledZCs ( S ) ; pgy4d5vijx ( & ( dw -> rtb ) , localZCSV ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { pqca3kvywqf * dw = (
pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; ha25zehowz * localXdot = ( ha25zehowz
* ) ssGetdX ( S ) ; iu231drtpw ( & ( dw -> rtb ) , & ( dw -> rtdw ) ,
localXdot ) ; } static void mdlTerminate ( SimStruct * S ) { pqca3kvywqf * dw
= ( pqca3kvywqf * ) ssGetDWork ( S , 0 ) ; b51av3ulwn ( & ( dw -> rtm ) ) ;
return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const hcqlainyez * localX = ( const hcqlainyez * )
ssGetContStates ( S ) ; const size_t numBytes = sizeof ( hcqlainyez ) ;
mxArray * storedX = mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; UINT8_T * rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy (
& rawData [ 0 ] , localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 ,
storedX ) ; } { mxArray * mdlrefDW = mr_PassVeh7DOF_GetDWork ( ssGetDWork ( S
, 0 ) ) ; mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_PassVeh7DOF_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss , 0
, 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar ( (
double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
hcqlainyez * localX = ( hcqlainyez * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( hcqlainyez ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_PassVeh7DOF_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss ,
0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
