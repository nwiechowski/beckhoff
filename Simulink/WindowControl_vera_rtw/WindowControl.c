/*
 * WindowControl.c
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

#include "WindowControl.h"
#include "WindowControl_private.h"

/* Exported block parameters */
#define START_SEC_PARAM_DATA
#include <memmap.h>

real_T armature_position = 0.0;        /* Variable: armature_position
                                        * Referenced by: '<S9>/initial_position_value'
                                        */
real_T energy_save_speed = 10.0;       /* Variable: energy_save_speed
                                        * Referenced by: '<S6>/Constant'
                                        */
real_T window_speed = 0.25;            /* Variable: window_speed
                                        * Referenced by: '<S9>/up'
                                        */

#define STOP_SEC_PARAM_DATA
#include <memmap.h>

/* Block signals (default storage) */
B_WindowControl_T WindowControl_B;

/* Block states (default storage) */
DW_WindowControl_T WindowControl_DW;

/* Real-time model */
static RT_MODEL_WindowControl_T WindowControl_M_;
RT_MODEL_WindowControl_T *const WindowControl_M = &WindowControl_M_;

/* System initialize for function-call system: '<Root>/Task_Time' */
void WindowControl_Task_Time_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S9>/UnitDelay1' */
  WindowControl_DW.UnitDelay1_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S9>/UnitDelay' */
  WindowControl_DW.UnitDelay_DSTATE = 0.0;
}

/* Start for function-call system: '<Root>/Task_Time' */
void WindowControl_Task_Time_Start(void)
{
  /* Start for InitialCondition: '<S9>/initial_position_value' */
  WindowControl_DW.initial_position_value_FirstOut = true;

  /* Start for S-Function (mdl_GPDI): '<S1>/DriverUp' incorporates:
   *  Constant: '<S1>/Constant'
   */

  /*****************************************************************************
   ** GPDI 'DriverUp'
   ****************************************************************************/
  {
    /*! Init GPDI 'DriverUp' */
    VERA_GPDI_Init(&DriverUp);
  }

  /* Start for S-Function (mdl_GPDI): '<S1>/DriverDown' incorporates:
   *  Constant: '<S1>/Constant1'
   */

  /*****************************************************************************
   ** GPDI 'DriverDown'
   ****************************************************************************/
  {
    /*! Init GPDI 'DriverDown' */
    VERA_GPDI_Init(&DriverDown);
  }

  /* Start for S-Function (mdl_GPDI): '<S1>/PassengerUp' incorporates:
   *  Constant: '<S1>/Constant2'
   */

  /*****************************************************************************
   ** GPDI 'PassengerUp'
   ****************************************************************************/
  {
    /*! Init GPDI 'PassengerUp' */
    VERA_GPDI_Init(&PassengerUp);
  }

  /* Start for S-Function (mdl_GPDI): '<S1>/PassengerDown' incorporates:
   *  Constant: '<S1>/Constant3'
   */

  /*****************************************************************************
   ** GPDI 'PassengerDown'
   ****************************************************************************/
  {
    /*! Init GPDI 'PassengerDown' */
    VERA_GPDI_Init(&PassengerDown);
  }

  /* Start for S-Function (mdl_CANDbcReceiveSignal): '<S1>/Rec_123_obstacleDetected' incorporates:
   *  Constant: '<S1>/Constant4'
   */

  /*****************************************************************************
   ** CANDbcReceiveSignal 'Rec_123_obstacleDetected'
   ****************************************************************************/
  {
    /*! Init CANDbc_Receive 'Rec_123_obstacleDetected' */
    VERA_CANDbc_Receive_Init(&Rec_123_obstacleDetected,
      &WindowControl_DW.Rec_123_obstacleDetected_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_currentPosition' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_currentPosition'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_124_currentPosition' */
    VERA_CANDbc_Send_Init(&Send_124_currentPosition,
                          &WindowControl_DW.Send_124_currentPosition_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_driverInformation' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_driverInformation'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_124_driverInformation' */
    VERA_CANDbc_Send_Init(&Send_124_driverInformation,
                          &WindowControl_DW.Send_124_driverInformation_DWOR);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_errorCounter' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_errorCounter'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_124_errorCounter' */
    VERA_CANDbc_Send_Init(&Send_124_errorCounter,
                          &WindowControl_DW.Send_124_errorCounter_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_moveDown' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_moveDown'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_124_moveDown' */
    VERA_CANDbc_Send_Init(&Send_124_moveDown,
                          &WindowControl_DW.Send_124_moveDown_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_moveUp' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_moveUp'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_124_moveUp' */
    VERA_CANDbc_Send_Init(&Send_124_moveUp,
                          &WindowControl_DW.Send_124_moveUp_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_driver_down' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_driver_down'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_125_debug_driver_down' */
    VERA_CANDbc_Send_Init(&Send_125_debug_driver_down,
                          &WindowControl_DW.Send_125_debug_driver_down_DWOR);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_driver_up' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_driver_up'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_125_debug_driver_up' */
    VERA_CANDbc_Send_Init(&Send_125_debug_driver_up,
                          &WindowControl_DW.Send_125_debug_driver_up_DWORK1);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_obstacle_detected' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_obstacle_detected'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_125_debug_obstacle_detected' */
    VERA_CANDbc_Send_Init(&Send_125_debug_obstacle_detected,
                          &WindowControl_DW.Send_125_debug_obstacle_detecte);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_passenger_down' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_passenger_down'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_125_debug_passenger_down' */
    VERA_CANDbc_Send_Init(&Send_125_debug_passenger_down,
                          &WindowControl_DW.Send_125_debug_passenger_down_D);
  }

  /* Start for S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_passenger_up' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_passenger_up'
   ****************************************************************************/
  {
    /*! Init CANDbcSendSignal 'Send_125_debug_passenger_up' */
    VERA_CANDbc_Send_Init(&Send_125_debug_passenger_up,
                          &WindowControl_DW.Send_125_debug_passenger_up_DWO);
  }
}

/* Output and update for function-call system: '<Root>/Task_Time' */
void WindowControl_Task_Time(void)
{
  real_T rtb_Add;
  real_T rtb_Switch;
  real_T rtb_Switch4;
  real_T rtb_Switch_o;
  real_T rtb_control_active_n_tmp;
  uint8_T rtb_Add_c;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_RelationalOperator_a;
  boolean_T rtb_control_active;
  boolean_T rtb_control_active_b;

  /* UnitDelay: '<S9>/UnitDelay' */
  rtb_Switch4 = WindowControl_DW.UnitDelay_DSTATE;

  /* InitialCondition: '<S9>/initial_position_value' */
  if (WindowControl_DW.initial_position_value_FirstOut) {
    WindowControl_DW.initial_position_value_FirstOut = false;
    rtb_Switch4 = armature_position;
  }

  /* End of InitialCondition: '<S9>/initial_position_value' */

  /* Sum: '<S9>/Add' incorporates:
   *  UnitDelay: '<S9>/UnitDelay1'
   */
  rtb_Add = WindowControl_DW.UnitDelay1_DSTATE + rtb_Switch4;

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S9>/lower_bound'
   *  RelationalOperator: '<S19>/UpperRelop'
   */
  if (rtb_Add < 0.0) {
    rtb_Switch = 0.0;
  } else {
    rtb_Switch = rtb_Add;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Switch: '<S19>/Switch2' incorporates:
   *  Constant: '<S9>/upper_bound'
   *  RelationalOperator: '<S19>/LowerRelop1'
   */
  if (rtb_Add > 100.0) {
    rtb_Add = 100.0;
  } else {
    rtb_Add = rtb_Switch;
  }

  /* End of Switch: '<S19>/Switch2' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  WindowControl_B.DataTypeConversion = (real32_T)rtb_Add;

  /* S-Function (mdl_GPDI): '<S1>/DriverUp' incorporates:
   *  Constant: '<S1>/Constant'
   */

  /*****************************************************************************
   ** GPDI 'DriverUp'
   ****************************************************************************/
  {
    /*! Update GPDI  */
    VERA_GPDI_Get(&DriverUp, &WindowControl_B.DriverUp);
  }

  /* S-Function (mdl_GPDI): '<S1>/DriverDown' incorporates:
   *  Constant: '<S1>/Constant1'
   */

  /*****************************************************************************
   ** GPDI 'DriverDown'
   ****************************************************************************/
  {
    /*! Update GPDI  */
    VERA_GPDI_Get(&DriverDown, &WindowControl_B.DriverDown);
  }

  /* RelationalOperator: '<S16>/Relational Operator' incorporates:
   *  Constant: '<S16>/two'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  Sum: '<S16>/Add'
   */
  rtb_Switch_o = (uint8_T)((uint32_T)WindowControl_B.DriverUp +
    WindowControl_B.DriverDown);
  rtb_control_active = (rtb_Switch_o >= 2.0);

  /* S-Function (mdl_GPDI): '<S1>/PassengerUp' incorporates:
   *  Constant: '<S1>/Constant2'
   */

  /*****************************************************************************
   ** GPDI 'PassengerUp'
   ****************************************************************************/
  {
    /*! Update GPDI  */
    VERA_GPDI_Get(&PassengerUp, &WindowControl_B.PassengerUp);
  }

  /* S-Function (mdl_GPDI): '<S1>/PassengerDown' incorporates:
   *  Constant: '<S1>/Constant3'
   */

  /*****************************************************************************
   ** GPDI 'PassengerDown'
   ****************************************************************************/
  {
    /*! Update GPDI  */
    VERA_GPDI_Get(&PassengerDown, &WindowControl_B.PassengerDown);
  }

  /* RelationalOperator: '<S18>/Relational Operator' incorporates:
   *  Constant: '<S18>/two'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  Sum: '<S18>/Add'
   */
  rtb_control_active_n_tmp = (uint8_T)((uint32_T)WindowControl_B.PassengerUp +
    WindowControl_B.PassengerDown);
  rtb_control_active_b = (rtb_control_active_n_tmp >= 2.0);

  /* Sum: '<S7>/Add' */
  rtb_Add_c = (uint8_T)((uint32_T)rtb_control_active + rtb_control_active_b);

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  WindowControl_B.DataTypeConversion1 = rtb_Add_c;

  /* MATLAB Function: '<S6>/information_output' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S6>/Constant'
   */
  /* MATLAB Function 'Task_Time/Subsystem Reference/driver_information_system/information_output': '<S12>:1' */
  /* '<S12>:1:5' */
  rtb_Switch = 0.0;
  if (rtb_Add_c > 0) {
    /* '<S12>:1:6' */
    /* '<S12>:1:8' */
    rtb_Switch = 2.0;
  } else {
    if ((0.0 >= energy_save_speed) && (rtb_Add < 100.0)) {
      /* '<S12>:1:9' */
      /* '<S12>:1:11' */
      /* '<S12>:1:12' */
      rtb_Switch = 1.0;
    }
  }

  /* End of MATLAB Function: '<S6>/information_output' */

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  WindowControl_B.DataTypeConversion2 = (real32_T)rtb_Switch;

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  WindowControl_B.DataTypeConversion3 = WindowControl_B.DriverUp;

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  WindowControl_B.DataTypeConversion4 = WindowControl_B.DriverDown;

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  WindowControl_B.DataTypeConversion5 = WindowControl_B.PassengerUp;

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  WindowControl_B.DataTypeConversion6 = WindowControl_B.PassengerDown;

  /* S-Function (mdl_CANDbcReceiveSignal): '<S1>/Rec_123_obstacleDetected' incorporates:
   *  Constant: '<S1>/Constant4'
   */

  /*****************************************************************************
   ** CANDbcReceiveSignal 'Rec_123_obstacleDetected'
   ****************************************************************************/
  {
    /*! Update CANDbc_Receive */
    WindowControl_B.Rec_123_obstacleDetected_o2 = VERA_CANDbc_Receive
      (&Rec_123_obstacleDetected,
       WindowControl_DW.Rec_123_obstacleDetected_DWORK1,
       &WindowControl_B.Rec_123_obstacleDetected_o1);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion7' */
  WindowControl_B.DataTypeConversion7 =
    WindowControl_B.Rec_123_obstacleDetected_o1;

  /* RelationalOperator: '<S10>/Relational Operator' incorporates:
   *  Constant: '<S10>/zero'
   */
  rtb_RelationalOperator = ((real_T)rtb_control_active > 0.0);

  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S10>/zero'
   */
  if (rtb_RelationalOperator) {
    rtb_Switch4 = 0.0;
  } else {
    rtb_Switch4 = WindowControl_B.DriverUp;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* RelationalOperator: '<S15>/Relational Operator' incorporates:
   *  Constant: '<S15>/Constant_One'
   */
  rtb_control_active = (rtb_Switch_o >= 1.0);

  /* RelationalOperator: '<S11>/Relational Operator' incorporates:
   *  Constant: '<S11>/zero'
   */
  rtb_RelationalOperator_a = ((real_T)rtb_control_active_b > 0.0);

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/zero'
   */
  if (rtb_RelationalOperator_a) {
    rtb_Switch_o = 0.0;
  } else {
    rtb_Switch_o = WindowControl_B.PassengerUp;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* RelationalOperator: '<S17>/Relational Operator' incorporates:
   *  Constant: '<S17>/Constant_One'
   */
  rtb_control_active_b = (rtb_control_active_n_tmp >= 1.0);

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/zero'
   */
  if (!rtb_control_active_b) {
    rtb_Switch_o = 0.0;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Switch: '<S4>/driver_switch' */
  if (!rtb_control_active) {
    rtb_Switch4 = rtb_Switch_o;
  }

  /* End of Switch: '<S4>/driver_switch' */

  /* Switch: '<S4>/check_obstacles' incorporates:
   *  Constant: '<S4>/zero'
   */
  if (WindowControl_B.Rec_123_obstacleDetected_o1 > 0.0F) {
    rtb_Switch = 0.0;
  } else {
    rtb_Switch = rtb_Switch4;
  }

  /* End of Switch: '<S4>/check_obstacles' */

  /* DataTypeConversion: '<S1>/Data Type Conversion8' */
  WindowControl_B.DataTypeConversion8 = (real32_T)rtb_Switch;

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/zero'
   */
  if (rtb_RelationalOperator) {
    rtb_Switch_o = 0.0;
  } else {
    rtb_Switch_o = WindowControl_B.DriverDown;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/zero'
   */
  if (rtb_RelationalOperator_a) {
    rtb_Switch4 = 0.0;
  } else {
    rtb_Switch4 = WindowControl_B.PassengerDown;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S4>/Switch4' incorporates:
   *  Constant: '<S4>/zero'
   */
  if (!rtb_control_active_b) {
    rtb_Switch4 = 0.0;
  }

  /* End of Switch: '<S4>/Switch4' */

  /* Switch: '<S4>/passenger_switch' */
  if (rtb_control_active) {
    rtb_Switch4 = rtb_Switch_o;
  }

  /* End of Switch: '<S4>/passenger_switch' */

  /* DataTypeConversion: '<S1>/Data Type Conversion9' */
  WindowControl_B.DataTypeConversion9 = (real32_T)rtb_Switch4;

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_currentPosition' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_currentPosition'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_124_currentPosition,
                     WindowControl_DW.Send_124_currentPosition_DWORK1,
                     WindowControl_B.DataTypeConversion);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_driverInformation' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_driverInformation'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_124_driverInformation,
                     WindowControl_DW.Send_124_driverInformation_DWOR,
                     WindowControl_B.DataTypeConversion2);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_errorCounter' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_errorCounter'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_124_errorCounter,
                     WindowControl_DW.Send_124_errorCounter_DWORK1,
                     WindowControl_B.DataTypeConversion1);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_moveDown' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_moveDown'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_124_moveDown,
                     WindowControl_DW.Send_124_moveDown_DWORK1,
                     WindowControl_B.DataTypeConversion9);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_124_moveUp' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_124_moveUp'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_124_moveUp, WindowControl_DW.Send_124_moveUp_DWORK1,
                     WindowControl_B.DataTypeConversion8);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_driver_down' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_driver_down'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_125_debug_driver_down,
                     WindowControl_DW.Send_125_debug_driver_down_DWOR,
                     WindowControl_B.DataTypeConversion4);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_driver_up' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_driver_up'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_125_debug_driver_up,
                     WindowControl_DW.Send_125_debug_driver_up_DWORK1,
                     WindowControl_B.DataTypeConversion3);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_obstacle_detected' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_obstacle_detected'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_125_debug_obstacle_detected,
                     WindowControl_DW.Send_125_debug_obstacle_detecte,
                     WindowControl_B.DataTypeConversion7);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_passenger_down' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_passenger_down'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_125_debug_passenger_down,
                     WindowControl_DW.Send_125_debug_passenger_down_D,
                     WindowControl_B.DataTypeConversion6);
  }

  /* S-Function (mdl_CANDbcSendSignal): '<S1>/Send_125_debug_passenger_up' */

  /*****************************************************************************
   ** CANDbcSendSignal 'Send_125_debug_passenger_up'
   ****************************************************************************/
  {
    /*! Update CANDbcSendSignal  */
    VERA_CANDbc_Send(&Send_125_debug_passenger_up,
                     WindowControl_DW.Send_125_debug_passenger_up_DWO,
                     WindowControl_B.DataTypeConversion5);
  }

  /* MATLAB Function: '<S9>/check_direction' */
  /* MATLAB Function 'Task_Time/Subsystem Reference/window_position/check_direction': '<S20>:1' */
  if (rtb_Switch == 1.0) {
    /* '<S20>:1:4' */
    /* '<S20>:1:5' */
    rtb_Switch = 0.0;
  } else if (rtb_Switch4 == 1.0) {
    /* '<S20>:1:6' */
    /* '<S20>:1:7' */
    rtb_Switch = 1.0;
  } else {
    /* '<S20>:1:9' */
    rtb_Switch = 2.0;
  }

  /* End of MATLAB Function: '<S9>/check_direction' */

  /* MultiPortSwitch: '<S9>/MultiportSwitch' */
  switch ((int32_T)rtb_Switch) {
   case 0:
    /* Update for UnitDelay: '<S9>/UnitDelay1' incorporates:
     *  Constant: '<S9>/up'
     */
    WindowControl_DW.UnitDelay1_DSTATE = window_speed;
    break;

   case 1:
    /* Update for UnitDelay: '<S9>/UnitDelay1' incorporates:
     *  Constant: '<S9>/down'
     *  Constant: '<S9>/up'
     *  Product: '<S9>/Product'
     */
    WindowControl_DW.UnitDelay1_DSTATE = window_speed * (-1.0);
    break;

   default:
    /* Update for UnitDelay: '<S9>/UnitDelay1' incorporates:
     *  Constant: '<S9>/neutral'
     */
    WindowControl_DW.UnitDelay1_DSTATE = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<S9>/MultiportSwitch' */

  /* Update for UnitDelay: '<S9>/UnitDelay' */
  WindowControl_DW.UnitDelay_DSTATE = rtb_Add;
}

/* Model output function */
void WindowControl_output(void)
{
  /* S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Task_Time'
   */
  WindowControl_Task_Time();

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model update function */
void WindowControl_update(void)
{
  /* (no update code required) */
}

/* Model initialize function */
void WindowControl_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(WindowControl_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &WindowControl_B), 0,
                sizeof(B_WindowControl_T));

  {
    WindowControl_B.DataTypeConversion = 0.0F;
    WindowControl_B.DataTypeConversion1 = 0.0F;
    WindowControl_B.DataTypeConversion2 = 0.0F;
    WindowControl_B.DataTypeConversion3 = 0.0F;
    WindowControl_B.DataTypeConversion4 = 0.0F;
    WindowControl_B.DataTypeConversion5 = 0.0F;
    WindowControl_B.DataTypeConversion6 = 0.0F;
    WindowControl_B.Rec_123_obstacleDetected_o1 = 0.0F;
    WindowControl_B.DataTypeConversion7 = 0.0F;
    WindowControl_B.DataTypeConversion8 = 0.0F;
    WindowControl_B.DataTypeConversion9 = 0.0F;
    WindowControl_B.Send_124_currentPosition = 0.0F;
    WindowControl_B.Send_124_driverInformation = 0.0F;
    WindowControl_B.Send_124_errorCounter = 0.0F;
    WindowControl_B.Send_124_moveDown = 0.0F;
    WindowControl_B.Send_124_moveUp = 0.0F;
    WindowControl_B.Send_125_debug_driver_down = 0.0F;
    WindowControl_B.Send_125_debug_driver_up = 0.0F;
    WindowControl_B.Send_125_debug_obstacle_detecte = 0.0F;
    WindowControl_B.Send_125_debug_passenger_down = 0.0F;
    WindowControl_B.Send_125_debug_passenger_up = 0.0F;
  }

  /* states (dwork) */
  (void) memset((void *)&WindowControl_DW, 0,
                sizeof(DW_WindowControl_T));
  WindowControl_DW.UnitDelay1_DSTATE = 0.0;
  WindowControl_DW.UnitDelay_DSTATE = 0.0;

  /* Start for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Task_Time'
   */
  WindowControl_Task_Time_Start();

  /* End of Start for S-Function (fcgen): '<Root>/Function-Call Generator' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Task_Time'
   */
  WindowControl_Task_Time_Init();

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator' */
}

/* Model terminate function */
void WindowControl_terminate(void)
{
  /* (no terminate code required) */
}
