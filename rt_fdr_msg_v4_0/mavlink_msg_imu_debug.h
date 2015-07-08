// MESSAGE IMU_DEBUG PACKING

#define MAVLINK_MSG_ID_IMU_DEBUG 237

typedef struct __mavlink_imu_debug_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 int16_t Ax; ///< X acceleration (mg)
 int16_t Ay; ///< Y acceleration (mg)
 int16_t Az; ///< Z acceleration (mg)
 int16_t Gx_u; ///< Uncomp. Angular rate X axis (deg/sec)
 int16_t Gy_u; ///< Uncomp. Angular rate Y axis (deg/sec)
 int16_t Gz_u; ///< Uncomp. Angular rate Z axis (deg/sec)
 int16_t Mx; ///< X Magnetic field (Mx*1000)
 int16_t My; ///< Y Magnetic field (My*1000)
 int16_t Mz; ///< Z Magnetic field (Mz*1000)
 int8_t IMU_temp; ///< IMU Temp
} mavlink_imu_debug_t;

#define MAVLINK_MSG_ID_IMU_DEBUG_LEN 23
#define MAVLINK_MSG_ID_237_LEN 23

#define MAVLINK_MSG_ID_IMU_DEBUG_CRC 160
#define MAVLINK_MSG_ID_237_CRC 160



#define MAVLINK_MESSAGE_INFO_IMU_DEBUG { \
	"IMU_DEBUG", \
	11, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_imu_debug_t, time_boot_ms) }, \
         { "Ax", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_imu_debug_t, Ax) }, \
         { "Ay", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_imu_debug_t, Ay) }, \
         { "Az", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_imu_debug_t, Az) }, \
         { "Gx_u", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_imu_debug_t, Gx_u) }, \
         { "Gy_u", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_imu_debug_t, Gy_u) }, \
         { "Gz_u", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_imu_debug_t, Gz_u) }, \
         { "Mx", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_imu_debug_t, Mx) }, \
         { "My", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_imu_debug_t, My) }, \
         { "Mz", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_imu_debug_t, Mz) }, \
         { "IMU_temp", NULL, MAVLINK_TYPE_INT8_T, 0, 22, offsetof(mavlink_imu_debug_t, IMU_temp) }, \
         } \
}


/**
 * @brief Pack a imu_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Ax X acceleration (mg)
 * @param Ay Y acceleration (mg)
 * @param Az Z acceleration (mg)
 * @param Gx_u Uncomp. Angular rate X axis (deg/sec)
 * @param Gy_u Uncomp. Angular rate Y axis (deg/sec)
 * @param Gz_u Uncomp. Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Mx*1000)
 * @param My Y Magnetic field (My*1000)
 * @param Mz Z Magnetic field (Mz*1000)
 * @param IMU_temp IMU Temp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t Ax, int16_t Ay, int16_t Az, int16_t Gx_u, int16_t Gy_u, int16_t Gz_u, int16_t Mx, int16_t My, int16_t Mz, int8_t IMU_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Ax);
	_mav_put_int16_t(buf, 6, Ay);
	_mav_put_int16_t(buf, 8, Az);
	_mav_put_int16_t(buf, 10, Gx_u);
	_mav_put_int16_t(buf, 12, Gy_u);
	_mav_put_int16_t(buf, 14, Gz_u);
	_mav_put_int16_t(buf, 16, Mx);
	_mav_put_int16_t(buf, 18, My);
	_mav_put_int16_t(buf, 20, Mz);
	_mav_put_int8_t(buf, 22, IMU_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#else
	mavlink_imu_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx_u = Gx_u;
	packet.Gy_u = Gy_u;
	packet.Gz_u = Gz_u;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_IMU_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a imu_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Ax X acceleration (mg)
 * @param Ay Y acceleration (mg)
 * @param Az Z acceleration (mg)
 * @param Gx_u Uncomp. Angular rate X axis (deg/sec)
 * @param Gy_u Uncomp. Angular rate Y axis (deg/sec)
 * @param Gz_u Uncomp. Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Mx*1000)
 * @param My Y Magnetic field (My*1000)
 * @param Mz Z Magnetic field (Mz*1000)
 * @param IMU_temp IMU Temp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t Ax,int16_t Ay,int16_t Az,int16_t Gx_u,int16_t Gy_u,int16_t Gz_u,int16_t Mx,int16_t My,int16_t Mz,int8_t IMU_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Ax);
	_mav_put_int16_t(buf, 6, Ay);
	_mav_put_int16_t(buf, 8, Az);
	_mav_put_int16_t(buf, 10, Gx_u);
	_mav_put_int16_t(buf, 12, Gy_u);
	_mav_put_int16_t(buf, 14, Gz_u);
	_mav_put_int16_t(buf, 16, Mx);
	_mav_put_int16_t(buf, 18, My);
	_mav_put_int16_t(buf, 20, Mz);
	_mav_put_int8_t(buf, 22, IMU_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#else
	mavlink_imu_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx_u = Gx_u;
	packet.Gy_u = Gy_u;
	packet.Gz_u = Gz_u;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_IMU_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a imu_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param imu_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_imu_debug_t* imu_debug)
{
	return mavlink_msg_imu_debug_pack(system_id, component_id, msg, imu_debug->time_boot_ms, imu_debug->Ax, imu_debug->Ay, imu_debug->Az, imu_debug->Gx_u, imu_debug->Gy_u, imu_debug->Gz_u, imu_debug->Mx, imu_debug->My, imu_debug->Mz, imu_debug->IMU_temp);
}

/**
 * @brief Encode a imu_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param imu_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_imu_debug_t* imu_debug)
{
	return mavlink_msg_imu_debug_pack_chan(system_id, component_id, chan, msg, imu_debug->time_boot_ms, imu_debug->Ax, imu_debug->Ay, imu_debug->Az, imu_debug->Gx_u, imu_debug->Gy_u, imu_debug->Gz_u, imu_debug->Mx, imu_debug->My, imu_debug->Mz, imu_debug->IMU_temp);
}

/**
 * @brief Send a imu_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Ax X acceleration (mg)
 * @param Ay Y acceleration (mg)
 * @param Az Z acceleration (mg)
 * @param Gx_u Uncomp. Angular rate X axis (deg/sec)
 * @param Gy_u Uncomp. Angular rate Y axis (deg/sec)
 * @param Gz_u Uncomp. Angular rate Z axis (deg/sec)
 * @param Mx X Magnetic field (Mx*1000)
 * @param My Y Magnetic field (My*1000)
 * @param Mz Z Magnetic field (Mz*1000)
 * @param IMU_temp IMU Temp
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_imu_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t Ax, int16_t Ay, int16_t Az, int16_t Gx_u, int16_t Gy_u, int16_t Gz_u, int16_t Mx, int16_t My, int16_t Mz, int8_t IMU_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Ax);
	_mav_put_int16_t(buf, 6, Ay);
	_mav_put_int16_t(buf, 8, Az);
	_mav_put_int16_t(buf, 10, Gx_u);
	_mav_put_int16_t(buf, 12, Gy_u);
	_mav_put_int16_t(buf, 14, Gz_u);
	_mav_put_int16_t(buf, 16, Mx);
	_mav_put_int16_t(buf, 18, My);
	_mav_put_int16_t(buf, 20, Mz);
	_mav_put_int8_t(buf, 22, IMU_temp);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
#else
	mavlink_imu_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Ax = Ax;
	packet.Ay = Ay;
	packet.Az = Az;
	packet.Gx_u = Gx_u;
	packet.Gy_u = Gy_u;
	packet.Gz_u = Gz_u;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;
	packet.IMU_temp = IMU_temp;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_IMU_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_imu_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t Ax, int16_t Ay, int16_t Az, int16_t Gx_u, int16_t Gy_u, int16_t Gz_u, int16_t Mx, int16_t My, int16_t Mz, int8_t IMU_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Ax);
	_mav_put_int16_t(buf, 6, Ay);
	_mav_put_int16_t(buf, 8, Az);
	_mav_put_int16_t(buf, 10, Gx_u);
	_mav_put_int16_t(buf, 12, Gy_u);
	_mav_put_int16_t(buf, 14, Gz_u);
	_mav_put_int16_t(buf, 16, Mx);
	_mav_put_int16_t(buf, 18, My);
	_mav_put_int16_t(buf, 20, Mz);
	_mav_put_int8_t(buf, 22, IMU_temp);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, buf, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
#else
	mavlink_imu_debug_t *packet = (mavlink_imu_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Ax = Ax;
	packet->Ay = Ay;
	packet->Az = Az;
	packet->Gx_u = Gx_u;
	packet->Gy_u = Gy_u;
	packet->Gz_u = Gz_u;
	packet->Mx = Mx;
	packet->My = My;
	packet->Mz = Mz;
	packet->IMU_temp = IMU_temp;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, (const char *)packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN, MAVLINK_MSG_ID_IMU_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DEBUG, (const char *)packet, MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE IMU_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from imu_debug message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_imu_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Ax from imu_debug message
 *
 * @return X acceleration (mg)
 */
static inline int16_t mavlink_msg_imu_debug_get_Ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field Ay from imu_debug message
 *
 * @return Y acceleration (mg)
 */
static inline int16_t mavlink_msg_imu_debug_get_Ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field Az from imu_debug message
 *
 * @return Z acceleration (mg)
 */
static inline int16_t mavlink_msg_imu_debug_get_Az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field Gx_u from imu_debug message
 *
 * @return Uncomp. Angular rate X axis (deg/sec)
 */
static inline int16_t mavlink_msg_imu_debug_get_Gx_u(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field Gy_u from imu_debug message
 *
 * @return Uncomp. Angular rate Y axis (deg/sec)
 */
static inline int16_t mavlink_msg_imu_debug_get_Gy_u(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field Gz_u from imu_debug message
 *
 * @return Uncomp. Angular rate Z axis (deg/sec)
 */
static inline int16_t mavlink_msg_imu_debug_get_Gz_u(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field Mx from imu_debug message
 *
 * @return X Magnetic field (Mx*1000)
 */
static inline int16_t mavlink_msg_imu_debug_get_Mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field My from imu_debug message
 *
 * @return Y Magnetic field (My*1000)
 */
static inline int16_t mavlink_msg_imu_debug_get_My(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field Mz from imu_debug message
 *
 * @return Z Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_imu_debug_get_Mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field IMU_temp from imu_debug message
 *
 * @return IMU Temp
 */
static inline int8_t mavlink_msg_imu_debug_get_IMU_temp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  22);
}

/**
 * @brief Decode a imu_debug message into a struct
 *
 * @param msg The message to decode
 * @param imu_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_imu_debug_decode(const mavlink_message_t* msg, mavlink_imu_debug_t* imu_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	imu_debug->time_boot_ms = mavlink_msg_imu_debug_get_time_boot_ms(msg);
	imu_debug->Ax = mavlink_msg_imu_debug_get_Ax(msg);
	imu_debug->Ay = mavlink_msg_imu_debug_get_Ay(msg);
	imu_debug->Az = mavlink_msg_imu_debug_get_Az(msg);
	imu_debug->Gx_u = mavlink_msg_imu_debug_get_Gx_u(msg);
	imu_debug->Gy_u = mavlink_msg_imu_debug_get_Gy_u(msg);
	imu_debug->Gz_u = mavlink_msg_imu_debug_get_Gz_u(msg);
	imu_debug->Mx = mavlink_msg_imu_debug_get_Mx(msg);
	imu_debug->My = mavlink_msg_imu_debug_get_My(msg);
	imu_debug->Mz = mavlink_msg_imu_debug_get_Mz(msg);
	imu_debug->IMU_temp = mavlink_msg_imu_debug_get_IMU_temp(msg);
#else
	memcpy(imu_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_IMU_DEBUG_LEN);
#endif
}
