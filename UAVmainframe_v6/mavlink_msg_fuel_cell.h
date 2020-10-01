#pragma once
// MESSAGE FUEL_CELL PACKING

#define MAVLINK_MSG_ID_FUEL_CELL 195


typedef struct __mavlink_fuel_cell_t {
 uint32_t time_boot_ms; /*<  Timestamp (milliseconds since system boot)*/
 uint16_t FC_Volt; /*<  Fuel cell voltage*/
 uint16_t FC_Amp; /*<  Fuel cell current*/
 uint16_t FC_temp; /*<  Fuel cell temperature*/
 uint16_t FC_Aux_V1; /*<  Aux1 voltage*/
 uint16_t FC_Aux_A1; /*<  Aux1 current*/
} mavlink_fuel_cell_t;

#define MAVLINK_MSG_ID_FUEL_CELL_LEN 14
#define MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN 14
#define MAVLINK_MSG_ID_195_LEN 14
#define MAVLINK_MSG_ID_195_MIN_LEN 14

#define MAVLINK_MSG_ID_FUEL_CELL_CRC 156
#define MAVLINK_MSG_ID_195_CRC 156



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FUEL_CELL { \
    195, \
    "FUEL_CELL", \
    6, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_t, time_boot_ms) }, \
         { "FC_Volt", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_fuel_cell_t, FC_Volt) }, \
         { "FC_Amp", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_fuel_cell_t, FC_Amp) }, \
         { "FC_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_t, FC_temp) }, \
         { "FC_Aux_V1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_fuel_cell_t, FC_Aux_V1) }, \
         { "FC_Aux_A1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_fuel_cell_t, FC_Aux_A1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FUEL_CELL { \
    "FUEL_CELL", \
    6, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_t, time_boot_ms) }, \
         { "FC_Volt", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_fuel_cell_t, FC_Volt) }, \
         { "FC_Amp", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_fuel_cell_t, FC_Amp) }, \
         { "FC_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_t, FC_temp) }, \
         { "FC_Aux_V1", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_fuel_cell_t, FC_Aux_V1) }, \
         { "FC_Aux_A1", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_fuel_cell_t, FC_Aux_A1) }, \
         } \
}
#endif

/**
 * @brief Pack a fuel_cell message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param FC_Volt  Fuel cell voltage
 * @param FC_Amp  Fuel cell current
 * @param FC_temp  Fuel cell temperature
 * @param FC_Aux_V1  Aux1 voltage
 * @param FC_Aux_A1  Aux1 current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint16_t FC_Volt, uint16_t FC_Amp, uint16_t FC_temp, uint16_t FC_Aux_V1, uint16_t FC_Aux_A1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, FC_Volt);
    _mav_put_uint16_t(buf, 6, FC_Amp);
    _mav_put_uint16_t(buf, 8, FC_temp);
    _mav_put_uint16_t(buf, 10, FC_Aux_V1);
    _mav_put_uint16_t(buf, 12, FC_Aux_A1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_LEN);
#else
    mavlink_fuel_cell_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.FC_Volt = FC_Volt;
    packet.FC_Amp = FC_Amp;
    packet.FC_temp = FC_temp;
    packet.FC_Aux_V1 = FC_Aux_V1;
    packet.FC_Aux_A1 = FC_Aux_A1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUEL_CELL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
}

/**
 * @brief Pack a fuel_cell message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param FC_Volt  Fuel cell voltage
 * @param FC_Amp  Fuel cell current
 * @param FC_temp  Fuel cell temperature
 * @param FC_Aux_V1  Aux1 voltage
 * @param FC_Aux_A1  Aux1 current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint16_t FC_Volt,uint16_t FC_Amp,uint16_t FC_temp,uint16_t FC_Aux_V1,uint16_t FC_Aux_A1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, FC_Volt);
    _mav_put_uint16_t(buf, 6, FC_Amp);
    _mav_put_uint16_t(buf, 8, FC_temp);
    _mav_put_uint16_t(buf, 10, FC_Aux_V1);
    _mav_put_uint16_t(buf, 12, FC_Aux_A1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_LEN);
#else
    mavlink_fuel_cell_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.FC_Volt = FC_Volt;
    packet.FC_Amp = FC_Amp;
    packet.FC_temp = FC_temp;
    packet.FC_Aux_V1 = FC_Aux_V1;
    packet.FC_Aux_A1 = FC_Aux_A1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUEL_CELL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
}

/**
 * @brief Encode a fuel_cell struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fuel_cell_t* fuel_cell)
{
    return mavlink_msg_fuel_cell_pack(system_id, component_id, msg, fuel_cell->time_boot_ms, fuel_cell->FC_Volt, fuel_cell->FC_Amp, fuel_cell->FC_temp, fuel_cell->FC_Aux_V1, fuel_cell->FC_Aux_A1);
}

/**
 * @brief Encode a fuel_cell struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fuel_cell_t* fuel_cell)
{
    return mavlink_msg_fuel_cell_pack_chan(system_id, component_id, chan, msg, fuel_cell->time_boot_ms, fuel_cell->FC_Volt, fuel_cell->FC_Amp, fuel_cell->FC_temp, fuel_cell->FC_Aux_V1, fuel_cell->FC_Aux_A1);
}

/**
 * @brief Send a fuel_cell message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param FC_Volt  Fuel cell voltage
 * @param FC_Amp  Fuel cell current
 * @param FC_temp  Fuel cell temperature
 * @param FC_Aux_V1  Aux1 voltage
 * @param FC_Aux_A1  Aux1 current
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fuel_cell_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t FC_Volt, uint16_t FC_Amp, uint16_t FC_temp, uint16_t FC_Aux_V1, uint16_t FC_Aux_A1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, FC_Volt);
    _mav_put_uint16_t(buf, 6, FC_Amp);
    _mav_put_uint16_t(buf, 8, FC_temp);
    _mav_put_uint16_t(buf, 10, FC_Aux_V1);
    _mav_put_uint16_t(buf, 12, FC_Aux_A1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL, buf, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
#else
    mavlink_fuel_cell_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.FC_Volt = FC_Volt;
    packet.FC_Amp = FC_Amp;
    packet.FC_temp = FC_temp;
    packet.FC_Aux_V1 = FC_Aux_V1;
    packet.FC_Aux_A1 = FC_Aux_A1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL, (const char *)&packet, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
#endif
}

/**
 * @brief Send a fuel_cell message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_fuel_cell_send_struct(mavlink_channel_t chan, const mavlink_fuel_cell_t* fuel_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fuel_cell_send(chan, fuel_cell->time_boot_ms, fuel_cell->FC_Volt, fuel_cell->FC_Amp, fuel_cell->FC_temp, fuel_cell->FC_Aux_V1, fuel_cell->FC_Aux_A1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL, (const char *)fuel_cell, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
#endif
}

#if MAVLINK_MSG_ID_FUEL_CELL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fuel_cell_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t FC_Volt, uint16_t FC_Amp, uint16_t FC_temp, uint16_t FC_Aux_V1, uint16_t FC_Aux_A1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, FC_Volt);
    _mav_put_uint16_t(buf, 6, FC_Amp);
    _mav_put_uint16_t(buf, 8, FC_temp);
    _mav_put_uint16_t(buf, 10, FC_Aux_V1);
    _mav_put_uint16_t(buf, 12, FC_Aux_A1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL, buf, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
#else
    mavlink_fuel_cell_t *packet = (mavlink_fuel_cell_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->FC_Volt = FC_Volt;
    packet->FC_Amp = FC_Amp;
    packet->FC_temp = FC_temp;
    packet->FC_Aux_V1 = FC_Aux_V1;
    packet->FC_Aux_A1 = FC_Aux_A1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_LEN, MAVLINK_MSG_ID_FUEL_CELL_CRC);
#endif
}
#endif

#endif

// MESSAGE FUEL_CELL UNPACKING


/**
 * @brief Get field time_boot_ms from fuel_cell message
 *
 * @return  Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_fuel_cell_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field FC_Volt from fuel_cell message
 *
 * @return  Fuel cell voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_get_FC_Volt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field FC_Amp from fuel_cell message
 *
 * @return  Fuel cell current
 */
static inline uint16_t mavlink_msg_fuel_cell_get_FC_Amp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field FC_temp from fuel_cell message
 *
 * @return  Fuel cell temperature
 */
static inline uint16_t mavlink_msg_fuel_cell_get_FC_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field FC_Aux_V1 from fuel_cell message
 *
 * @return  Aux1 voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_get_FC_Aux_V1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field FC_Aux_A1 from fuel_cell message
 *
 * @return  Aux1 current
 */
static inline uint16_t mavlink_msg_fuel_cell_get_FC_Aux_A1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Decode a fuel_cell message into a struct
 *
 * @param msg The message to decode
 * @param fuel_cell C-struct to decode the message contents into
 */
static inline void mavlink_msg_fuel_cell_decode(const mavlink_message_t* msg, mavlink_fuel_cell_t* fuel_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    fuel_cell->time_boot_ms = mavlink_msg_fuel_cell_get_time_boot_ms(msg);
    fuel_cell->FC_Volt = mavlink_msg_fuel_cell_get_FC_Volt(msg);
    fuel_cell->FC_Amp = mavlink_msg_fuel_cell_get_FC_Amp(msg);
    fuel_cell->FC_temp = mavlink_msg_fuel_cell_get_FC_temp(msg);
    fuel_cell->FC_Aux_V1 = mavlink_msg_fuel_cell_get_FC_Aux_V1(msg);
    fuel_cell->FC_Aux_A1 = mavlink_msg_fuel_cell_get_FC_Aux_A1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FUEL_CELL_LEN? msg->len : MAVLINK_MSG_ID_FUEL_CELL_LEN;
        memset(fuel_cell, 0, MAVLINK_MSG_ID_FUEL_CELL_LEN);
    memcpy(fuel_cell, _MAV_PAYLOAD(msg), len);
#endif
}
