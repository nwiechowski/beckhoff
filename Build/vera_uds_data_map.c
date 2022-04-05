/*
 * Map of data with an identifier for UDS data by identifier methods
 */
#include "Std_Types.h"
#include "Uds_Data.h"



/* Data map which contains pointer to data and it's length */
Uds_Data Uds_DataList[] = {
	/* Project specific data provided by VeRa Desk */

	{0,0,0}
};


/* Calculate the size of the list */
uint16 U16Uds_DataListSize = sizeof(Uds_DataList)/sizeof(Uds_DataList[0]);