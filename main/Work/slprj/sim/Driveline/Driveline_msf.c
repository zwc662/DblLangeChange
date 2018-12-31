#include "__cf_Driveline.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME Driveline_msf
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
#include "Driveline_types.h"
#include "Driveline.h"
#include "Driveline_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "Driveline" , "Driveline" , 0 } ;
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
static void mdlProcessParameters ( SimStruct * S ) { oakdhkzk5b * localX = (
oakdhkzk5b * ) ssGetContStates ( S ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { n5qm5cab0up * dw = (
n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; djkfokdtse ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlReset ( SimStruct * S ) { n5qm5cab0up * dw = (
n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; aj1apekess ( & ( dw -> rtm ) , & ( dw -> rtdw ) ,
localX ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid
) { n5qm5cab0up * dw = ( n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; const real_T
* i_kgi5os0pto = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T *
o_B_3_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_3_2 = (
real_T * ) ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_3_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_B_3_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_3_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; if ( tid == 0 ) { Driveline ( & ( dw -> rtm ) ,
i_kgi5os0pto , o_B_3_1 , o_B_3_2 , o_B_3_3 , o_o_B_3_4 , o_B_3_5 , & ( dw ->
rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) ) ; cyzpp4e52p ( & ( dw
-> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; } } static void
mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != (
NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; real_T lifeSpan =
1.0 ; real_T startTime = 0.0 ; real_T stopTime = rtInf ; int_T hwSettings [
17 ] ; int_T opSettings [ 2 ] ; boolean_T concurrTaskSupport = 0 ; boolean_T
disallowsMdlRefFromVarStepTop = 0 ; ModelRefChildSolverInfo solverInfo = { 2
, - 1 , 0.001 , 0.2 , 0.0 , 0.0 } ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 1 , ( NULL ) ) ; ( fcn ) ( S ,
GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) ) return ; if ( ! ( fcn )
( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , & startTime ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME , - 1 , & stopTime ) ) return ;
hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ; hwSettings [ 2 ] = 32 ;
hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ; hwSettings [ 5 ] = 64 ;
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
, 2 ) ; ssSetNumContStates ( S , 19 ) ; ssSetNumDiscStates ( S , 0 ) ;
ssSetNumPeriodicContStates ( S , 0 ) ; { const char * modelNames [ ] = { "" }
; const size_t numModelNames = 0 ; slmrSetHasNonBuiltinLoggedState ( S ,
numModelNames , modelNames ) ; } ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 5 , 5 ) ; if ( ! ssSetNumInputPorts ( S
, 5 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 1.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_INT8 ) ; }
if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 5 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 1.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 0 , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
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
ssSetOutputPortVectorDimension ( S , 2 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
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
3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 3 , false , false , false ) ;
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
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 4 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 4 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 4 , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
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
ssSetModelRefOutputSignalDesignMax ( S , 4 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_Driveline_RegisterSimStateChecksum ( S ) ; { static ssRTWStorageType
storageClass [ 10 ] = { SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO } ;
ssSetModelRefPortRTWStorageClasses ( S , storageClass ) ; }
ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ;
ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Reset" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_DISC ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL_UP ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_UP ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S ,
zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType
( S , zcsIdx , SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_UP ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 1 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 0 ) ; ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S , 0 )
; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetAcceptsFcnCallInputs ( S ) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ;
ssSetModelRefHasParforForEachSS ( S , false ) ;
ssSetModelRefHasVariantModelOrSubsystem ( S , true ) ;
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
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ; mr_Driveline_MdlInfoRegFcn
( S , "Driveline" , & retVal ) ; if ( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( n5qm5cab0up ) ) )
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
static void mdlSetupRuntimeResources ( SimStruct * S ) { n5qm5cab0up * dw = (
n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; ssNonContDerivSigFeedingOutports mr_nonContOutput4 [
1 ] ; ssNonContDerivSigFeedingOutports * mr_nonContOutputArray [ 5 ] ; void *
sysRanPtr = ( NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , &
sysRanPtr ) ; ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid ==
CONSTANT_TID ) { sysTid = 0 ; } mr_nonContOutputArray [ 0 ] = ( NULL ) ;
mr_nonContOutputArray [ 1 ] = ( NULL ) ; mr_nonContOutputArray [ 2 ] = ( NULL
) ; mr_nonContOutputArray [ 3 ] = ( NULL ) ; mr_nonContOutputArray [ 4 ] =
mr_nonContOutput4 ; jnccjczqwr ( S , mr_nonContOutputArray ,
slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , & ( dw -> rtzce ) , sysRanPtr , sysTid
, ( NULL ) , ( NULL ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw ->
rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) {
_GenericFcn fcn = S -> mdlInfo -> genericFcn ; if ( ! ( fcn ) ( S ,
GEN_FCN_REG_MODELREF_NONCONTSIGS , 4 , mr_nonContOutput4 ) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { n5qm5cab0up * dw = ( n5qm5cab0up * )
ssGetDWork ( S , 0 ) ; igx4apxpta ( & ( dw -> rtb ) ) ; } static void
mdlOutputs ( SimStruct * S , int_T tid ) { n5qm5cab0up * dw = ( n5qm5cab0up *
) ssGetDWork ( S , 0 ) ; const real_T * i_kgi5os0pto = ( real_T * )
ssGetInputPortSignal ( S , 0 ) ; real_T * o_B_3_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_B_3_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_3_3 = ( real_T * )
ssGetOutputPortSignal ( S , 2 ) ; real_T * o_o_B_3_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; real_T * o_B_3_5 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { Driveline ( & ( dw -> rtm ) , i_kgi5os0pto , o_B_3_1
, o_B_3_2 , o_B_3_3 , o_o_B_3_4 , o_B_3_5 , & ( dw -> rtb ) , & ( dw -> rtdw
) , localX , & ( dw -> rtzce ) ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { n5qm5cab0up * dw = (
n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; cyzpp4e52p ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { n5qm5cab0up * dw = (
n5qm5cab0up * ) ssGetDWork ( S , 0 ) ; const real_T * i_csaifa0wqa = ( real_T
* ) ssGetInputPortSignal ( S , 1 ) ; const int8_T * i_paxhtx4ikk = ( int8_T *
) ssGetInputPortSignal ( S , 2 ) ; const real_T * i_pzzv5e1zgg = ( real_T * )
ssGetInputPortSignal ( S , 3 ) ; const real_T * i_hdojej45do = ( real_T * )
ssGetInputPortSignal ( S , 4 ) ; real_T * o_o_B_3_4 = ( real_T * )
ssGetOutputPortSignal ( S , 3 ) ; oakdhkzk5b * localX = ( oakdhkzk5b * )
ssGetContStates ( S ) ; bjbjifrsrv * localXdot = ( bjbjifrsrv * ) ssGetdX ( S
) ; bpgqz3xzpl ( i_csaifa0wqa , i_paxhtx4ikk , i_pzzv5e1zgg , i_hdojej45do ,
o_o_B_3_4 , & ( dw -> rtb ) , localX , localXdot ) ; } static void
mdlTerminate ( SimStruct * S ) { n5qm5cab0up * dw = ( n5qm5cab0up * )
ssGetDWork ( S , 0 ) ; btsnzboicn ( & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const oakdhkzk5b * localX = ( const oakdhkzk5b * )
ssGetContStates ( S ) ; const size_t numBytes = sizeof ( oakdhkzk5b ) ;
mxArray * storedX = mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; UINT8_T * rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy (
& rawData [ 0 ] , localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 ,
storedX ) ; } { mxArray * mdlrefDW = mr_Driveline_GetDWork ( ssGetDWork ( S ,
0 ) ) ; mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_Driveline_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss , 0 ,
2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar ( (
double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
oakdhkzk5b * localX = ( oakdhkzk5b * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( oakdhkzk5b ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_Driveline_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss , 0
, 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss ,
0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar ( mxGetFieldByNumber
( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
