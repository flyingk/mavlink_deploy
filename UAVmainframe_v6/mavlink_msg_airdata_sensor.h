#pragma once
// MESSAGE AIRDATA_SENSOR PACKING

#define MAVLINK_MSG_ID_AIRDATA_SENSOR 222


typedef struct __mavlink_airdata_sensor_t {
 uint64_t sensor_time_us; /*<  Sensor time in usec*/
 uint64_t recorded_time_us; /*<  recording timestamp in usec*/
 uint32_t sensor_processing_time_us; /*<  Sensor processing time in usec*/
 float absP_UNIT_Pa; /*<  Absolute Pressure (Pa)*/
 float dP_1_UNIT_Pa; /*<  Differential Pressure 1(Pa)*/
 float dp_2_UNIT_Pa; /*<  Differential Pressure 2(Pa)*/
 float dp_3_UNIT_Pa; /*<  Differential Pressure 3(Pa)*/
 float Sensor_Temp_UNIT_C; /*<  Sensor Temperature (deg C)*/
 float Altitude_UNIT_m; /*<  Calculated Altitude (m)*/
 float Airspeed_UNIT_m_d_s; /*<  Calculated Airspeed (m/s)*/
 float Density_UNIT_kg_d_m3; /*<  Calculated Density (kg/m3)*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
} mavlink_airdata_sensor_t;

#define MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN 64
#define MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN 64
#define MAVLINK_MSG_ID_222_LEN 64
#define MAVLINK_MSG_ID_222_MIN_LEN 64

#define MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC 202
#define MAVLINK_MSG_ID_222_CRC 202



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AIRDATA_SENSOR { \
    222, \
    "AIRDATA_SENSOR", \
    14, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_airdata_sensor_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_airdata_sensor_t, sensor_processing_time_us) }, \
         { "recorded_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_airdata_sensor_t, recorded_time_us) }, \
         { "absP_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_airdata_sensor_t, absP_UNIT_Pa) }, \
         { "dP_1_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_airdata_sensor_t, dP_1_UNIT_Pa) }, \
         { "dp_2_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_airdata_sensor_t, dp_2_UNIT_Pa) }, \
         { "dp_3_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_airdata_sensor_t, dp_3_UNIT_Pa) }, \
         { "Sensor_Temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_airdata_sensor_t, Sensor_Temp_UNIT_C) }, \
         { "Altitude_UNIT_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_airdata_sensor_t, Altitude_UNIT_m) }, \
         { "Airspeed_UNIT_m_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_airdata_sensor_t, Airspeed_UNIT_m_d_s) }, \
         { "Density_UNIT_kg_d_m3", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_airdata_sensor_t, Density_UNIT_kg_d_m3) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_airdata_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_airdata_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_airdata_sensor_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AIRDATA_SENSOR { \
    "AIRDATA_SENSOR", \
    14, \
    {  { "sensor_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_airdata_sensor_t, sensor_time_us) }, \
         { "sensor_processing_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_airdata_sensor_t, sensor_processing_time_us) }, \
         { "recorded_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_airdata_sensor_t, recorded_time_us) }, \
         { "absP_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_airdata_sensor_t, absP_UNIT_Pa) }, \
         { "dP_1_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_airdata_sensor_t, dP_1_UNIT_Pa) }, \
         { "dp_2_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_airdata_sensor_t, dp_2_UNIT_Pa) }, \
         { "dp_3_UNIT_Pa", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_airdata_sensor_t, dp_3_UNIT_Pa) }, \
         { "Sensor_Temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_airdata_sensor_t, Sensor_Temp_UNIT_C) }, \
         { "Altitude_UNIT_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_airdata_sensor_t, Altitude_UNIT_m) }, \
         { "Airspeed_UNIT_m_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_airdata_sensor_t, Airspeed_UNIT_m_d_s) }, \
         { "Density_UNIT_kg_d_m3", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_airdata_sensor_t, Density_UNIT_kg_d_m3) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_airdata_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_airdata_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_airdata_sensor_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a airdata_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param absP_UNIT_Pa  Absolute Pressure (Pa)
 * @param dP_1_UNIT_Pa  Differential Pressure 1(Pa)
 * @param dp_2_UNIT_Pa  Differential Pressure 2(Pa)
 * @param dp_3_UNIT_Pa  Differential Pressure 3(Pa)
 * @param Sensor_Temp_UNIT_C  Sensor Temperature (deg C)
 * @param Altitude_UNIT_m  Calculated Altitude (m)
 * @param Airspeed_UNIT_m_d_s  Calculated Airspeed (m/s)
 * @param Density_UNIT_kg_d_m3  Calculated Density (kg/m3)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float absP_UNIT_Pa, float dP_1_UNIT_Pa, float dp_2_UNIT_Pa, float dp_3_UNIT_Pa, float Sensor_Temp_UNIT_C, float Altitude_UNIT_m, float Airspeed_UNIT_m_d_s, float Density_UNIT_kg_d_m3, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, absP_UNIT_Pa);
    _mav_put_float(buf, 24, dP_1_UNIT_Pa);
    _mav_put_float(buf, 28, dp_2_UNIT_Pa);
    _mav_put_float(buf, 32, dp_3_UNIT_Pa);
    _mav_put_float(buf, 36, Sensor_Temp_UNIT_C);
    _mav_put_float(buf, 40, Altitude_UNIT_m);
    _mav_put_float(buf, 44, Airspeed_UNIT_m_d_s);
    _mav_put_float(buf, 48, Density_UNIT_kg_d_m3);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN);
#else
    mavlink_airdata_sensor_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.absP_UNIT_Pa = absP_UNIT_Pa;
    packet.dP_1_UNIT_Pa = dP_1_UNIT_Pa;
    packet.dp_2_UNIT_Pa = dp_2_UNIT_Pa;
    packet.dp_3_UNIT_Pa = dp_3_UNIT_Pa;
    packet.Sensor_Temp_UNIT_C = Sensor_Temp_UNIT_C;
    packet.Altitude_UNIT_m = Altitude_UNIT_m;
    packet.Airspeed_UNIT_m_d_s = Airspeed_UNIT_m_d_s;
    packet.Density_UNIT_kg_d_m3 = Density_UNIT_kg_d_m3;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AIRDATA_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
}

/**
 * @brief Pack a airdata_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param absP_UNIT_Pa  Absolute Pressure (Pa)
 * @param dP_1_UNIT_Pa  Differential Pressure 1(Pa)
 * @param dp_2_UNIT_Pa  Differential Pressure 2(Pa)
 * @param dp_3_UNIT_Pa  Differential Pressure 3(Pa)
 * @param Sensor_Temp_UNIT_C  Sensor Temperature (deg C)
 * @param Altitude_UNIT_m  Calculated Altitude (m)
 * @param Airspeed_UNIT_m_d_s  Calculated Airspeed (m/s)
 * @param Density_UNIT_kg_d_m3  Calculated Density (kg/m3)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t sensor_time_us,uint32_t sensor_processing_time_us,uint64_t recorded_time_us,float absP_UNIT_Pa,float dP_1_UNIT_Pa,float dp_2_UNIT_Pa,float dp_3_UNIT_Pa,float Sensor_Temp_UNIT_C,float Altitude_UNIT_m,float Airspeed_UNIT_m_d_s,float Density_UNIT_kg_d_m3,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, absP_UNIT_Pa);
    _mav_put_float(buf, 24, dP_1_UNIT_Pa);
    _mav_put_float(buf, 28, dp_2_UNIT_Pa);
    _mav_put_float(buf, 32, dp_3_UNIT_Pa);
    _mav_put_float(buf, 36, Sensor_Temp_UNIT_C);
    _mav_put_float(buf, 40, Altitude_UNIT_m);
    _mav_put_float(buf, 44, Airspeed_UNIT_m_d_s);
    _mav_put_float(buf, 48, Density_UNIT_kg_d_m3);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN);
#else
    mavlink_airdata_sensor_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.absP_UNIT_Pa = absP_UNIT_Pa;
    packet.dP_1_UNIT_Pa = dP_1_UNIT_Pa;
    packet.dp_2_UNIT_Pa = dp_2_UNIT_Pa;
    packet.dp_3_UNIT_Pa = dp_3_UNIT_Pa;
    packet.Sensor_Temp_UNIT_C = Sensor_Temp_UNIT_C;
    packet.Altitude_UNIT_m = Altitude_UNIT_m;
    packet.Airspeed_UNIT_m_d_s = Airspeed_UNIT_m_d_s;
    packet.Density_UNIT_kg_d_m3 = Density_UNIT_kg_d_m3;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AIRDATA_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
}

/**
 * @brief Encode a airdata_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param airdata_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_airdata_sensor_t* airdata_sensor)
{
    return mavlink_msg_airdata_sensor_pack(system_id, component_id, msg, airdata_sensor->sensor_time_us, airdata_sensor->sensor_processing_time_us, airdata_sensor->recorded_time_us, airdata_sensor->absP_UNIT_Pa, airdata_sensor->dP_1_UNIT_Pa, airdata_sensor->dp_2_UNIT_Pa, airdata_sensor->dp_3_UNIT_Pa, airdata_sensor->Sensor_Temp_UNIT_C, airdata_sensor->Altitude_UNIT_m, airdata_sensor->Airspeed_UNIT_m_d_s, airdata_sensor->Density_UNIT_kg_d_m3, airdata_sensor->d1, airdata_sensor->d2, airdata_sensor->d3);
}

/**
 * @brief Encode a airdata_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airdata_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_airdata_sensor_t* airdata_sensor)
{
    return mavlink_msg_airdata_sensor_pack_chan(system_id, component_id, chan, msg, airdata_sensor->sensor_time_us, airdata_sensor->sensor_processing_time_us, airdata_sensor->recorded_time_us, airdata_sensor->absP_UNIT_Pa, airdata_sensor->dP_1_UNIT_Pa, airdata_sensor->dp_2_UNIT_Pa, airdata_sensor->dp_3_UNIT_Pa, airdata_sensor->Sensor_Temp_UNIT_C, airdata_sensor->Altitude_UNIT_m, airdata_sensor->Airspeed_UNIT_m_d_s, airdata_sensor->Density_UNIT_kg_d_m3, airdata_sensor->d1, airdata_sensor->d2, airdata_sensor->d3);
}

/**
 * @brief Send a airdata_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param sensor_time_us  Sensor time in usec
 * @param sensor_processing_time_us  Sensor processing time in usec
 * @param recorded_time_us  recording timestamp in usec
 * @param absP_UNIT_Pa  Absolute Pressure (Pa)
 * @param dP_1_UNIT_Pa  Differential Pressure 1(Pa)
 * @param dp_2_UNIT_Pa  Differential Pressure 2(Pa)
 * @param dp_3_UNIT_Pa  Differential Pressure 3(Pa)
 * @param Sensor_Temp_UNIT_C  Sensor Temperature (deg C)
 * @param Altitude_UNIT_m  Calculated Altitude (m)
 * @param Airspeed_UNIT_m_d_s  Calculated Airspeed (m/s)
 * @param Density_UNIT_kg_d_m3  Calculated Density (kg/m3)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_airdata_sensor_send(mavlink_channel_t chan, uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float absP_UNIT_Pa, float dP_1_UNIT_Pa, float dp_2_UNIT_Pa, float dp_3_UNIT_Pa, float Sensor_Temp_UNIT_C, float Altitude_UNIT_m, float Airspeed_UNIT_m_d_s, float Density_UNIT_kg_d_m3, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN];
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, absP_UNIT_Pa);
    _mav_put_float(buf, 24, dP_1_UNIT_Pa);
    _mav_put_float(buf, 28, dp_2_UNIT_Pa);
    _mav_put_float(buf, 32, dp_3_UNIT_Pa);
    _mav_put_float(buf, 36, Sensor_Temp_UNIT_C);
    _mav_put_float(buf, 40, Altitude_UNIT_m);
    _mav_put_float(buf, 44, Airspeed_UNIT_m_d_s);
    _mav_put_float(buf, 48, Density_UNIT_kg_d_m3);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_SENSOR, buf, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
#else
    mavlink_airdata_sensor_t packet;
    packet.sensor_time_us = sensor_time_us;
    packet.recorded_time_us = recorded_time_us;
    packet.sensor_processing_time_us = sensor_processing_time_us;
    packet.absP_UNIT_Pa = absP_UNIT_Pa;
    packet.dP_1_UNIT_Pa = dP_1_UNIT_Pa;
    packet.dp_2_UNIT_Pa = dp_2_UNIT_Pa;
    packet.dp_3_UNIT_Pa = dp_3_UNIT_Pa;
    packet.Sensor_Temp_UNIT_C = Sensor_Temp_UNIT_C;
    packet.Altitude_UNIT_m = Altitude_UNIT_m;
    packet.Airspeed_UNIT_m_d_s = Airspeed_UNIT_m_d_s;
    packet.Density_UNIT_kg_d_m3 = Density_UNIT_kg_d_m3;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
#endif
}

/**
 * @brief Send a airdata_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_airdata_sensor_send_struct(mavlink_channel_t chan, const mavlink_airdata_sensor_t* airdata_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_airdata_sensor_send(chan, airdata_sensor->sensor_time_us, airdata_sensor->sensor_processing_time_us, airdata_sensor->recorded_time_us, airdata_sensor->absP_UNIT_Pa, airdata_sensor->dP_1_UNIT_Pa, airdata_sensor->dp_2_UNIT_Pa, airdata_sensor->dp_3_UNIT_Pa, airdata_sensor->Sensor_Temp_UNIT_C, airdata_sensor->Altitude_UNIT_m, airdata_sensor->Airspeed_UNIT_m_d_s, airdata_sensor->Density_UNIT_kg_d_m3, airdata_sensor->d1, airdata_sensor->d2, airdata_sensor->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_SENSOR, (const char *)airdata_sensor, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_airdata_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sensor_time_us, uint32_t sensor_processing_time_us, uint64_t recorded_time_us, float absP_UNIT_Pa, float dP_1_UNIT_Pa, float dp_2_UNIT_Pa, float dp_3_UNIT_Pa, float Sensor_Temp_UNIT_C, float Altitude_UNIT_m, float Airspeed_UNIT_m_d_s, float Density_UNIT_kg_d_m3, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, sensor_time_us);
    _mav_put_uint64_t(buf, 8, recorded_time_us);
    _mav_put_uint32_t(buf, 16, sensor_processing_time_us);
    _mav_put_float(buf, 20, absP_UNIT_Pa);
    _mav_put_float(buf, 24, dP_1_UNIT_Pa);
    _mav_put_float(buf, 28, dp_2_UNIT_Pa);
    _mav_put_float(buf, 32, dp_3_UNIT_Pa);
    _mav_put_float(buf, 36, Sensor_Temp_UNIT_C);
    _mav_put_float(buf, 40, Altitude_UNIT_m);
    _mav_put_float(buf, 44, Airspeed_UNIT_m_d_s);
    _mav_put_float(buf, 48, Density_UNIT_kg_d_m3);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_SENSOR, buf, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
#else
    mavlink_airdata_sensor_t *packet = (mavlink_airdata_sensor_t *)msgbuf;
    packet->sensor_time_us = sensor_time_us;
    packet->recorded_time_us = recorded_time_us;
    packet->sensor_processing_time_us = sensor_processing_time_us;
    packet->absP_UNIT_Pa = absP_UNIT_Pa;
    packet->dP_1_UNIT_Pa = dP_1_UNIT_Pa;
    packet->dp_2_UNIT_Pa = dp_2_UNIT_Pa;
    packet->dp_3_UNIT_Pa = dp_3_UNIT_Pa;
    packet->Sensor_Temp_UNIT_C = Sensor_Temp_UNIT_C;
    packet->Altitude_UNIT_m = Altitude_UNIT_m;
    packet->Airspeed_UNIT_m_d_s = Airspeed_UNIT_m_d_s;
    packet->Density_UNIT_kg_d_m3 = Density_UNIT_kg_d_m3;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_SENSOR, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_SENSOR_MIN_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN, MAVLINK_MSG_ID_AIRDATA_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE AIRDATA_SENSOR UNPACKING


/**
 * @brief Get field sensor_time_us from airdata_sensor message
 *
 * @return  Sensor time in usec
 */
static inline uint64_t mavlink_msg_airdata_sensor_get_sensor_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sensor_processing_time_us from airdata_sensor message
 *
 * @return  Sensor processing time in usec
 */
static inline uint32_t mavlink_msg_airdata_sensor_get_sensor_processing_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field recorded_time_us from airdata_sensor message
 *
 * @return  recording timestamp in usec
 */
static inline uint64_t mavlink_msg_airdata_sensor_get_recorded_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field absP_UNIT_Pa from airdata_sensor message
 *
 * @return  Absolute Pressure (Pa)
 */
static inline float mavlink_msg_airdata_sensor_get_absP_UNIT_Pa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field dP_1_UNIT_Pa from airdata_sensor message
 *
 * @return  Differential Pressure 1(Pa)
 */
static inline float mavlink_msg_airdata_sensor_get_dP_1_UNIT_Pa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field dp_2_UNIT_Pa from airdata_sensor message
 *
 * @return  Differential Pressure 2(Pa)
 */
static inline float mavlink_msg_airdata_sensor_get_dp_2_UNIT_Pa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field dp_3_UNIT_Pa from airdata_sensor message
 *
 * @return  Differential Pressure 3(Pa)
 */
static inline float mavlink_msg_airdata_sensor_get_dp_3_UNIT_Pa(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Sensor_Temp_UNIT_C from airdata_sensor message
 *
 * @return  Sensor Temperature (deg C)
 */
static inline float mavlink_msg_airdata_sensor_get_Sensor_Temp_UNIT_C(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field Altitude_UNIT_m from airdata_sensor message
 *
 * @return  Calculated Altitude (m)
 */
static inline float mavlink_msg_airdata_sensor_get_Altitude_UNIT_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Airspeed_UNIT_m_d_s from airdata_sensor message
 *
 * @return  Calculated Airspeed (m/s)
 */
static inline float mavlink_msg_airdata_sensor_get_Airspeed_UNIT_m_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Density_UNIT_kg_d_m3 from airdata_sensor message
 *
 * @return  Calculated Density (kg/m3)
 */
static inline float mavlink_msg_airdata_sensor_get_Density_UNIT_kg_d_m3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field d1 from airdata_sensor message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_airdata_sensor_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field d2 from airdata_sensor message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_airdata_sensor_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field d3 from airdata_sensor message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_airdata_sensor_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Decode a airdata_sensor message into a struct
 *
 * @param msg The message to decode
 * @param airdata_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_airdata_sensor_decode(const mavlink_message_t* msg, mavlink_airdata_sensor_t* airdata_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    airdata_sensor->sensor_time_us = mavlink_msg_airdata_sensor_get_sensor_time_us(msg);
    airdata_sensor->recorded_time_us = mavlink_msg_airdata_sensor_get_recorded_time_us(msg);
    airdata_sensor->sensor_processing_time_us = mavlink_msg_airdata_sensor_get_sensor_processing_time_us(msg);
    airdata_sensor->absP_UNIT_Pa = mavlink_msg_airdata_sensor_get_absP_UNIT_Pa(msg);
    airdata_sensor->dP_1_UNIT_Pa = mavlink_msg_airdata_sensor_get_dP_1_UNIT_Pa(msg);
    airdata_sensor->dp_2_UNIT_Pa = mavlink_msg_airdata_sensor_get_dp_2_UNIT_Pa(msg);
    airdata_sensor->dp_3_UNIT_Pa = mavlink_msg_airdata_sensor_get_dp_3_UNIT_Pa(msg);
    airdata_sensor->Sensor_Temp_UNIT_C = mavlink_msg_airdata_sensor_get_Sensor_Temp_UNIT_C(msg);
    airdata_sensor->Altitude_UNIT_m = mavlink_msg_airdata_sensor_get_Altitude_UNIT_m(msg);
    airdata_sensor->Airspeed_UNIT_m_d_s = mavlink_msg_airdata_sensor_get_Airspeed_UNIT_m_d_s(msg);
    airdata_sensor->Density_UNIT_kg_d_m3 = mavlink_msg_airdata_sensor_get_Density_UNIT_kg_d_m3(msg);
    airdata_sensor->d1 = mavlink_msg_airdata_sensor_get_d1(msg);
    airdata_sensor->d2 = mavlink_msg_airdata_sensor_get_d2(msg);
    airdata_sensor->d3 = mavlink_msg_airdata_sensor_get_d3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN;
        memset(airdata_sensor, 0, MAVLINK_MSG_ID_AIRDATA_SENSOR_LEN);
    memcpy(airdata_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
