/*
 * WindowControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "WindowControl".
 *
 * Model version              : 19.37
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Tue Feb 22 12:52:57 2022
 *
 * Target selection: vera_target.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_WindowControl_h_
#define RTW_HEADER_WindowControl_h_
#include <stddef.h>
#include <string.h>
#ifndef WindowControl_COMMON_INCLUDES_
#define WindowControl_COMMON_INCLUDES_
#include <VERA_GPDI.h>
#include <VERA_CANDbc.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* WindowControl_COMMON_INCLUDES_ */

#include "WindowControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T DataTypeConversion;         /* '<S1>/Data Type Conversion' */
  real32_T DataTypeConversion1;        /* '<S1>/Data Type Conversion1' */
  real32_T DataTypeConversion2;        /* '<S1>/Data Type Conversion2' */
  real32_T DataTypeConversion3;        /* '<S1>/Data Type Conversion3' */
  real32_T DataTypeConversion4;        /* '<S1>/Data Type Conversion4' */
  real32_T DataTypeConversion5;        /* '<S1>/Data Type Conversion5' */
  real32_T DataTypeConversion6;        /* '<S1>/Data Type Conversion6' */
  real32_T Rec_123_obstacleDetected_o1;/* '<S1>/Rec_123_obstacleDetected' */
  real32_T DataTypeConversion7;        /* '<S1>/Data Type Conversion7' */
  real32_T DataTypeConversion8;        /* '<S1>/Data Type Conversion8' */
  real32_T DataTypeConversion9;        /* '<S1>/Data Type Conversion9' */
  real32_T Send_124_currentPosition;   /* '<S1>/Send_124_currentPosition' */
  real32_T Send_124_driverInformation; /* '<S1>/Send_124_driverInformation' */
  real32_T Send_124_errorCounter;      /* '<S1>/Send_124_errorCounter' */
  real32_T Send_124_moveDown;          /* '<S1>/Send_124_moveDown' */
  real32_T Send_124_moveUp;            /* '<S1>/Send_124_moveUp' */
  real32_T Send_125_debug_driver_down; /* '<S1>/Send_125_debug_driver_down' */
  real32_T Send_125_debug_driver_up;   /* '<S1>/Send_125_debug_driver_up' */
  real32_T Send_125_debug_obstacle_detecte;
                                   /* '<S1>/Send_125_debug_obstacle_detected' */
  real32_T Send_125_debug_passenger_down;
                                      /* '<S1>/Send_125_debug_passenger_down' */
  real32_T Send_125_debug_passenger_up;/* '<S1>/Send_125_debug_passenger_up' */
  uint8_T DriverUp;                    /* '<S1>/DriverUp' */
  uint8_T DriverDown;                  /* '<S1>/DriverDown' */
  uint8_T PassengerUp;                 /* '<S1>/PassengerUp' */
  uint8_T PassengerDown;               /* '<S1>/PassengerDown' */
  uint8_T Rec_123_obstacleDetected_o2; /* '<S1>/Rec_123_obstacleDetected' */
} B_WindowControl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S9>/UnitDelay1' */
  real_T UnitDelay_DSTATE;             /* '<S9>/UnitDelay' */
  int16_T Rec_123_obstacleDetected_DWORK1;/* '<S1>/Rec_123_obstacleDetected' */
  int16_T Send_124_currentPosition_DWORK1;/* '<S1>/Send_124_currentPosition' */
  int16_T Send_124_driverInformation_DWOR;/* '<S1>/Send_124_driverInformation' */
  int16_T Send_124_errorCounter_DWORK1;/* '<S1>/Send_124_errorCounter' */
  int16_T Send_124_moveDown_DWORK1;    /* '<S1>/Send_124_moveDown' */
  int16_T Send_124_moveUp_DWORK1;      /* '<S1>/Send_124_moveUp' */
  int16_T Send_125_debug_driver_down_DWOR;/* '<S1>/Send_125_debug_driver_down' */
  int16_T Send_125_debug_driver_up_DWORK1;/* '<S1>/Send_125_debug_driver_up' */
  int16_T Send_125_debug_obstacle_detecte;
                                   /* '<S1>/Send_125_debug_obstacle_detected' */
  int16_T Send_125_debug_passenger_down_D;
                                      /* '<S1>/Send_125_debug_passenger_down' */
  int16_T Send_125_debug_passenger_up_DWO;/* '<S1>/Send_125_debug_passenger_up' */
  boolean_T initial_position_value_FirstOut;/* '<S9>/initial_position_value' */
} DW_WindowControl_T;

/* Real-time Model Data Structure */
struct tag_RTM_WindowControl_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_WindowControl_T WindowControl_B;

/* Block states (default storage) */
extern DW_WindowControl_T WindowControl_DW;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
#define START_SEC_PARAM_DATA
#include <memmap.h>

extern real_T armature_position;       /* Variable: armature_position
                                        * Referenced by: '<S9>/initial_position_value'
                                        */
extern real_T energy_save_speed;       /* Variable: energy_save_speed
                                        * Referenced by: '<S6>/Constant'
                                        */
extern real_T window_speed;            /* Variable: window_speed
                                        * Referenced by: '<S9>/up'
                                        */

#define STOP_SEC_PARAM_DATA
#include <memmap.h>

/* Model entry point functions */
extern void WindowControl_initialize(void);
extern void WindowControl_output(void);
extern void WindowControl_update(void);
extern void WindowControl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_WindowControl_T *const WindowControl_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'WindowControl'
 * '<S1>'   : 'WindowControl/Task_Time'
 * '<S2>'   : 'WindowControl/Task_Time/Subsystem Reference'
 * '<S3>'   : 'WindowControl/Task_Time/Subsystem Reference/Vehicle'
 * '<S4>'   : 'WindowControl/Task_Time/Subsystem Reference/active_signal_filter'
 * '<S5>'   : 'WindowControl/Task_Time/Subsystem Reference/check_errors'
 * '<S6>'   : 'WindowControl/Task_Time/Subsystem Reference/driver_information_system'
 * '<S7>'   : 'WindowControl/Task_Time/Subsystem Reference/error_sum'
 * '<S8>'   : 'WindowControl/Task_Time/Subsystem Reference/signal_creator'
 * '<S9>'   : 'WindowControl/Task_Time/Subsystem Reference/window_position'
 * '<S10>'  : 'WindowControl/Task_Time/Subsystem Reference/check_errors/pass_driver_signals'
 * '<S11>'  : 'WindowControl/Task_Time/Subsystem Reference/check_errors/pass_passenger_signals'
 * '<S12>'  : 'WindowControl/Task_Time/Subsystem Reference/driver_information_system/information_output'
 * '<S13>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/driver_signals'
 * '<S14>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/passenger_signals'
 * '<S15>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/driver_signals/check_driver_control'
 * '<S16>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/driver_signals/validate_driver_signals'
 * '<S17>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/passenger_signals/check_driver_control'
 * '<S18>'  : 'WindowControl/Task_Time/Subsystem Reference/signal_creator/passenger_signals/validate_driver_signals'
 * '<S19>'  : 'WindowControl/Task_Time/Subsystem Reference/window_position/Saturation Dynamic'
 * '<S20>'  : 'WindowControl/Task_Time/Subsystem Reference/window_position/check_direction'
 */
#endif                                 /* RTW_HEADER_WindowControl_h_ */
