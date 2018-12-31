#include "__cf_PassVeh7DOF.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PassVeh7DOF_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "PassVeh7DOF.h"
#include "PassVeh7DOF_capi.h"
#include "PassVeh7DOF_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Velocity and Vertical Load/Bicycle/Bicycle Fz/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 1 , 5 , TARGET_STRING (
 "PassVeh7DOF/Vehicle Body 3DOF\nExternal Longitudinal Wheels/Bicycle/Vehicle Body 3DOF Single Track/state/xdot int/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 19 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake/Longitudinal Wheel with Brake Ext mu/Wheel Module/Unlocked/Output\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 18 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake1/Longitudinal Wheel with Brake Ext mu/Wheel Module/Unlocked/Output\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 17 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake2/Longitudinal Wheel with Brake Ext mu/Wheel Module/Unlocked/Output\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 16 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake3/Longitudinal Wheel with Brake Ext mu/Wheel Module/Unlocked/Output\nIntegrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 12 , TARGET_STRING (
 "PassVeh7DOF/Vehicle Body 3DOF\nExternal Longitudinal Wheels/Bicycle/Vehicle Body 3DOF Single Track/Signal Routing/Signal Routing/state2bus/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1
, 0 } , { 7 , 14 , TARGET_STRING (
 "PassVeh7DOF/Vehicle Body 3DOF\nExternal Longitudinal Wheels/Bicycle/Vehicle Body 3DOF Single Track/sigma/sigma/relaxation front/lateral"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 8 , 15 , TARGET_STRING (
 "PassVeh7DOF/Vehicle Body 3DOF\nExternal Longitudinal Wheels/Bicycle/Vehicle Body 3DOF Single Track/sigma/sigma/relaxation rear/lateral"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 4 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake/Longitudinal Wheel with Brake Ext mu/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 9 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake1/Longitudinal Wheel with Brake Ext mu/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 11 , 10 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake2/Longitudinal Wheel with Brake Ext mu/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 12 , 11 , TARGET_STRING (
 "PassVeh7DOF/Longitudinal Wheels 4DOF/Tires/Longitudinal Wheel - Disk Brake3/Longitudinal Wheel with Brake Ext mu/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeDataAddr ( void * dataAddr [ ] , bpefjqedzq
* localDW , hcqlainyez * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
ltaqjpquzu [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> asiwx55gg1 [ 0
] ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> gjqeaf15ke ) ; dataAddr [ 3 ]
= ( void * ) ( & localX -> bxrckvq45q ) ; dataAddr [ 4 ] = ( void * ) ( &
localX -> jg0z2f4dcg ) ; dataAddr [ 5 ] = ( void * ) ( & localX -> efxruepcrz
) ; dataAddr [ 6 ] = ( void * ) ( & localX -> azckz4uqjy [ 0 ] ) ; dataAddr [
7 ] = ( void * ) ( & localX -> afwcyok13n ) ; dataAddr [ 8 ] = ( void * ) ( &
localX -> mosvej2yjd ) ; dataAddr [ 9 ] = ( void * ) ( & localX -> k0pz3tariu
) ; dataAddr [ 10 ] = ( void * ) ( & localX -> gswussrcam ) ; dataAddr [ 11 ]
= ( void * ) ( & localX -> ivyedmn25f ) ; dataAddr [ 12 ] = ( void * ) ( &
localX -> gn1qleso4d ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 4 , 1
, 1 , 1 , 2 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 17 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 17 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 13 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 4222724544U , 3927859767U , 1975870278U ,
3605928132U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * PassVeh7DOF_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void PassVeh7DOF_InitializeSystemRan ( pa50wxsaaa * const hokadafud5 ,
sysRanDType * systemRan [ ] , bpefjqedzq * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( hokadafud5 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( sysRanDType
* ) & localDW -> ekmk5spjxa3 . dygl2vbtcr ; systemRan [ 3 ] = ( sysRanDType *
) & localDW -> hk0nfz3tiy ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
sysRanDType * ) & localDW -> kwvhl4ef3q . dygl2vbtcr ; systemRan [ 6 ] = (
sysRanDType * ) & localDW -> dtfk4nn1qz ; systemRan [ 7 ] = ( NULL ) ;
systemRan [ 8 ] = ( sysRanDType * ) & localDW -> jekbgdtwun . dygl2vbtcr ;
systemRan [ 9 ] = ( sysRanDType * ) & localDW -> dvpvfskwai ; systemRan [ 10
] = ( NULL ) ; systemRan [ 11 ] = ( sysRanDType * ) & localDW -> eiud0ciipq .
dygl2vbtcr ; systemRan [ 12 ] = ( sysRanDType * ) & localDW -> jmdhsygujx ;
systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ]
= ( NULL ) ; systemRan [ 16 ] = ( NULL ) ; systemTid [ 1 ] = hokadafud5 ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = hokadafud5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 9 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 11 ; rtContextSystems [ 12 ] = 12 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void PassVeh7DOF_InitializeDataMapInfo ( pa50wxsaaa * const hokadafud5 ,
bpefjqedzq * localDW , hcqlainyez * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( hokadafud5 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hokadafud5 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hokadafud5 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; PassVeh7DOF_InitializeDataAddr ( hokadafud5 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
hokadafud5 -> DataMapInfo . mmi , hokadafud5 -> DataMapInfo . dataAddress ) ;
PassVeh7DOF_InitializeVarDimsAddr ( hokadafud5 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( hokadafud5 -> DataMapInfo .
mmi , hokadafud5 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
hokadafud5 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
hokadafud5 -> DataMapInfo . mmi , ( NULL ) ) ;
PassVeh7DOF_InitializeLoggingFunctions ( hokadafud5 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( hokadafud5 -> DataMapInfo . mmi ,
hokadafud5 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
hokadafud5 -> DataMapInfo . mmi , & hokadafud5 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( hokadafud5 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( hokadafud5 -> DataMapInfo .
mmi , 0 ) ; PassVeh7DOF_InitializeSystemRan ( hokadafud5 , hokadafud5 ->
DataMapInfo . systemRan , localDW , hokadafud5 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( hokadafud5 -> DataMapInfo .
mmi , hokadafud5 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
hokadafud5 -> DataMapInfo . mmi , hokadafud5 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( hokadafud5 -> DataMapInfo . mmi , & hokadafud5 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PassVeh7DOF_host_InitializeDataMapInfo ( PassVeh7DOF_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
