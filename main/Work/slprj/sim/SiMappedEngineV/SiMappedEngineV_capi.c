#include "__cf_SiMappedEngineV.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SiMappedEngineV_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "SiMappedEngineV.h"
#include "SiMappedEngineV_capi.h"
#include "SiMappedEngineV_private.h"
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
"SiMappedEngineV/Electronic Throttle\nActuator Dynamics/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 1 , 1 , TARGET_STRING ( "SiMappedEngineV/Engine Response/Integrator1" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 ,
0 } , { 2 , 2 , TARGET_STRING (
"SiMappedEngineV/Mapped SI Engine/Engine Crank Angle Calculation/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void SiMappedEngineV_InitializeDataAddr ( void * dataAddr [ ] ,
fpgmc1blog * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX -> aya33lx1d1
) ; dataAddr [ 1 ] = ( void * ) ( & localX -> i4suutis5z ) ; dataAddr [ 2 ] =
( void * ) ( & localX -> lf5wmc502m ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiMappedEngineV_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiMappedEngineV_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3238553004U , 2063153745U , 3472210480U ,
1816201534U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * SiMappedEngineV_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SiMappedEngineV_InitializeSystemRan ( kgxfljuibq * const
plpdajfsza , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( plpdajfsza ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = plpdajfsza -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SiMappedEngineV_InitializeDataMapInfo ( kgxfljuibq * const plpdajfsza ,
fpgmc1blog * localX , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( plpdajfsza -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( plpdajfsza -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( plpdajfsza -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; SiMappedEngineV_InitializeDataAddr ( plpdajfsza ->
DataMapInfo . dataAddress , localX ) ; rtwCAPI_SetDataAddressMap ( plpdajfsza
-> DataMapInfo . mmi , plpdajfsza -> DataMapInfo . dataAddress ) ;
SiMappedEngineV_InitializeVarDimsAddr ( plpdajfsza -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( plpdajfsza -> DataMapInfo .
mmi , plpdajfsza -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
plpdajfsza -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
plpdajfsza -> DataMapInfo . mmi , ( NULL ) ) ;
SiMappedEngineV_InitializeLoggingFunctions ( plpdajfsza -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( plpdajfsza -> DataMapInfo . mmi ,
plpdajfsza -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
plpdajfsza -> DataMapInfo . mmi , & plpdajfsza -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( plpdajfsza -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( plpdajfsza -> DataMapInfo .
mmi , 0 ) ; SiMappedEngineV_InitializeSystemRan ( plpdajfsza , plpdajfsza ->
DataMapInfo . systemRan , plpdajfsza -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( plpdajfsza -> DataMapInfo . mmi ,
plpdajfsza -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( plpdajfsza
-> DataMapInfo . mmi , plpdajfsza -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( plpdajfsza -> DataMapInfo . mmi , & plpdajfsza ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SiMappedEngineV_host_InitializeDataMapInfo (
SiMappedEngineV_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
