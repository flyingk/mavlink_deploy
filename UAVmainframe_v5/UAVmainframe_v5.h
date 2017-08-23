/** @file
 *	@brief MAVLink comm protocol generated from UAVmainframe_v5.xml
 *	@see http://mavlink.org
 */
#ifndef MAVLINK_UAVMAINFRAME_V5_H
#define MAVLINK_UAVMAINFRAME_V5_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_UAVMAINFRAME_V5.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 0, 0, 0, 27, 25, 0, 0, 0, 0, 0, 68, 26, 185, 229, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 0, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 0, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 24, 243, 14, 0, 0, 100, 36, 60, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 20, 23, 28, 21, 26, 12, 23, 28, 22, 14, 36, 52, 25, 15, 14, 22, 28, 22, 40, 44, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 0, 0, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 0, 0, 0, 15, 3, 0, 0, 0, 0, 0, 153, 183, 51, 59, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 0, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 0, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 148, 72, 131, 0, 0, 103, 154, 178, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 130, 54, 64, 34, 24, 87, 160, 57, 16, 128, 74, 179, 150, 42, 156, 27, 48, 53, 46, 130, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 0, 0, 8, 204, 49, 170, 44, 83, 46, 0}
#endif

#ifndef MAVLINK_MESSAGE_INFO
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_EULER_DEBUG, MAVLINK_MESSAGE_INFO_AIRDATA, MAVLINK_MESSAGE_INFO_AIRDATA_5_hole, MAVLINK_MESSAGE_INFO_CONTROL_FEEDBACK, MAVLINK_MESSAGE_INFO_PROPULSION, MAVLINK_MESSAGE_INFO_POWER, MAVLINK_MESSAGE_INFO_SERVO_NODE, MAVLINK_MESSAGE_INFO_IMU_DEBUG, MAVLINK_MESSAGE_INFO_ACCEL_DEBUG, MAVLINK_MESSAGE_INFO_MAG_DEBUG, MAVLINK_MESSAGE_INFO_FDR_STATUS, MAVLINK_MESSAGE_INFO_Longitudinal, MAVLINK_MESSAGE_INFO_Lateral, MAVLINK_MESSAGE_INFO_WEATHER, MAVLINK_MESSAGE_INFO_SPEKTRUM_LINK, MAVLINK_MESSAGE_INFO_FUEL_CELL, MAVLINK_MESSAGE_INFO_FUEL_CELL_DETAIL, MAVLINK_MESSAGE_INFO_PID_TUNE, MAVLINK_MESSAGE_INFO_EKF_STATE, MAVLINK_MESSAGE_INFO_EKF_DEBUG, MAVLINK_MESSAGE_INFO_TECS_DEBUG, MAVLINK_MESSAGE_INFO_MR_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_THRUST_SENSOR, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_UAVMAINFRAME_V5

// ENUM DEFINITIONS


/** @brief UAVmainframe-specific flight modes, sent as custom modes. */
#ifndef HAVE_ENUM_UAVmainframe_MODE
#define HAVE_ENUM_UAVmainframe_MODE
typedef enum UAVmainframe_MODE
{
	UAVmainframe_MODE_PREFLIGHT=0, /* Vehicle not armed and starting up. | */
	UAVmainframe_MODE_MANUAL=1, /* (Bit 1) Vehicle is in manual control mode. RC control direct feed through with relays disengaged. | */
	UAVmainframe_MODE_PASSTHROUGH=2, /* (Bit 2) Vehicle is in manual control mode. RC control passed through UAVmainframe with relays engaged. | */
	UAVmainframe_MODE_STABILISE=4, /* (Bit 3) Vehicle is in stabilise mode, low level attitude controllers engaged. | */
	UAVmainframe_MODE_TECS=8, /* (Bit 4) Vehicle is in altitude/speed hold mode. | */
	UAVmainframe_MODE_AUTO=16, /* (Bit 5) Vehicle is running in auto mode with onboard guidance. | */
	UAVmainframe_MODE_INPUT=32, /* (Bit 6) Vehicle is executing test inputs automatically. | */
	UAVmainframe_MODE_ENUM_END=33, /*  | */
} UAVmainframe_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UAVmainframe_AUTO_SUB_MODES
#define HAVE_ENUM_UAVmainframe_AUTO_SUB_MODES
typedef enum UAVmainframe_AUTO_SUB_MODES
{
	UAVmainframe_AUTO_SUB_MODE_DEFAULT=0, /* Vehicle is in undefined auto mode. | */
	UAVmainframe_AUTO_SUB_MODE_RETURN_HOME=1, /* (Bit 1) Vehicle is commanded to return to home position at specified altitude. | */
	UAVmainframe_AUTO_SUB_MODES_ENUM_END=2, /*  | */
} UAVmainframe_AUTO_SUB_MODES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UAVmainframe_INPUT_SUB_MODES
#define HAVE_ENUM_UAVmainframe_INPUT_SUB_MODES
typedef enum UAVmainframe_INPUT_SUB_MODES
{
	UAVmainframe_INPUT_SUB_MODE_DEFAULT=0, /* Undefined input. | */
	UAVmainframe_INPUT_SUB_MODE_ELEVATOR=1, /* (Bit 1) Elevator input. | */
	UAVmainframe_INPUT_SUB_MODE_RUDDER=2, /* (Bit 2) Rudder input. | */
	UAVmainframe_INPUT_SUB_MODE_AILERON=4, /* (Bit 3) Aileron input. | */
	UAVmainframe_INPUT_SUB_MODE_THROTTLE=8, /* (Bit 4) Throttle input. | */
	UAVmainframe_INPUT_SUB_MODES_ENUM_END=9, /*  | */
} UAVmainframe_INPUT_SUB_MODES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UAVmainframe_TECS_INPUT_SUB_MODES
#define HAVE_ENUM_UAVmainframe_TECS_INPUT_SUB_MODES
typedef enum UAVmainframe_TECS_INPUT_SUB_MODES
{
	UAVmainframe_TECS_INPUT_SUB_MODE_DEFAULT=0, /* Undefined TECS input. | */
	UAVmainframe_TECS_INPUT_SUB_MODE_GLIDE=1, /* (Bit 1) Glide mode. | */
	UAVmainframe_TECS_INPUT_SUB_MODE_ACCEL=2, /* (Bit 2) Constant altitude acceleration mode. | */
	UAVmainframe_TECS_INPUT_SUB_MODE_TURN=4, /* (Bit 3) Constant altitude and speed turning mode. | */
	UAVmainframe_TECS_INPUT_SUB_MODES_ENUM_END=5, /*  | */
} UAVmainframe_TECS_INPUT_SUB_MODES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UAVmainframe_MODE_FLAGS
#define HAVE_ENUM_UAVmainframe_MODE_FLAGS
typedef enum UAVmainframe_MODE_FLAGS
{
	UAVmainframe_MODE_FLAG_SAFETY_DISARMED=0, /* UAVmainframe safety set to disarmed. | */
	UAVmainframe_MODE_FLAG_SAFETY_ARMED=1, /* (Bit 1) UAVmainframe safety set to armed. Motors are enabled / running / can start. Ready to fly. | */
	UAVmainframe_MODE_FLAG_FLIGHT_SIM=2, /* (Bit 2) UAVmainframe in flight sim mode | */
	UAVmainframe_MODE_FLAG_INPUT_CLOSED_LOOP=4, /* (Bit 3) Vehicle is executing closed loop test inputs | */
	UAVmainframe_MODE_FLAG_TECS_INPUT_SETUP=8, /* (Bit 4) Vehicle is in performance test setup mode | */
	UAVmainframe_MODE_FLAGS_ENUM_END=9, /*  | */
} UAVmainframe_MODE_FLAGS;
#endif

#include "../common/common.h"

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_euler_debug.h"
#include "./mavlink_msg_airdata.h"
#include "./mavlink_msg_airdata_5_hole.h"
#include "./mavlink_msg_control_feedback.h"
#include "./mavlink_msg_propulsion.h"
#include "./mavlink_msg_power.h"
#include "./mavlink_msg_servo_node.h"
#include "./mavlink_msg_imu_debug.h"
#include "./mavlink_msg_accel_debug.h"
#include "./mavlink_msg_mag_debug.h"
#include "./mavlink_msg_fdr_status.h"
#include "./mavlink_msg_longitudinal.h"
#include "./mavlink_msg_lateral.h"
#include "./mavlink_msg_weather.h"
#include "./mavlink_msg_spektrum_link.h"
#include "./mavlink_msg_fuel_cell.h"
#include "./mavlink_msg_fuel_cell_detail.h"
#include "./mavlink_msg_pid_tune.h"
#include "./mavlink_msg_ekf_state.h"
#include "./mavlink_msg_ekf_debug.h"
#include "./mavlink_msg_tecs_debug.h"
#include "./mavlink_msg_mr_debug.h"
#include "./mavlink_msg_thrust_sensor.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_UAVMAINFRAME_V5_H
