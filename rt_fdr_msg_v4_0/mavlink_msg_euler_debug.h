// MESSAGE EULER_DEBUG PACKING

#define MAVLINK_MSG_ID_EULER_DEBUG 230

typedef struct __mavlink_euler_debug_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 float IMU_roll; ///< IMU roll in deg
 float IMU_pitch; ///< IMU pitch in deg
 float IMU_yaw; ///< IMU yaw in deg
 float GBL_roll; ///< Gimbal roll in deg
 float GBL_pitch; ///< Gimbal pitch in deg
 float GBL_yaw; ///< Gimbal yaw in deg
} mavlink_euler_debug_t;

#define MAVLINK_MSG_ID_EULER_DEBUG_LEN 28
#define MAVLINK_MSG_ID_230_LEN 28

#define MAVLINK_MSG_ID_EULER_DEBUG_CRC 25
#define MAVLINK_MSG_ID_230_CRC 25



#define MAVLINK_MESSAGE_INFO_EULER_DEBUG { \
	"EULER_DEBUG", \
	7, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_euler_debug_t, time_boot_ms) }, \
         { "IMU_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_euler_debug_t, IMU_roll) }, \
         { "IMU_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_euler_debug_t, IMU_pitch) }, \
         { "IMU_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_euler_debug_t, IMU_yaw) }, \
         { "GBL_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_euler_debug_t, GBL_roll) }, \
         { "GBL_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_euler_debug_t, GBL_pitch) }, \
         { "GBL_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_euler_debug_t, GBL_yaw) }, \
         } \
}


/**
 * @brief Pack a euler_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param IMU_roll IMU roll in deg
 * @param IMU_pitch IMU pitch in deg
 * @param IMU_yaw IMU yaw in deg
 * @param GBL_roll Gimbal roll in deg
 * @param GBL_pitch Gimbal pitch in deg
 * @param GBL_yaw Gimbal yaw in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_euler_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float IMU_roll, float IMU_pitch, float IMU_yaw, float GBL_roll, float GBL_pitch, float GBL_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EULER_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, IMU_roll);
	_mav_put_float(buf, 8, IMU_pitch);
	_mav_put_float(buf, 12, IMU_yaw);
	_mav_put_float(buf, 16, GBL_roll);
	_mav_put_float(buf, 20, GBL_pitch);
	_mav_put_float(buf, 24, GBL_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#else
	mavlink_euler_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.IMU_roll = IMU_roll;
	packet.IMU_pitch = IMU_pitch;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_pitch = GBL_pitch;
	packet.GBL_yaw = GBL_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EULER_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a euler_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param IMU_roll IMU roll in deg
 * @param IMU_pitch IMU pitch in deg
 * @param IMU_yaw IMU yaw in deg
 * @param GBL_roll Gimbal roll in deg
 * @param GBL_pitch Gimbal pitch in deg
 * @param GBL_yaw Gimbal yaw in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_euler_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float IMU_roll,float IMU_pitch,float IMU_yaw,float GBL_roll,float GBL_pitch,float GBL_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EULER_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, IMU_roll);
	_mav_put_float(buf, 8, IMU_pitch);
	_mav_put_float(buf, 12, IMU_yaw);
	_mav_put_float(buf, 16, GBL_roll);
	_mav_put_float(buf, 20, GBL_pitch);
	_mav_put_float(buf, 24, GBL_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#else
	mavlink_euler_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.IMU_roll = IMU_roll;
	packet.IMU_pitch = IMU_pitch;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_pitch = GBL_pitch;
	packet.GBL_yaw = GBL_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EULER_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a euler_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param euler_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_euler_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_euler_debug_t* euler_debug)
{
	return mavlink_msg_euler_debug_pack(system_id, component_id, msg, euler_debug->time_boot_ms, euler_debug->IMU_roll, euler_debug->IMU_pitch, euler_debug->IMU_yaw, euler_debug->GBL_roll, euler_debug->GBL_pitch, euler_debug->GBL_yaw);
}

/**
 * @brief Encode a euler_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param euler_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_euler_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_euler_debug_t* euler_debug)
{
	return mavlink_msg_euler_debug_pack_chan(system_id, component_id, chan, msg, euler_debug->time_boot_ms, euler_debug->IMU_roll, euler_debug->IMU_pitch, euler_debug->IMU_yaw, euler_debug->GBL_roll, euler_debug->GBL_pitch, euler_debug->GBL_yaw);
}

/**
 * @brief Send a euler_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param IMU_roll IMU roll in deg
 * @param IMU_pitch IMU pitch in deg
 * @param IMU_yaw IMU yaw in deg
 * @param GBL_roll Gimbal roll in deg
 * @param GBL_pitch Gimbal pitch in deg
 * @param GBL_yaw Gimbal yaw in deg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_euler_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, float IMU_roll, float IMU_pitch, float IMU_yaw, float GBL_roll, float GBL_pitch, float GBL_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EULER_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, IMU_roll);
	_mav_put_float(buf, 8, IMU_pitch);
	_mav_put_float(buf, 12, IMU_yaw);
	_mav_put_float(buf, 16, GBL_roll);
	_mav_put_float(buf, 20, GBL_pitch);
	_mav_put_float(buf, 24, GBL_yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
#else
	mavlink_euler_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.IMU_roll = IMU_roll;
	packet.IMU_pitch = IMU_pitch;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_pitch = GBL_pitch;
	packet.GBL_yaw = GBL_yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_EULER_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_euler_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float IMU_roll, float IMU_pitch, float IMU_yaw, float GBL_roll, float GBL_pitch, float GBL_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, IMU_roll);
	_mav_put_float(buf, 8, IMU_pitch);
	_mav_put_float(buf, 12, IMU_yaw);
	_mav_put_float(buf, 16, GBL_roll);
	_mav_put_float(buf, 20, GBL_pitch);
	_mav_put_float(buf, 24, GBL_yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, buf, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
#else
	mavlink_euler_debug_t *packet = (mavlink_euler_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->IMU_roll = IMU_roll;
	packet->IMU_pitch = IMU_pitch;
	packet->IMU_yaw = IMU_yaw;
	packet->GBL_roll = GBL_roll;
	packet->GBL_pitch = GBL_pitch;
	packet->GBL_yaw = GBL_yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, (const char *)packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN, MAVLINK_MSG_ID_EULER_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EULER_DEBUG, (const char *)packet, MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE EULER_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from euler_debug message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_euler_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field IMU_roll from euler_debug message
 *
 * @return IMU roll in deg
 */
static inline float mavlink_msg_euler_debug_get_IMU_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field IMU_pitch from euler_debug message
 *
 * @return IMU pitch in deg
 */
static inline float mavlink_msg_euler_debug_get_IMU_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field IMU_yaw from euler_debug message
 *
 * @return IMU yaw in deg
 */
static inline float mavlink_msg_euler_debug_get_IMU_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field GBL_roll from euler_debug message
 *
 * @return Gimbal roll in deg
 */
static inline float mavlink_msg_euler_debug_get_GBL_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field GBL_pitch from euler_debug message
 *
 * @return Gimbal pitch in deg
 */
static inline float mavlink_msg_euler_debug_get_GBL_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field GBL_yaw from euler_debug message
 *
 * @return Gimbal yaw in deg
 */
static inline float mavlink_msg_euler_debug_get_GBL_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a euler_debug message into a struct
 *
 * @param msg The message to decode
 * @param euler_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_euler_debug_decode(const mavlink_message_t* msg, mavlink_euler_debug_t* euler_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	euler_debug->time_boot_ms = mavlink_msg_euler_debug_get_time_boot_ms(msg);
	euler_debug->IMU_roll = mavlink_msg_euler_debug_get_IMU_roll(msg);
	euler_debug->IMU_pitch = mavlink_msg_euler_debug_get_IMU_pitch(msg);
	euler_debug->IMU_yaw = mavlink_msg_euler_debug_get_IMU_yaw(msg);
	euler_debug->GBL_roll = mavlink_msg_euler_debug_get_GBL_roll(msg);
	euler_debug->GBL_pitch = mavlink_msg_euler_debug_get_GBL_pitch(msg);
	euler_debug->GBL_yaw = mavlink_msg_euler_debug_get_GBL_yaw(msg);
#else
	memcpy(euler_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EULER_DEBUG_LEN);
#endif
}
