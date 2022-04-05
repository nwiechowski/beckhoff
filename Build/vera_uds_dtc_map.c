/* Map of DTCs with an identifier and a status */
#include "Std_Types.h"
#include "Uds_Dtc.h"

/* List of all DTCs configured in VeRa Desk */
Uds_Dtc Uds_DtcList[1];
/* Calculate the sizes of the lists */
uint32 U32Uds_DtcListSize = sizeof(Uds_DtcList)/sizeof(Uds_DtcList[0]);