// MESSAGE ATTITUDE_SENSOR PACKING

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR 222

typedef struct __mavlink_attitude_sensor_t
{
 uint64_t sensor_time_boot_us; /*< Sensor time since boot in usec*/
 uint64_t recorded_time_us; /*< recorded at time in usec*/
 float Ax_UNIT_g; /*< X acceleration (g)*/
 float Ay_UNIT_g; /*< Y acceleration (g)*/
 float Az_UNIT_g; /*< Z acceleration (g)*/
 float Gx_UNIT_deg_d_sec; /*< Angular rate X axis (deg/sec)*/
 float Gy_UNIT_deg_d_sec; /*< Angular rate Y axis (deg/sec)*/
 float Gz_UNIT_deg_d_sec; /*< Angular rate Z axis (deg/sec)*/
 float Mx_UNIT_Gauss; /*< X Magnetic field (Gauss)*/
 float My_UNIT_Gauss; /*< Y Magnetic field (Gauss)*/
 float Mz_UNIT_Gauss; /*< Z Magnetic field (Gauss)*/
 float Sensor_temp_UNIT_C; /*< Sensor temp (deg C)*/
 float d1; /*< tbd 1*/
 float d2; /*< tbd 2*/
 float d3; /*< tbd 3*/
 float d4; /*< tbd 4*/
 float d5; /*< tbd 5*/
 float d6; /*< tbd 6*/
} mavlink_attitude_sensor_t;

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN 80
#define MAVLINK_MSG_ID_222_LEN 80

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC 24
#define MAVLINK_MSG_ID_222_CRC 24



#define MAVLINK_MESSAGE_INFO_ATTITUDE_SENSOR { \
	"ATTITUDE_SENSOR", \
	18, \
	{  { "sensor_time_boot_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_attitude_sensor_t, sensor_time_boot_us) }, \
         { "recorded_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_attitude_sensor_t, recorded_time_us) }, \
         { "Ax_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_sensor_t, Ax_UNIT_g) }, \
         { "Ay_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_sensor_t, Ay_UNIT_g) }, \
         { "Az_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_sensor_t, Az_UNIT_g) }, \
         { "Gx_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_sensor_t, Gx_UNIT_deg_d_sec) }, \
         { "Gy_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_attitude_sensor_t, Gy_UNIT_deg_d_sec) }, \
         { "Gz_UNIT_deg_d_sec", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_attitude_sensor_t, Gz_UNIT_deg_d_sec) }, \
         { "Mx_UNIT_Gauss", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_attitude_sensor_t, Mx_UNIT_Gauss) }, \
         { "My_UNIT_Gauss", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_attitude_sensor_t, My_UNIT_Gauss) }, \
         { "Mz_UNIT_Gauss", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_attitude_sensor_t, Mz_UNIT_Gauss) }, \
         { "Sensor_temp_UNIT_C", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_attitude_sensor_t, Sensor_temp_UNIT_C) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_attitude_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_attitude_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_attitude_sensor_t, d3) }, \
         { "d4", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_attitude_sensor_t, d4) }, \
         { "d5", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_attitude_sensor_t, d5) }, \
         { "d6", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_attitude_sensor_t, d6) }, \
         } \
}


/**
 * @brief Pack a attitude_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sensor_time_boot_us Sensor time since boot in usec
 * @param recorded_time_us recorded at time in usec
 * @param Ax_UNIT_g X acceleration (g)
 * @param Ay_UNIT_g Y acceleration (g)
 * @param Az_UNIT_g Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_Gauss X Magnetic field (Gauss)
 * @param My_UNIT_Gauss Y Magnetic field (Gauss)
 * @param Mz_UNIT_Gauss Z Magnetic field (Gauss)
 * @param Sensor_temp_UNIT_C Sensor temp (deg C)
 * @param d1 tbd 1
 * @param d2 tbd 2
 * @param d3 tbd 3
 * @param d4 tbd 4
 * @param d5 tbd 5
 * @param d6 tbd 6
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t sensor_time_boot_us, uint64_t recorded_time_us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_Gauss, float My_UNIT_Gauss, float Mz_UNIT_Gauss, float Sensor_temp_UNIT_C, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, sensor_time_boot_us);
	_mav_put_uint64_t(buf, 8, recorded_time_us);
	_mav_put_float(buf, 16, Ax_UNIT_g);
	_mav_put_float(buf, 20, Ay_UNIT_g);
	_mav_put_float(buf, 24, Az_UNIT_g);
	_mav_put_float(buf, 28, Gx_UNIT_deg_d_sec);
	_mav_put_float(buf, 32, Gy_UNIT_deg_d_sec);
	_mav_put_float(buf, 36, Gz_UNIT_deg_d_sec);
	_mav_put_float(buf, 40, Mx_UNIT_Gauss);
	_mav_put_float(buf, 44, My_UNIT_Gauss);
	_mav_put_float(buf, 48, Mz_UNIT_Gauss);
	_mav_put_float(buf, 52, Sensor_temp_UNIT_C);
	_mav_put_float(buf, 56, d1);
	_mav_put_float(buf, 60, d2);
	_mav_put_float(buf, 64, d3);
	_mav_put_float(buf, 68, d4);
	_mav_put_float(buf, 72, d5);
	_mav_put_float(buf, 76, d6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
	mavlink_attitude_sensor_t packet;
	packet.sensor_time_boot_us = sensor_time_boot_us;
	packet.recorded_time_us = recorded_time_us;
	packet.Ax_UNIT_g = Ax_UNIT_g;
	packet.Ay_UNIT_g = Ay_UNIT_g;
	packet.Az_UNIT_g = Az_UNIT_g;
	packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
	packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
	packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
	packet.Mx_UNIT_Gauss = Mx_UNIT_Gauss;
	packet.My_UNIT_Gauss = My_UNIT_Gauss;
	packet.Mz_UNIT_Gauss = Mz_UNIT_Gauss;
	packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
	packet.d1 = d1;
	packet.d2 = d2;
	packet.d3 = d3;
	packet.d4 = d4;
	packet.d5 = d5;
	packet.d6 = d6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
}

/**
 * @brief Pack a attitude_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensor_time_boot_us Sensor time since boot in usec
 * @param recorded_time_us recorded at time in usec
 * @param Ax_UNIT_g X acceleration (g)
 * @param Ay_UNIT_g Y acceleration (g)
 * @param Az_UNIT_g Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_Gauss X Magnetic field (Gauss)
 * @param My_UNIT_Gauss Y Magnetic field (Gauss)
 * @param Mz_UNIT_Gauss Z Magnetic field (Gauss)
 * @param Sensor_temp_UNIT_C Sensor temp (deg C)
 * @param d1 tbd 1
 * @param d2 tbd 2
 * @param d3 tbd 3
 * @param d4 tbd 4
 * @param d5 tbd 5
 * @param d6 tbd 6
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t sensor_time_boot_us,uint64_t recorded_time_us,float Ax_UNIT_g,float Ay_UNIT_g,float Az_UNIT_g,float Gx_UNIT_deg_d_sec,float Gy_UNIT_deg_d_sec,float Gz_UNIT_deg_d_sec,float Mx_UNIT_Gauss,float My_UNIT_Gauss,float Mz_UNIT_Gauss,float Sensor_temp_UNIT_C,float d1,float d2,float d3,float d4,float d5,float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, sensor_time_boot_us);
	_mav_put_uint64_t(buf, 8, recorded_time_us);
	_mav_put_float(buf, 16, Ax_UNIT_g);
	_mav_put_float(buf, 20, Ay_UNIT_g);
	_mav_put_float(buf, 24, Az_UNIT_g);
	_mav_put_float(buf, 28, Gx_UNIT_deg_d_sec);
	_mav_put_float(buf, 32, Gy_UNIT_deg_d_sec);
	_mav_put_float(buf, 36, Gz_UNIT_deg_d_sec);
	_mav_put_float(buf, 40, Mx_UNIT_Gauss);
	_mav_put_float(buf, 44, My_UNIT_Gauss);
	_mav_put_float(buf, 48, Mz_UNIT_Gauss);
	_mav_put_float(buf, 52, Sensor_temp_UNIT_C);
	_mav_put_float(buf, 56, d1);
	_mav_put_float(buf, 60, d2);
	_mav_put_float(buf, 64, d3);
	_mav_put_float(buf, 68, d4);
	_mav_put_float(buf, 72, d5);
	_mav_put_float(buf, 76, d6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
	mavlink_attitude_sensor_t packet;
	packet.sensor_time_boot_us = sensor_time_boot_us;
	packet.recorded_time_us = recorded_time_us;
	packet.Ax_UNIT_g = Ax_UNIT_g;
	packet.Ay_UNIT_g = Ay_UNIT_g;
	packet.Az_UNIT_g = Az_UNIT_g;
	packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
	packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
	packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
	packet.Mx_UNIT_Gauss = Mx_UNIT_Gauss;
	packet.My_UNIT_Gauss = My_UNIT_Gauss;
	packet.Mz_UNIT_Gauss = Mz_UNIT_Gauss;
	packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
	packet.d1 = d1;
	packet.d2 = d2;
	packet.d3 = d3;
	packet.d4 = d4;
	packet.d5 = d5;
	packet.d6 = d6;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
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
	return mavlink_msg_attitude_sensor_pack(system_id, component_id, msg, attitude_sensor->sensor_time_boot_us, attitude_sensor->recorded_time_us, attitude_sensor->Ax_UNIT_g, attitude_sensor->Ay_UNIT_g, attitude_sensor->Az_UNIT_g, attitude_sensor->Gx_UNIT_deg_d_sec, attitude_sensor->Gy_UNIT_deg_d_sec, attitude_sensor->Gz_UNIT_deg_d_sec, attitude_sensor->Mx_UNIT_Gauss, attitude_sensor->My_UNIT_Gauss, attitude_sensor->Mz_UNIT_Gauss, attitude_sensor->Sensor_temp_UNIT_C, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3, attitude_sensor->d4, attitude_sensor->d5, attitude_sensor->d6);
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
	return mavlink_msg_attitude_sensor_pack_chan(system_id, component_id, chan, msg, attitude_sensor->sensor_time_boot_us, attitude_sensor->recorded_time_us, attitude_sensor->Ax_UNIT_g, attitude_sensor->Ay_UNIT_g, attitude_sensor->Az_UNIT_g, attitude_sensor->Gx_UNIT_deg_d_sec, attitude_sensor->Gy_UNIT_deg_d_sec, attitude_sensor->Gz_UNIT_deg_d_sec, attitude_sensor->Mx_UNIT_Gauss, attitude_sensor->My_UNIT_Gauss, attitude_sensor->Mz_UNIT_Gauss, attitude_sensor->Sensor_temp_UNIT_C, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3, attitude_sensor->d4, attitude_sensor->d5, attitude_sensor->d6);
}

/**
 * @brief Send a attitude_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param sensor_time_boot_us Sensor time since boot in usec
 * @param recorded_time_us recorded at time in usec
 * @param Ax_UNIT_g X acceleration (g)
 * @param Ay_UNIT_g Y acceleration (g)
 * @param Az_UNIT_g Z acceleration (g)
 * @param Gx_UNIT_deg_d_sec Angular rate X axis (deg/sec)
 * @param Gy_UNIT_deg_d_sec Angular rate Y axis (deg/sec)
 * @param Gz_UNIT_deg_d_sec Angular rate Z axis (deg/sec)
 * @param Mx_UNIT_Gauss X Magnetic field (Gauss)
 * @param My_UNIT_Gauss Y Magnetic field (Gauss)
 * @param Mz_UNIT_Gauss Z Magnetic field (Gauss)
 * @param Sensor_temp_UNIT_C Sensor temp (deg C)
 * @param d1 tbd 1
 * @param d2 tbd 2
 * @param d3 tbd 3
 * @param d4 tbd 4
 * @param d5 tbd 5
 * @param d6 tbd 6
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_sensor_send(mavlink_channel_t chan, uint64_t sensor_time_boot_us, uint64_t recorded_time_us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_Gauss, float My_UNIT_Gauss, float Mz_UNIT_Gauss, float Sensor_temp_UNIT_C, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, sensor_time_boot_us);
	_mav_put_uint64_t(buf, 8, recorded_time_us);
	_mav_put_float(buf, 16, Ax_UNIT_g);
	_mav_put_float(buf, 20, Ay_UNIT_g);
	_mav_put_float(buf, 24, Az_UNIT_g);
	_mav_put_float(buf, 28, Gx_UNIT_deg_d_sec);
	_mav_put_float(buf, 32, Gy_UNIT_deg_d_sec);
	_mav_put_float(buf, 36, Gz_UNIT_deg_d_sec);
	_mav_put_float(buf, 40, Mx_UNIT_Gauss);
	_mav_put_float(buf, 44, My_UNIT_Gauss);
	_mav_put_float(buf, 48, Mz_UNIT_Gauss);
	_mav_put_float(buf, 52, Sensor_temp_UNIT_C);
	_mav_put_float(buf, 56, d1);
	_mav_put_float(buf, 60, d2);
	_mav_put_float(buf, 64, d3);
	_mav_put_float(buf, 68, d4);
	_mav_put_float(buf, 72, d5);
	_mav_put_float(buf, 76, d6);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
#else
	mavlink_attitude_sensor_t packet;
	packet.sensor_time_boot_us = sensor_time_boot_us;
	packet.recorded_time_us = recorded_time_us;
	packet.Ax_UNIT_g = Ax_UNIT_g;
	packet.Ay_UNIT_g = Ay_UNIT_g;
	packet.Az_UNIT_g = Az_UNIT_g;
	packet.Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
	packet.Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
	packet.Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
	packet.Mx_UNIT_Gauss = Mx_UNIT_Gauss;
	packet.My_UNIT_Gauss = My_UNIT_Gauss;
	packet.Mz_UNIT_Gauss = Mz_UNIT_Gauss;
	packet.Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
	packet.d1 = d1;
	packet.d2 = d2;
	packet.d3 = d3;
	packet.d4 = d4;
	packet.d5 = d5;
	packet.d6 = d6;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
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
static inline void mavlink_msg_attitude_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t sensor_time_boot_us, uint64_t recorded_time_us, float Ax_UNIT_g, float Ay_UNIT_g, float Az_UNIT_g, float Gx_UNIT_deg_d_sec, float Gy_UNIT_deg_d_sec, float Gz_UNIT_deg_d_sec, float Mx_UNIT_Gauss, float My_UNIT_Gauss, float Mz_UNIT_Gauss, float Sensor_temp_UNIT_C, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, sensor_time_boot_us);
	_mav_put_uint64_t(buf, 8, recorded_time_us);
	_mav_put_float(buf, 16, Ax_UNIT_g);
	_mav_put_float(buf, 20, Ay_UNIT_g);
	_mav_put_float(buf, 24, Az_UNIT_g);
	_mav_put_float(buf, 28, Gx_UNIT_deg_d_sec);
	_mav_put_float(buf, 32, Gy_UNIT_deg_d_sec);
	_mav_put_float(buf, 36, Gz_UNIT_deg_d_sec);
	_mav_put_float(buf, 40, Mx_UNIT_Gauss);
	_mav_put_float(buf, 44, My_UNIT_Gauss);
	_mav_put_float(buf, 48, Mz_UNIT_Gauss);
	_mav_put_float(buf, 52, Sensor_temp_UNIT_C);
	_mav_put_float(buf, 56, d1);
	_mav_put_float(buf, 60, d2);
	_mav_put_float(buf, 64, d3);
	_mav_put_float(buf, 68, d4);
	_mav_put_float(buf, 72, d5);
	_mav_put_float(buf, 76, d6);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
#else
	mavlink_attitude_sensor_t *packet = (mavlink_attitude_sensor_t *)msgbuf;
	packet->sensor_time_boot_us = sensor_time_boot_us;
	packet->recorded_time_us = recorded_time_us;
	packet->Ax_UNIT_g = Ax_UNIT_g;
	packet->Ay_UNIT_g = Ay_UNIT_g;
	packet->Az_UNIT_g = Az_UNIT_g;
	packet->Gx_UNIT_deg_d_sec = Gx_UNIT_deg_d_sec;
	packet->Gy_UNIT_deg_d_sec = Gy_UNIT_deg_d_sec;
	packet->Gz_UNIT_deg_d_sec = Gz_UNIT_deg_d_sec;
	packet->Mx_UNIT_Gauss = Mx_UNIT_Gauss;
	packet->My_UNIT_Gauss = My_UNIT_Gauss;
	packet->Mz_UNIT_Gauss = Mz_UNIT_Gauss;
	packet->Sensor_temp_UNIT_C = Sensor_temp_UNIT_C;
	packet->d1 = d1;
	packet->d2 = d2;
	packet->d3 = d3;
	packet->d4 = d4;
	packet->d5 = d5;
	packet->d6 = d6;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ATTITUDE_SENSOR UNPACKING


/**
 * @brief Get field sensor_time_boot_us from attitude_sensor message
 *
 * @return Sensor time since boot in usec
 */
static inline uint64_t mavlink_msg_attitude_sensor_get_sensor_time_boot_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field recorded_time_us from attitude_sensor message
 *
 * @return recorded at time in usec
 */
static inline uint64_t mavlink_msg_attitude_sensor_get_recorded_time_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field Ax_UNIT_g from attitude_sensor message
 *
 * @return X acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ax_UNIT_g(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Ay_UNIT_g from attitude_sensor message
 *
 * @return Y acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ay_UNIT_g(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Az_UNIT_g from attitude_sensor message
 *
 * @return Z acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Az_UNIT_g(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Gx_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return Angular rate X axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gx_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field Gy_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return Angular rate Y axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gy_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Gz_UNIT_deg_d_sec from attitude_sensor message
 *
 * @return Angular rate Z axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gz_UNIT_deg_d_sec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field Mx_UNIT_Gauss from attitude_sensor message
 *
 * @return X Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_Mx_UNIT_Gauss(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field My_UNIT_Gauss from attitude_sensor message
 *
 * @return Y Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_My_UNIT_Gauss(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Mz_UNIT_Gauss from attitude_sensor message
 *
 * @return Z Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_Mz_UNIT_Gauss(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field Sensor_temp_UNIT_C from attitude_sensor message
 *
 * @return Sensor temp (deg C)
 */
static inline float mavlink_msg_attitude_sensor_get_Sensor_temp_UNIT_C(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field d1 from attitude_sensor message
 *
 * @return tbd 1
 */
static inline float mavlink_msg_attitude_sensor_get_d1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field d2 from attitude_sensor message
 *
 * @return tbd 2
 */
static inline float mavlink_msg_attitude_sensor_get_d2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field d3 from attitude_sensor message
 *
 * @return tbd 3
 */
static inline float mavlink_msg_attitude_sensor_get_d3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field d4 from attitude_sensor message
 *
 * @return tbd 4
 */
static inline float mavlink_msg_attitude_sensor_get_d4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field d5 from attitude_sensor message
 *
 * @return tbd 5
 */
static inline float mavlink_msg_attitude_sensor_get_d5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field d6 from attitude_sensor message
 *
 * @return tbd 6
 */
static inline float mavlink_msg_attitude_sensor_get_d6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Decode a attitude_sensor message into a struct
 *
 * @param msg The message to decode
 * @param attitude_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_sensor_decode(const mavlink_message_t* msg, mavlink_attitude_sensor_t* attitude_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP
	attitude_sensor->sensor_time_boot_us = mavlink_msg_attitude_sensor_get_sensor_time_boot_us(msg);
	attitude_sensor->recorded_time_us = mavlink_msg_attitude_sensor_get_recorded_time_us(msg);
	attitude_sensor->Ax_UNIT_g = mavlink_msg_attitude_sensor_get_Ax_UNIT_g(msg);
	attitude_sensor->Ay_UNIT_g = mavlink_msg_attitude_sensor_get_Ay_UNIT_g(msg);
	attitude_sensor->Az_UNIT_g = mavlink_msg_attitude_sensor_get_Az_UNIT_g(msg);
	attitude_sensor->Gx_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gx_UNIT_deg_d_sec(msg);
	attitude_sensor->Gy_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gy_UNIT_deg_d_sec(msg);
	attitude_sensor->Gz_UNIT_deg_d_sec = mavlink_msg_attitude_sensor_get_Gz_UNIT_deg_d_sec(msg);
	attitude_sensor->Mx_UNIT_Gauss = mavlink_msg_attitude_sensor_get_Mx_UNIT_Gauss(msg);
	attitude_sensor->My_UNIT_Gauss = mavlink_msg_attitude_sensor_get_My_UNIT_Gauss(msg);
	attitude_sensor->Mz_UNIT_Gauss = mavlink_msg_attitude_sensor_get_Mz_UNIT_Gauss(msg);
	attitude_sensor->Sensor_temp_UNIT_C = mavlink_msg_attitude_sensor_get_Sensor_temp_UNIT_C(msg);
	attitude_sensor->d1 = mavlink_msg_attitude_sensor_get_d1(msg);
	attitude_sensor->d2 = mavlink_msg_attitude_sensor_get_d2(msg);
	attitude_sensor->d3 = mavlink_msg_attitude_sensor_get_d3(msg);
	attitude_sensor->d4 = mavlink_msg_attitude_sensor_get_d4(msg);
	attitude_sensor->d5 = mavlink_msg_attitude_sensor_get_d5(msg);
	attitude_sensor->d6 = mavlink_msg_attitude_sensor_get_d6(msg);
#else
	memcpy(attitude_sensor, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
}
