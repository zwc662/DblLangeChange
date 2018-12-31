#include "__cf_Driveline.h"
#ifndef RTW_HEADER_Driveline_h_
#define RTW_HEADER_Driveline_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Driveline_COMMON_INCLUDES_
#define Driveline_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Driveline_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T fvrm4yfd4e ; real_T okehu0u2np ; real_T m2rkvfrpvt ;
real_T ii4oqw1plb ; real_T ha3jsuwdb4 ; real_T c24sf3220x ; real_T n1pjq5xxqr
; real_T dbx4v45tub ; real_T epm1333bg5 ; real_T bc2fvok4pz ; real_T
kxbpwgx4tu ; real_T cbxs5foau0 ; real_T fb5hr0zqbr ; real_T cnkqzq0o3x ;
real_T p1leqh5tla ; real_T gvyboebkso ; real_T liqo2rerjf ; real_T fktcyocgwo
; real_T duznolaao5 ; real_T gl2rztcbgz ; real_T lam3avcbpy [ 2 ] ; real_T
cna2aqb5dg ; real_T i4tgu03ypp ; real_T o0lofodia0 ; real_T dfxuw1vaz0 ;
real_T a4u4nb2xq0 ; real_T a2l2n5vq1w ; real_T iv3fuqjzov ; real_T momeq33tm2
; real_T bmz42g5yfb ; real_T hn5joceqa4 ; real_T pt35izd50r ; real_T
a1tzt2t4et ; real_T bfk54qx1wj ; real_T bxyxs3pvu4 ; real_T mptqfcxdud ;
real_T ih4bzdlqnu ; real_T p4fh4r5ezv ; real_T hvr50lenkc [ 4 ] ; real_T
i3qrna2zbj [ 2 ] ; } fxrjyezkwn ; typedef struct { real_T aydhqotte1 ; real_T
lswks2ukgt ; real_T kpe51se1do ; real_T l502nimlgu ; int_T fx20yktitu ; int_T
lzjbgr2s0z ; int_T a3mzd4aqhf ; } bsz3qtxrxd ; typedef struct { real_T
an20ej0urz ; real_T m5u3div5lv ; real_T mhg5fzigsh ; real_T d4codx0cj2 ;
real_T pv4pcgsg1q ; real_T dzsiiylm4p [ 2 ] ; real_T gmkd3jzxo3 ; real_T
nkhwyywomp ; real_T n0yhrynsk2 ; real_T px4qfmobdd ; real_T ahzdiwsjut [ 4 ]
; real_T fszdyetrmq [ 4 ] ; } oakdhkzk5b ; typedef struct { real_T an20ej0urz
; real_T m5u3div5lv ; real_T mhg5fzigsh ; real_T d4codx0cj2 ; real_T
pv4pcgsg1q ; real_T dzsiiylm4p [ 2 ] ; real_T gmkd3jzxo3 ; real_T nkhwyywomp
; real_T n0yhrynsk2 ; real_T px4qfmobdd ; real_T ahzdiwsjut [ 4 ] ; real_T
fszdyetrmq [ 4 ] ; } bjbjifrsrv ; typedef struct { boolean_T an20ej0urz ;
boolean_T m5u3div5lv ; boolean_T mhg5fzigsh ; boolean_T d4codx0cj2 ;
boolean_T pv4pcgsg1q ; boolean_T dzsiiylm4p [ 2 ] ; boolean_T gmkd3jzxo3 ;
boolean_T nkhwyywomp ; boolean_T n0yhrynsk2 ; boolean_T px4qfmobdd ;
boolean_T ahzdiwsjut [ 4 ] ; boolean_T fszdyetrmq [ 4 ] ; } l1pljxktrl ;
typedef struct { real_T an20ej0urz ; real_T m5u3div5lv ; real_T mhg5fzigsh ;
real_T d4codx0cj2 ; real_T pv4pcgsg1q ; real_T dzsiiylm4p [ 2 ] ; real_T
gmkd3jzxo3 ; real_T nkhwyywomp ; real_T n0yhrynsk2 ; real_T px4qfmobdd ;
real_T ahzdiwsjut [ 4 ] ; real_T fszdyetrmq [ 4 ] ; } grfcawoazk ; typedef
struct { real_T nfjdgtx0ln ; real_T bn1igm0kn5 ; real_T op4gzlb3bs ; }
jn1etpvcka ; typedef struct { ZCSigState oso4cujv2a ; ZCSigState ch0yfe4qpe ;
ZCSigState p3b4nvkjzw ; } gvxaj4x0qw ; struct gimbih1di0h_ { real_T P_0 ;
real_T P_1 ; real_T P_2 [ 10 ] ; real_T P_3 ; real_T P_4 [ 10 ] ; real_T P_5
; real_T P_6 ; real_T P_7 [ 10 ] ; real_T P_8 ; real_T P_9 ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T
P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 [ 10 ] ; real_T P_20 ; real_T
P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 [ 8 ] ; real_T
P_26 [ 10 ] ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 [ 8 ] ;
real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T
P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ;
real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T
P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ;
real_T P_53 [ 2 ] ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ;
real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T
P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ;
real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T
P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; } ; struct coyvih0rk1 {
struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ;
real_T mr_nonContSig1 [ 1 ] ; real_T mr_nonContSig2 [ 1 ] ; real_T
mr_nonContSig3 [ 1 ] ; real_T mr_nonContSig4 [ 1 ] ; real_T mr_nonContSig5 [
1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 6 ] ;
const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
12 ] ; int32_T * vardimsAddress [ 12 ] ; RTWLoggingFcnPtr loggingPtrs [ 12 ]
; sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
fxrjyezkwn rtb ; bsz3qtxrxd rtdw ; dwsgrvz41y rtm ; gvxaj4x0qw rtzce ; }
n5qm5cab0up ; extern void jnccjczqwr ( SimStruct * _mdlRefSfcnS ,
ssNonContDerivSigFeedingOutports * * mr_nonContOutputArray , int_T
mdlref_TID0 , int_T mdlref_TID1 , dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn
* localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_Driveline_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Driveline_GetDWork ( const
n5qm5cab0up * mdlrefDW ) ; extern void mr_Driveline_SetDWork ( n5qm5cab0up *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Driveline_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Driveline_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Driveline_GetCAPIStaticMap ( void ) ; extern
void djkfokdtse ( dwsgrvz41y * const pubqvcmed4 , bsz3qtxrxd * localDW ,
oakdhkzk5b * localX ) ; extern void aj1apekess ( dwsgrvz41y * const
pubqvcmed4 , bsz3qtxrxd * localDW , oakdhkzk5b * localX ) ; extern void
igx4apxpta ( fxrjyezkwn * localB ) ; extern void bpgqz3xzpl ( const real_T *
ldxbfzy4yw , const int8_T * jovsfwfg3e , const real_T caebyi2sab [ 4 ] ,
const real_T pmpfb1utv4 [ 4 ] , real_T * azye50kz02 , fxrjyezkwn * localB ,
oakdhkzk5b * localX , bjbjifrsrv * localXdot ) ; extern void cyzpp4e52p (
dwsgrvz41y * const pubqvcmed4 , fxrjyezkwn * localB , bsz3qtxrxd * localDW )
; extern void Driveline ( dwsgrvz41y * const pubqvcmed4 , const real_T *
j45cp5ppdn , real_T iioyllnquu [ 4 ] , real_T jp4z35ch12 [ 4 ] , real_T
bumnd4n3ix [ 4 ] , real_T * azye50kz02 , real_T * i215und1x3 , fxrjyezkwn *
localB , bsz3qtxrxd * localDW , oakdhkzk5b * localX , gvxaj4x0qw * localZCE )
; extern void btsnzboicn ( dwsgrvz41y * const pubqvcmed4 ) ;
#endif
