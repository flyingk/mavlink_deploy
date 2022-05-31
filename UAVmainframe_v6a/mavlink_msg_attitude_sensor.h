#pragma once
// MESSAGE ATTITUDE_SENSOR PACKING

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR 221


typedef struct __mavlink_attitude_sensor_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float Ax_UNIT_g; /*<  X acceleration (g)*/
 float Ay_UNIT_g; /*<  Y acceleration (g)*/
 float Az_UNIT_g; /*<  Z acceleration (g)*/
 float Gx_UNIT_deg_d_sec; /*<  Angular rate X axis (deg/sec)*/
 float Gy_UNIT_deg_d_sec; /*<  Angular rate Y axis (deg/sec)*/
 float Gz_UNIT_deg_d_sec; /*<  Angular rate Z axis (deg/sec)*/
 float Mx_UNIT_uT; /*<  X Magnetic field (uTesla)*/
 float My_UNIT_uT; /*<  Y Magnetic field (uTesla)*/
 float Mz_UNIT_uT; /*<  Z Magnetic field (uTesla)*/
 float Sensor_temp_UNIT_C; /*<  Sensor temp (deg C)*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
} mavlink_attitude_sensor_t;

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN 66
#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN 66
#define MAVLINK_MSG_ID_221_LEN 66
#define MAVLINK_MSG_ID_221_MIN_LEN 66

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC 167
#define MAVLINK_MSG_ID_221_CRC 167



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ATTITUDE_SENSOR { \
    221, \
    "ATTITUDE_SENSOR", \
    17, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_attitude_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_attitude_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_attitude_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Ax_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_sensor_t, Ax_UNIT_g) }, \
         { "Ay_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_sensor_t, Ay_UNIT_g) }, \
         { "Az_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_sensor_t, Az_UNIT_g) }, \
         { "Gx_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_sensor_t, Gx_UNIT_deg_d_sec) }, \
         { "Gy_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_sensor_t, Gy_UNIT_deg_d_sec) }, \
         { "Gz_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_attitude_sensor_t, Gz_UNIT_deg_d_sec) }, \
         { "Mx_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_attitude_sensor_t, Mx_UNIT_uT) }, \
         { "My_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_attitude_sensor_t, My_UNIT_uT) }, \
         { "Mz_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_attitude_sensor_t, Mz_UNIT_uT) }, \
         { "Sensor_temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_attitude_sensor_t, Sensor_temp_UNIT_C) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_attitude_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_attitude_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_attitude_sensor_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ATTITUDE_SENSOR { \
    "ATTITUDE_SENSOR", \
    17, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_sensor_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_attitude_sensor_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_attitude_sensor_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_attitude_sensor_t, Recorded_time_UNIT_100us) }, \
         { "Ax_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_sensor_t, Ax_UNIT_g) }, \
         { "Ay_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_sensor_t, Ay_UNIT_g) }, \
         { "Az_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_sensor_t, Az_UNIT_g) }, \
         { "Gx_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_sensor_t, Gx_UNIT_deg_d_sec) }, \
         { "Gy_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_sensor_t, Gy_UNIT_deg_d_sec) }, \
         { "Gz_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_attitude_sensor_t, Gz_UNIT_deg_d_sec) }, \
         { "Mx_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_attitude_sensor_t, Mx_UNIT_uT) }, \
         { "My_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_attitude_sensor_t, My_UNIT_uT) }, \
         { "Mz_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_attitude_sensor_t, Mz_UNIT_uT) }, \
         { "Sensor_temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_attitude_sensor_t, Sensor_temp_UNIT_C) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_attitude_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_attitude_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_attitude_sensor_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a attitude_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Ax_UNIT_g  X acceleration (g)
 * @param Ay_UNIT_g  Y acceleration (g)
 * @param Az_UNIT_g  Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec  Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec  Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec  Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_uT  X Magnetic field (uTesla)
 * @param My_UNIT_uT  Y Magnetic field (uTesla)
 * @param Mz_UNIT_uT  Z Magnetic field (uTesla)
 * @param Sensor_temp_UNIT_C  Sensor temp (deg C)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_uT, float My_UNIT_uT, float Mz_UNIT_uT, float Sensor_temp_UNIT_C, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Ax_UNIT_g);
    _mav_put_float(buf, 16, Ay_UNIT_g);
    _mav_put_float(buf, 20, Az_UNIT_g);
    _mav_put_float(buf, 24, Gx_UNIT_deg_d_sec);
    _mav_put_float(buf, 28, Gy_UNIT_deg_d_sec);
    _mav_put_float(buf, 32, Gz_UNIT_deg_d_sec);
    _mav_put_float(buf, 36, Mx_UNIT_uT);
    _mav_put_float(buf, 40, My_UNIT_uT);
    _mav_put_float(buf, 44, Mz_UNIT_uT);
    _mav_put_float(buf, 48, Sensor_temp_UNIT_C);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);
    _mav_put_int16_t(buf, 64, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
    mavlink_attitude_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Ax_UNIT_g = Ax_UNIT_g;
    packet.Ay_UNIT_g = Ay_UNIT_g;
    packet.Az_UNIT_g = Az_UNIT_g;
    packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
    packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
    packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
    packet.Mx_UNIT_uT = Mx_UNIT_uT;
    packet.My_UNIT_uT = My_UNIT_uT;
    packet.Mz_UNIT_uT = Mz_UNIT_uT;
    packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE_SENSOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
}

/**
 * @brief Pack a attitude_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Ax_UNIT_g  X acceleration (g)
 * @param Ay_UNIT_g  Y acceleration (g)
 * @param Az_UNIT_g  Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec  Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec  Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec  Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_uT  X Magnetic field (uTesla)
 * @param My_UNIT_uT  Y Magnetic field (uTesla)
 * @param Mz_UNIT_uT  Z Magnetic field (uTesla)
 * @param Sensor_temp_UNIT_C  Sensor temp (deg C)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,float Ax_UNIT_g,float Ay_UNIT_g,float Az_UNIT_g,float Gx_UNIT_deg_d_sec,float Gy_UNIT_deg_d_sec,float Gz_UNIT_deg_d_sec,float Mx_UNIT_uT,float My_UNIT_uT,float Mz_UNIT_uT,float Sensor_temp_UNIT_C,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Ax_UNIT_g);
    _mav_put_float(buf, 16, Ay_UNIT_g);
    _mav_put_float(buf, 20, Az_UNIT_g);
    _mav_put_float(buf, 24, Gx_UNIT_deg_d_sec);
    _mav_put_float(buf, 28, Gy_UNIT_deg_d_sec);
    _mav_put_float(buf, 32, Gz_UNIT_deg_d_sec);
    _mav_put_float(buf, 36, Mx_UNIT_uT);
    _mav_put_float(buf, 40, My_UNIT_uT);
    _mav_put_float(buf, 44, Mz_UNIT_uT);
    _mav_put_float(buf, 48, Sensor_temp_UNIT_C);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);
    _mav_put_int16_t(buf, 64, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
    mavlink_attitude_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Ax_UNIT_g = Ax_UNIT_g;
    packet.Ay_UNIT_g = Ay_UNIT_g;
    packet.Az_UNIT_g = Az_UNIT_g;
    packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
    packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
    packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
    packet.Mx_UNIT_uT = Mx_UNIT_uT;
    packet.My_UNIT_uT = My_UNIT_uT;
    packet.Mz_UNIT_uT = Mz_UNIT_uT;
    packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE_SENSOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
}

/**
 * @brief Encode a attitude_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_sensor_t* attitude_sensor)
{
    return mavlink_msg_attitude_sensor_pack(system_id, component_id, msg, attitude_sensor->Sensor_time_UNIT_100us, attitude_sensor->Sync_data_Unit_variable, attitude_sensor->Sensor_processing_time_UNIT_us, attitude_sensor->Recorded_time_UNIT_100us, attitude_sensor->Ax_UNIT_g, attitude_sensor->Ay_UNIT_g, attitude_sensor->Az_UNIT_g, attitude_sensor->Gx_UNIT_deg_d_sec, attitude_sensor->Gy_UNIT_deg_d_sec, attitude_sensor->Gz_UNIT_deg_d_sec, attitude_sensor->Mx_UNIT_uT, attitude_sensor->My_UNIT_uT, attitude_sensor->Mz_UNIT_uT, attitude_sensor->Sensor_temp_UNIT_C, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3);
}

/**
 * @brief Encode a attitude_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param attitude_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_attitude_sensor_t* attitude_sensor)
{
    return mavlink_msg_attitude_sensor_pack_chan(system_id, component_id, chan, msg, attitude_sensor->Sensor_time_UNIT_100us, attitude_sensor->Sync_data_Unit_variable, attitude_sensor->Sensor_processing_time_UNIT_us, attitude_sensor->Recorded_time_UNIT_100us, attitude_sensor->Ax_UNIT_g, attitude_sensor->Ay_UNIT_g, attitude_sensor->Az_UNIT_g, attitude_sensor->Gx_UNIT_deg_d_sec, attitude_sensor->Gy_UNIT_deg_d_sec, attitude_sensor->Gz_UNIT_deg_d_sec, attitude_sensor->Mx_UNIT_uT, attitude_sensor->My_UNIT_uT, attitude_sensor->Mz_UNIT_uT, attitude_sensor->Sensor_temp_UNIT_C, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3);
}

/**
 * @brief Send a attitude_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Ax_UNIT_g  X acceleration (g)
 * @param Ay_UNIT_g  Y acceleration (g)
 * @param Az_UNIT_g  Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec  Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec  Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec  Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_uT  X Magnetic field (uTesla)
 * @param My_UNIT_uT  Y Magnetic field (uTesla)
 * @param Mz_UNIT_uT  Z Magnetic field (uTesla)
 * @param Sensor_temp_UNIT_C  Sensor temp (deg C)
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_sensor_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_uT, float My_UNIT_uT, float Mz_UNIT_uT, float Sensor_temp_UNIT_C, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Ax_UNIT_g);
    _mav_put_float(buf, 16, Ay_UNIT_g);
    _mav_put_float(buf, 20, Az_UNIT_g);
    _mav_put_float(buf, 24, Gx_UNIT_deg_d_sec);
    _mav_put_float(buf, 28, Gy_UNIT_deg_d_sec);
    _mav_put_float(buf, 32, Gz_UNIT_deg_d_sec);
    _mav_put_float(buf, 36, Mx_UNIT_uT);
    _mav_put_float(buf, 40, My_UNIT_uT);
    _mav_put_float(buf, 44, Mz_UNIT_uT);
    _mav_put_float(buf, 48, Sensor_temp_UNIT_C);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);
    _mav_put_int16_t(buf, 64, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    mavlink_attitude_sensor_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Ax_UNIT_g = Ax_UNIT_g;
    packet.Ay_UNIT_g = Ay_UNIT_g;
    packet.Az_UNIT_g = Az_UNIT_g;
    packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
    packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
    packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
    packet.Mx_UNIT_uT = Mx_UNIT_uT;
    packet.My_UNIT_uT = My_UNIT_uT;
    packet.Mz_UNIT_uT = Mz_UNIT_uT;
    packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#endif
}

/**
 * @brief Send a attitude_sensor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_attitude_sensor_send_struct(mavlink_channel_t chan, const mavlink_attitude_sensor_t* attitude_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_attitude_sensor_send(chan, attitude_sensor->Sensor_time_UNIT_100us, attitude_sensor->Sync_data_Unit_variable, attitude_sensor->Sensor_processing_time_UNIT_us, attitude_sensor->Recorded_time_UNIT_100us, attitude_sensor->Ax_UNIT_g, attitude_sensor->Ay_UNIT_g, attitude_sensor->Az_UNIT_g, attitude_sensor->Gx_UNIT_deg_d_sec, attitude_sensor->Gy_UNIT_deg_d_sec, attitude_sensor->Gz_UNIT_deg_d_sec, attitude_sensor->Mx_UNIT_uT, attitude_sensor->My_UNIT_uT, attitude_sensor->Mz_UNIT_uT, attitude_sensor->Sensor_temp_UNIT_C, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)attitude_sensor, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_attitude_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_uT, float My_UNIT_uT, float Mz_UNIT_uT, float Sensor_temp_UNIT_C, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Ax_UNIT_g);
    _mav_put_float(buf, 16, Ay_UNIT_g);
    _mav_put_float(buf, 20, Az_UNIT_g);
    _mav_put_float(buf, 24, Gx_UNIT_deg_d_sec);
    _mav_put_float(buf, 28, Gy_UNIT_deg_d_sec);
    _mav_put_float(buf, 32, Gz_UNIT_deg_d_sec);
    _mav_put_float(buf, 36, Mx_UNIT_uT);
    _mav_put_float(buf, 40, My_UNIT_uT);
    _mav_put_float(buf, 44, Mz_UNIT_uT);
    _mav_put_float(buf, 48, Sensor_temp_UNIT_C);
    _mav_put_float(buf, 52, d1);
    _mav_put_float(buf, 56, d2);
    _mav_put_float(buf, 60, d3);
    _mav_put_int16_t(buf, 64, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    mavlink_attitude_sensor_t *packet = (mavlink_attitude_sensor_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Ax_UNIT_g = Ax_UNIT_g;
    packet->Ay_UNIT_g = Ay_UNIT_g;
    packet->Az_UNIT_g = Az_UNIT_g;
    packet->Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
    packet->Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
    packet->Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
    packet->Mx_UNIT_uT = Mx_UNIT_uT;
    packet->My_UNIT_uT = My_UNIT_uT;
    packet->Mz_UNIT_uT = Mz_UNIT_uT;
    packet->Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#endif
}
#endif

#endif

// MESSAGE ATTITUDE_SENSOR UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from attitude_sensor message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_attitude_sensor_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from attitude_sensor message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_attitude_sensor_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from attitude_sensor message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_attitude_sensor_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from attitude_sensor message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_attitude_sensor_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field Ax_UNIT_g from attitude_sensor message
 *
 * @return  X acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ax_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Ay_UNIT_g from attitude_sensor message
 *
 * @return  Y acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ay_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Az_UNIT_g from attitude_sensor message
 *
 * @return  Z acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Az_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Gx_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return  Angular rate X axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gx_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Gy_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return  Angular rate Y axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gy_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field Gz_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return  Angular rate Z axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gz_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Mx_UNIT_uT from attitude_sensor message
 *
 * @return  X Magnetic field (uTesla)
 */
static inline float mavlink_msg_attitude_sensor_get_Mx_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field My_UNIT_uT from attitude_sensor message
 *
 * @return  Y Magnetic field (uTesla)
 */
static inline float mavlink_msg_attitude_sensor_get_My_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Mz_UNIT_uT from attitude_sensor message
 *
 * @return  Z Magnetic field (uTesla)
 */
static inline float mavlink_msg_attitude_sensor_get_Mz_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Sensor_temp_UNIT_C from attitude_sensor message
 *
 * @return  Sensor temp (deg C)
 */
static inline float mavlink_msg_attitude_sensor_get_Sensor_temp_UNIT_C(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field d1 from attitude_sensor message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_attitude_sensor_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field d2 from attitude_sensor message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_attitude_sensor_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field d3 from attitude_sensor message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_attitude_sensor_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Decode a attitude_sensor message into a struct
 *
 * @param msg The message to decode
 * @param attitude_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_sensor_decode(const mavlink_message_t* msg, mavlink_attitude_sensor_t* attitude_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    attitude_sensor->Sensor_time_UNIT_100us = mavlink_msg_attitude_sensor_get_Sensor_time_UNIT_100us(msg);
    attitude_sensor->Sync_data_Unit_variable = mavlink_msg_attitude_sensor_get_Sync_data_Unit_variable(msg);
    attitude_sensor->Recorded_time_UNIT_100us = mavlink_msg_attitude_sensor_get_Recorded_time_UNIT_100us(msg);
    attitude_sensor->Ax_UNIT_g = mavlink_msg_attitude_sensor_get_Ax_UNIT_g(msg);
    attitude_sensor->Ay_UNIT_g = mavlink_msg_attitude_sensor_get_Ay_UNIT_g(msg);
    attitude_sensor->Az_UNIT_g = mavlink_msg_attitude_sensor_get_Az_UNIT_g(msg);
    attitude_sensor->Gx_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gx_UNIT_deg_d_sec(msg);
    attitude_sensor->Gy_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gy_UNIT_deg_d_sec(msg);
    attitude_sensor->Gz_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gz_UNIT_deg_d_sec(msg);
    attitude_sensor->Mx_UNIT_uT = mavlink_msg_attitude_sensor_get_Mx_UNIT_uT(msg);
    attitude_sensor->My_UNIT_uT = mavlink_msg_attitude_sensor_get_My_UNIT_uT(msg);
    attitude_sensor->Mz_UNIT_uT = mavlink_msg_attitude_sensor_get_Mz_UNIT_uT(msg);
    attitude_sensor->Sensor_temp_UNIT_C = mavlink_msg_attitude_sensor_get_Sensor_temp_UNIT_C(msg);
    attitude_sensor->d1 = mavlink_msg_attitude_sensor_get_d1(msg);
    attitude_sensor->d2 = mavlink_msg_attitude_sensor_get_d2(msg);
    attitude_sensor->d3 = mavlink_msg_attitude_sensor_get_d3(msg);
    attitude_sensor->Sensor_processing_time_UNIT_us = mavlink_msg_attitude_sensor_get_Sensor_processing_time_UNIT_us(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN? msg->len : MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN;
        memset(attitude_sensor, 0, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
    memcpy(attitude_sensor, _MAV_PAYLOAD(msg), len);
#endif
}
