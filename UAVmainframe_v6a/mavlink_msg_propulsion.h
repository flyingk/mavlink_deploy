#pragma once
// MESSAGE PROPULSION PACKING

#define MAVLINK_MSG_ID_PROPULSION 184


typedef struct __mavlink_propulsion_t {
 uint32_t time_boot_ms; /*<  Time since boot in msec*/
 float motor_volt; /*<  Motor Volts*/
 float motor_amp; /*<  Motor Amps*/
 uint16_t motor_rpm; /*<  RPM*/
 uint16_t motor_watt; /*<  Motor Watts*/
 uint16_t motor_thrust; /*<  Thrust from loadcell*/
 uint16_t motor_torque; /*<  Torque from loadcell*/
 uint8_t motor_temp; /*<  Motor temp in deg C*/
} mavlink_propulsion_t;

#define MAVLINK_MSG_ID_PROPULSION_LEN 21
#define MAVLINK_MSG_ID_PROPULSION_MIN_LEN 21
#define MAVLINK_MSG_ID_184_LEN 21
#define MAVLINK_MSG_ID_184_MIN_LEN 21

#define MAVLINK_MSG_ID_PROPULSION_CRC 34
#define MAVLINK_MSG_ID_184_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PROPULSION { \
    184, \
    "PROPULSION", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_propulsion_t, time_boot_ms) }, \
         { "motor_volt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_propulsion_t, motor_volt) }, \
         { "motor_amp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_propulsion_t, motor_amp) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_propulsion_t, motor_rpm) }, \
         { "motor_watt", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_propulsion_t, motor_watt) }, \
         { "motor_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_propulsion_t, motor_temp) }, \
         { "motor_thrust", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_propulsion_t, motor_thrust) }, \
         { "motor_torque", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_propulsion_t, motor_torque) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PROPULSION { \
    "PROPULSION", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_propulsion_t, time_boot_ms) }, \
         { "motor_volt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_propulsion_t, motor_volt) }, \
         { "motor_amp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_propulsion_t, motor_amp) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_propulsion_t, motor_rpm) }, \
         { "motor_watt", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_propulsion_t, motor_watt) }, \
         { "motor_temp", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_propulsion_t, motor_temp) }, \
         { "motor_thrust", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_propulsion_t, motor_thrust) }, \
         { "motor_torque", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_propulsion_t, motor_torque) }, \
         } \
}
#endif

/**
 * @brief Pack a propulsion message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Time since boot in msec
 * @param motor_volt  Motor Volts
 * @param motor_amp  Motor Amps
 * @param motor_rpm  RPM
 * @param motor_watt  Motor Watts
 * @param motor_temp  Motor temp in deg C
 * @param motor_thrust  Thrust from loadcell
 * @param motor_torque  Torque from loadcell
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_propulsion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float motor_volt, float motor_amp, uint16_t motor_rpm, uint16_t motor_watt, uint8_t motor_temp, uint16_t motor_thrust, uint16_t motor_torque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PROPULSION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, motor_volt);
    _mav_put_float(buf, 8, motor_amp);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_watt);
    _mav_put_uint16_t(buf, 16, motor_thrust);
    _mav_put_uint16_t(buf, 18, motor_torque);
    _mav_put_uint8_t(buf, 20, motor_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PROPULSION_LEN);
#else
    mavlink_propulsion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.motor_volt = motor_volt;
    packet.motor_amp = motor_amp;
    packet.motor_rpm = motor_rpm;
    packet.motor_watt = motor_watt;
    packet.motor_thrust = motor_thrust;
    packet.motor_torque = motor_torque;
    packet.motor_temp = motor_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PROPULSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PROPULSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
}

/**
 * @brief Pack a propulsion message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Time since boot in msec
 * @param motor_volt  Motor Volts
 * @param motor_amp  Motor Amps
 * @param motor_rpm  RPM
 * @param motor_watt  Motor Watts
 * @param motor_temp  Motor temp in deg C
 * @param motor_thrust  Thrust from loadcell
 * @param motor_torque  Torque from loadcell
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_propulsion_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float motor_volt,float motor_amp,uint16_t motor_rpm,uint16_t motor_watt,uint8_t motor_temp,uint16_t motor_thrust,uint16_t motor_torque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PROPULSION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, motor_volt);
    _mav_put_float(buf, 8, motor_amp);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_watt);
    _mav_put_uint16_t(buf, 16, motor_thrust);
    _mav_put_uint16_t(buf, 18, motor_torque);
    _mav_put_uint8_t(buf, 20, motor_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PROPULSION_LEN);
#else
    mavlink_propulsion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.motor_volt = motor_volt;
    packet.motor_amp = motor_amp;
    packet.motor_rpm = motor_rpm;
    packet.motor_watt = motor_watt;
    packet.motor_thrust = motor_thrust;
    packet.motor_torque = motor_torque;
    packet.motor_temp = motor_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PROPULSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PROPULSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
}

/**
 * @brief Encode a propulsion struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param propulsion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_propulsion_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_propulsion_t* propulsion)
{
    return mavlink_msg_propulsion_pack(system_id, component_id, msg, propulsion->time_boot_ms, propulsion->motor_volt, propulsion->motor_amp, propulsion->motor_rpm, propulsion->motor_watt, propulsion->motor_temp, propulsion->motor_thrust, propulsion->motor_torque);
}

/**
 * @brief Encode a propulsion struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param propulsion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_propulsion_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_propulsion_t* propulsion)
{
    return mavlink_msg_propulsion_pack_chan(system_id, component_id, chan, msg, propulsion->time_boot_ms, propulsion->motor_volt, propulsion->motor_amp, propulsion->motor_rpm, propulsion->motor_watt, propulsion->motor_temp, propulsion->motor_thrust, propulsion->motor_torque);
}

/**
 * @brief Send a propulsion message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Time since boot in msec
 * @param motor_volt  Motor Volts
 * @param motor_amp  Motor Amps
 * @param motor_rpm  RPM
 * @param motor_watt  Motor Watts
 * @param motor_temp  Motor temp in deg C
 * @param motor_thrust  Thrust from loadcell
 * @param motor_torque  Torque from loadcell
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_propulsion_send(mavlink_channel_t chan, uint32_t time_boot_ms, float motor_volt, float motor_amp, uint16_t motor_rpm, uint16_t motor_watt, uint8_t motor_temp, uint16_t motor_thrust, uint16_t motor_torque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PROPULSION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, motor_volt);
    _mav_put_float(buf, 8, motor_amp);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_watt);
    _mav_put_uint16_t(buf, 16, motor_thrust);
    _mav_put_uint16_t(buf, 18, motor_torque);
    _mav_put_uint8_t(buf, 20, motor_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PROPULSION, buf, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
#else
    mavlink_propulsion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.motor_volt = motor_volt;
    packet.motor_amp = motor_amp;
    packet.motor_rpm = motor_rpm;
    packet.motor_watt = motor_watt;
    packet.motor_thrust = motor_thrust;
    packet.motor_torque = motor_torque;
    packet.motor_temp = motor_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PROPULSION, (const char *)&packet, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
#endif
}

/**
 * @brief Send a propulsion message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_propulsion_send_struct(mavlink_channel_t chan, const mavlink_propulsion_t* propulsion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_propulsion_send(chan, propulsion->time_boot_ms, propulsion->motor_volt, propulsion->motor_amp, propulsion->motor_rpm, propulsion->motor_watt, propulsion->motor_temp, propulsion->motor_thrust, propulsion->motor_torque);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PROPULSION, (const char *)propulsion, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_PROPULSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_propulsion_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float motor_volt, float motor_amp, uint16_t motor_rpm, uint16_t motor_watt, uint8_t motor_temp, uint16_t motor_thrust, uint16_t motor_torque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, motor_volt);
    _mav_put_float(buf, 8, motor_amp);
    _mav_put_uint16_t(buf, 12, motor_rpm);
    _mav_put_uint16_t(buf, 14, motor_watt);
    _mav_put_uint16_t(buf, 16, motor_thrust);
    _mav_put_uint16_t(buf, 18, motor_torque);
    _mav_put_uint8_t(buf, 20, motor_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PROPULSION, buf, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
#else
    mavlink_propulsion_t *packet = (mavlink_propulsion_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->motor_volt = motor_volt;
    packet->motor_amp = motor_amp;
    packet->motor_rpm = motor_rpm;
    packet->motor_watt = motor_watt;
    packet->motor_thrust = motor_thrust;
    packet->motor_torque = motor_torque;
    packet->motor_temp = motor_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PROPULSION, (const char *)packet, MAVLINK_MSG_ID_PROPULSION_MIN_LEN, MAVLINK_MSG_ID_PROPULSION_LEN, MAVLINK_MSG_ID_PROPULSION_CRC);
#endif
}
#endif

#endif

// MESSAGE PROPULSION UNPACKING


/**
 * @brief Get field time_boot_ms from propulsion message
 *
 * @return  Time since boot in msec
 */
static inline uint32_t mavlink_msg_propulsion_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field motor_volt from propulsion message
 *
 * @return  Motor Volts
 */
static inline float mavlink_msg_propulsion_get_motor_volt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field motor_amp from propulsion message
 *
 * @return  Motor Amps
 */
static inline float mavlink_msg_propulsion_get_motor_amp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field motor_rpm from propulsion message
 *
 * @return  RPM
 */
static inline uint16_t mavlink_msg_propulsion_get_motor_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field motor_watt from propulsion message
 *
 * @return  Motor Watts
 */
static inline uint16_t mavlink_msg_propulsion_get_motor_watt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field motor_temp from propulsion message
 *
 * @return  Motor temp in deg C
 */
static inline uint8_t mavlink_msg_propulsion_get_motor_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field motor_thrust from propulsion message
 *
 * @return  Thrust from loadcell
 */
static inline uint16_t mavlink_msg_propulsion_get_motor_thrust(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field motor_torque from propulsion message
 *
 * @return  Torque from loadcell
 */
static inline uint16_t mavlink_msg_propulsion_get_motor_torque(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Decode a propulsion message into a struct
 *
 * @param msg The message to decode
 * @param propulsion C-struct to decode the message contents into
 */
static inline void mavlink_msg_propulsion_decode(const mavlink_message_t* msg, mavlink_propulsion_t* propulsion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    propulsion->time_boot_ms = mavlink_msg_propulsion_get_time_boot_ms(msg);
    propulsion->motor_volt = mavlink_msg_propulsion_get_motor_volt(msg);
    propulsion->motor_amp = mavlink_msg_propulsion_get_motor_amp(msg);
    propulsion->motor_rpm = mavlink_msg_propulsion_get_motor_rpm(msg);
    propulsion->motor_watt = mavlink_msg_propulsion_get_motor_watt(msg);
    propulsion->motor_thrust = mavlink_msg_propulsion_get_motor_thrust(msg);
    propulsion->motor_torque = mavlink_msg_propulsion_get_motor_torque(msg);
    propulsion->motor_temp = mavlink_msg_propulsion_get_motor_temp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PROPULSION_LEN? msg->len : MAVLINK_MSG_ID_PROPULSION_LEN;
        memset(propulsion, 0, MAVLINK_MSG_ID_PROPULSION_LEN);
    memcpy(propulsion, _MAV_PAYLOAD(msg), len);
#endif
}
