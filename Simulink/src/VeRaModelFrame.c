/*!
 * @file VeRaModelFrame.c
 * @brief Entry point to the Simulink / Targetlink model
 * @version 4.3
 * 
 * This file can be modified with application specific initialization code.
 * Do not remove or modify the ***** AUTOMATIC XXX ***** comments as there are 
 * used as code insertion points by VeRa Desk.
 * 
 * VeRa Desk will upgrade this file from the template in 
 * VeRa_Templates\TplModelFrame.c if there is a mismatch in the version tag 
 * above. Custom changes have to be merged manually in this case.
 * 
 * Copyright VEMAC GmbH & Co. KG, Aachen 2020
 */

#include "OSEK_API.h"
#include "vera_configuration.h"
#include "syslog.h"

/***** AUTOMATIC GENERATED INCLUDES *****/


/*====================*
 * global Variables   *
 *====================*/
const char strModelBuildDate[] = __DATE__;
const char strModelBuildTime[] = __TIME__;
uint32 U32WatchdogPeriod = 0xb71b00;	/* watchdog timeout 300ms */
 
/***** AUTOMATIC GENERATED VARIABLES *****/

 
/***** PROTOTYPES OF AUTOMATIC GENERATED SETUP CALLS *****/


/***** AUTOMATIC GENERATED EVENTS *****/
EVENT(TimerEvent,EVENT_BIT00)

/***** AUTOMATIC GENERATED RESOURCES *****/


/***** AUTOMATIC GENERATED TASKS *****/

void VeRaModelInitialize(void)
{
	uint32 iHelp;
	
	log_info("Initialize...");
	
	/***** AUTOMATIC GENERATED SETUP CALLS *****/


    for(iHelp = 0; iHelp < MAX_TASKS; iHelp++)
    {
    	if(_OSTasks[RELEASE][iHelp] == NULL_PTR)
    	{
    		break;
    	}
    }
	
	/***** AUTOMATIC GENERATED TASKLIST *****/
    _OSTasks[RELEASE][iHelp++] = NULL_PTR;
	
	if(iHelp >= MAX_TASKS)
	{
		log_error("VeRaModelFrame, VeRaModelInitialize, GenerateTasks", OSEK_ERR_MAX_TASKS_EXCEEDED);
	}

    for(iHelp = 0; iHelp < MAX_ALARMS; iHelp++)
    {
    	if(_OSAlarms[RELEASE][iHelp] == NULL_PTR)
    	{
    		break;
    	}
    }
	
	/***** AUTOMATIC GENERATED ALARMLIST *****/
    _OSAlarms[RELEASE][iHelp++] = NULL_PTR;
	
	if(iHelp >= MAX_ALARMS)
	{
		log_error("VeRaModelFrame, VeRaModelInitialize, GenerateAlarms", OSEK_ERR_MAX_ALARMS_EXCEEDED);
	}

    for(iHelp = 0; iHelp < MAX_ALARMS; iHelp++)
    {
    	if(_OSAbsAlarms[RELEASE][iHelp] == NULL_PTR)
    	{
    		break;
    	}
    }

	/***** AUTOMATIC GENERATED ABSOLUTE ALARMLIST *****/
    _OSAbsAlarms[RELEASE][iHelp++] = NULL_PTR;
	
	if(iHelp > MAX_ALARMS)
	{
		log_error("VeRaModelFrame, VeRaModelInitialize, GenerateAlarms", OSEK_ERR_MAX_ALARMS_EXCEEDED);
	}

	/***** AUTOMATIC GENERATED MODEL INITIALIZE *****/

	/***** AUTOMATIC GENERATED POST-CONF CALLS *****/

    log_info("Model started");
	return;
}

void VeRaModelTerminate(void)
{
    return;
}

void VeRaComTaskLoop(void)
{
	/***** COMTASK MAIN LOOP *****/
	return;
}
