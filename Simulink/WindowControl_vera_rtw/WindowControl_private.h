/*
 * WindowControl_private.h
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

#ifndef RTW_HEADER_WindowControl_private_h_
#define RTW_HEADER_WindowControl_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "WindowControl.h"

/*! Configuration DriverUp */
extern GPDIType DriverUp;

/*! Configuration DriverDown */
extern GPDIType DriverDown;

/*! Configuration PassengerUp */
extern GPDIType PassengerUp;

/*! Configuration PassengerDown */
extern GPDIType PassengerDown;

/*! Configuration Rec_123_obstacleDetected */
extern CANDbcReceiveSignalType Rec_123_obstacleDetected;

/*! Configuration Send_124_currentPosition */
extern CANDbcSendSignalType Send_124_currentPosition;

/*! Configuration Send_124_driverInformation */
extern CANDbcSendSignalType Send_124_driverInformation;

/*! Configuration Send_124_errorCounter */
extern CANDbcSendSignalType Send_124_errorCounter;

/*! Configuration Send_124_moveDown */
extern CANDbcSendSignalType Send_124_moveDown;

/*! Configuration Send_124_moveUp */
extern CANDbcSendSignalType Send_124_moveUp;

/*! Configuration Send_125_debug_driver_down */
extern CANDbcSendSignalType Send_125_debug_driver_down;

/*! Configuration Send_125_debug_driver_up */
extern CANDbcSendSignalType Send_125_debug_driver_up;

/*! Configuration Send_125_debug_obstacle_detected */
extern CANDbcSendSignalType Send_125_debug_obstacle_detected;

/*! Configuration Send_125_debug_passenger_down */
extern CANDbcSendSignalType Send_125_debug_passenger_down;

/*! Configuration Send_125_debug_passenger_up */
extern CANDbcSendSignalType Send_125_debug_passenger_up;
extern void WindowControl_Task_Time_Init(void);
extern void WindowControl_Task_Time_Start(void);
extern void WindowControl_Task_Time(void);

#endif                                 /* RTW_HEADER_WindowControl_private_h_ */
