#pragma once
// MESSAGE RC_DATA_IN PACKING

#define MAVLINK_MSG_ID_RC_DATA_IN 223


typedef struct __mavlink_rc_data_in_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_UNIT_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float Voltage_UNIT_V; /*<  RC voltage [V]*/
 float Current_UNIT_A; /*<  RC servo current [A]*/
 float ADC_3_UNIT_V; /*<  ADC tbd 3*/
 float ADC_4_UNIT_V; /*<  ADC tbd 4*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
 uint16_t CH_1_UNIT_us; /*<  RC Channel 1 [us]*/
 uint16_t CH_2_UNIT_us; /*<  RC Channel 2 [us]*/
 uint16_t CH_3_UNIT_us; /*<  RC Channel 3 [us]*/
 uint16_t CH_4_UNIT_us; /*<  RC Channel 4 [us]*/
 uint16_t CH_5_UNIT_us; /*<  RC Channel 5 [us]*/
 uint16_t CH_6_UNIT_us; /*<  RC Channel 6 [us]*/
 uint16_t CH_7_UNIT_us; /*<  RC Channel 7 [us]*/
 uint16_t CH_8_UNIT_us; /*<  RC Channel 8 [us]*/
 uint16_t CH_9_UNIT_us; /*<  RC Channel 9 [us]*/
 uint16_t SignalHold_UNIT_none; /*<  RC signal full dropouts [-]*/
 uint16_t SignalFrameLoss_UNIT_none; /*<  RC signal frame dropouts [-]*/
 uint16_t SignalFadesMain_UNIT_none; /*<  RC signal fades main antenna [-]*/
 uint16_t SignalFadesSat1_UNIT_none; /*<  RC signal fades sat1 antenna [-]*/
 uint16_t SignalFadesSat2_UNIT_none; /*<  RC signal fades sat2 antenna [-]*/
 uint16_t SignalFadesSat3_UNIT_none; /*<  RC signal fades sat3 antenna [-]*/
 uint16_t TimeSinceLastCMD_UNIT_ms; /*<  Time since the last CMD message from the Datahub was received [ms]*/
 uint8_t SwitchStatus_UNIT_none; /*<  tbd 1*/
} mavlink_rc_data_in_t;

#define MAVLINK_MSG_ID_RC_DATA_IN_LEN 75
#define MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN 75
#define MAVLINK_MSG_ID_223_LEN 75
#define MAVLINK_MSG_ID_223_MIN_LEN 75

#define MAVLINK_MSG_ID_RC_DATA_IN_CRC 147
#define MAVLINK_MSG_ID_223_CRC 147



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RC_DATA_IN { \
    223, \
    "RC_DATA_IN", \
    28, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rc_data_in_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_UNIT_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rc_data_in_t, Sync_data_UNIT_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_rc_data_in_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rc_data_in_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_rc_data_in_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_rc_data_in_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_rc_data_in_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_rc_data_in_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_rc_data_in_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_rc_data_in_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 54, offsetof(mavlink_rc_data_in_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rc_data_in_t, CH_8_UNIT_us) }, \
         { "CH_9_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rc_data_in_t, CH_9_UNIT_us) }, \
         { "SignalHold_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rc_data_in_t, SignalHold_UNIT_none) }, \
         { "SignalFrameLoss_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rc_data_in_t, SignalFrameLoss_UNIT_none) }, \
         { "SignalFadesMain_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 64, offsetof(mavlink_rc_data_in_t, SignalFadesMain_UNIT_none) }, \
         { "SignalFadesSat1_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_rc_data_in_t, SignalFadesSat1_UNIT_none) }, \
         { "SignalFadesSat2_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_rc_data_in_t, SignalFadesSat2_UNIT_none) }, \
         { "SignalFadesSat3_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 70, offsetof(mavlink_rc_data_in_t, SignalFadesSat3_UNIT_none) }, \
         { "TimeSinceLastCMD_UNIT_ms", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_rc_data_in_t, TimeSinceLastCMD_UNIT_ms) }, \
         { "SwitchStatus_UNIT_none", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_rc_data_in_t, SwitchStatus_UNIT_none) }, \
         { "Voltage_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rc_data_in_t, Voltage_UNIT_V) }, \
         { "Current_UNIT_A", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_rc_data_in_t, Current_UNIT_A) }, \
         { "ADC_3_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_rc_data_in_t, ADC_3_UNIT_V) }, \
         { "ADC_4_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_rc_data_in_t, ADC_4_UNIT_V) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_rc_data_in_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_rc_data_in_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_rc_data_in_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RC_DATA_IN { \
    "RC_DATA_IN", \
    28, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rc_data_in_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_UNIT_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rc_data_in_t, Sync_data_UNIT_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_rc_data_in_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rc_data_in_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_rc_data_in_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_rc_data_in_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_rc_data_in_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_rc_data_in_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_rc_data_in_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_rc_data_in_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 54, offsetof(mavlink_rc_data_in_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rc_data_in_t, CH_8_UNIT_us) }, \
         { "CH_9_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rc_data_in_t, CH_9_UNIT_us) }, \
         { "SignalHold_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rc_data_in_t, SignalHold_UNIT_none) }, \
         { "SignalFrameLoss_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rc_data_in_t, SignalFrameLoss_UNIT_none) }, \
         { "SignalFadesMain_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 64, offsetof(mavlink_rc_data_in_t, SignalFadesMain_UNIT_none) }, \
         { "SignalFadesSat1_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_rc_data_in_t, SignalFadesSat1_UNIT_none) }, \
         { "SignalFadesSat2_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_rc_data_in_t, SignalFadesSat2_UNIT_none) }, \
         { "SignalFadesSat3_UNIT_none", NULL, MAVLINK_TYPE_UINT16_T, 0, 70, offsetof(mavlink_rc_data_in_t, SignalFadesSat3_UNIT_none) }, \
         { "TimeSinceLastCMD_UNIT_ms", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_rc_data_in_t, TimeSinceLastCMD_UNIT_ms) }, \
         { "SwitchStatus_UNIT_none", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_rc_data_in_t, SwitchStatus_UNIT_none) }, \
         { "Voltage_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rc_data_in_t, Voltage_UNIT_V) }, \
         { "Current_UNIT_A", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_rc_data_in_t, Current_UNIT_A) }, \
         { "ADC_3_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_rc_data_in_t, ADC_3_UNIT_V) }, \
         { "ADC_4_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_rc_data_in_t, ADC_4_UNIT_V) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_rc_data_in_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_rc_data_in_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_rc_data_in_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a rc_data_in message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_us  RC Channel 1 [us]
 * @param CH_2_UNIT_us  RC Channel 2 [us]
 * @param CH_3_UNIT_us  RC Channel 3 [us]
 * @param CH_4_UNIT_us  RC Channel 4 [us]
 * @param CH_5_UNIT_us  RC Channel 5 [us]
 * @param CH_6_UNIT_us  RC Channel 6 [us]
 * @param CH_7_UNIT_us  RC Channel 7 [us]
 * @param CH_8_UNIT_us  RC Channel 8 [us]
 * @param CH_9_UNIT_us  RC Channel 9 [us]
 * @param SignalHold_UNIT_none  RC signal full dropouts [-]
 * @param SignalFrameLoss_UNIT_none  RC signal frame dropouts [-]
 * @param SignalFadesMain_UNIT_none  RC signal fades main antenna [-]
 * @param SignalFadesSat1_UNIT_none  RC signal fades sat1 antenna [-]
 * @param SignalFadesSat2_UNIT_none  RC signal fades sat2 antenna [-]
 * @param SignalFadesSat3_UNIT_none  RC signal fades sat3 antenna [-]
 * @param TimeSinceLastCMD_UNIT_ms  Time since the last CMD message from the Datahub was received [ms]
 * @param SwitchStatus_UNIT_none  tbd 1
 * @param Voltage_UNIT_V  RC voltage [V]
 * @param Current_UNIT_A  RC servo current [A]
 * @param ADC_3_UNIT_V  ADC tbd 3
 * @param ADC_4_UNIT_V  ADC tbd 4
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_data_in_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t SignalHold_UNIT_none, uint16_t SignalFrameLoss_UNIT_none, uint16_t SignalFadesMain_UNIT_none, uint16_t SignalFadesSat1_UNIT_none, uint16_t SignalFadesSat2_UNIT_none, uint16_t SignalFadesSat3_UNIT_none, uint16_t TimeSinceLastCMD_UNIT_ms, uint8_t SwitchStatus_UNIT_none, float Voltage_UNIT_V, float Current_UNIT_A, float ADC_3_UNIT_V, float ADC_4_UNIT_V, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_DATA_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, ADC_3_UNIT_V);
    _mav_put_float(buf, 24, ADC_4_UNIT_V);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 44, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 46, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 48, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 50, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 52, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 54, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 56, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 58, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 60, SignalHold_UNIT_none);
    _mav_put_uint16_t(buf, 62, SignalFrameLoss_UNIT_none);
    _mav_put_uint16_t(buf, 64, SignalFadesMain_UNIT_none);
    _mav_put_uint16_t(buf, 66, SignalFadesSat1_UNIT_none);
    _mav_put_uint16_t(buf, 68, SignalFadesSat2_UNIT_none);
    _mav_put_uint16_t(buf, 70, SignalFadesSat3_UNIT_none);
    _mav_put_uint16_t(buf, 72, TimeSinceLastCMD_UNIT_ms);
    _mav_put_uint8_t(buf, 74, SwitchStatus_UNIT_none);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_DATA_IN_LEN);
#else
    mavlink_rc_data_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.ADC_3_UNIT_V = ADC_3_UNIT_V;
    packet.ADC_4_UNIT_V = ADC_4_UNIT_V;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.CH_9_UNIT_us = CH_9_UNIT_us;
    packet.SignalHold_UNIT_none = SignalHold_UNIT_none;
    packet.SignalFrameLoss_UNIT_none = SignalFrameLoss_UNIT_none;
    packet.SignalFadesMain_UNIT_none = SignalFadesMain_UNIT_none;
    packet.SignalFadesSat1_UNIT_none = SignalFadesSat1_UNIT_none;
    packet.SignalFadesSat2_UNIT_none = SignalFadesSat2_UNIT_none;
    packet.SignalFadesSat3_UNIT_none = SignalFadesSat3_UNIT_none;
    packet.TimeSinceLastCMD_UNIT_ms = TimeSinceLastCMD_UNIT_ms;
    packet.SwitchStatus_UNIT_none = SwitchStatus_UNIT_none;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_DATA_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RC_DATA_IN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
}

/**
 * @brief Pack a rc_data_in message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_us  RC Channel 1 [us]
 * @param CH_2_UNIT_us  RC Channel 2 [us]
 * @param CH_3_UNIT_us  RC Channel 3 [us]
 * @param CH_4_UNIT_us  RC Channel 4 [us]
 * @param CH_5_UNIT_us  RC Channel 5 [us]
 * @param CH_6_UNIT_us  RC Channel 6 [us]
 * @param CH_7_UNIT_us  RC Channel 7 [us]
 * @param CH_8_UNIT_us  RC Channel 8 [us]
 * @param CH_9_UNIT_us  RC Channel 9 [us]
 * @param SignalHold_UNIT_none  RC signal full dropouts [-]
 * @param SignalFrameLoss_UNIT_none  RC signal frame dropouts [-]
 * @param SignalFadesMain_UNIT_none  RC signal fades main antenna [-]
 * @param SignalFadesSat1_UNIT_none  RC signal fades sat1 antenna [-]
 * @param SignalFadesSat2_UNIT_none  RC signal fades sat2 antenna [-]
 * @param SignalFadesSat3_UNIT_none  RC signal fades sat3 antenna [-]
 * @param TimeSinceLastCMD_UNIT_ms  Time since the last CMD message from the Datahub was received [ms]
 * @param SwitchStatus_UNIT_none  tbd 1
 * @param Voltage_UNIT_V  RC voltage [V]
 * @param Current_UNIT_A  RC servo current [A]
 * @param ADC_3_UNIT_V  ADC tbd 3
 * @param ADC_4_UNIT_V  ADC tbd 4
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_data_in_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_UNIT_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,uint16_t CH_1_UNIT_us,uint16_t CH_2_UNIT_us,uint16_t CH_3_UNIT_us,uint16_t CH_4_UNIT_us,uint16_t CH_5_UNIT_us,uint16_t CH_6_UNIT_us,uint16_t CH_7_UNIT_us,uint16_t CH_8_UNIT_us,uint16_t CH_9_UNIT_us,uint16_t SignalHold_UNIT_none,uint16_t SignalFrameLoss_UNIT_none,uint16_t SignalFadesMain_UNIT_none,uint16_t SignalFadesSat1_UNIT_none,uint16_t SignalFadesSat2_UNIT_none,uint16_t SignalFadesSat3_UNIT_none,uint16_t TimeSinceLastCMD_UNIT_ms,uint8_t SwitchStatus_UNIT_none,float Voltage_UNIT_V,float Current_UNIT_A,float ADC_3_UNIT_V,float ADC_4_UNIT_V,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_DATA_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, ADC_3_UNIT_V);
    _mav_put_float(buf, 24, ADC_4_UNIT_V);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 44, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 46, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 48, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 50, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 52, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 54, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 56, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 58, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 60, SignalHold_UNIT_none);
    _mav_put_uint16_t(buf, 62, SignalFrameLoss_UNIT_none);
    _mav_put_uint16_t(buf, 64, SignalFadesMain_UNIT_none);
    _mav_put_uint16_t(buf, 66, SignalFadesSat1_UNIT_none);
    _mav_put_uint16_t(buf, 68, SignalFadesSat2_UNIT_none);
    _mav_put_uint16_t(buf, 70, SignalFadesSat3_UNIT_none);
    _mav_put_uint16_t(buf, 72, TimeSinceLastCMD_UNIT_ms);
    _mav_put_uint8_t(buf, 74, SwitchStatus_UNIT_none);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_DATA_IN_LEN);
#else
    mavlink_rc_data_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.ADC_3_UNIT_V = ADC_3_UNIT_V;
    packet.ADC_4_UNIT_V = ADC_4_UNIT_V;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.CH_9_UNIT_us = CH_9_UNIT_us;
    packet.SignalHold_UNIT_none = SignalHold_UNIT_none;
    packet.SignalFrameLoss_UNIT_none = SignalFrameLoss_UNIT_none;
    packet.SignalFadesMain_UNIT_none = SignalFadesMain_UNIT_none;
    packet.SignalFadesSat1_UNIT_none = SignalFadesSat1_UNIT_none;
    packet.SignalFadesSat2_UNIT_none = SignalFadesSat2_UNIT_none;
    packet.SignalFadesSat3_UNIT_none = SignalFadesSat3_UNIT_none;
    packet.TimeSinceLastCMD_UNIT_ms = TimeSinceLastCMD_UNIT_ms;
    packet.SwitchStatus_UNIT_none = SwitchStatus_UNIT_none;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_DATA_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RC_DATA_IN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
}

/**
 * @brief Encode a rc_data_in struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rc_data_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_data_in_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rc_data_in_t* rc_data_in)
{
    return mavlink_msg_rc_data_in_pack(system_id, component_id, msg, rc_data_in->Sensor_time_UNIT_100us, rc_data_in->Sync_data_UNIT_variable, rc_data_in->Sensor_processing_time_UNIT_us, rc_data_in->Recorded_time_UNIT_100us, rc_data_in->CH_1_UNIT_us, rc_data_in->CH_2_UNIT_us, rc_data_in->CH_3_UNIT_us, rc_data_in->CH_4_UNIT_us, rc_data_in->CH_5_UNIT_us, rc_data_in->CH_6_UNIT_us, rc_data_in->CH_7_UNIT_us, rc_data_in->CH_8_UNIT_us, rc_data_in->CH_9_UNIT_us, rc_data_in->SignalHold_UNIT_none, rc_data_in->SignalFrameLoss_UNIT_none, rc_data_in->SignalFadesMain_UNIT_none, rc_data_in->SignalFadesSat1_UNIT_none, rc_data_in->SignalFadesSat2_UNIT_none, rc_data_in->SignalFadesSat3_UNIT_none, rc_data_in->TimeSinceLastCMD_UNIT_ms, rc_data_in->SwitchStatus_UNIT_none, rc_data_in->Voltage_UNIT_V, rc_data_in->Current_UNIT_A, rc_data_in->ADC_3_UNIT_V, rc_data_in->ADC_4_UNIT_V, rc_data_in->d1, rc_data_in->d2, rc_data_in->d3);
}

/**
 * @brief Encode a rc_data_in struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rc_data_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_data_in_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rc_data_in_t* rc_data_in)
{
    return mavlink_msg_rc_data_in_pack_chan(system_id, component_id, chan, msg, rc_data_in->Sensor_time_UNIT_100us, rc_data_in->Sync_data_UNIT_variable, rc_data_in->Sensor_processing_time_UNIT_us, rc_data_in->Recorded_time_UNIT_100us, rc_data_in->CH_1_UNIT_us, rc_data_in->CH_2_UNIT_us, rc_data_in->CH_3_UNIT_us, rc_data_in->CH_4_UNIT_us, rc_data_in->CH_5_UNIT_us, rc_data_in->CH_6_UNIT_us, rc_data_in->CH_7_UNIT_us, rc_data_in->CH_8_UNIT_us, rc_data_in->CH_9_UNIT_us, rc_data_in->SignalHold_UNIT_none, rc_data_in->SignalFrameLoss_UNIT_none, rc_data_in->SignalFadesMain_UNIT_none, rc_data_in->SignalFadesSat1_UNIT_none, rc_data_in->SignalFadesSat2_UNIT_none, rc_data_in->SignalFadesSat3_UNIT_none, rc_data_in->TimeSinceLastCMD_UNIT_ms, rc_data_in->SwitchStatus_UNIT_none, rc_data_in->Voltage_UNIT_V, rc_data_in->Current_UNIT_A, rc_data_in->ADC_3_UNIT_V, rc_data_in->ADC_4_UNIT_V, rc_data_in->d1, rc_data_in->d2, rc_data_in->d3);
}

/**
 * @brief Send a rc_data_in message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_us  RC Channel 1 [us]
 * @param CH_2_UNIT_us  RC Channel 2 [us]
 * @param CH_3_UNIT_us  RC Channel 3 [us]
 * @param CH_4_UNIT_us  RC Channel 4 [us]
 * @param CH_5_UNIT_us  RC Channel 5 [us]
 * @param CH_6_UNIT_us  RC Channel 6 [us]
 * @param CH_7_UNIT_us  RC Channel 7 [us]
 * @param CH_8_UNIT_us  RC Channel 8 [us]
 * @param CH_9_UNIT_us  RC Channel 9 [us]
 * @param SignalHold_UNIT_none  RC signal full dropouts [-]
 * @param SignalFrameLoss_UNIT_none  RC signal frame dropouts [-]
 * @param SignalFadesMain_UNIT_none  RC signal fades main antenna [-]
 * @param SignalFadesSat1_UNIT_none  RC signal fades sat1 antenna [-]
 * @param SignalFadesSat2_UNIT_none  RC signal fades sat2 antenna [-]
 * @param SignalFadesSat3_UNIT_none  RC signal fades sat3 antenna [-]
 * @param TimeSinceLastCMD_UNIT_ms  Time since the last CMD message from the Datahub was received [ms]
 * @param SwitchStatus_UNIT_none  tbd 1
 * @param Voltage_UNIT_V  RC voltage [V]
 * @param Current_UNIT_A  RC servo current [A]
 * @param ADC_3_UNIT_V  ADC tbd 3
 * @param ADC_4_UNIT_V  ADC tbd 4
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rc_data_in_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t SignalHold_UNIT_none, uint16_t SignalFrameLoss_UNIT_none, uint16_t SignalFadesMain_UNIT_none, uint16_t SignalFadesSat1_UNIT_none, uint16_t SignalFadesSat2_UNIT_none, uint16_t SignalFadesSat3_UNIT_none, uint16_t TimeSinceLastCMD_UNIT_ms, uint8_t SwitchStatus_UNIT_none, float Voltage_UNIT_V, float Current_UNIT_A, float ADC_3_UNIT_V, float ADC_4_UNIT_V, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_DATA_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, ADC_3_UNIT_V);
    _mav_put_float(buf, 24, ADC_4_UNIT_V);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 44, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 46, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 48, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 50, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 52, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 54, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 56, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 58, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 60, SignalHold_UNIT_none);
    _mav_put_uint16_t(buf, 62, SignalFrameLoss_UNIT_none);
    _mav_put_uint16_t(buf, 64, SignalFadesMain_UNIT_none);
    _mav_put_uint16_t(buf, 66, SignalFadesSat1_UNIT_none);
    _mav_put_uint16_t(buf, 68, SignalFadesSat2_UNIT_none);
    _mav_put_uint16_t(buf, 70, SignalFadesSat3_UNIT_none);
    _mav_put_uint16_t(buf, 72, TimeSinceLastCMD_UNIT_ms);
    _mav_put_uint8_t(buf, 74, SwitchStatus_UNIT_none);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_DATA_IN, buf, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
#else
    mavlink_rc_data_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.ADC_3_UNIT_V = ADC_3_UNIT_V;
    packet.ADC_4_UNIT_V = ADC_4_UNIT_V;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.CH_9_UNIT_us = CH_9_UNIT_us;
    packet.SignalHold_UNIT_none = SignalHold_UNIT_none;
    packet.SignalFrameLoss_UNIT_none = SignalFrameLoss_UNIT_none;
    packet.SignalFadesMain_UNIT_none = SignalFadesMain_UNIT_none;
    packet.SignalFadesSat1_UNIT_none = SignalFadesSat1_UNIT_none;
    packet.SignalFadesSat2_UNIT_none = SignalFadesSat2_UNIT_none;
    packet.SignalFadesSat3_UNIT_none = SignalFadesSat3_UNIT_none;
    packet.TimeSinceLastCMD_UNIT_ms = TimeSinceLastCMD_UNIT_ms;
    packet.SwitchStatus_UNIT_none = SwitchStatus_UNIT_none;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_DATA_IN, (const char *)&packet, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
#endif
}

/**
 * @brief Send a rc_data_in message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rc_data_in_send_struct(mavlink_channel_t chan, const mavlink_rc_data_in_t* rc_data_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rc_data_in_send(chan, rc_data_in->Sensor_time_UNIT_100us, rc_data_in->Sync_data_UNIT_variable, rc_data_in->Sensor_processing_time_UNIT_us, rc_data_in->Recorded_time_UNIT_100us, rc_data_in->CH_1_UNIT_us, rc_data_in->CH_2_UNIT_us, rc_data_in->CH_3_UNIT_us, rc_data_in->CH_4_UNIT_us, rc_data_in->CH_5_UNIT_us, rc_data_in->CH_6_UNIT_us, rc_data_in->CH_7_UNIT_us, rc_data_in->CH_8_UNIT_us, rc_data_in->CH_9_UNIT_us, rc_data_in->SignalHold_UNIT_none, rc_data_in->SignalFrameLoss_UNIT_none, rc_data_in->SignalFadesMain_UNIT_none, rc_data_in->SignalFadesSat1_UNIT_none, rc_data_in->SignalFadesSat2_UNIT_none, rc_data_in->SignalFadesSat3_UNIT_none, rc_data_in->TimeSinceLastCMD_UNIT_ms, rc_data_in->SwitchStatus_UNIT_none, rc_data_in->Voltage_UNIT_V, rc_data_in->Current_UNIT_A, rc_data_in->ADC_3_UNIT_V, rc_data_in->ADC_4_UNIT_V, rc_data_in->d1, rc_data_in->d2, rc_data_in->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_DATA_IN, (const char *)rc_data_in, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
#endif
}

#if MAVLINK_MSG_ID_RC_DATA_IN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rc_data_in_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t SignalHold_UNIT_none, uint16_t SignalFrameLoss_UNIT_none, uint16_t SignalFadesMain_UNIT_none, uint16_t SignalFadesSat1_UNIT_none, uint16_t SignalFadesSat2_UNIT_none, uint16_t SignalFadesSat3_UNIT_none, uint16_t TimeSinceLastCMD_UNIT_ms, uint8_t SwitchStatus_UNIT_none, float Voltage_UNIT_V, float Current_UNIT_A, float ADC_3_UNIT_V, float ADC_4_UNIT_V, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, ADC_3_UNIT_V);
    _mav_put_float(buf, 24, ADC_4_UNIT_V);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 44, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 46, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 48, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 50, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 52, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 54, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 56, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 58, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 60, SignalHold_UNIT_none);
    _mav_put_uint16_t(buf, 62, SignalFrameLoss_UNIT_none);
    _mav_put_uint16_t(buf, 64, SignalFadesMain_UNIT_none);
    _mav_put_uint16_t(buf, 66, SignalFadesSat1_UNIT_none);
    _mav_put_uint16_t(buf, 68, SignalFadesSat2_UNIT_none);
    _mav_put_uint16_t(buf, 70, SignalFadesSat3_UNIT_none);
    _mav_put_uint16_t(buf, 72, TimeSinceLastCMD_UNIT_ms);
    _mav_put_uint8_t(buf, 74, SwitchStatus_UNIT_none);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_DATA_IN, buf, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
#else
    mavlink_rc_data_in_t *packet = (mavlink_rc_data_in_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Voltage_UNIT_V = Voltage_UNIT_V;
    packet->Current_UNIT_A = Current_UNIT_A;
    packet->ADC_3_UNIT_V = ADC_3_UNIT_V;
    packet->ADC_4_UNIT_V = ADC_4_UNIT_V;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet->CH_1_UNIT_us = CH_1_UNIT_us;
    packet->CH_2_UNIT_us = CH_2_UNIT_us;
    packet->CH_3_UNIT_us = CH_3_UNIT_us;
    packet->CH_4_UNIT_us = CH_4_UNIT_us;
    packet->CH_5_UNIT_us = CH_5_UNIT_us;
    packet->CH_6_UNIT_us = CH_6_UNIT_us;
    packet->CH_7_UNIT_us = CH_7_UNIT_us;
    packet->CH_8_UNIT_us = CH_8_UNIT_us;
    packet->CH_9_UNIT_us = CH_9_UNIT_us;
    packet->SignalHold_UNIT_none = SignalHold_UNIT_none;
    packet->SignalFrameLoss_UNIT_none = SignalFrameLoss_UNIT_none;
    packet->SignalFadesMain_UNIT_none = SignalFadesMain_UNIT_none;
    packet->SignalFadesSat1_UNIT_none = SignalFadesSat1_UNIT_none;
    packet->SignalFadesSat2_UNIT_none = SignalFadesSat2_UNIT_none;
    packet->SignalFadesSat3_UNIT_none = SignalFadesSat3_UNIT_none;
    packet->TimeSinceLastCMD_UNIT_ms = TimeSinceLastCMD_UNIT_ms;
    packet->SwitchStatus_UNIT_none = SwitchStatus_UNIT_none;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_DATA_IN, (const char *)packet, MAVLINK_MSG_ID_RC_DATA_IN_MIN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_LEN, MAVLINK_MSG_ID_RC_DATA_IN_CRC);
#endif
}
#endif

#endif

// MESSAGE RC_DATA_IN UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from rc_data_in message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_rc_data_in_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_UNIT_variable from rc_data_in message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_rc_data_in_get_Sync_data_UNIT_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from rc_data_in message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_rc_data_in_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from rc_data_in message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_rc_data_in_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field CH_1_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 1 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_1_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field CH_2_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 2 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_2_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field CH_3_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 3 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_3_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field CH_4_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 4 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_4_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field CH_5_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 5 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_5_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  50);
}

/**
 * @brief Get field CH_6_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 6 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_6_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  52);
}

/**
 * @brief Get field CH_7_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 7 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_7_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  54);
}

/**
 * @brief Get field CH_8_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 8 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_8_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field CH_9_UNIT_us from rc_data_in message
 *
 * @return  RC Channel 9 [us]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_CH_9_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  58);
}

/**
 * @brief Get field SignalHold_UNIT_none from rc_data_in message
 *
 * @return  RC signal full dropouts [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalHold_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Get field SignalFrameLoss_UNIT_none from rc_data_in message
 *
 * @return  RC signal frame dropouts [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalFrameLoss_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  62);
}

/**
 * @brief Get field SignalFadesMain_UNIT_none from rc_data_in message
 *
 * @return  RC signal fades main antenna [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalFadesMain_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  64);
}

/**
 * @brief Get field SignalFadesSat1_UNIT_none from rc_data_in message
 *
 * @return  RC signal fades sat1 antenna [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalFadesSat1_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  66);
}

/**
 * @brief Get field SignalFadesSat2_UNIT_none from rc_data_in message
 *
 * @return  RC signal fades sat2 antenna [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalFadesSat2_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  68);
}

/**
 * @brief Get field SignalFadesSat3_UNIT_none from rc_data_in message
 *
 * @return  RC signal fades sat3 antenna [-]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_SignalFadesSat3_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  70);
}

/**
 * @brief Get field TimeSinceLastCMD_UNIT_ms from rc_data_in message
 *
 * @return  Time since the last CMD message from the Datahub was received [ms]
 */
static inline uint16_t mavlink_msg_rc_data_in_get_TimeSinceLastCMD_UNIT_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  72);
}

/**
 * @brief Get field SwitchStatus_UNIT_none from rc_data_in message
 *
 * @return  tbd 1
 */
static inline uint8_t mavlink_msg_rc_data_in_get_SwitchStatus_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  74);
}

/**
 * @brief Get field Voltage_UNIT_V from rc_data_in message
 *
 * @return  RC voltage [V]
 */
static inline float mavlink_msg_rc_data_in_get_Voltage_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Current_UNIT_A from rc_data_in message
 *
 * @return  RC servo current [A]
 */
static inline float mavlink_msg_rc_data_in_get_Current_UNIT_A(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ADC_3_UNIT_V from rc_data_in message
 *
 * @return  ADC tbd 3
 */
static inline float mavlink_msg_rc_data_in_get_ADC_3_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ADC_4_UNIT_V from rc_data_in message
 *
 * @return  ADC tbd 4
 */
static inline float mavlink_msg_rc_data_in_get_ADC_4_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field d1 from rc_data_in message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_rc_data_in_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field d2 from rc_data_in message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_rc_data_in_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field d3 from rc_data_in message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_rc_data_in_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a rc_data_in message into a struct
 *
 * @param msg The message to decode
 * @param rc_data_in C-struct to decode the message contents into
 */
static inline void mavlink_msg_rc_data_in_decode(const mavlink_message_t* msg, mavlink_rc_data_in_t* rc_data_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rc_data_in->Sensor_time_UNIT_100us = mavlink_msg_rc_data_in_get_Sensor_time_UNIT_100us(msg);
    rc_data_in->Sync_data_UNIT_variable = mavlink_msg_rc_data_in_get_Sync_data_UNIT_variable(msg);
    rc_data_in->Recorded_time_UNIT_100us = mavlink_msg_rc_data_in_get_Recorded_time_UNIT_100us(msg);
    rc_data_in->Voltage_UNIT_V = mavlink_msg_rc_data_in_get_Voltage_UNIT_V(msg);
    rc_data_in->Current_UNIT_A = mavlink_msg_rc_data_in_get_Current_UNIT_A(msg);
    rc_data_in->ADC_3_UNIT_V = mavlink_msg_rc_data_in_get_ADC_3_UNIT_V(msg);
    rc_data_in->ADC_4_UNIT_V = mavlink_msg_rc_data_in_get_ADC_4_UNIT_V(msg);
    rc_data_in->d1 = mavlink_msg_rc_data_in_get_d1(msg);
    rc_data_in->d2 = mavlink_msg_rc_data_in_get_d2(msg);
    rc_data_in->d3 = mavlink_msg_rc_data_in_get_d3(msg);
    rc_data_in->Sensor_processing_time_UNIT_us = mavlink_msg_rc_data_in_get_Sensor_processing_time_UNIT_us(msg);
    rc_data_in->CH_1_UNIT_us = mavlink_msg_rc_data_in_get_CH_1_UNIT_us(msg);
    rc_data_in->CH_2_UNIT_us = mavlink_msg_rc_data_in_get_CH_2_UNIT_us(msg);
    rc_data_in->CH_3_UNIT_us = mavlink_msg_rc_data_in_get_CH_3_UNIT_us(msg);
    rc_data_in->CH_4_UNIT_us = mavlink_msg_rc_data_in_get_CH_4_UNIT_us(msg);
    rc_data_in->CH_5_UNIT_us = mavlink_msg_rc_data_in_get_CH_5_UNIT_us(msg);
    rc_data_in->CH_6_UNIT_us = mavlink_msg_rc_data_in_get_CH_6_UNIT_us(msg);
    rc_data_in->CH_7_UNIT_us = mavlink_msg_rc_data_in_get_CH_7_UNIT_us(msg);
    rc_data_in->CH_8_UNIT_us = mavlink_msg_rc_data_in_get_CH_8_UNIT_us(msg);
    rc_data_in->CH_9_UNIT_us = mavlink_msg_rc_data_in_get_CH_9_UNIT_us(msg);
    rc_data_in->SignalHold_UNIT_none = mavlink_msg_rc_data_in_get_SignalHold_UNIT_none(msg);
    rc_data_in->SignalFrameLoss_UNIT_none = mavlink_msg_rc_data_in_get_SignalFrameLoss_UNIT_none(msg);
    rc_data_in->SignalFadesMain_UNIT_none = mavlink_msg_rc_data_in_get_SignalFadesMain_UNIT_none(msg);
    rc_data_in->SignalFadesSat1_UNIT_none = mavlink_msg_rc_data_in_get_SignalFadesSat1_UNIT_none(msg);
    rc_data_in->SignalFadesSat2_UNIT_none = mavlink_msg_rc_data_in_get_SignalFadesSat2_UNIT_none(msg);
    rc_data_in->SignalFadesSat3_UNIT_none = mavlink_msg_rc_data_in_get_SignalFadesSat3_UNIT_none(msg);
    rc_data_in->TimeSinceLastCMD_UNIT_ms = mavlink_msg_rc_data_in_get_TimeSinceLastCMD_UNIT_ms(msg);
    rc_data_in->SwitchStatus_UNIT_none = mavlink_msg_rc_data_in_get_SwitchStatus_UNIT_none(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RC_DATA_IN_LEN? msg->len : MAVLINK_MSG_ID_RC_DATA_IN_LEN;
        memset(rc_data_in, 0, MAVLINK_MSG_ID_RC_DATA_IN_LEN);
    memcpy(rc_data_in, _MAV_PAYLOAD(msg), len);
#endif
}
