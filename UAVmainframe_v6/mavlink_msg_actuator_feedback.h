#pragma once
// MESSAGE ACTUATOR_FEEDBACK PACKING

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK 225


typedef struct __mavlink_actuator_feedback_t {
 uint64_t sensor_time_us; /*<  Sensor time in usec*/
 uint64_t recorded_time_us; /*<  recording timestamp in usec*/
 uint32_t sensor_processing_time_us; /*<  Sensor processing time in usec*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
} mavlink_actuator_feedback_t;

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN 32
#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN 32
#define MAVLINK_MSG_ID_225_LEN 32
#define MAVLINK_MSG_ID_225_MIN_LEN 32

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC 1
#define MAVLINK_MSG_ID_225_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_FEEDBACK { \
    225, \
    "ACTUATOR_FEEDBACK", \
    6, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_actuator_feedback_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_actuator_feedback_t, sensor_processing_time_us) }, \
         { "recorded_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_actuator_feedback_t, recorded_time_us) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_actuator_feedback_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_actuator_feedback_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_actuator_feedback_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_FEEDBACK { \
    "ACTUATOR_FEEDBACK", \
    6, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_actuator_feedback_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_actuator_feedback_t, sensor_processing_time_us) }, \
         { "recorded_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_actuator_feedback_t, recorded_time_us) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_actuator_feedback_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_actuator_feedback_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_actuator_feedback_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, d1);
    _mav_put_float(buf, 24, d2);
    _mav_put_float(buf, 28, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#else
    mavlink_actuator_feedback_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
}

/**
 * @brief Pack a actuator_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t sensor_time_us,uint32_t sensor_processing_time_us,uint64_t recorded_time_us,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, d1);
    _mav_put_float(buf, 24, d2);
    _mav_put_float(buf, 28, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#else
    mavlink_actuator_feedback_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
}

/**
 * @brief Encode a actuator_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_feedback_t* actuator_feedback)
{
    return mavlink_msg_actuator_feedback_pack(system_id, component_id, msg, actuator_feedback->sensor_time_us, actuator_feedback->sensor_processing_time_us, actuator_feedback->recorded_time_us, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
}

/**
 * @brief Encode a actuator_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_feedback_t* actuator_feedback)
{
    return mavlink_msg_actuator_feedback_pack_chan(system_id, component_id, chan, msg, actuator_feedback->sensor_time_us, actuator_feedback->sensor_processing_time_us, actuator_feedback->recorded_time_us, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
}

/**
 * @brief Send a actuator_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_feedback_send(mavlink_channel_t chan, uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, d1);
    _mav_put_float(buf, 24, d2);
    _mav_put_float(buf, 28, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#else
    mavlink_actuator_feedback_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a actuator_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_feedback_send_struct(mavlink_channel_t chan, const mavlink_actuator_feedback_t* actuator_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_feedback_send(chan, actuator_feedback->sensor_time_us, actuator_feedback->sensor_processing_time_us, actuator_feedback->recorded_time_us, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)actuator_feedback, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, d1);
    _mav_put_float(buf, 24, d2);
    _mav_put_float(buf, 28, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#else
    mavlink_actuator_feedback_t *packet = (mavlink_actuator_feedback_t *)msgbuf;
    packet->sensor_time_us = sensor_time_us;
    packet->recorded_time_us = recorded_time_us;
    packet->sensor_processing_time_us = sensor_processing_time_us;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_FEEDBACK UNPACKING


/**
 * @brief Get field sensor_time_us from actuator_feedback message
 *
 * @return  Sensor time in usec
 */
static inline uint64_t mavlink_msg_actuator_feedback_get_sensor_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sensor_processing_time_us from actuator_feedback message
 *
 * @return  Sensor processing time in usec
 */
static inline uint32_t mavlink_msg_actuator_feedback_get_sensor_processing_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field recorded_time_us from actuator_feedback message
 *
 * @return  recording timestamp in usec
 */
static inline uint64_t mavlink_msg_actuator_feedback_get_recorded_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field d1 from actuator_feedback message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_actuator_feedback_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field d2 from actuator_feedback message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_actuator_feedback_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field d3 from actuator_feedback message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_actuator_feedback_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a actuator_feedback message into a struct
 *
 * @param msg The message to decode
 * @param actuator_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_feedback_decode(const mavlink_message_t* msg, mavlink_actuator_feedback_t* actuator_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_feedback->sensor_time_us = mavlink_msg_actuator_feedback_get_sensor_time_us(msg);
    actuator_feedback->recorded_time_us = mavlink_msg_actuator_feedback_get_recorded_time_us(msg);
    actuator_feedback->sensor_processing_time_us = mavlink_msg_actuator_feedback_get_sensor_processing_time_us(msg);
    actuator_feedback->d1 = mavlink_msg_actuator_feedback_get_d1(msg);
    actuator_feedback->d2 = mavlink_msg_actuator_feedback_get_d2(msg);
    actuator_feedback->d3 = mavlink_msg_actuator_feedback_get_d3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN;
        memset(actuator_feedback, 0, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
    memcpy(actuator_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
