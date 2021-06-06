#pragma once
// MESSAGE POWER_SENSOR PACKING

#define MAVLINK_MSG_ID_POWER_SENSOR 226


typedef struct __mavlink_power_sensor_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float Voltage_UNIT_V; /*<  Voltage [V]*/
 float Current_UNIT_A; /*<  Current [A]*/
 float Power_UNIT_W; /*<  Power [W]*/
 float Temp_UNIT_C; /*<  Temperature [C]*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
 uint16_t RPM_UNIT_1_d_sec; /*<  Motor RPM [1/sec]*/
} mavlink_power_sensor_t;

#define MAVLINK_MSG_ID_POWER_SENSOR_LEN 44
#define MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN 44
#define MAVLINK_MSG_ID_226_LEN 44
#define MAVLINK_MSG_ID_226_MIN_LEN 44

#define MAVLINK_MSG_ID_POWER_SENSOR_CRC 176
#define MAVLINK_MSG_ID_226_CRC 176



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POWER_SENSOR { \
    226, \
    "POWER_SENSOR", \
    12, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_power_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_power_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_power_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_power_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Voltage_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_power_sensor_t, Voltage_UNIT_V) }, \
         { "Current_UNIT_A", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_power_sensor_t, Current_UNIT_A) }, \
         { "Power_UNIT_W", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_power_sensor_t, Power_UNIT_W) }, \
         { "Temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_power_sensor_t, Temp_UNIT_C) }, \
         { "RPM_UNIT_1_d_sec", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_power_sensor_t, RPM_UNIT_1_d_sec) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_power_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_power_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_power_sensor_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POWER_SENSOR { \
    "POWER_SENSOR", \
    12, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_power_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_power_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_power_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_power_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Voltage_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_power_sensor_t, Voltage_UNIT_V) }, \
         { "Current_UNIT_A", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_power_sensor_t, Current_UNIT_A) }, \
         { "Power_UNIT_W", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_power_sensor_t, Power_UNIT_W) }, \
         { "Temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_power_sensor_t, Temp_UNIT_C) }, \
         { "RPM_UNIT_1_d_sec", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_power_sensor_t, RPM_UNIT_1_d_sec) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_power_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_power_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_power_sensor_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a power_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Voltage_UNIT_V  Voltage [V]
 * @param Current_UNIT_A  Current [A]
 * @param Power_UNIT_W  Power [W]
 * @param Temp_UNIT_C  Temperature [C]
 * @param RPM_UNIT_1_d_sec  Motor RPM [1/sec]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Voltage_UNIT_V, float Current_UNIT_A, float Power_UNIT_W, float Temp_UNIT_C, uint16_t RPM_UNIT_1_d_sec, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, Power_UNIT_W);
    _mav_put_float(buf, 24, Temp_UNIT_C);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, RPM_UNIT_1_d_sec);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_SENSOR_LEN);
#else
    mavlink_power_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.Power_UNIT_W = Power_UNIT_W;
    packet.Temp_UNIT_C = Temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_sec = RPM_UNIT_1_d_sec;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POWER_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
}

/**
 * @brief Pack a power_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Voltage_UNIT_V  Voltage [V]
 * @param Current_UNIT_A  Current [A]
 * @param Power_UNIT_W  Power [W]
 * @param Temp_UNIT_C  Temperature [C]
 * @param RPM_UNIT_1_d_sec  Motor RPM [1/sec]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,float Voltage_UNIT_V,float Current_UNIT_A,float Power_UNIT_W,float Temp_UNIT_C,uint16_t RPM_UNIT_1_d_sec,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, Power_UNIT_W);
    _mav_put_float(buf, 24, Temp_UNIT_C);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, RPM_UNIT_1_d_sec);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_SENSOR_LEN);
#else
    mavlink_power_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.Power_UNIT_W = Power_UNIT_W;
    packet.Temp_UNIT_C = Temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_sec = RPM_UNIT_1_d_sec;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POWER_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
}

/**
 * @brief Encode a power_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param power_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_power_sensor_t* power_sensor)
{
    return mavlink_msg_power_sensor_pack(system_id, component_id, msg, power_sensor->Sensor_time_UNIT_100us, power_sensor->Sync_data_Unit_variable, power_sensor->Sensor_processing_time_UNIT_us, power_sensor->Recorded_time_UNIT_100us, power_sensor->Voltage_UNIT_V, power_sensor->Current_UNIT_A, power_sensor->Power_UNIT_W, power_sensor->Temp_UNIT_C, power_sensor->RPM_UNIT_1_d_sec, power_sensor->d1, power_sensor->d2, power_sensor->d3);
}

/**
 * @brief Encode a power_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param power_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_power_sensor_t* power_sensor)
{
    return mavlink_msg_power_sensor_pack_chan(system_id, component_id, chan, msg, power_sensor->Sensor_time_UNIT_100us, power_sensor->Sync_data_Unit_variable, power_sensor->Sensor_processing_time_UNIT_us, power_sensor->Recorded_time_UNIT_100us, power_sensor->Voltage_UNIT_V, power_sensor->Current_UNIT_A, power_sensor->Power_UNIT_W, power_sensor->Temp_UNIT_C, power_sensor->RPM_UNIT_1_d_sec, power_sensor->d1, power_sensor->d2, power_sensor->d3);
}

/**
 * @brief Send a power_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Voltage_UNIT_V  Voltage [V]
 * @param Current_UNIT_A  Current [A]
 * @param Power_UNIT_W  Power [W]
 * @param Temp_UNIT_C  Temperature [C]
 * @param RPM_UNIT_1_d_sec  Motor RPM [1/sec]
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_power_sensor_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Voltage_UNIT_V, float Current_UNIT_A, float Power_UNIT_W, float Temp_UNIT_C, uint16_t RPM_UNIT_1_d_sec, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, Power_UNIT_W);
    _mav_put_float(buf, 24, Temp_UNIT_C);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, RPM_UNIT_1_d_sec);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_SENSOR, buf, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
#else
    mavlink_power_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Voltage_UNIT_V = Voltage_UNIT_V;
    packet.Current_UNIT_A = Current_UNIT_A;
    packet.Power_UNIT_W = Power_UNIT_W;
    packet.Temp_UNIT_C = Temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_sec = RPM_UNIT_1_d_sec;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
#endif
}

/**
 * @brief Send a power_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_power_sensor_send_struct(mavlink_channel_t chan, const mavlink_power_sensor_t* power_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_power_sensor_send(chan, power_sensor->Sensor_time_UNIT_100us, power_sensor->Sync_data_Unit_variable, power_sensor->Sensor_processing_time_UNIT_us, power_sensor->Recorded_time_UNIT_100us, power_sensor->Voltage_UNIT_V, power_sensor->Current_UNIT_A, power_sensor->Power_UNIT_W, power_sensor->Temp_UNIT_C, power_sensor->RPM_UNIT_1_d_sec, power_sensor->d1, power_sensor->d2, power_sensor->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_SENSOR, (const char *)power_sensor, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_POWER_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_power_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Voltage_UNIT_V, float Current_UNIT_A, float Power_UNIT_W, float Temp_UNIT_C, uint16_t RPM_UNIT_1_d_sec, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Voltage_UNIT_V);
    _mav_put_float(buf, 16, Current_UNIT_A);
    _mav_put_float(buf, 20, Power_UNIT_W);
    _mav_put_float(buf, 24, Temp_UNIT_C);
    _mav_put_float(buf, 28, d1);
    _mav_put_float(buf, 32, d2);
    _mav_put_float(buf, 36, d3);
    _mav_put_int16_t(buf, 40, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 42, RPM_UNIT_1_d_sec);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_SENSOR, buf, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
#else
    mavlink_power_sensor_t *packet = (mavlink_power_sensor_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Voltage_UNIT_V = Voltage_UNIT_V;
    packet->Current_UNIT_A = Current_UNIT_A;
    packet->Power_UNIT_W = Power_UNIT_W;
    packet->Temp_UNIT_C = Temp_UNIT_C;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet->RPM_UNIT_1_d_sec = RPM_UNIT_1_d_sec;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_SENSOR, (const char *)packet, MAVLINK_MSG_ID_POWER_SENSOR_MIN_LEN, MAVLINK_MSG_ID_POWER_SENSOR_LEN, MAVLINK_MSG_ID_POWER_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE POWER_SENSOR UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from power_sensor message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_power_sensor_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from power_sensor message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_power_sensor_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from power_sensor message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_power_sensor_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from power_sensor message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_power_sensor_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field Voltage_UNIT_V from power_sensor message
 *
 * @return  Voltage [V]
 */
static inline float mavlink_msg_power_sensor_get_Voltage_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Current_UNIT_A from power_sensor message
 *
 * @return  Current [A]
 */
static inline float mavlink_msg_power_sensor_get_Current_UNIT_A(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Power_UNIT_W from power_sensor message
 *
 * @return  Power [W]
 */
static inline float mavlink_msg_power_sensor_get_Power_UNIT_W(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Temp_UNIT_C from power_sensor message
 *
 * @return  Temperature [C]
 */
static inline float mavlink_msg_power_sensor_get_Temp_UNIT_C(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field RPM_UNIT_1_d_sec from power_sensor message
 *
 * @return  Motor RPM [1/sec]
 */
static inline uint16_t mavlink_msg_power_sensor_get_RPM_UNIT_1_d_sec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field d1 from power_sensor message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_power_sensor_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field d2 from power_sensor message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_power_sensor_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field d3 from power_sensor message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_power_sensor_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a power_sensor message into a struct
 *
 * @param msg The message to decode
 * @param power_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_power_sensor_decode(const mavlink_message_t* msg, mavlink_power_sensor_t* power_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    power_sensor->Sensor_time_UNIT_100us = mavlink_msg_power_sensor_get_Sensor_time_UNIT_100us(msg);
    power_sensor->Sync_data_Unit_variable = mavlink_msg_power_sensor_get_Sync_data_Unit_variable(msg);
    power_sensor->Recorded_time_UNIT_100us = mavlink_msg_power_sensor_get_Recorded_time_UNIT_100us(msg);
    power_sensor->Voltage_UNIT_V = mavlink_msg_power_sensor_get_Voltage_UNIT_V(msg);
    power_sensor->Current_UNIT_A = mavlink_msg_power_sensor_get_Current_UNIT_A(msg);
    power_sensor->Power_UNIT_W = mavlink_msg_power_sensor_get_Power_UNIT_W(msg);
    power_sensor->Temp_UNIT_C = mavlink_msg_power_sensor_get_Temp_UNIT_C(msg);
    power_sensor->d1 = mavlink_msg_power_sensor_get_d1(msg);
    power_sensor->d2 = mavlink_msg_power_sensor_get_d2(msg);
    power_sensor->d3 = mavlink_msg_power_sensor_get_d3(msg);
    power_sensor->Sensor_processing_time_UNIT_us = mavlink_msg_power_sensor_get_Sensor_processing_time_UNIT_us(msg);
    power_sensor->RPM_UNIT_1_d_sec = mavlink_msg_power_sensor_get_RPM_UNIT_1_d_sec(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POWER_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_POWER_SENSOR_LEN;
        memset(power_sensor, 0, MAVLINK_MSG_ID_POWER_SENSOR_LEN);
    memcpy(power_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
