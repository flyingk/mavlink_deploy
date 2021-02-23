#pragma once
// MESSAGE ACTUATOR_COMMAND_OUT PACKING

#define MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT 224


typedef struct __mavlink_actuator_command_out_t {
 uint64_t sensor_time_us; /*<  Sensor time in usec*/
 uint64_t transmit_time_us; /*<  transmit timestamp in usec*/
 uint32_t sensor_processing_time_us; /*<  Sensor processing time in usec*/
 uint16_t CH_1_UNIT_us; /*<  RC Cmd 1 [us]*/
 uint16_t CH_2_UNIT_us; /*<  RC Cmd 2 [us]*/
 uint16_t CH_3_UNIT_us; /*<  RC Cmd 3 [us]*/
 uint16_t CH_4_UNIT_us; /*<  RC Cmd 4 [us]*/
 uint16_t CH_5_UNIT_us; /*<  RC Cmd 5 [us]*/
 uint16_t CH_6_UNIT_us; /*<  RC Cmd 6 [us]*/
 uint16_t CH_7_UNIT_us; /*<  RC Cmd 7 [us]*/
 uint16_t CH_8_UNIT_us; /*<  RC Cmd 8 [us]*/
 uint16_t d1; /*<  tbd 1*/
 uint16_t d2; /*<  tbd 2*/
 uint16_t d3; /*<  tbd 3*/
} mavlink_actuator_command_out_t;

#define MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN 42
#define MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN 42
#define MAVLINK_MSG_ID_224_LEN 42
#define MAVLINK_MSG_ID_224_MIN_LEN 42

#define MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC 216
#define MAVLINK_MSG_ID_224_CRC 216



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_COMMAND_OUT { \
    224, \
    "ACTUATOR_COMMAND_OUT", \
    14, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_actuator_command_out_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_actuator_command_out_t, sensor_processing_time_us) }, \
         { "transmit_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_actuator_command_out_t, transmit_time_us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_actuator_command_out_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_actuator_command_out_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_actuator_command_out_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_actuator_command_out_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_actuator_command_out_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_actuator_command_out_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_actuator_command_out_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_actuator_command_out_t, CH_8_UNIT_us) }, \
         { "d1", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_actuator_command_out_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_actuator_command_out_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_actuator_command_out_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_COMMAND_OUT { \
    "ACTUATOR_COMMAND_OUT", \
    14, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_actuator_command_out_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_actuator_command_out_t, sensor_processing_time_us) }, \
         { "transmit_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_actuator_command_out_t, transmit_time_us) }, \
         { "CH_1_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_actuator_command_out_t, CH_1_UNIT_us) }, \
         { "CH_2_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_actuator_command_out_t, CH_2_UNIT_us) }, \
         { "CH_3_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_actuator_command_out_t, CH_3_UNIT_us) }, \
         { "CH_4_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_actuator_command_out_t, CH_4_UNIT_us) }, \
         { "CH_5_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_actuator_command_out_t, CH_5_UNIT_us) }, \
         { "CH_6_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_actuator_command_out_t, CH_6_UNIT_us) }, \
         { "CH_7_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_actuator_command_out_t, CH_7_UNIT_us) }, \
         { "CH_8_UNIT_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_actuator_command_out_t, CH_8_UNIT_us) }, \
         { "d1", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_actuator_command_out_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_actuator_command_out_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_actuator_command_out_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_command_out message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param transmit_time_us  transmit timestamp in usec
 * @param CH_1_UNIT_us  RC Cmd 1 [us]
 * @param CH_2_UNIT_us  RC Cmd 2 [us]
 * @param CH_3_UNIT_us  RC Cmd 3 [us]
 * @param CH_4_UNIT_us  RC Cmd 4 [us]
 * @param CH_5_UNIT_us  RC Cmd 5 [us]
 * @param CH_6_UNIT_us  RC Cmd 6 [us]
 * @param CH_7_UNIT_us  RC Cmd 7 [us]
 * @param CH_8_UNIT_us  RC Cmd 8 [us]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_command_out_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t transmit_time_us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, transmit_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_uint16_t(buf, 20, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 32, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 34, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 36, d1);
    _mav_put_uint16_t(buf, 38, d2);
    _mav_put_uint16_t(buf, 40, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN);
#else
    mavlink_actuator_command_out_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.transmit_time_us = transmit_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
}

/**
 * @brief Pack a actuator_command_out message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param transmit_time_us  transmit timestamp in usec
 * @param CH_1_UNIT_us  RC Cmd 1 [us]
 * @param CH_2_UNIT_us  RC Cmd 2 [us]
 * @param CH_3_UNIT_us  RC Cmd 3 [us]
 * @param CH_4_UNIT_us  RC Cmd 4 [us]
 * @param CH_5_UNIT_us  RC Cmd 5 [us]
 * @param CH_6_UNIT_us  RC Cmd 6 [us]
 * @param CH_7_UNIT_us  RC Cmd 7 [us]
 * @param CH_8_UNIT_us  RC Cmd 8 [us]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_command_out_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t sensor_time_us,uint32_t sensor_processing_time_us,uint64_t transmit_time_us,uint16_t CH_1_UNIT_us,uint16_t CH_2_UNIT_us,uint16_t CH_3_UNIT_us,uint16_t CH_4_UNIT_us,uint16_t CH_5_UNIT_us,uint16_t CH_6_UNIT_us,uint16_t CH_7_UNIT_us,uint16_t CH_8_UNIT_us,uint16_t d1,uint16_t d2,uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, transmit_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_uint16_t(buf, 20, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 32, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 34, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 36, d1);
    _mav_put_uint16_t(buf, 38, d2);
    _mav_put_uint16_t(buf, 40, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN);
#else
    mavlink_actuator_command_out_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.transmit_time_us = transmit_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
}

/**
 * @brief Encode a actuator_command_out struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_command_out C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_command_out_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_command_out_t* actuator_command_out)
{
    return mavlink_msg_actuator_command_out_pack(system_id, component_id, msg, actuator_command_out->sensor_time_us, actuator_command_out->sensor_processing_time_us, actuator_command_out->transmit_time_us, actuator_command_out->CH_1_UNIT_us, actuator_command_out->CH_2_UNIT_us, actuator_command_out->CH_3_UNIT_us, actuator_command_out->CH_4_UNIT_us, actuator_command_out->CH_5_UNIT_us, actuator_command_out->CH_6_UNIT_us, actuator_command_out->CH_7_UNIT_us, actuator_command_out->CH_8_UNIT_us, actuator_command_out->d1, actuator_command_out->d2, actuator_command_out->d3);
}

/**
 * @brief Encode a actuator_command_out struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_command_out C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_command_out_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_command_out_t* actuator_command_out)
{
    return mavlink_msg_actuator_command_out_pack_chan(system_id, component_id, chan, msg, actuator_command_out->sensor_time_us, actuator_command_out->sensor_processing_time_us, actuator_command_out->transmit_time_us, actuator_command_out->CH_1_UNIT_us, actuator_command_out->CH_2_UNIT_us, actuator_command_out->CH_3_UNIT_us, actuator_command_out->CH_4_UNIT_us, actuator_command_out->CH_5_UNIT_us, actuator_command_out->CH_6_UNIT_us, actuator_command_out->CH_7_UNIT_us, actuator_command_out->CH_8_UNIT_us, actuator_command_out->d1, actuator_command_out->d2, actuator_command_out->d3);
}

/**
 * @brief Send a actuator_command_out message
 * @param chan MAVLink channel to send the message
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param transmit_time_us  transmit timestamp in usec
 * @param CH_1_UNIT_us  RC Cmd 1 [us]
 * @param CH_2_UNIT_us  RC Cmd 2 [us]
 * @param CH_3_UNIT_us  RC Cmd 3 [us]
 * @param CH_4_UNIT_us  RC Cmd 4 [us]
 * @param CH_5_UNIT_us  RC Cmd 5 [us]
 * @param CH_6_UNIT_us  RC Cmd 6 [us]
 * @param CH_7_UNIT_us  RC Cmd 7 [us]
 * @param CH_8_UNIT_us  RC Cmd 8 [us]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_command_out_send(mavlink_channel_t chan, uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t transmit_time_us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, transmit_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_uint16_t(buf, 20, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 32, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 34, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 36, d1);
    _mav_put_uint16_t(buf, 38, d2);
    _mav_put_uint16_t(buf, 40, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT, buf, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
#else
    mavlink_actuator_command_out_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.transmit_time_us = transmit_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.CH_1_UNIT_us = CH_1_UNIT_us;
    packet.CH_2_UNIT_us = CH_2_UNIT_us;
    packet.CH_3_UNIT_us = CH_3_UNIT_us;
    packet.CH_4_UNIT_us = CH_4_UNIT_us;
    packet.CH_5_UNIT_us = CH_5_UNIT_us;
    packet.CH_6_UNIT_us = CH_6_UNIT_us;
    packet.CH_7_UNIT_us = CH_7_UNIT_us;
    packet.CH_8_UNIT_us = CH_8_UNIT_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
#endif
}

/**
 * @brief Send a actuator_command_out message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_command_out_send_struct(mavlink_channel_t chan, const mavlink_actuator_command_out_t* actuator_command_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_command_out_send(chan, actuator_command_out->sensor_time_us, actuator_command_out->sensor_processing_time_us, actuator_command_out->transmit_time_us, actuator_command_out->CH_1_UNIT_us, actuator_command_out->CH_2_UNIT_us, actuator_command_out->CH_3_UNIT_us, actuator_command_out->CH_4_UNIT_us, actuator_command_out->CH_5_UNIT_us, actuator_command_out->CH_6_UNIT_us, actuator_command_out->CH_7_UNIT_us, actuator_command_out->CH_8_UNIT_us, actuator_command_out->d1, actuator_command_out->d2, actuator_command_out->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT, (const char *)actuator_command_out, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_command_out_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t transmit_time_us, uint16_t CH_1_UNIT_us, uint16_t CH_2_UNIT_us, uint16_t CH_3_UNIT_us, uint16_t CH_4_UNIT_us, uint16_t CH_5_UNIT_us, uint16_t CH_6_UNIT_us, uint16_t CH_7_UNIT_us, uint16_t CH_8_UNIT_us, uint16_t d1, uint16_t d2, uint16_t d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, transmit_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_uint16_t(buf, 20, CH_1_UNIT_us);
    _mav_put_uint16_t(buf, 22, CH_2_UNIT_us);
    _mav_put_uint16_t(buf, 24, CH_3_UNIT_us);
    _mav_put_uint16_t(buf, 26, CH_4_UNIT_us);
    _mav_put_uint16_t(buf, 28, CH_5_UNIT_us);
    _mav_put_uint16_t(buf, 30, CH_6_UNIT_us);
    _mav_put_uint16_t(buf, 32, CH_7_UNIT_us);
    _mav_put_uint16_t(buf, 34, CH_8_UNIT_us);
    _mav_put_uint16_t(buf, 36, d1);
    _mav_put_uint16_t(buf, 38, d2);
    _mav_put_uint16_t(buf, 40, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT, buf, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
#else
    mavlink_actuator_command_out_t *packet = (mavlink_actuator_command_out_t *)msgbuf;
    packet->sensor_time_us = sensor_time_us;
    packet->transmit_time_us = transmit_time_us;
    packet->sensor_processing_time_us = sensor_processing_time_us;
    packet->CH_1_UNIT_us = CH_1_UNIT_us;
    packet->CH_2_UNIT_us = CH_2_UNIT_us;
    packet->CH_3_UNIT_us = CH_3_UNIT_us;
    packet->CH_4_UNIT_us = CH_4_UNIT_us;
    packet->CH_5_UNIT_us = CH_5_UNIT_us;
    packet->CH_6_UNIT_us = CH_6_UNIT_us;
    packet->CH_7_UNIT_us = CH_7_UNIT_us;
    packet->CH_8_UNIT_us = CH_8_UNIT_us;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_COMMAND_OUT UNPACKING


/**
 * @brief Get field sensor_time_us from actuator_command_out message
 *
 * @return  Sensor time in usec
 */
static inline uint64_t mavlink_msg_actuator_command_out_get_sensor_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sensor_processing_time_us from actuator_command_out message
 *
 * @return  Sensor processing time in usec
 */
static inline uint32_t mavlink_msg_actuator_command_out_get_sensor_processing_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field transmit_time_us from actuator_command_out message
 *
 * @return  transmit timestamp in usec
 */
static inline uint64_t mavlink_msg_actuator_command_out_get_transmit_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field CH_1_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 1 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_1_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field CH_2_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 2 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_2_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field CH_3_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 3 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_3_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field CH_4_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 4 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_4_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field CH_5_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 5 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_5_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field CH_6_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 6 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_6_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field CH_7_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 7 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_7_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field CH_8_UNIT_us from actuator_command_out message
 *
 * @return  RC Cmd 8 [us]
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_CH_8_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field d1 from actuator_command_out message
 *
 * @return  tbd 1
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Get field d2 from actuator_command_out message
 *
 * @return  tbd 2
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  38);
}

/**
 * @brief Get field d3 from actuator_command_out message
 *
 * @return  tbd 3
 */
static inline uint16_t mavlink_msg_actuator_command_out_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  40);
}

/**
 * @brief Decode a actuator_command_out message into a struct
 *
 * @param msg The message to decode
 * @param actuator_command_out C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_command_out_decode(const mavlink_message_t* msg, mavlink_actuator_command_out_t* actuator_command_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_command_out->sensor_time_us = mavlink_msg_actuator_command_out_get_sensor_time_us(msg);
    actuator_command_out->transmit_time_us = mavlink_msg_actuator_command_out_get_transmit_time_us(msg);
    actuator_command_out->sensor_processing_time_us = mavlink_msg_actuator_command_out_get_sensor_processing_time_us(msg);
    actuator_command_out->CH_1_UNIT_us = mavlink_msg_actuator_command_out_get_CH_1_UNIT_us(msg);
    actuator_command_out->CH_2_UNIT_us = mavlink_msg_actuator_command_out_get_CH_2_UNIT_us(msg);
    actuator_command_out->CH_3_UNIT_us = mavlink_msg_actuator_command_out_get_CH_3_UNIT_us(msg);
    actuator_command_out->CH_4_UNIT_us = mavlink_msg_actuator_command_out_get_CH_4_UNIT_us(msg);
    actuator_command_out->CH_5_UNIT_us = mavlink_msg_actuator_command_out_get_CH_5_UNIT_us(msg);
    actuator_command_out->CH_6_UNIT_us = mavlink_msg_actuator_command_out_get_CH_6_UNIT_us(msg);
    actuator_command_out->CH_7_UNIT_us = mavlink_msg_actuator_command_out_get_CH_7_UNIT_us(msg);
    actuator_command_out->CH_8_UNIT_us = mavlink_msg_actuator_command_out_get_CH_8_UNIT_us(msg);
    actuator_command_out->d1 = mavlink_msg_actuator_command_out_get_d1(msg);
    actuator_command_out->d2 = mavlink_msg_actuator_command_out_get_d2(msg);
    actuator_command_out->d3 = mavlink_msg_actuator_command_out_get_d3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN;
        memset(actuator_command_out, 0, MAVLINK_MSG_ID_ACTUATOR_COMMAND_OUT_LEN);
    memcpy(actuator_command_out, _MAV_PAYLOAD(msg), len);
#endif
}
