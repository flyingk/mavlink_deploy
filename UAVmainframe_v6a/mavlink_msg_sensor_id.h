#pragma once
// MESSAGE SENSOR_ID PACKING

#define MAVLINK_MSG_ID_SENSOR_ID 220


typedef struct __mavlink_sensor_id_t {
 char name[10]; /*<  Sensor name*/
 uint8_t version_high; /*<  Major version*/
 uint8_t version_low; /*<  Minor version*/
 char configuration[10]; /*<  Configuration string*/
} mavlink_sensor_id_t;

#define MAVLINK_MSG_ID_SENSOR_ID_LEN 22
#define MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN 22
#define MAVLINK_MSG_ID_220_LEN 22
#define MAVLINK_MSG_ID_220_MIN_LEN 22

#define MAVLINK_MSG_ID_SENSOR_ID_CRC 178
#define MAVLINK_MSG_ID_220_CRC 178

#define MAVLINK_MSG_SENSOR_ID_FIELD_NAME_LEN 10
#define MAVLINK_MSG_SENSOR_ID_FIELD_CONFIGURATION_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SENSOR_ID { \
    220, \
    "SENSOR_ID", \
    4, \
    {  { "name", NULL, MAVLINK_TYPE_CHAR, 10, 0, offsetof(mavlink_sensor_id_t, name) }, \
         { "version_high", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_sensor_id_t, version_high) }, \
         { "version_low", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_sensor_id_t, version_low) }, \
         { "configuration", NULL, MAVLINK_TYPE_CHAR, 10, 12, offsetof(mavlink_sensor_id_t, configuration) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SENSOR_ID { \
    "SENSOR_ID", \
    4, \
    {  { "name", NULL, MAVLINK_TYPE_CHAR, 10, 0, offsetof(mavlink_sensor_id_t, name) }, \
         { "version_high", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_sensor_id_t, version_high) }, \
         { "version_low", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_sensor_id_t, version_low) }, \
         { "configuration", NULL, MAVLINK_TYPE_CHAR, 10, 12, offsetof(mavlink_sensor_id_t, configuration) }, \
         } \
}
#endif

/**
 * @brief Pack a sensor_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param name  Sensor name
 * @param version_high  Major version
 * @param version_low  Minor version
 * @param configuration  Configuration string
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *name, uint8_t version_high, uint8_t version_low, const char *configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SENSOR_ID_LEN];
    _mav_put_uint8_t(buf, 10, version_high);
    _mav_put_uint8_t(buf, 11, version_low);
    _mav_put_char_array(buf, 0, name, 10);
    _mav_put_char_array(buf, 12, configuration, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SENSOR_ID_LEN);
#else
    mavlink_sensor_id_t packet;
    packet.version_high = version_high;
    packet.version_low = version_low;
    mav_array_memcpy(packet.name, name, sizeof(char)*10);
    mav_array_memcpy(packet.configuration, configuration, sizeof(char)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SENSOR_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SENSOR_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
}

/**
 * @brief Pack a sensor_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param name  Sensor name
 * @param version_high  Major version
 * @param version_low  Minor version
 * @param configuration  Configuration string
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensor_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *name,uint8_t version_high,uint8_t version_low,const char *configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SENSOR_ID_LEN];
    _mav_put_uint8_t(buf, 10, version_high);
    _mav_put_uint8_t(buf, 11, version_low);
    _mav_put_char_array(buf, 0, name, 10);
    _mav_put_char_array(buf, 12, configuration, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SENSOR_ID_LEN);
#else
    mavlink_sensor_id_t packet;
    packet.version_high = version_high;
    packet.version_low = version_low;
    mav_array_memcpy(packet.name, name, sizeof(char)*10);
    mav_array_memcpy(packet.configuration, configuration, sizeof(char)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SENSOR_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SENSOR_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
}

/**
 * @brief Encode a sensor_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sensor_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sensor_id_t* sensor_id)
{
    return mavlink_msg_sensor_id_pack(system_id, component_id, msg, sensor_id->name, sensor_id->version_high, sensor_id->version_low, sensor_id->configuration);
}

/**
 * @brief Encode a sensor_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensor_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sensor_id_t* sensor_id)
{
    return mavlink_msg_sensor_id_pack_chan(system_id, component_id, chan, msg, sensor_id->name, sensor_id->version_high, sensor_id->version_low, sensor_id->configuration);
}

/**
 * @brief Send a sensor_id message
 * @param chan MAVLink channel to send the message
 *
 * @param name  Sensor name
 * @param version_high  Major version
 * @param version_low  Minor version
 * @param configuration  Configuration string
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sensor_id_send(mavlink_channel_t chan, const char *name, uint8_t version_high, uint8_t version_low, const char *configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SENSOR_ID_LEN];
    _mav_put_uint8_t(buf, 10, version_high);
    _mav_put_uint8_t(buf, 11, version_low);
    _mav_put_char_array(buf, 0, name, 10);
    _mav_put_char_array(buf, 12, configuration, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSOR_ID, buf, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
#else
    mavlink_sensor_id_t packet;
    packet.version_high = version_high;
    packet.version_low = version_low;
    mav_array_memcpy(packet.name, name, sizeof(char)*10);
    mav_array_memcpy(packet.configuration, configuration, sizeof(char)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSOR_ID, (const char *)&packet, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
#endif
}

/**
 * @brief Send a sensor_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sensor_id_send_struct(mavlink_channel_t chan, const mavlink_sensor_id_t* sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sensor_id_send(chan, sensor_id->name, sensor_id->version_high, sensor_id->version_low, sensor_id->configuration);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSOR_ID, (const char *)sensor_id, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_SENSOR_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sensor_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *name, uint8_t version_high, uint8_t version_low, const char *configuration)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 10, version_high);
    _mav_put_uint8_t(buf, 11, version_low);
    _mav_put_char_array(buf, 0, name, 10);
    _mav_put_char_array(buf, 12, configuration, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSOR_ID, buf, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
#else
    mavlink_sensor_id_t *packet = (mavlink_sensor_id_t *)msgbuf;
    packet->version_high = version_high;
    packet->version_low = version_low;
    mav_array_memcpy(packet->name, name, sizeof(char)*10);
    mav_array_memcpy(packet->configuration, configuration, sizeof(char)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSOR_ID, (const char *)packet, MAVLINK_MSG_ID_SENSOR_ID_MIN_LEN, MAVLINK_MSG_ID_SENSOR_ID_LEN, MAVLINK_MSG_ID_SENSOR_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE SENSOR_ID UNPACKING


/**
 * @brief Get field name from sensor_id message
 *
 * @return  Sensor name
 */
static inline uint16_t mavlink_msg_sensor_id_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 10,  0);
}

/**
 * @brief Get field version_high from sensor_id message
 *
 * @return  Major version
 */
static inline uint8_t mavlink_msg_sensor_id_get_version_high(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field version_low from sensor_id message
 *
 * @return  Minor version
 */
static inline uint8_t mavlink_msg_sensor_id_get_version_low(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field configuration from sensor_id message
 *
 * @return  Configuration string
 */
static inline uint16_t mavlink_msg_sensor_id_get_configuration(const mavlink_message_t* msg, char *configuration)
{
    return _MAV_RETURN_char_array(msg, configuration, 10,  12);
}

/**
 * @brief Decode a sensor_id message into a struct
 *
 * @param msg The message to decode
 * @param sensor_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_sensor_id_decode(const mavlink_message_t* msg, mavlink_sensor_id_t* sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sensor_id_get_name(msg, sensor_id->name);
    sensor_id->version_high = mavlink_msg_sensor_id_get_version_high(msg);
    sensor_id->version_low = mavlink_msg_sensor_id_get_version_low(msg);
    mavlink_msg_sensor_id_get_configuration(msg, sensor_id->configuration);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SENSOR_ID_LEN? msg->len : MAVLINK_MSG_ID_SENSOR_ID_LEN;
        memset(sensor_id, 0, MAVLINK_MSG_ID_SENSOR_ID_LEN);
    memcpy(sensor_id, _MAV_PAYLOAD(msg), len);
#endif
}
