// MESSAGE EKF_DEBUG PACKING

#define MAVLINK_MSG_ID_EKF_DEBUG 199

typedef struct __mavlink_ekf_debug_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 float GX_bias; /*< Estimated gyro x bias [deg/s]*/
 float GY_bias; /*< Estimated gyro y bias [deg/s]*/
 float GZ_bias; /*< Estimated gyro z bias [deg/s]*/
 float AX_error; /*< Measurement error ax [g]*/
 float AY_error; /*< Measurement error ay [g]*/
 float AZ_error; /*< Measurement error az [g]*/
 float MX_error; /*< Measurement error mx [Gauss]*/
 float MY_error; /*< Measurement error my [Gauss]*/
 float MZ_error; /*< Measurement error mz [Gauss]*/
} mavlink_ekf_debug_t;

#define MAVLINK_MSG_ID_EKF_DEBUG_LEN 40
#define MAVLINK_MSG_ID_199_LEN 40

#define MAVLINK_MSG_ID_EKF_DEBUG_CRC 46
#define MAVLINK_MSG_ID_199_CRC 46



#define MAVLINK_MESSAGE_INFO_EKF_DEBUG { \
	"EKF_DEBUG", \
	10, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_debug_t, time_boot_ms) }, \
         { "GX_bias", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ekf_debug_t, GX_bias) }, \
         { "GY_bias", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ekf_debug_t, GY_bias) }, \
         { "GZ_bias", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ekf_debug_t, GZ_bias) }, \
         { "AX_error", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ekf_debug_t, AX_error) }, \
         { "AY_error", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ekf_debug_t, AY_error) }, \
         { "AZ_error", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ekf_debug_t, AZ_error) }, \
         { "MX_error", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ekf_debug_t, MX_error) }, \
         { "MY_error", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ekf_debug_t, MY_error) }, \
         { "MZ_error", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ekf_debug_t, MZ_error) }, \
         } \
}


/**
 * @brief Pack a ekf_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GX_bias Estimated gyro x bias [deg/s]
 * @param GY_bias Estimated gyro y bias [deg/s]
 * @param GZ_bias Estimated gyro z bias [deg/s]
 * @param AX_error Measurement error ax [g]
 * @param AY_error Measurement error ay [g]
 * @param AZ_error Measurement error az [g]
 * @param MX_error Measurement error mx [Gauss]
 * @param MY_error Measurement error my [Gauss]
 * @param MZ_error Measurement error mz [Gauss]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float GX_bias, float GY_bias, float GZ_bias, float AX_error, float AY_error, float AZ_error, float MX_error, float MY_error, float MZ_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, GX_bias);
	_mav_put_float(buf, 8, GY_bias);
	_mav_put_float(buf, 12, GZ_bias);
	_mav_put_float(buf, 16, AX_error);
	_mav_put_float(buf, 20, AY_error);
	_mav_put_float(buf, 24, AZ_error);
	_mav_put_float(buf, 28, MX_error);
	_mav_put_float(buf, 32, MY_error);
	_mav_put_float(buf, 36, MZ_error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
	mavlink_ekf_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GX_bias = GX_bias;
	packet.GY_bias = GY_bias;
	packet.GZ_bias = GZ_bias;
	packet.AX_error = AX_error;
	packet.AY_error = AY_error;
	packet.AZ_error = AZ_error;
	packet.MX_error = MX_error;
	packet.MY_error = MY_error;
	packet.MZ_error = MZ_error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a ekf_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GX_bias Estimated gyro x bias [deg/s]
 * @param GY_bias Estimated gyro y bias [deg/s]
 * @param GZ_bias Estimated gyro z bias [deg/s]
 * @param AX_error Measurement error ax [g]
 * @param AY_error Measurement error ay [g]
 * @param AZ_error Measurement error az [g]
 * @param MX_error Measurement error mx [Gauss]
 * @param MY_error Measurement error my [Gauss]
 * @param MZ_error Measurement error mz [Gauss]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float GX_bias,float GY_bias,float GZ_bias,float AX_error,float AY_error,float AZ_error,float MX_error,float MY_error,float MZ_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, GX_bias);
	_mav_put_float(buf, 8, GY_bias);
	_mav_put_float(buf, 12, GZ_bias);
	_mav_put_float(buf, 16, AX_error);
	_mav_put_float(buf, 20, AY_error);
	_mav_put_float(buf, 24, AZ_error);
	_mav_put_float(buf, 28, MX_error);
	_mav_put_float(buf, 32, MY_error);
	_mav_put_float(buf, 36, MZ_error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
	mavlink_ekf_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GX_bias = GX_bias;
	packet.GY_bias = GY_bias;
	packet.GZ_bias = GZ_bias;
	packet.AX_error = AX_error;
	packet.AY_error = AY_error;
	packet.AZ_error = AZ_error;
	packet.MX_error = MX_error;
	packet.MY_error = MY_error;
	packet.MZ_error = MZ_error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a ekf_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ekf_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ekf_debug_t* ekf_debug)
{
	return mavlink_msg_ekf_debug_pack(system_id, component_id, msg, ekf_debug->time_boot_ms, ekf_debug->GX_bias, ekf_debug->GY_bias, ekf_debug->GZ_bias, ekf_debug->AX_error, ekf_debug->AY_error, ekf_debug->AZ_error, ekf_debug->MX_error, ekf_debug->MY_error, ekf_debug->MZ_error);
}

/**
 * @brief Encode a ekf_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ekf_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ekf_debug_t* ekf_debug)
{
	return mavlink_msg_ekf_debug_pack_chan(system_id, component_id, chan, msg, ekf_debug->time_boot_ms, ekf_debug->GX_bias, ekf_debug->GY_bias, ekf_debug->GZ_bias, ekf_debug->AX_error, ekf_debug->AY_error, ekf_debug->AZ_error, ekf_debug->MX_error, ekf_debug->MY_error, ekf_debug->MZ_error);
}

/**
 * @brief Send a ekf_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GX_bias Estimated gyro x bias [deg/s]
 * @param GY_bias Estimated gyro y bias [deg/s]
 * @param GZ_bias Estimated gyro z bias [deg/s]
 * @param AX_error Measurement error ax [g]
 * @param AY_error Measurement error ay [g]
 * @param AZ_error Measurement error az [g]
 * @param MX_error Measurement error mx [Gauss]
 * @param MY_error Measurement error my [Gauss]
 * @param MZ_error Measurement error mz [Gauss]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, float GX_bias, float GY_bias, float GZ_bias, float AX_error, float AY_error, float AZ_error, float MX_error, float MY_error, float MZ_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, GX_bias);
	_mav_put_float(buf, 8, GY_bias);
	_mav_put_float(buf, 12, GZ_bias);
	_mav_put_float(buf, 16, AX_error);
	_mav_put_float(buf, 20, AY_error);
	_mav_put_float(buf, 24, AZ_error);
	_mav_put_float(buf, 28, MX_error);
	_mav_put_float(buf, 32, MY_error);
	_mav_put_float(buf, 36, MZ_error);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
#else
	mavlink_ekf_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GX_bias = GX_bias;
	packet.GY_bias = GY_bias;
	packet.GZ_bias = GZ_bias;
	packet.AX_error = AX_error;
	packet.AY_error = AY_error;
	packet.AZ_error = AZ_error;
	packet.MX_error = MX_error;
	packet.MY_error = MY_error;
	packet.MZ_error = MZ_error;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_EKF_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ekf_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float GX_bias, float GY_bias, float GZ_bias, float AX_error, float AY_error, float AZ_error, float MX_error, float MY_error, float MZ_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, GX_bias);
	_mav_put_float(buf, 8, GY_bias);
	_mav_put_float(buf, 12, GZ_bias);
	_mav_put_float(buf, 16, AX_error);
	_mav_put_float(buf, 20, AY_error);
	_mav_put_float(buf, 24, AZ_error);
	_mav_put_float(buf, 28, MX_error);
	_mav_put_float(buf, 32, MY_error);
	_mav_put_float(buf, 36, MZ_error);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
#else
	mavlink_ekf_debug_t *packet = (mavlink_ekf_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->GX_bias = GX_bias;
	packet->GY_bias = GY_bias;
	packet->GZ_bias = GZ_bias;
	packet->AX_error = AX_error;
	packet->AY_error = AY_error;
	packet->AZ_error = AZ_error;
	packet->MX_error = MX_error;
	packet->MY_error = MY_error;
	packet->MZ_error = MZ_error;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE EKF_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from ekf_debug message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_ekf_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field GX_bias from ekf_debug message
 *
 * @return Estimated gyro x bias [deg/s]
 */
static inline float mavlink_msg_ekf_debug_get_GX_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field GY_bias from ekf_debug message
 *
 * @return Estimated gyro y bias [deg/s]
 */
static inline float mavlink_msg_ekf_debug_get_GY_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field GZ_bias from ekf_debug message
 *
 * @return Estimated gyro z bias [deg/s]
 */
static inline float mavlink_msg_ekf_debug_get_GZ_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field AX_error from ekf_debug message
 *
 * @return Measurement error ax [g]
 */
static inline float mavlink_msg_ekf_debug_get_AX_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field AY_error from ekf_debug message
 *
 * @return Measurement error ay [g]
 */
static inline float mavlink_msg_ekf_debug_get_AY_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field AZ_error from ekf_debug message
 *
 * @return Measurement error az [g]
 */
static inline float mavlink_msg_ekf_debug_get_AZ_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field MX_error from ekf_debug message
 *
 * @return Measurement error mx [Gauss]
 */
static inline float mavlink_msg_ekf_debug_get_MX_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field MY_error from ekf_debug message
 *
 * @return Measurement error my [Gauss]
 */
static inline float mavlink_msg_ekf_debug_get_MY_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field MZ_error from ekf_debug message
 *
 * @return Measurement error mz [Gauss]
 */
static inline float mavlink_msg_ekf_debug_get_MZ_error(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a ekf_debug message into a struct
 *
 * @param msg The message to decode
 * @param ekf_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_ekf_debug_decode(const mavlink_message_t* msg, mavlink_ekf_debug_t* ekf_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	ekf_debug->time_boot_ms = mavlink_msg_ekf_debug_get_time_boot_ms(msg);
	ekf_debug->GX_bias = mavlink_msg_ekf_debug_get_GX_bias(msg);
	ekf_debug->GY_bias = mavlink_msg_ekf_debug_get_GY_bias(msg);
	ekf_debug->GZ_bias = mavlink_msg_ekf_debug_get_GZ_bias(msg);
	ekf_debug->AX_error = mavlink_msg_ekf_debug_get_AX_error(msg);
	ekf_debug->AY_error = mavlink_msg_ekf_debug_get_AY_error(msg);
	ekf_debug->AZ_error = mavlink_msg_ekf_debug_get_AZ_error(msg);
	ekf_debug->MX_error = mavlink_msg_ekf_debug_get_MX_error(msg);
	ekf_debug->MY_error = mavlink_msg_ekf_debug_get_MY_error(msg);
	ekf_debug->MZ_error = mavlink_msg_ekf_debug_get_MZ_error(msg);
#else
	memcpy(ekf_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
}
