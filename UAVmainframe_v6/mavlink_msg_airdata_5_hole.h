#pragma once
// MESSAGE AIRDATA_5_hole PACKING

#define MAVLINK_MSG_ID_AIRDATA_5_hole 182


typedef struct __mavlink_airdata_5_hole_t {
 uint32_t time_boot_ms; /*<  Time since boot in msec*/
 float density; /*<  air density*/
 float DP1; /*<  Differential Pressure 1*/
 float DP2; /*<  Differential Pressure 2*/
 float DP3; /*<  Differential Pressure 3*/
 uint16_t dynamic_pressure; /*<  Dynamic pressure in Pa*/
 int8_t temperature; /*<  Temperature in deg C*/
} mavlink_airdata_5_hole_t;

#define MAVLINK_MSG_ID_AIRDATA_5_hole_LEN 23
#define MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN 23
#define MAVLINK_MSG_ID_182_LEN 23
#define MAVLINK_MSG_ID_182_MIN_LEN 23

#define MAVLINK_MSG_ID_AIRDATA_5_hole_CRC 54
#define MAVLINK_MSG_ID_182_CRC 54



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AIRDATA_5_hole { \
    182, \
    "AIRDATA_5_hole", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_airdata_5_hole_t, time_boot_ms) }, \
         { "dynamic_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_airdata_5_hole_t, dynamic_pressure) }, \
         { "density", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_airdata_5_hole_t, density) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 22, offsetof(mavlink_airdata_5_hole_t, temperature) }, \
         { "DP1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_airdata_5_hole_t, DP1) }, \
         { "DP2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_airdata_5_hole_t, DP2) }, \
         { "DP3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_airdata_5_hole_t, DP3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AIRDATA_5_hole { \
    "AIRDATA_5_hole", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_airdata_5_hole_t, time_boot_ms) }, \
         { "dynamic_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_airdata_5_hole_t, dynamic_pressure) }, \
         { "density", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_airdata_5_hole_t, density) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 22, offsetof(mavlink_airdata_5_hole_t, temperature) }, \
         { "DP1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_airdata_5_hole_t, DP1) }, \
         { "DP2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_airdata_5_hole_t, DP2) }, \
         { "DP3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_airdata_5_hole_t, DP3) }, \
         } \
}
#endif

/**
 * @brief Pack a airdata_5_hole message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot in msec
 * @param dynamic_pressure  Dynamic pressure in Pa
 * @param density  air density
 * @param temperature  Temperature in deg C
 * @param DP1  Differential Pressure 1
 * @param DP2  Differential Pressure 2
 * @param DP3  Differential Pressure 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_5_hole_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_5_hole_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, density);
    _mav_put_float(buf, 8, DP1);
    _mav_put_float(buf, 12, DP2);
    _mav_put_float(buf, 16, DP3);
    _mav_put_uint16_t(buf, 20, dynamic_pressure);
    _mav_put_int8_t(buf, 22, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN);
#else
    mavlink_airdata_5_hole_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.density = density;
    packet.DP1 = DP1;
    packet.DP2 = DP2;
    packet.DP3 = DP3;
    packet.dynamic_pressure = dynamic_pressure;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AIRDATA_5_hole;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
}

/**
 * @brief Pack a airdata_5_hole message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Time since boot in msec
 * @param dynamic_pressure  Dynamic pressure in Pa
 * @param density  air density
 * @param temperature  Temperature in deg C
 * @param DP1  Differential Pressure 1
 * @param DP2  Differential Pressure 2
 * @param DP3  Differential Pressure 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_5_hole_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint16_t dynamic_pressure,float density,int8_t temperature,float DP1,float DP2,float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_5_hole_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, density);
    _mav_put_float(buf, 8, DP1);
    _mav_put_float(buf, 12, DP2);
    _mav_put_float(buf, 16, DP3);
    _mav_put_uint16_t(buf, 20, dynamic_pressure);
    _mav_put_int8_t(buf, 22, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN);
#else
    mavlink_airdata_5_hole_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.density = density;
    packet.DP1 = DP1;
    packet.DP2 = DP2;
    packet.DP3 = DP3;
    packet.dynamic_pressure = dynamic_pressure;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AIRDATA_5_hole;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
}

/**
 * @brief Encode a airdata_5_hole struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param airdata_5_hole C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_5_hole_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_airdata_5_hole_t* airdata_5_hole)
{
    return mavlink_msg_airdata_5_hole_pack(system_id, component_id, msg, airdata_5_hole->time_boot_ms, airdata_5_hole->dynamic_pressure, airdata_5_hole->density, airdata_5_hole->temperature, airdata_5_hole->DP1, airdata_5_hole->DP2, airdata_5_hole->DP3);
}

/**
 * @brief Encode a airdata_5_hole struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airdata_5_hole C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_5_hole_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_airdata_5_hole_t* airdata_5_hole)
{
    return mavlink_msg_airdata_5_hole_pack_chan(system_id, component_id, chan, msg, airdata_5_hole->time_boot_ms, airdata_5_hole->dynamic_pressure, airdata_5_hole->density, airdata_5_hole->temperature, airdata_5_hole->DP1, airdata_5_hole->DP2, airdata_5_hole->DP3);
}

/**
 * @brief Send a airdata_5_hole message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Time since boot in msec
 * @param dynamic_pressure  Dynamic pressure in Pa
 * @param density  air density
 * @param temperature  Temperature in deg C
 * @param DP1  Differential Pressure 1
 * @param DP2  Differential Pressure 2
 * @param DP3  Differential Pressure 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_airdata_5_hole_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_5_hole_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, density);
    _mav_put_float(buf, 8, DP1);
    _mav_put_float(buf, 12, DP2);
    _mav_put_float(buf, 16, DP3);
    _mav_put_uint16_t(buf, 20, dynamic_pressure);
    _mav_put_int8_t(buf, 22, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_5_hole, buf, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
#else
    mavlink_airdata_5_hole_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.density = density;
    packet.DP1 = DP1;
    packet.DP2 = DP2;
    packet.DP3 = DP3;
    packet.dynamic_pressure = dynamic_pressure;
    packet.temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_5_hole, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
#endif
}

/**
 * @brief Send a airdata_5_hole message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_airdata_5_hole_send_struct(mavlink_channel_t chan, const mavlink_airdata_5_hole_t* airdata_5_hole)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_airdata_5_hole_send(chan, airdata_5_hole->time_boot_ms, airdata_5_hole->dynamic_pressure, airdata_5_hole->density, airdata_5_hole->temperature, airdata_5_hole->DP1, airdata_5_hole->DP2, airdata_5_hole->DP3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_5_hole, (const char *)airdata_5_hole, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
#endif
}

#if MAVLINK_MSG_ID_AIRDATA_5_hole_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_airdata_5_hole_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, density);
    _mav_put_float(buf, 8, DP1);
    _mav_put_float(buf, 12, DP2);
    _mav_put_float(buf, 16, DP3);
    _mav_put_uint16_t(buf, 20, dynamic_pressure);
    _mav_put_int8_t(buf, 22, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_5_hole, buf, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
#else
    mavlink_airdata_5_hole_t *packet = (mavlink_airdata_5_hole_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->density = density;
    packet->DP1 = DP1;
    packet->DP2 = DP2;
    packet->DP3 = DP3;
    packet->dynamic_pressure = dynamic_pressure;
    packet->temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_5_hole, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_5_hole_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN, MAVLINK_MSG_ID_AIRDATA_5_hole_CRC);
#endif
}
#endif

#endif

// MESSAGE AIRDATA_5_hole UNPACKING


/**
 * @brief Get field time_boot_ms from airdata_5_hole message
 *
 * @return  Time since boot in msec
 */
static inline uint32_t mavlink_msg_airdata_5_hole_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field dynamic_pressure from airdata_5_hole message
 *
 * @return  Dynamic pressure in Pa
 */
static inline uint16_t mavlink_msg_airdata_5_hole_get_dynamic_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field density from airdata_5_hole message
 *
 * @return  air density
 */
static inline float mavlink_msg_airdata_5_hole_get_density(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field temperature from airdata_5_hole message
 *
 * @return  Temperature in deg C
 */
static inline int8_t mavlink_msg_airdata_5_hole_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  22);
}

/**
 * @brief Get field DP1 from airdata_5_hole message
 *
 * @return  Differential Pressure 1
 */
static inline float mavlink_msg_airdata_5_hole_get_DP1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field DP2 from airdata_5_hole message
 *
 * @return  Differential Pressure 2
 */
static inline float mavlink_msg_airdata_5_hole_get_DP2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field DP3 from airdata_5_hole message
 *
 * @return  Differential Pressure 3
 */
static inline float mavlink_msg_airdata_5_hole_get_DP3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a airdata_5_hole message into a struct
 *
 * @param msg The message to decode
 * @param airdata_5_hole C-struct to decode the message contents into
 */
static inline void mavlink_msg_airdata_5_hole_decode(const mavlink_message_t* msg, mavlink_airdata_5_hole_t* airdata_5_hole)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    airdata_5_hole->time_boot_ms = mavlink_msg_airdata_5_hole_get_time_boot_ms(msg);
    airdata_5_hole->density = mavlink_msg_airdata_5_hole_get_density(msg);
    airdata_5_hole->DP1 = mavlink_msg_airdata_5_hole_get_DP1(msg);
    airdata_5_hole->DP2 = mavlink_msg_airdata_5_hole_get_DP2(msg);
    airdata_5_hole->DP3 = mavlink_msg_airdata_5_hole_get_DP3(msg);
    airdata_5_hole->dynamic_pressure = mavlink_msg_airdata_5_hole_get_dynamic_pressure(msg);
    airdata_5_hole->temperature = mavlink_msg_airdata_5_hole_get_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AIRDATA_5_hole_LEN? msg->len : MAVLINK_MSG_ID_AIRDATA_5_hole_LEN;
        memset(airdata_5_hole, 0, MAVLINK_MSG_ID_AIRDATA_5_hole_LEN);
    memcpy(airdata_5_hole, _MAV_PAYLOAD(msg), len);
#endif
}
