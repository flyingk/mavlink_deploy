#pragma once
// MESSAGE MR_DEBUG PACKING

#define MAVLINK_MSG_ID_MR_DEBUG 202


typedef struct __mavlink_mr_debug_t {
 uint32_t time_boot_ms; /*<  Timestamp (milliseconds since system boot)*/
 uint16_t RPM_1; /*<  Motor 1 RPM [1/s]*/
 uint16_t RPM_2; /*<  Motor 2 RPM [1/s]*/
 uint16_t RPM_3; /*<  Motor 3 RPM [1/s]*/
 uint16_t RPM_4; /*<  Motor 4 RPM [1/s]*/
 uint16_t RPM_5; /*<  Motor 5 RPM [1/s]*/
 uint16_t RPM_6; /*<  Motor 6 RPM [1/s]*/
} mavlink_mr_debug_t;

#define MAVLINK_MSG_ID_MR_DEBUG_LEN 16
#define MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN 16
#define MAVLINK_MSG_ID_202_LEN 16
#define MAVLINK_MSG_ID_202_MIN_LEN 16

#define MAVLINK_MSG_ID_MR_DEBUG_CRC 248
#define MAVLINK_MSG_ID_202_CRC 248



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MR_DEBUG { \
    202, \
    "MR_DEBUG", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mr_debug_t, time_boot_ms) }, \
         { "RPM_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_mr_debug_t, RPM_1) }, \
         { "RPM_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_mr_debug_t, RPM_2) }, \
         { "RPM_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_mr_debug_t, RPM_3) }, \
         { "RPM_4", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_mr_debug_t, RPM_4) }, \
         { "RPM_5", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_mr_debug_t, RPM_5) }, \
         { "RPM_6", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_mr_debug_t, RPM_6) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MR_DEBUG { \
    "MR_DEBUG", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mr_debug_t, time_boot_ms) }, \
         { "RPM_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_mr_debug_t, RPM_1) }, \
         { "RPM_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_mr_debug_t, RPM_2) }, \
         { "RPM_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_mr_debug_t, RPM_3) }, \
         { "RPM_4", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_mr_debug_t, RPM_4) }, \
         { "RPM_5", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_mr_debug_t, RPM_5) }, \
         { "RPM_6", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_mr_debug_t, RPM_6) }, \
         } \
}
#endif

/**
 * @brief Pack a mr_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param RPM_1  Motor 1 RPM [1/s]
 * @param RPM_2  Motor 2 RPM [1/s]
 * @param RPM_3  Motor 3 RPM [1/s]
 * @param RPM_4  Motor 4 RPM [1/s]
 * @param RPM_5  Motor 5 RPM [1/s]
 * @param RPM_6  Motor 6 RPM [1/s]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mr_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint16_t RPM_1, uint16_t RPM_2, uint16_t RPM_3, uint16_t RPM_4, uint16_t RPM_5, uint16_t RPM_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MR_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, RPM_1);
    _mav_put_uint16_t(buf, 6, RPM_2);
    _mav_put_uint16_t(buf, 8, RPM_3);
    _mav_put_uint16_t(buf, 10, RPM_4);
    _mav_put_uint16_t(buf, 12, RPM_5);
    _mav_put_uint16_t(buf, 14, RPM_6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MR_DEBUG_LEN);
#else
    mavlink_mr_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.RPM_1 = RPM_1;
    packet.RPM_2 = RPM_2;
    packet.RPM_3 = RPM_3;
    packet.RPM_4 = RPM_4;
    packet.RPM_5 = RPM_5;
    packet.RPM_6 = RPM_6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MR_DEBUG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MR_DEBUG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
}

/**
 * @brief Pack a mr_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param RPM_1  Motor 1 RPM [1/s]
 * @param RPM_2  Motor 2 RPM [1/s]
 * @param RPM_3  Motor 3 RPM [1/s]
 * @param RPM_4  Motor 4 RPM [1/s]
 * @param RPM_5  Motor 5 RPM [1/s]
 * @param RPM_6  Motor 6 RPM [1/s]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mr_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint16_t RPM_1,uint16_t RPM_2,uint16_t RPM_3,uint16_t RPM_4,uint16_t RPM_5,uint16_t RPM_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MR_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, RPM_1);
    _mav_put_uint16_t(buf, 6, RPM_2);
    _mav_put_uint16_t(buf, 8, RPM_3);
    _mav_put_uint16_t(buf, 10, RPM_4);
    _mav_put_uint16_t(buf, 12, RPM_5);
    _mav_put_uint16_t(buf, 14, RPM_6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MR_DEBUG_LEN);
#else
    mavlink_mr_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.RPM_1 = RPM_1;
    packet.RPM_2 = RPM_2;
    packet.RPM_3 = RPM_3;
    packet.RPM_4 = RPM_4;
    packet.RPM_5 = RPM_5;
    packet.RPM_6 = RPM_6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MR_DEBUG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MR_DEBUG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
}

/**
 * @brief Encode a mr_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mr_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mr_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mr_debug_t* mr_debug)
{
    return mavlink_msg_mr_debug_pack(system_id, component_id, msg, mr_debug->time_boot_ms, mr_debug->RPM_1, mr_debug->RPM_2, mr_debug->RPM_3, mr_debug->RPM_4, mr_debug->RPM_5, mr_debug->RPM_6);
}

/**
 * @brief Encode a mr_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mr_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mr_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mr_debug_t* mr_debug)
{
    return mavlink_msg_mr_debug_pack_chan(system_id, component_id, chan, msg, mr_debug->time_boot_ms, mr_debug->RPM_1, mr_debug->RPM_2, mr_debug->RPM_3, mr_debug->RPM_4, mr_debug->RPM_5, mr_debug->RPM_6);
}

/**
 * @brief Send a mr_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param RPM_1  Motor 1 RPM [1/s]
 * @param RPM_2  Motor 2 RPM [1/s]
 * @param RPM_3  Motor 3 RPM [1/s]
 * @param RPM_4  Motor 4 RPM [1/s]
 * @param RPM_5  Motor 5 RPM [1/s]
 * @param RPM_6  Motor 6 RPM [1/s]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mr_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t RPM_1, uint16_t RPM_2, uint16_t RPM_3, uint16_t RPM_4, uint16_t RPM_5, uint16_t RPM_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MR_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, RPM_1);
    _mav_put_uint16_t(buf, 6, RPM_2);
    _mav_put_uint16_t(buf, 8, RPM_3);
    _mav_put_uint16_t(buf, 10, RPM_4);
    _mav_put_uint16_t(buf, 12, RPM_5);
    _mav_put_uint16_t(buf, 14, RPM_6);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MR_DEBUG, buf, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
#else
    mavlink_mr_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.RPM_1 = RPM_1;
    packet.RPM_2 = RPM_2;
    packet.RPM_3 = RPM_3;
    packet.RPM_4 = RPM_4;
    packet.RPM_5 = RPM_5;
    packet.RPM_6 = RPM_6;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MR_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
#endif
}

/**
 * @brief Send a mr_debug message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mr_debug_send_struct(mavlink_channel_t chan, const mavlink_mr_debug_t* mr_debug)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mr_debug_send(chan, mr_debug->time_boot_ms, mr_debug->RPM_1, mr_debug->RPM_2, mr_debug->RPM_3, mr_debug->RPM_4, mr_debug->RPM_5, mr_debug->RPM_6);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MR_DEBUG, (const char *)mr_debug, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
#endif
}

#if MAVLINK_MSG_ID_MR_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mr_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t RPM_1, uint16_t RPM_2, uint16_t RPM_3, uint16_t RPM_4, uint16_t RPM_5, uint16_t RPM_6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, RPM_1);
    _mav_put_uint16_t(buf, 6, RPM_2);
    _mav_put_uint16_t(buf, 8, RPM_3);
    _mav_put_uint16_t(buf, 10, RPM_4);
    _mav_put_uint16_t(buf, 12, RPM_5);
    _mav_put_uint16_t(buf, 14, RPM_6);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MR_DEBUG, buf, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
#else
    mavlink_mr_debug_t *packet = (mavlink_mr_debug_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->RPM_1 = RPM_1;
    packet->RPM_2 = RPM_2;
    packet->RPM_3 = RPM_3;
    packet->RPM_4 = RPM_4;
    packet->RPM_5 = RPM_5;
    packet->RPM_6 = RPM_6;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MR_DEBUG, (const char *)packet, MAVLINK_MSG_ID_MR_DEBUG_MIN_LEN, MAVLINK_MSG_ID_MR_DEBUG_LEN, MAVLINK_MSG_ID_MR_DEBUG_CRC);
#endif
}
#endif

#endif

// MESSAGE MR_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from mr_debug message
 *
 * @return  Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_mr_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field RPM_1 from mr_debug message
 *
 * @return  Motor 1 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field RPM_2 from mr_debug message
 *
 * @return  Motor 2 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field RPM_3 from mr_debug message
 *
 * @return  Motor 3 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field RPM_4 from mr_debug message
 *
 * @return  Motor 4 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field RPM_5 from mr_debug message
 *
 * @return  Motor 5 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field RPM_6 from mr_debug message
 *
 * @return  Motor 6 RPM [1/s]
 */
static inline uint16_t mavlink_msg_mr_debug_get_RPM_6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a mr_debug message into a struct
 *
 * @param msg The message to decode
 * @param mr_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_mr_debug_decode(const mavlink_message_t* msg, mavlink_mr_debug_t* mr_debug)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mr_debug->time_boot_ms = mavlink_msg_mr_debug_get_time_boot_ms(msg);
    mr_debug->RPM_1 = mavlink_msg_mr_debug_get_RPM_1(msg);
    mr_debug->RPM_2 = mavlink_msg_mr_debug_get_RPM_2(msg);
    mr_debug->RPM_3 = mavlink_msg_mr_debug_get_RPM_3(msg);
    mr_debug->RPM_4 = mavlink_msg_mr_debug_get_RPM_4(msg);
    mr_debug->RPM_5 = mavlink_msg_mr_debug_get_RPM_5(msg);
    mr_debug->RPM_6 = mavlink_msg_mr_debug_get_RPM_6(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MR_DEBUG_LEN? msg->len : MAVLINK_MSG_ID_MR_DEBUG_LEN;
        memset(mr_debug, 0, MAVLINK_MSG_ID_MR_DEBUG_LEN);
    memcpy(mr_debug, _MAV_PAYLOAD(msg), len);
#endif
}
