// MESSAGE ACCEL_DEBUG PACKING

#define MAVLINK_MSG_ID_ACCEL_DEBUG 238

typedef struct __mavlink_accel_debug_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 int16_t imu_ax; ///< X acceleration (mg)
 int16_t imu_ay; ///< Y acceleration (mg)
 int16_t imu_az; ///< Z acceleration (mg)
 int16_t tail_ax; ///< X acceleration (mg)
 int16_t tail_ay; ///< Y acceleration (mg)
 int16_t tail_az; ///< Z acceleration (mg)
 int16_t wing_ax; ///< X acceleration (mg)
 int16_t wing_ay; ///< Y acceleration (mg)
 int16_t wing_az; ///< Z acceleration (mg)
 int16_t aird_ax; ///< X acceleration (mg)
 int16_t aird_ay; ///< Y acceleration (mg)
 int16_t aird_az; ///< Z acceleration (mg)
} mavlink_accel_debug_t;

#define MAVLINK_MSG_ID_ACCEL_DEBUG_LEN 28
#define MAVLINK_MSG_ID_238_LEN 28

#define MAVLINK_MSG_ID_ACCEL_DEBUG_CRC 57
#define MAVLINK_MSG_ID_238_CRC 57



#define MAVLINK_MESSAGE_INFO_ACCEL_DEBUG { \
	"ACCEL_DEBUG", \
	13, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_accel_debug_t, time_boot_ms) }, \
         { "imu_ax", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_accel_debug_t, imu_ax) }, \
         { "imu_ay", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_accel_debug_t, imu_ay) }, \
         { "imu_az", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_accel_debug_t, imu_az) }, \
         { "tail_ax", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_accel_debug_t, tail_ax) }, \
         { "tail_ay", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_accel_debug_t, tail_ay) }, \
         { "tail_az", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_accel_debug_t, tail_az) }, \
         { "wing_ax", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_accel_debug_t, wing_ax) }, \
         { "wing_ay", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_accel_debug_t, wing_ay) }, \
         { "wing_az", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_accel_debug_t, wing_az) }, \
         { "aird_ax", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_accel_debug_t, aird_ax) }, \
         { "aird_ay", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_accel_debug_t, aird_ay) }, \
         { "aird_az", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_accel_debug_t, aird_az) }, \
         } \
}


/**
 * @brief Pack a accel_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_ax X acceleration (mg)
 * @param imu_ay Y acceleration (mg)
 * @param imu_az Z acceleration (mg)
 * @param tail_ax X acceleration (mg)
 * @param tail_ay Y acceleration (mg)
 * @param tail_az Z acceleration (mg)
 * @param wing_ax X acceleration (mg)
 * @param wing_ay Y acceleration (mg)
 * @param wing_az Z acceleration (mg)
 * @param aird_ax X acceleration (mg)
 * @param aird_ay Y acceleration (mg)
 * @param aird_az Z acceleration (mg)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_accel_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t imu_ax, int16_t imu_ay, int16_t imu_az, int16_t tail_ax, int16_t tail_ay, int16_t tail_az, int16_t wing_ax, int16_t wing_ay, int16_t wing_az, int16_t aird_ax, int16_t aird_ay, int16_t aird_az)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCEL_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_ax);
	_mav_put_int16_t(buf, 6, imu_ay);
	_mav_put_int16_t(buf, 8, imu_az);
	_mav_put_int16_t(buf, 10, tail_ax);
	_mav_put_int16_t(buf, 12, tail_ay);
	_mav_put_int16_t(buf, 14, tail_az);
	_mav_put_int16_t(buf, 16, wing_ax);
	_mav_put_int16_t(buf, 18, wing_ay);
	_mav_put_int16_t(buf, 20, wing_az);
	_mav_put_int16_t(buf, 22, aird_ax);
	_mav_put_int16_t(buf, 24, aird_ay);
	_mav_put_int16_t(buf, 26, aird_az);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#else
	mavlink_accel_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_ax = imu_ax;
	packet.imu_ay = imu_ay;
	packet.imu_az = imu_az;
	packet.tail_ax = tail_ax;
	packet.tail_ay = tail_ay;
	packet.tail_az = tail_az;
	packet.wing_ax = wing_ax;
	packet.wing_ay = wing_ay;
	packet.wing_az = wing_az;
	packet.aird_ax = aird_ax;
	packet.aird_ay = aird_ay;
	packet.aird_az = aird_az;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACCEL_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a accel_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_ax X acceleration (mg)
 * @param imu_ay Y acceleration (mg)
 * @param imu_az Z acceleration (mg)
 * @param tail_ax X acceleration (mg)
 * @param tail_ay Y acceleration (mg)
 * @param tail_az Z acceleration (mg)
 * @param wing_ax X acceleration (mg)
 * @param wing_ay Y acceleration (mg)
 * @param wing_az Z acceleration (mg)
 * @param aird_ax X acceleration (mg)
 * @param aird_ay Y acceleration (mg)
 * @param aird_az Z acceleration (mg)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_accel_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t imu_ax,int16_t imu_ay,int16_t imu_az,int16_t tail_ax,int16_t tail_ay,int16_t tail_az,int16_t wing_ax,int16_t wing_ay,int16_t wing_az,int16_t aird_ax,int16_t aird_ay,int16_t aird_az)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCEL_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_ax);
	_mav_put_int16_t(buf, 6, imu_ay);
	_mav_put_int16_t(buf, 8, imu_az);
	_mav_put_int16_t(buf, 10, tail_ax);
	_mav_put_int16_t(buf, 12, tail_ay);
	_mav_put_int16_t(buf, 14, tail_az);
	_mav_put_int16_t(buf, 16, wing_ax);
	_mav_put_int16_t(buf, 18, wing_ay);
	_mav_put_int16_t(buf, 20, wing_az);
	_mav_put_int16_t(buf, 22, aird_ax);
	_mav_put_int16_t(buf, 24, aird_ay);
	_mav_put_int16_t(buf, 26, aird_az);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#else
	mavlink_accel_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_ax = imu_ax;
	packet.imu_ay = imu_ay;
	packet.imu_az = imu_az;
	packet.tail_ax = tail_ax;
	packet.tail_ay = tail_ay;
	packet.tail_az = tail_az;
	packet.wing_ax = wing_ax;
	packet.wing_ay = wing_ay;
	packet.wing_az = wing_az;
	packet.aird_ax = aird_ax;
	packet.aird_ay = aird_ay;
	packet.aird_az = aird_az;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ACCEL_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a accel_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param accel_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_accel_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_accel_debug_t* accel_debug)
{
	return mavlink_msg_accel_debug_pack(system_id, component_id, msg, accel_debug->time_boot_ms, accel_debug->imu_ax, accel_debug->imu_ay, accel_debug->imu_az, accel_debug->tail_ax, accel_debug->tail_ay, accel_debug->tail_az, accel_debug->wing_ax, accel_debug->wing_ay, accel_debug->wing_az, accel_debug->aird_ax, accel_debug->aird_ay, accel_debug->aird_az);
}

/**
 * @brief Encode a accel_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param accel_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_accel_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_accel_debug_t* accel_debug)
{
	return mavlink_msg_accel_debug_pack_chan(system_id, component_id, chan, msg, accel_debug->time_boot_ms, accel_debug->imu_ax, accel_debug->imu_ay, accel_debug->imu_az, accel_debug->tail_ax, accel_debug->tail_ay, accel_debug->tail_az, accel_debug->wing_ax, accel_debug->wing_ay, accel_debug->wing_az, accel_debug->aird_ax, accel_debug->aird_ay, accel_debug->aird_az);
}

/**
 * @brief Send a accel_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param imu_ax X acceleration (mg)
 * @param imu_ay Y acceleration (mg)
 * @param imu_az Z acceleration (mg)
 * @param tail_ax X acceleration (mg)
 * @param tail_ay Y acceleration (mg)
 * @param tail_az Z acceleration (mg)
 * @param wing_ax X acceleration (mg)
 * @param wing_ay Y acceleration (mg)
 * @param wing_az Z acceleration (mg)
 * @param aird_ax X acceleration (mg)
 * @param aird_ay Y acceleration (mg)
 * @param aird_az Z acceleration (mg)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_accel_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t imu_ax, int16_t imu_ay, int16_t imu_az, int16_t tail_ax, int16_t tail_ay, int16_t tail_az, int16_t wing_ax, int16_t wing_ay, int16_t wing_az, int16_t aird_ax, int16_t aird_ay, int16_t aird_az)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ACCEL_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_ax);
	_mav_put_int16_t(buf, 6, imu_ay);
	_mav_put_int16_t(buf, 8, imu_az);
	_mav_put_int16_t(buf, 10, tail_ax);
	_mav_put_int16_t(buf, 12, tail_ay);
	_mav_put_int16_t(buf, 14, tail_az);
	_mav_put_int16_t(buf, 16, wing_ax);
	_mav_put_int16_t(buf, 18, wing_ay);
	_mav_put_int16_t(buf, 20, wing_az);
	_mav_put_int16_t(buf, 22, aird_ax);
	_mav_put_int16_t(buf, 24, aird_ay);
	_mav_put_int16_t(buf, 26, aird_az);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
#else
	mavlink_accel_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.imu_ax = imu_ax;
	packet.imu_ay = imu_ay;
	packet.imu_az = imu_az;
	packet.tail_ax = tail_ax;
	packet.tail_ay = tail_ay;
	packet.tail_az = tail_az;
	packet.wing_ax = wing_ax;
	packet.wing_ay = wing_ay;
	packet.wing_az = wing_az;
	packet.aird_ax = aird_ax;
	packet.aird_ay = aird_ay;
	packet.aird_az = aird_az;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ACCEL_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_accel_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t imu_ax, int16_t imu_ay, int16_t imu_az, int16_t tail_ax, int16_t tail_ay, int16_t tail_az, int16_t wing_ax, int16_t wing_ay, int16_t wing_az, int16_t aird_ax, int16_t aird_ay, int16_t aird_az)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, imu_ax);
	_mav_put_int16_t(buf, 6, imu_ay);
	_mav_put_int16_t(buf, 8, imu_az);
	_mav_put_int16_t(buf, 10, tail_ax);
	_mav_put_int16_t(buf, 12, tail_ay);
	_mav_put_int16_t(buf, 14, tail_az);
	_mav_put_int16_t(buf, 16, wing_ax);
	_mav_put_int16_t(buf, 18, wing_ay);
	_mav_put_int16_t(buf, 20, wing_az);
	_mav_put_int16_t(buf, 22, aird_ax);
	_mav_put_int16_t(buf, 24, aird_ay);
	_mav_put_int16_t(buf, 26, aird_az);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, buf, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
#else
	mavlink_accel_debug_t *packet = (mavlink_accel_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->imu_ax = imu_ax;
	packet->imu_ay = imu_ay;
	packet->imu_az = imu_az;
	packet->tail_ax = tail_ax;
	packet->tail_ay = tail_ay;
	packet->tail_az = tail_az;
	packet->wing_ax = wing_ax;
	packet->wing_ay = wing_ay;
	packet->wing_az = wing_az;
	packet->aird_ax = aird_ax;
	packet->aird_ay = aird_ay;
	packet->aird_az = aird_az;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, (const char *)packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN, MAVLINK_MSG_ID_ACCEL_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACCEL_DEBUG, (const char *)packet, MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ACCEL_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from accel_debug message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_accel_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field imu_ax from accel_debug message
 *
 * @return X acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_imu_ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field imu_ay from accel_debug message
 *
 * @return Y acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_imu_ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field imu_az from accel_debug message
 *
 * @return Z acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_imu_az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field tail_ax from accel_debug message
 *
 * @return X acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_tail_ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field tail_ay from accel_debug message
 *
 * @return Y acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_tail_ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field tail_az from accel_debug message
 *
 * @return Z acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_tail_az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field wing_ax from accel_debug message
 *
 * @return X acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_wing_ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field wing_ay from accel_debug message
 *
 * @return Y acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_wing_ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field wing_az from accel_debug message
 *
 * @return Z acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_wing_az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field aird_ax from accel_debug message
 *
 * @return X acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_aird_ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field aird_ay from accel_debug message
 *
 * @return Y acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_aird_ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field aird_az from accel_debug message
 *
 * @return Z acceleration (mg)
 */
static inline int16_t mavlink_msg_accel_debug_get_aird_az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Decode a accel_debug message into a struct
 *
 * @param msg The message to decode
 * @param accel_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_accel_debug_decode(const mavlink_message_t* msg, mavlink_accel_debug_t* accel_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	accel_debug->time_boot_ms = mavlink_msg_accel_debug_get_time_boot_ms(msg);
	accel_debug->imu_ax = mavlink_msg_accel_debug_get_imu_ax(msg);
	accel_debug->imu_ay = mavlink_msg_accel_debug_get_imu_ay(msg);
	accel_debug->imu_az = mavlink_msg_accel_debug_get_imu_az(msg);
	accel_debug->tail_ax = mavlink_msg_accel_debug_get_tail_ax(msg);
	accel_debug->tail_ay = mavlink_msg_accel_debug_get_tail_ay(msg);
	accel_debug->tail_az = mavlink_msg_accel_debug_get_tail_az(msg);
	accel_debug->wing_ax = mavlink_msg_accel_debug_get_wing_ax(msg);
	accel_debug->wing_ay = mavlink_msg_accel_debug_get_wing_ay(msg);
	accel_debug->wing_az = mavlink_msg_accel_debug_get_wing_az(msg);
	accel_debug->aird_ax = mavlink_msg_accel_debug_get_aird_ax(msg);
	accel_debug->aird_ay = mavlink_msg_accel_debug_get_aird_ay(msg);
	accel_debug->aird_az = mavlink_msg_accel_debug_get_aird_az(msg);
#else
	memcpy(accel_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ACCEL_DEBUG_LEN);
#endif
}
