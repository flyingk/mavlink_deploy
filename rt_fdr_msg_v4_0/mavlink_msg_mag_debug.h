// MESSAGE MAG_DEBUG PACKING

#define MAVLINK_MSG_ID_MAG_DEBUG 239

typedef struct __mavlink_mag_debug_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 int16_t imu_mx; ///< X Magnetic field (Mx*1000)
 int16_t imu_my; ///< Y Magnetic field (My*1000)
 int16_t imu_mz; ///< Z Magnetic field (Mz*1000)
 int16_t tail_mx; ///< X Magnetic field (Mx*1000)
 int16_t tail_my; ///< Y Magnetic field (My*1000)
 int16_t tail_mz; ///< Z Magnetic field (Mz*1000)
 int16_t wing_mx; ///< X Magnetic field (Mz*1000)
 int16_t wing_my; ///< Y Magnetic field (Mz*1000)
 int16_t wing_mz; ///< Z Magnetic field (Mz*1000)
} mavlink_mag_debug_t;

#define MAVLINK_MSG_ID_MAG_DEBUG_LEN 22
#define MAVLINK_MSG_ID_239_LEN 22

#define MAVLINK_MSG_ID_MAG_DEBUG_CRC 16
#define MAVLINK_MSG_ID_239_CRC 16



#define MAVLINK_MESSAGE_INFO_MAG_DEBUG { \
	"MAG_DEBUG", \
	10, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mag_debug_t, time_boot_ms) }, \
         { "imu_mx", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_mag_debug_t, imu_mx) }, \
         { "imu_my", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_mag_debug_t, imu_my) }, \
         { "imu_mz", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_mag_debug_t, imu_mz) }, \
         { "tail_mx", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_mag_debug_t, tail_mx) }, \
         { "tail_my", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_mag_debug_t, tail_my) }, \
         { "tail_mz", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_mag_debug_t, tail_mz) }, \
         { "wing_mx", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_mag_debug_t, wing_mx) }, \
         { "wing_my", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_mag_debug_t, wing_my) }, \
         { "wing_mz", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_mag_debug_t, wing_mz) }, \
         } \
}


/**
 * @brief Pack a mag_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_mx X Magnetic field (Mx*1000)
 * @param imu_my Y Magnetic field (My*1000)
 * @param imu_mz Z Magnetic field (Mz*1000)
 * @param tail_mx X Magnetic field (Mx*1000)
 * @param tail_my Y Magnetic field (My*1000)
 * @param tail_mz Z Magnetic field (Mz*1000)
 * @param wing_mx X Magnetic field (Mz*1000)
 * @param wing_my Y Magnetic field (Mz*1000)
 * @param wing_mz Z Magnetic field (Mz*1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mag_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t imu_mx, int16_t imu_my, int16_t imu_mz, int16_t tail_mx, int16_t tail_my, int16_t tail_mz, int16_t wing_mx, int16_t wing_my, int16_t wing_mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_mx);
	_mav_put_int16_t(buf, 6, imu_my);
	_mav_put_int16_t(buf, 8, imu_mz);
	_mav_put_int16_t(buf, 10, tail_mx);
	_mav_put_int16_t(buf, 12, tail_my);
	_mav_put_int16_t(buf, 14, tail_mz);
	_mav_put_int16_t(buf, 16, wing_mx);
	_mav_put_int16_t(buf, 18, wing_my);
	_mav_put_int16_t(buf, 20, wing_mz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#else
	mavlink_mag_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_mx = imu_mx;
	packet.imu_my = imu_my;
	packet.imu_mz = imu_mz;
	packet.tail_mx = tail_mx;
	packet.tail_my = tail_my;
	packet.tail_mz = tail_mz;
	packet.wing_mx = wing_mx;
	packet.wing_my = wing_my;
	packet.wing_mz = wing_mz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_MAG_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a mag_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_mx X Magnetic field (Mx*1000)
 * @param imu_my Y Magnetic field (My*1000)
 * @param imu_mz Z Magnetic field (Mz*1000)
 * @param tail_mx X Magnetic field (Mx*1000)
 * @param tail_my Y Magnetic field (My*1000)
 * @param tail_mz Z Magnetic field (Mz*1000)
 * @param wing_mx X Magnetic field (Mz*1000)
 * @param wing_my Y Magnetic field (Mz*1000)
 * @param wing_mz Z Magnetic field (Mz*1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mag_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t imu_mx,int16_t imu_my,int16_t imu_mz,int16_t tail_mx,int16_t tail_my,int16_t tail_mz,int16_t wing_mx,int16_t wing_my,int16_t wing_mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_mx);
	_mav_put_int16_t(buf, 6, imu_my);
	_mav_put_int16_t(buf, 8, imu_mz);
	_mav_put_int16_t(buf, 10, tail_mx);
	_mav_put_int16_t(buf, 12, tail_my);
	_mav_put_int16_t(buf, 14, tail_mz);
	_mav_put_int16_t(buf, 16, wing_mx);
	_mav_put_int16_t(buf, 18, wing_my);
	_mav_put_int16_t(buf, 20, wing_mz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#else
	mavlink_mag_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_mx = imu_mx;
	packet.imu_my = imu_my;
	packet.imu_mz = imu_mz;
	packet.tail_mx = tail_mx;
	packet.tail_my = tail_my;
	packet.tail_mz = tail_mz;
	packet.wing_mx = wing_mx;
	packet.wing_my = wing_my;
	packet.wing_mz = wing_mz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_MAG_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a mag_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mag_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mag_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mag_debug_t* mag_debug)
{
	return mavlink_msg_mag_debug_pack(system_id, component_id, msg, mag_debug->time_boot_ms, mag_debug->imu_mx, mag_debug->imu_my, mag_debug->imu_mz, mag_debug->tail_mx, mag_debug->tail_my, mag_debug->tail_mz, mag_debug->wing_mx, mag_debug->wing_my, mag_debug->wing_mz);
}

/**
 * @brief Encode a mag_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mag_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mag_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mag_debug_t* mag_debug)
{
	return mavlink_msg_mag_debug_pack_chan(system_id, component_id, chan, msg, mag_debug->time_boot_ms, mag_debug->imu_mx, mag_debug->imu_my, mag_debug->imu_mz, mag_debug->tail_mx, mag_debug->tail_my, mag_debug->tail_mz, mag_debug->wing_mx, mag_debug->wing_my, mag_debug->wing_mz);
}

/**
 * @brief Send a mag_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_mx X Magnetic field (Mx*1000)
 * @param imu_my Y Magnetic field (My*1000)
 * @param imu_mz Z Magnetic field (Mz*1000)
 * @param tail_mx X Magnetic field (Mx*1000)
 * @param tail_my Y Magnetic field (My*1000)
 * @param tail_mz Z Magnetic field (Mz*1000)
 * @param wing_mx X Magnetic field (Mz*1000)
 * @param wing_my Y Magnetic field (Mz*1000)
 * @param wing_mz Z Magnetic field (Mz*1000)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mag_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t imu_mx, int16_t imu_my, int16_t imu_mz, int16_t tail_mx, int16_t tail_my, int16_t tail_mz, int16_t wing_mx, int16_t wing_my, int16_t wing_mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_mx);
	_mav_put_int16_t(buf, 6, imu_my);
	_mav_put_int16_t(buf, 8, imu_mz);
	_mav_put_int16_t(buf, 10, tail_mx);
	_mav_put_int16_t(buf, 12, tail_my);
	_mav_put_int16_t(buf, 14, tail_mz);
	_mav_put_int16_t(buf, 16, wing_mx);
	_mav_put_int16_t(buf, 18, wing_my);
	_mav_put_int16_t(buf, 20, wing_mz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
#else
	mavlink_mag_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_mx = imu_mx;
	packet.imu_my = imu_my;
	packet.imu_mz = imu_mz;
	packet.tail_mx = tail_mx;
	packet.tail_my = tail_my;
	packet.tail_mz = tail_mz;
	packet.wing_mx = wing_mx;
	packet.wing_my = wing_my;
	packet.wing_mz = wing_mz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_MAG_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mag_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t imu_mx, int16_t imu_my, int16_t imu_mz, int16_t tail_mx, int16_t tail_my, int16_t tail_mz, int16_t wing_mx, int16_t wing_my, int16_t wing_mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_mx);
	_mav_put_int16_t(buf, 6, imu_my);
	_mav_put_int16_t(buf, 8, imu_mz);
	_mav_put_int16_t(buf, 10, tail_mx);
	_mav_put_int16_t(buf, 12, tail_my);
	_mav_put_int16_t(buf, 14, tail_mz);
	_mav_put_int16_t(buf, 16, wing_mx);
	_mav_put_int16_t(buf, 18, wing_my);
	_mav_put_int16_t(buf, 20, wing_mz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, buf, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
#else
	mavlink_mag_debug_t *packet = (mavlink_mag_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->imu_mx = imu_mx;
	packet->imu_my = imu_my;
	packet->imu_mz = imu_mz;
	packet->tail_mx = tail_mx;
	packet->tail_my = tail_my;
	packet->tail_mz = tail_mz;
	packet->wing_mx = wing_mx;
	packet->wing_my = wing_my;
	packet->wing_mz = wing_mz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, (const char *)packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN, MAVLINK_MSG_ID_MAG_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_DEBUG, (const char *)packet, MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE MAG_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from mag_debug message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_mag_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field imu_mx from mag_debug message
 *
 * @return X Magnetic field (Mx*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_imu_mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field imu_my from mag_debug message
 *
 * @return Y Magnetic field (My*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_imu_my(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field imu_mz from mag_debug message
 *
 * @return Z Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_imu_mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field tail_mx from mag_debug message
 *
 * @return X Magnetic field (Mx*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_tail_mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field tail_my from mag_debug message
 *
 * @return Y Magnetic field (My*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_tail_my(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field tail_mz from mag_debug message
 *
 * @return Z Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_tail_mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field wing_mx from mag_debug message
 *
 * @return X Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_wing_mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field wing_my from mag_debug message
 *
 * @return Y Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_wing_my(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field wing_mz from mag_debug message
 *
 * @return Z Magnetic field (Mz*1000)
 */
static inline int16_t mavlink_msg_mag_debug_get_wing_mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Decode a mag_debug message into a struct
 *
 * @param msg The message to decode
 * @param mag_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_mag_debug_decode(const mavlink_message_t* msg, mavlink_mag_debug_t* mag_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	mag_debug->time_boot_ms = mavlink_msg_mag_debug_get_time_boot_ms(msg);
	mag_debug->imu_mx = mavlink_msg_mag_debug_get_imu_mx(msg);
	mag_debug->imu_my = mavlink_msg_mag_debug_get_imu_my(msg);
	mag_debug->imu_mz = mavlink_msg_mag_debug_get_imu_mz(msg);
	mag_debug->tail_mx = mavlink_msg_mag_debug_get_tail_mx(msg);
	mag_debug->tail_my = mavlink_msg_mag_debug_get_tail_my(msg);
	mag_debug->tail_mz = mavlink_msg_mag_debug_get_tail_mz(msg);
	mag_debug->wing_mx = mavlink_msg_mag_debug_get_wing_mx(msg);
	mag_debug->wing_my = mavlink_msg_mag_debug_get_wing_my(msg);
	mag_debug->wing_mz = mavlink_msg_mag_debug_get_wing_mz(msg);
#else
	memcpy(mag_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_MAG_DEBUG_LEN);
#endif
}
