#include <vera_configuration.h>
#include <diagconfig.h>


const diagConfiguration diagConfig = { 0x93 };

DEFATTRIBUTE GPDIType DriverDown = {
154,
0,
0
};

DEFATTRIBUTE GPDIType DriverUp = {
155,
0,
0
};

DEFATTRIBUTE GPDOType MoveDown = {
167,
0,
0
};

DEFATTRIBUTE GPDOType MoveUp = {
168,
0,
0
};

DEFATTRIBUTE GPDIType PassengerDown = {
156,
0,
0
};

DEFATTRIBUTE GPDIType PassengerUp = {
116,
0,
0
};

DEFATTRIBUTE CANDbcReceiveSignalType Rec_123_obstacleDetected = {
0,
123,
0,
1,
0,
1,
1,
0,
1,
0,
0,
1,
1000
};

DEFATTRIBUTE CANDbcSendSignalType Send_124_currentPosition = {
0,
124,
0,
8,
16,
32,
1,
2,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_124_driverInformation = {
0,
124,
0,
8,
48,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_124_errorCounter = {
0,
124,
0,
8,
56,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_124_moveDown = {
0,
124,
0,
8,
8,
8,
1,
0,
1,
0,
0,
0,
100
};

DEFATTRIBUTE CANDbcSendSignalType Send_124_moveUp = {
0,
124,
0,
8,
0,
8,
1,
0,
1,
0,
0,
0,
100
};

DEFATTRIBUTE CANDbcSendSignalType Send_125_debug_driver_down = {
0,
125,
0,
5,
8,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_125_debug_driver_up = {
0,
125,
0,
5,
0,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_125_debug_obstacle_detected = {
0,
125,
0,
5,
32,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_125_debug_passenger_down = {
0,
125,
0,
5,
24,
8,
1,
0,
1,
0,
0,
0,
10
};

DEFATTRIBUTE CANDbcSendSignalType Send_125_debug_passenger_up = {
0,
125,
0,
5,
16,
8,
1,
0,
1,
0,
0,
0,
10
};
