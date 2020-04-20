// MESSAGE ATTITUDE_SENSOR PACKING

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR 222

typedef struct __mavlink_attitude_sensor_t
{
 uint64_t utc_time_us; /*< UTC time in usec*/
 uint32_t time_boot_ms; /*< Time since boot in msec*/
 float Ax; /*< X acceleration (g)*/
 float Ay; /*< Y acceleration (g)*/
 float Az; /*< Z acceleration (g)*/
 float Gx; /*< Angular rate X axis (deg/sec)*/
 float Gy; /*< Angular rate Y axis (deg/sec)*/
 float Gz; /*< Angular rate Z axis (deg/sec)*/
 float Mx; /*< X Magnetic field (Gauss)*/
 float My; /*< Y Magnetic field (Gauss)*/
 float Mz; /*< Z Magnetic field (Gauss)*/
 float IMU_temp; /*< IMU Temp*/
 float d1; /*< tbd 1*/
 float d2; /*< tbd 2*/
 float d3; /*< tbd 3*/
 float d4; /*< tbd 4*/
 float d5; /*< tbd 5*/
 float d6; /*< tbd 6*/
} mavlink_attitude_sensor_t;

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN 76
#define MAVLINK_MSG_ID_222_LEN 76

#define MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC 239
#define MAVLINK_MSG_ID_222_CRC 239



#define MAVLINK_MESSAGE_INFO_ATTITUDE_SENSOR { \
	"ATTITUDE_SENSOR", \
	18, \
	{  { "utc_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_attitude_sensor_t, utc_time_us) }, \
         { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_attitude_sensor_t, time_boot_ms) }, \
         { "Ax", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_sensor_t, Ax) }, \
         { "Ay", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_sensor_t, Ay) }, \
         { "Az", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_sensor_t, Az) }, \
         { "Gx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_sensor_t, Gx) }, \
         { "Gy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_sensor_t, Gy) }, \
         { "Gz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_attitude_sensor_t, Gz) }, \
         { "Mx", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_attitude_sensor_t, Mx) }, \
         { "My", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_attitude_sensor_t, My) }, \
         { "Mz", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_attitude_sensor_t, Mz) }, \
         { "IMU_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_attitude_sensor_t, IMU_temp) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_attitude_sensor_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_attitude_sensor_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_attitude_sensor_t, d3) }, \
         { "d4", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_attitude_sensor_t, d4) }, \
         { "d5", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_attitude_sensor_t, d5) }, \
         { "d6", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_attitude_sensor_t, d6) }, \
         } \
}


/**
 * @brief Pack a attitude_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param utc_time_us UTC time in usec
 * @param Ax X acceleration (g)
 * @param Ay Y acceleration (g)
 * @param Az Z acceleration (g)
 * @param Gx Angular rate X axis (deg/sec)
 * @param Gy Angular rate Y axis (deg/sec)
 * @param Gz Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Gauss)
 * @param My Y Magnetic field (Gauss)
 * @param Mz Z Magnetic field (Gauss)
 * @param IMU_temp IMU Temp
 * @param d1 tbd 1
 * @param d2 tbd 2
 * @param d3 tbd 3
 * @param d4 tbd 4
 * @param d5 tbd 5
 * @param d6 tbd 6
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint64_t utc_time_us, float Ax, float Ay, float Az, float Gx, float Gy, float Gz, float Mx, float My, float Mz, float IMU_temp, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, utc_time_us);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_float(buf, 12, Ax);
	_mav_put_float(buf, 16, Ay);
	_mav_put_float(buf, 20, Az);
	_mav_put_float(buf, 24, Gx);
	_mav_put_float(buf, 28, Gy);
	_mav_put_float(buf, 32, Gz);
	_mav_put_float(buf, 36, Mx);
	_mav_put_float(buf, 40, My);
	_mav_put_float(buf, 44, Mz);
	_mav_put_float(buf, 48, IMU_temp);
	_mav_put_float(buf, 52, d1);
	_mav_put_float(buf, 56, d2);
	_mav_put_float(buf, 60, d3);
	_mav_put_float(buf, 64, d4);
	_mav_put_float(buf, 68, d5);
	_mav_put_float(buf, 72, d6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
	mavlink_attitude_sensor_t packet;
	packet.utc_time_us = utc_time_us;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx = Gx;
	packet.Gy = Gy;
	packet.Gz = Gz;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;
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
 * @param time_boot_ms Time since boot in msec
 * @param utc_time_us UTC time in usec
 * @param Ax X acceleration (g)
 * @param Ay Y acceleration (g)
 * @param Az Z acceleration (g)
 * @param Gx Angular rate X axis (deg/sec)
 * @param Gy Angular rate Y axis (deg/sec)
 * @param Gz Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Gauss)
 * @param My Y Magnetic field (Gauss)
 * @param Mz Z Magnetic field (Gauss)
 * @param IMU_temp IMU Temp
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
						           uint32_t time_boot_ms,uint64_t utc_time_us,float Ax,float Ay,float Az,float Gx,float Gy,float Gz,float Mx,float My,float Mz,float IMU_temp,float d1,float d2,float d3,float d4,float d5,float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, utc_time_us);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_float(buf, 12, Ax);
	_mav_put_float(buf, 16, Ay);
	_mav_put_float(buf, 20, Az);
	_mav_put_float(buf, 24, Gx);
	_mav_put_float(buf, 28, Gy);
	_mav_put_float(buf, 32, Gz);
	_mav_put_float(buf, 36, Mx);
	_mav_put_float(buf, 40, My);
	_mav_put_float(buf, 44, Mz);
	_mav_put_float(buf, 48, IMU_temp);
	_mav_put_float(buf, 52, d1);
	_mav_put_float(buf, 56, d2);
	_mav_put_float(buf, 60, d3);
	_mav_put_float(buf, 64, d4);
	_mav_put_float(buf, 68, d5);
	_mav_put_float(buf, 72, d6);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#else
	mavlink_attitude_sensor_t packet;
	packet.utc_time_us = utc_time_us;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx = Gx;
	packet.Gy = Gy;
	packet.Gz = Gz;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;
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
	return mavlink_msg_attitude_sensor_pack(system_id, component_id, msg, attitude_sensor->time_boot_ms, attitude_sensor->utc_time_us, attitude_sensor->Ax, attitude_sensor->Ay, attitude_sensor->Az, attitude_sensor->Gx, attitude_sensor->Gy, attitude_sensor->Gz, attitude_sensor->Mx, attitude_sensor->My, attitude_sensor->Mz, attitude_sensor->IMU_temp, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3, attitude_sensor->d4, attitude_sensor->d5, attitude_sensor->d6);
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
	return mavlink_msg_attitude_sensor_pack_chan(system_id, component_id, chan, msg, attitude_sensor->time_boot_ms, attitude_sensor->utc_time_us, attitude_sensor->Ax, attitude_sensor->Ay, attitude_sensor->Az, attitude_sensor->Gx, attitude_sensor->Gy, attitude_sensor->Gz, attitude_sensor->Mx, attitude_sensor->My, attitude_sensor->Mz, attitude_sensor->IMU_temp, attitude_sensor->d1, attitude_sensor->d2, attitude_sensor->d3, attitude_sensor->d4, attitude_sensor->d5, attitude_sensor->d6);
}

/**
 * @brief Send a attitude_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param utc_time_us UTC time in usec
 * @param Ax X acceleration (g)
 * @param Ay Y acceleration (g)
 * @param Az Z acceleration (g)
 * @param Gx Angular rate X axis (deg/sec)
 * @param Gy Angular rate Y axis (deg/sec)
 * @param Gz Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Gauss)
 * @param My Y Magnetic field (Gauss)
 * @param Mz Z Magnetic field (Gauss)
 * @param IMU_temp IMU Temp
 * @param d1 tbd 1
 * @param d2 tbd 2
 * @param d3 tbd 3
 * @param d4 tbd 4
 * @param d5 tbd 5
 * @param d6 tbd 6
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_sensor_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint64_t utc_time_us, float Ax, float Ay, float Az, float Gx, float Gy, float Gz, float Mx, float My, float Mz, float IMU_temp, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN];
	_mav_put_uint64_t(buf, 0, utc_time_us);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_float(buf, 12, Ax);
	_mav_put_float(buf, 16, Ay);
	_mav_put_float(buf, 20, Az);
	_mav_put_float(buf, 24, Gx);
	_mav_put_float(buf, 28, Gy);
	_mav_put_float(buf, 32, Gz);
	_mav_put_float(buf, 36, Mx);
	_mav_put_float(buf, 40, My);
	_mav_put_float(buf, 44, Mz);
	_mav_put_float(buf, 48, IMU_temp);
	_mav_put_float(buf, 52, d1);
	_mav_put_float(buf, 56, d2);
	_mav_put_float(buf, 60, d3);
	_mav_put_float(buf, 64, d4);
	_mav_put_float(buf, 68, d5);
	_mav_put_float(buf, 72, d6);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
#else
	mavlink_attitude_sensor_t packet;
	packet.utc_time_us = utc_time_us;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx = Gx;
	packet.Gy = Gy;
	packet.Gz = Gz;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;
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
static inline void mavlink_msg_attitude_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint64_t utc_time_us, float Ax, float Ay, float Az, float Gx, float Gy, float Gz, float Mx, float My, float Mz, float IMU_temp, float d1, float d2, float d3, float d4, float d5, float d6)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, utc_time_us);
	_mav_put_uint32_t(buf, 8, time_boot_ms);
	_mav_put_float(buf, 12, Ax);
	_mav_put_float(buf, 16, Ay);
	_mav_put_float(buf, 20, Az);
	_mav_put_float(buf, 24, Gx);
	_mav_put_float(buf, 28, Gy);
	_mav_put_float(buf, 32, Gz);
	_mav_put_float(buf, 36, Mx);
	_mav_put_float(buf, 40, My);
	_mav_put_float(buf, 44, Mz);
	_mav_put_float(buf, 48, IMU_temp);
	_mav_put_float(buf, 52, d1);
	_mav_put_float(buf, 56, d2);
	_mav_put_float(buf, 60, d3);
	_mav_put_float(buf, 64, d4);
	_mav_put_float(buf, 68, d5);
	_mav_put_float(buf, 72, d6);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN, MAVLINK_MSG_ID_ATTITUDE_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_SENSOR, buf, MAVLINK_MSG_ID_ATTITUDE_SENSOR_LEN);
#endif
#else
	mavlink_attitude_sensor_t *packet = (mavlink_attitude_sensor_t *)msgbuf;
	packet->utc_time_us = utc_time_us;
	packet->time_boot_ms = time_boot_ms;
	packet->Ax = Ax;
	packet->Ay = Ay;
	packet->Az = Az;
	packet->Gx = Gx;
	packet->Gy = Gy;
	packet->Gz = Gz;
	packet->Mx = Mx;
	packet->My = My;
	packet->Mz = Mz;
	packet->IMU_temp = IMU_temp;
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
 * @brief Get field time_boot_ms from attitude_sensor message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_attitude_sensor_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field utc_time_us from attitude_sensor message
 *
 * @return UTC time in usec
 */
static inline uint64_t mavlink_msg_attitude_sensor_get_utc_time_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field Ax from attitude_sensor message
 *
 * @return X acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Ay from attitude_sensor message
 *
 * @return Y acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Az from attitude_sensor message
 *
 * @return Z acceleration (g)
 */
static inline float mavlink_msg_attitude_sensor_get_Az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Gx from attitude_sensor message
 *
 * @return Angular rate X axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Gy from attitude_sensor message
 *
 * @return Angular rate Y axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field Gz from attitude_sensor message
 *
 * @return Angular rate Z axis (deg/sec)
 */
static inline float mavlink_msg_attitude_sensor_get_Gz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Mx from attitude_sensor message
 *
 * @return X Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_Mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field My from attitude_sensor message
 *
 * @return Y Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_My(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Mz from attitude_sensor message
 *
 * @return Z Magnetic field (Gauss)
 */
static inline float mavlink_msg_attitude_sensor_get_Mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field IMU_temp from attitude_sensor message
 *
 * @return IMU Temp
 */
static inline float mavlink_msg_attitude_sensor_get_IMU_temp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field d1 from attitude_sensor message
 *
 * @return tbd 1
 */
static inline float mavlink_msg_attitude_sensor_get_d1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field d2 from attitude_sensor message
 *
 * @return tbd 2
 */
static inline float mavlink_msg_attitude_sensor_get_d2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field d3 from attitude_sensor message
 *
 * @return tbd 3
 */
static inline float mavlink_msg_attitude_sensor_get_d3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field d4 from attitude_sensor message
 *
 * @return tbd 4
 */
static inline float mavlink_msg_attitude_sensor_get_d4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field d5 from attitude_sensor message
 *
 * @return tbd 5
 */
static inline float mavlink_msg_attitude_sensor_get_d5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field d6 from attitude_sensor message
 *
 * @return tbd 6
 */
static inline float mavlink_msg_attitude_sensor_get_d6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  72);
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
	attitude_sensor->utc_time_us = mavlink_msg_attitude_sensor_get_utc_time_us(msg);
	attitude_sensor->time_boot_ms = mavlink_msg_attitude_sensor_get_time_boot_ms(msg);
	attitude_sensor->Ax = mavlink_msg_attitude_sensor_get_Ax(msg);
	attitude_sensor->Ay = mavlink_msg_attitude_sensor_get_Ay(msg);
	attitude_sensor->Az = mavlink_msg_attitude_sensor_get_Az(msg);
	attitude_sensor->Gx = mavlink_msg_attitude_sensor_get_Gx(msg);
	attitude_sensor->Gy = mavlink_msg_attitude_sensor_get_Gy(msg);
	attitude_sensor->Gz = mavlink_msg_attitude_sensor_get_Gz(msg);
	attitude_sensor->Mx = mavlink_msg_attitude_sensor_get_Mx(msg);
	attitude_sensor->My = mavlink_msg_attitude_sensor_get_My(msg);
	attitude_sensor->Mz = mavlink_msg_attitude_sensor_get_Mz(msg);
	attitude_sensor->IMU_temp = mavlink_msg_attitude_sensor_get_IMU_temp(msg);
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
