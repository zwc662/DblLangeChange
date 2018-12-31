#include "__cf_SiMappedEngineV.h"
#ifndef RTW_HEADER_SiMappedEngineV_h_
#define RTW_HEADER_SiMappedEngineV_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef SiMappedEngineV_COMMON_INCLUDES_
#define SiMappedEngineV_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SiMappedEngineV_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T b0rncibi3m ; real_T cvu1ggqyuw ; real_T myo3xsikij ;
} puu5fcics1 ; typedef struct { real_T aya33lx1d1 ; real_T i4suutis5z ;
real_T lf5wmc502m ; } fpgmc1blog ; typedef int_T mxzhu33opg [ 1 ] ; typedef
real_T mquzxajhwn [ 2 ] ; typedef struct { real_T aya33lx1d1 ; real_T
i4suutis5z ; real_T lf5wmc502m ; } ih0mudozt1 ; typedef struct { boolean_T
aya33lx1d1 ; boolean_T i4suutis5z ; boolean_T lf5wmc502m ; } dk2lj1ie3v ;
typedef struct { real_T aya33lx1d1 ; real_T i4suutis5z ; real_T lf5wmc502m ;
} i3uom1vnc5 ; struct anoacnregqm_ { real_T P_0 [ 256 ] ; real_T P_1 [ 16 ] ;
real_T P_2 [ 16 ] ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; uint32_T P_11 [ 2 ] ; }
; struct mrj2qlehgq { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 3 ] ; int32_T * vardimsAddress [ 3
] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { puu5fcics1 rtb ; kgxfljuibq rtm ; }
o2k4rz0uw5x ; extern void fbspkqemka ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , kgxfljuibq * const
plpdajfsza , puu5fcics1 * localB , fpgmc1blog * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SiMappedEngineV_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SiMappedEngineV_GetDWork (
const o2k4rz0uw5x * mdlrefDW ) ; extern void mr_SiMappedEngineV_SetDWork (
o2k4rz0uw5x * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_SiMappedEngineV_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_SiMappedEngineV_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SiMappedEngineV_GetCAPIStaticMap ( void ) ;
extern void f5rmroe5ej ( fpgmc1blog * localX ) ; extern void f4glzcjee3 (
fpgmc1blog * localX ) ; extern void bmpf100lpn ( puu5fcics1 * localB ,
ih0mudozt1 * localXdot ) ; extern void pj3vtlmlns ( void ) ; extern void
pj3vtlmlnsTID2 ( void ) ; extern void SiMappedEngineV ( const real_T *
dhoq3itz5d , const real_T * gzpwimsfg2 , real_T * p2vuqhqrpz , puu5fcics1 *
localB , fpgmc1blog * localX ) ; extern void SiMappedEngineVTID2 ( void ) ;
extern void po5zlrzzyd ( kgxfljuibq * const plpdajfsza ) ;
#endif
