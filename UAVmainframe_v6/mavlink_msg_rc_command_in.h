#pragma once
// MESSAGE RC_COMMAND_IN PACKING

#define MAVLINK_MSG_ID_RC_COMMAND_IN 223


typedef struct __mavlink_rc_command_in_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
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
 uint16_t d1; /*<  tbd 1*/
 uint16_t d2; /*<  tbd 2*/
 uint16_t d3; /*<  tbd 3*/
} mavlink_rc_command_in_t;

#define MAVLINK_MSG_ID_RC_COMMAND_IN_LEN 38
#define MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN 38
#define MAVLINK_MSG_ID_223_LEN 38
#define MAVLINK_MSG_ID_223_MIN_LEN 38

#define MAVLINK_MSG_ID_RC_COMMAND_IN_CRC 1
#define MAVLINK_MSG_ID_223_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RC_COMMAND_IN { \
    223, \
    "RC_COMMAND_IN", \
    16, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rc_command_in_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rc_command_in_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_rc_command_in_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rc_command_in_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rc_command_in_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_rc_command_in_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_rc_command_in_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_rc_command_in_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_rc_command_in_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_rc_command_in_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_rc_command_in_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_rc_command_in_t, CH_8_UNIT_us) }, \
         { "CH_9_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_rc_command_in_t, CH_9_UNIT_us) }, \
         { "d1", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_rc_command_in_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_rc_command_in_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_rc_command_in_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RC_COMMAND_IN { \
    "RC_COMMAND_IN", \
    16, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rc_command_in_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rc_command_in_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_rc_command_in_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rc_command_in_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rc_command_in_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_rc_command_in_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_rc_command_in_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_rc_command_in_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_rc_command_in_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_rc_command_in_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_rc_command_in_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_rc_command_in_t, CH_8_UNIT_us) }, \
         { "CH_9_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_rc_command_in_t, CH_9_UNIT_us) }, \
         { "d1", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_rc_command_in_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_rc_command_in_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_rc_command_in_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a rc_command_in message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
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
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_command_in_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_COMMAND_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_int16_t(buf, 12, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 14, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 16, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 18, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 20, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 32, d1);
    _mav_put_uint16_t(buf, 34, d2);
    _mav_put_uint16_t(buf, 36, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN);
#else
    mavlink_rc_command_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
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
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RC_COMMAND_IN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
}

/**
 * @brief Pack a rc_command_in message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
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
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_command_in_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,uint16_t CH_1_UNIT_us,uint16_t CH_2_UNIT_us,uint16_t CH_3_UNIT_us,uint16_t CH_4_UNIT_us,uint16_t CH_5_UNIT_us,uint16_t CH_6_UNIT_us,uint16_t CH_7_UNIT_us,uint16_t CH_8_UNIT_us,uint16_t CH_9_UNIT_us,uint16_t d1,uint16_t d2,uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_COMMAND_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_int16_t(buf, 12, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 14, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 16, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 18, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 20, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 32, d1);
    _mav_put_uint16_t(buf, 34, d2);
    _mav_put_uint16_t(buf, 36, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN);
#else
    mavlink_rc_command_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
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
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RC_COMMAND_IN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
}

/**
 * @brief Encode a rc_command_in struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rc_command_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_command_in_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rc_command_in_t* rc_command_in)
{
    return mavlink_msg_rc_command_in_pack(system_id, component_id, msg, rc_command_in->Sensor_time_UNIT_100us, rc_command_in->Sync_data_Unit_variable, rc_command_in->Sensor_processing_time_UNIT_us, rc_command_in->Recorded_time_UNIT_100us, rc_command_in->CH_1_UNIT_us, rc_command_in->CH_2_UNIT_us, rc_command_in->CH_3_UNIT_us, rc_command_in->CH_4_UNIT_us, rc_command_in->CH_5_UNIT_us, rc_command_in->CH_6_UNIT_us, rc_command_in->CH_7_UNIT_us, rc_command_in->CH_8_UNIT_us, rc_command_in->CH_9_UNIT_us, rc_command_in->d1, rc_command_in->d2, rc_command_in->d3);
}

/**
 * @brief Encode a rc_command_in struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rc_command_in C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_command_in_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rc_command_in_t* rc_command_in)
{
    return mavlink_msg_rc_command_in_pack_chan(system_id, component_id, chan, msg, rc_command_in->Sensor_time_UNIT_100us, rc_command_in->Sync_data_Unit_variable, rc_command_in->Sensor_processing_time_UNIT_us, rc_command_in->Recorded_time_UNIT_100us, rc_command_in->CH_1_UNIT_us, rc_command_in->CH_2_UNIT_us, rc_command_in->CH_3_UNIT_us, rc_command_in->CH_4_UNIT_us, rc_command_in->CH_5_UNIT_us, rc_command_in->CH_6_UNIT_us, rc_command_in->CH_7_UNIT_us, rc_command_in->CH_8_UNIT_us, rc_command_in->CH_9_UNIT_us, rc_command_in->d1, rc_command_in->d2, rc_command_in->d3);
}

/**
 * @brief Send a rc_command_in message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
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
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rc_command_in_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RC_COMMAND_IN_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_int16_t(buf, 12, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 14, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 16, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 18, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 20, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 32, d1);
    _mav_put_uint16_t(buf, 34, d2);
    _mav_put_uint16_t(buf, 36, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_COMMAND_IN, buf, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
#else
    mavlink_rc_command_in_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
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
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_COMMAND_IN, (const char *)&packet, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
#endif
}

/**
 * @brief Send a rc_command_in message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rc_command_in_send_struct(mavlink_channel_t chan, const mavlink_rc_command_in_t* rc_command_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rc_command_in_send(chan, rc_command_in->Sensor_time_UNIT_100us, rc_command_in->Sync_data_Unit_variable, rc_command_in->Sensor_processing_time_UNIT_us, rc_command_in->Recorded_time_UNIT_100us, rc_command_in->CH_1_UNIT_us, rc_command_in->CH_2_UNIT_us, rc_command_in->CH_3_UNIT_us, rc_command_in->CH_4_UNIT_us, rc_command_in->CH_5_UNIT_us, rc_command_in->CH_6_UNIT_us, rc_command_in->CH_7_UNIT_us, rc_command_in->CH_8_UNIT_us, rc_command_in->CH_9_UNIT_us, rc_command_in->d1, rc_command_in->d2, rc_command_in->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_COMMAND_IN, (const char *)rc_command_in, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
#endif
}

#if MAVLINK_MSG_ID_RC_COMMAND_IN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rc_command_in_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t CH_9_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_int16_t(buf, 12, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 14, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 16, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 18, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 20, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_9_UNIT_us);
    _mav_put_uint16_t(buf, 32, d1);
    _mav_put_uint16_t(buf, 34, d2);
    _mav_put_uint16_t(buf, 36, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_COMMAND_IN, buf, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
#else
    mavlink_rc_command_in_t *packet = (mavlink_rc_command_in_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
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
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_COMMAND_IN, (const char *)packet, MAVLINK_MSG_ID_RC_COMMAND_IN_MIN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN, MAVLINK_MSG_ID_RC_COMMAND_IN_CRC);
#endif
}
#endif

#endif

// MESSAGE RC_COMMAND_IN UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from rc_command_in message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_rc_command_in_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from rc_command_in message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_rc_command_in_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from rc_command_in message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_rc_command_in_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from rc_command_in message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_rc_command_in_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field CH_1_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 1 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_1_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field CH_2_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 2 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_2_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field CH_3_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 3 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_3_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field CH_4_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 4 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_4_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field CH_5_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 5 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_5_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field CH_6_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 6 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_6_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field CH_7_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 7 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_7_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field CH_8_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 8 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_8_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field CH_9_UNIT_us from rc_command_in message
 *
 * @return  RC Channel 9 [us]
 */
static inline uint16_t mavlink_msg_rc_command_in_get_CH_9_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field d1 from rc_command_in message
 *
 * @return  tbd 1
 */
static inline uint16_t mavlink_msg_rc_command_in_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field d2 from rc_command_in message
 *
 * @return  tbd 2
 */
static inline uint16_t mavlink_msg_rc_command_in_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field d3 from rc_command_in message
 *
 * @return  tbd 3
 */
static inline uint16_t mavlink_msg_rc_command_in_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Decode a rc_command_in message into a struct
 *
 * @param msg The message to decode
 * @param rc_command_in C-struct to decode the message contents into
 */
static inline void mavlink_msg_rc_command_in_decode(const mavlink_message_t* msg, mavlink_rc_command_in_t* rc_command_in)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rc_command_in->Sensor_time_UNIT_100us = mavlink_msg_rc_command_in_get_Sensor_time_UNIT_100us(msg);
    rc_command_in->Sync_data_Unit_variable = mavlink_msg_rc_command_in_get_Sync_data_Unit_variable(msg);
    rc_command_in->Recorded_time_UNIT_100us = mavlink_msg_rc_command_in_get_Recorded_time_UNIT_100us(msg);
    rc_command_in->Sensor_processing_time_UNIT_us = mavlink_msg_rc_command_in_get_Sensor_processing_time_UNIT_us(msg);
    rc_command_in->CH_1_UNIT_us = mavlink_msg_rc_command_in_get_CH_1_UNIT_us(msg);
    rc_command_in->CH_2_UNIT_us = mavlink_msg_rc_command_in_get_CH_2_UNIT_us(msg);
    rc_command_in->CH_3_UNIT_us = mavlink_msg_rc_command_in_get_CH_3_UNIT_us(msg);
    rc_command_in->CH_4_UNIT_us = mavlink_msg_rc_command_in_get_CH_4_UNIT_us(msg);
    rc_command_in->CH_5_UNIT_us = mavlink_msg_rc_command_in_get_CH_5_UNIT_us(msg);
    rc_command_in->CH_6_UNIT_us = mavlink_msg_rc_command_in_get_CH_6_UNIT_us(msg);
    rc_command_in->CH_7_UNIT_us = mavlink_msg_rc_command_in_get_CH_7_UNIT_us(msg);
    rc_command_in->CH_8_UNIT_us = mavlink_msg_rc_command_in_get_CH_8_UNIT_us(msg);
    rc_command_in->CH_9_UNIT_us = mavlink_msg_rc_command_in_get_CH_9_UNIT_us(msg);
    rc_command_in->d1 = mavlink_msg_rc_command_in_get_d1(msg);
    rc_command_in->d2 = mavlink_msg_rc_command_in_get_d2(msg);
    rc_command_in->d3 = mavlink_msg_rc_command_in_get_d3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RC_COMMAND_IN_LEN? msg->len : MAVLINK_MSG_ID_RC_COMMAND_IN_LEN;
        memset(rc_command_in, 0, MAVLINK_MSG_ID_RC_COMMAND_IN_LEN);
    memcpy(rc_command_in, _MAV_PAYLOAD(msg), len);
#endif
}
