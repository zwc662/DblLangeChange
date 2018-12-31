#include "__cf_PassVeh7DOF.h"
#ifndef RTW_HEADER_PassVeh7DOF_cap_host_h_
#define RTW_HEADER_PassVeh7DOF_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
PassVeh7DOF_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void PassVeh7DOF_host_InitializeDataMapInfo ( PassVeh7DOF_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
