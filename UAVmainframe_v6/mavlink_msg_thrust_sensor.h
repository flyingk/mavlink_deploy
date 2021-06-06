#pragma once
// MESSAGE THRUST_SENSOR PACKING

#define MAVLINK_MSG_ID_THRUST_SENSOR 227


typedef struct __mavlink_thrust_sensor_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 uint32_t Load_cell; /*<  Load cell data*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
} mavlink_thrust_sensor_t;

#define MAVLINK_MSG_ID_THRUST_SENSOR_LEN 18
#define MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN 18
#define MAVLINK_MSG_ID_227_LEN 18
#define MAVLINK_MSG_ID_227_MIN_LEN 18

#define MAVLINK_MSG_ID_THRUST_SENSOR_CRC 224
#define MAVLINK_MSG_ID_227_CRC 224



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_THRUST_SENSOR { \
    227, \
    "THRUST_SENSOR", \
    5, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_thrust_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_thrust_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_thrust_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_thrust_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Load_cell", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_thrust_sensor_t, Load_cell) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_THRUST_SENSOR { \
    "THRUST_SENSOR", \
    5, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_thrust_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_thrust_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_thrust_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_thrust_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Load_cell", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_thrust_sensor_t, Load_cell) }, \
         } \
}
#endif

/**
 * @brief Pack a thrust_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Load_cell  Load cell data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_uint32_t(buf, 12, Load_cell);
    _mav_put_int16_t(buf, 16, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#else
    mavlink_thrust_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Load_cell = Load_cell;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THRUST_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
}

/**
 * @brief Pack a thrust_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Load_cell  Load cell data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_uint32_t(buf, 12, Load_cell);
    _mav_put_int16_t(buf, 16, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#else
    mavlink_thrust_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Load_cell = Load_cell;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_THRUST_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
}

/**
 * @brief Encode a thrust_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param thrust_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_thrust_sensor_t* thrust_sensor)
{
    return mavlink_msg_thrust_sensor_pack(system_id, component_id, msg, thrust_sensor->Sensor_time_UNIT_100us, thrust_sensor->Sync_data_Unit_variable, thrust_sensor->Sensor_processing_time_UNIT_us, thrust_sensor->Recorded_time_UNIT_100us, thrust_sensor->Load_cell);
}

/**
 * @brief Encode a thrust_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param thrust_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_thrust_sensor_t* thrust_sensor)
{
    return mavlink_msg_thrust_sensor_pack_chan(system_id, component_id, chan, msg, thrust_sensor->Sensor_time_UNIT_100us, thrust_sensor->Sync_data_Unit_variable, thrust_sensor->Sensor_processing_time_UNIT_us, thrust_sensor->Recorded_time_UNIT_100us, thrust_sensor->Load_cell);
}

/**
 * @brief Send a thrust_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Load_cell  Load cell data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_thrust_sensor_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_uint32_t(buf, 12, Load_cell);
    _mav_put_int16_t(buf, 16, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    mavlink_thrust_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Load_cell = Load_cell;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#endif
}

/**
 * @brief Send a thrust_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_thrust_sensor_send_struct(mavlink_channel_t chan, const mavlink_thrust_sensor_t* thrust_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_thrust_sensor_send(chan, thrust_sensor->Sensor_time_UNIT_100us, thrust_sensor->Sync_data_Unit_variable, thrust_sensor->Sensor_processing_time_UNIT_us, thrust_sensor->Recorded_time_UNIT_100us, thrust_sensor->Load_cell);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)thrust_sensor, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_THRUST_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_thrust_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_uint32_t(buf, 12, Load_cell);
    _mav_put_int16_t(buf, 16, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    mavlink_thrust_sensor_t *packet = (mavlink_thrust_sensor_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Load_cell = Load_cell;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)packet, MAVLINK_MSG_ID_THRUST_SENSOR_MIN_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE THRUST_SENSOR UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from thrust_sensor message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from thrust_sensor message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from thrust_sensor message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_thrust_sensor_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from thrust_sensor message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field Load_cell from thrust_sensor message
 *
 * @return  Load cell data
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_Load_cell(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Decode a thrust_sensor message into a struct
 *
 * @param msg The message to decode
 * @param thrust_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_thrust_sensor_decode(const mavlink_message_t* msg, mavlink_thrust_sensor_t* thrust_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    thrust_sensor->Sensor_time_UNIT_100us = mavlink_msg_thrust_sensor_get_Sensor_time_UNIT_100us(msg);
    thrust_sensor->Sync_data_Unit_variable = mavlink_msg_thrust_sensor_get_Sync_data_Unit_variable(msg);
    thrust_sensor->Recorded_time_UNIT_100us = mavlink_msg_thrust_sensor_get_Recorded_time_UNIT_100us(msg);
    thrust_sensor->Load_cell = mavlink_msg_thrust_sensor_get_Load_cell(msg);
    thrust_sensor->Sensor_processing_time_UNIT_us = mavlink_msg_thrust_sensor_get_Sensor_processing_time_UNIT_us(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_THRUST_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_THRUST_SENSOR_LEN;
        memset(thrust_sensor, 0, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
    memcpy(thrust_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
