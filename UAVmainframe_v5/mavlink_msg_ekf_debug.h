// MESSAGE EKF_DEBUG PACKING

#define MAVLINK_MSG_ID_EKF_DEBUG 199

typedef struct __mavlink_ekf_debug_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 int16_t GX_bias; /*< Estimated gyro x bias [deg/s]*/
 int16_t GY_bias; /*< Estimated gyro y bias [deg/s]*/
 int16_t GZ_bias; /*< Estimated gyro z bias [deg/s]*/
 int16_t AX_bias; /*< Estimated ax bias [mg]*/
 int16_t AY_bias; /*< Estimated ay bias [mg]*/
 int16_t AZ_bias; /*< Estimated az bias [mg]*/
 int16_t MX_bias; /*< Estimated mx bias [mG]*/
 int16_t MY_bias; /*< Estimated my bias [mG]*/
 int16_t MZ_bias; /*< Estimated mz bias [mG]*/
 int16_t Vair_bias; /*< Estimated Vair bias [mg]*/
 int16_t AoA_bias; /*< Estimated aoa bias [mg]*/
 int16_t CW_bias; /*< Estimated cw bias [mg]*/
 int16_t Alt_bias; /*< Estimated alt bias [mg]*/
 int16_t Vair_scale; /*< Estimated Vair scale [mg]*/
 int16_t AoA_scale; /*< Estimated aoa scale [mg]*/
 int16_t CW_scale; /*< Estimated cw scale [mg]*/
} mavlink_ekf_debug_t;

#define MAVLINK_MSG_ID_EKF_DEBUG_LEN 36
#define MAVLINK_MSG_ID_199_LEN 36

#define MAVLINK_MSG_ID_EKF_DEBUG_CRC 239
#define MAVLINK_MSG_ID_199_CRC 239



#define MAVLINK_MESSAGE_INFO_EKF_DEBUG { \
	"EKF_DEBUG", \
	17, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_debug_t, time_boot_ms) }, \
         { "GX_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ekf_debug_t, GX_bias) }, \
         { "GY_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ekf_debug_t, GY_bias) }, \
         { "GZ_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ekf_debug_t, GZ_bias) }, \
         { "AX_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ekf_debug_t, AX_bias) }, \
         { "AY_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ekf_debug_t, AY_bias) }, \
         { "AZ_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ekf_debug_t, AZ_bias) }, \
         { "MX_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_debug_t, MX_bias) }, \
         { "MY_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_debug_t, MY_bias) }, \
         { "MZ_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_debug_t, MZ_bias) }, \
         { "Vair_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ekf_debug_t, Vair_bias) }, \
         { "AoA_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ekf_debug_t, AoA_bias) }, \
         { "CW_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ekf_debug_t, CW_bias) }, \
         { "Alt_bias", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ekf_debug_t, Alt_bias) }, \
         { "Vair_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_ekf_debug_t, Vair_scale) }, \
         { "AoA_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_ekf_debug_t, AoA_scale) }, \
         { "CW_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_ekf_debug_t, CW_scale) }, \
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
 * @param AX_bias Estimated ax bias [mg]
 * @param AY_bias Estimated ay bias [mg]
 * @param AZ_bias Estimated az bias [mg]
 * @param MX_bias Estimated mx bias [mG]
 * @param MY_bias Estimated my bias [mG]
 * @param MZ_bias Estimated mz bias [mG]
 * @param Vair_bias Estimated Vair bias [mg]
 * @param AoA_bias Estimated aoa bias [mg]
 * @param CW_bias Estimated cw bias [mg]
 * @param Alt_bias Estimated alt bias [mg]
 * @param Vair_scale Estimated Vair scale [mg]
 * @param AoA_scale Estimated aoa scale [mg]
 * @param CW_scale Estimated cw scale [mg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t GX_bias, int16_t GY_bias, int16_t GZ_bias, int16_t AX_bias, int16_t AY_bias, int16_t AZ_bias, int16_t MX_bias, int16_t MY_bias, int16_t MZ_bias, int16_t Vair_bias, int16_t AoA_bias, int16_t CW_bias, int16_t Alt_bias, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, GX_bias);
	_mav_put_int16_t(buf, 6, GY_bias);
	_mav_put_int16_t(buf, 8, GZ_bias);
	_mav_put_int16_t(buf, 10, AX_bias);
	_mav_put_int16_t(buf, 12, AY_bias);
	_mav_put_int16_t(buf, 14, AZ_bias);
	_mav_put_int16_t(buf, 16, MX_bias);
	_mav_put_int16_t(buf, 18, MY_bias);
	_mav_put_int16_t(buf, 20, MZ_bias);
	_mav_put_int16_t(buf, 22, Vair_bias);
	_mav_put_int16_t(buf, 24, AoA_bias);
	_mav_put_int16_t(buf, 26, CW_bias);
	_mav_put_int16_t(buf, 28, Alt_bias);
	_mav_put_int16_t(buf, 30, Vair_scale);
	_mav_put_int16_t(buf, 32, AoA_scale);
	_mav_put_int16_t(buf, 34, CW_scale);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
	mavlink_ekf_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GX_bias = GX_bias;
	packet.GY_bias = GY_bias;
	packet.GZ_bias = GZ_bias;
	packet.AX_bias = AX_bias;
	packet.AY_bias = AY_bias;
	packet.AZ_bias = AZ_bias;
	packet.MX_bias = MX_bias;
	packet.MY_bias = MY_bias;
	packet.MZ_bias = MZ_bias;
	packet.Vair_bias = Vair_bias;
	packet.AoA_bias = AoA_bias;
	packet.CW_bias = CW_bias;
	packet.Alt_bias = Alt_bias;
	packet.Vair_scale = Vair_scale;
	packet.AoA_scale = AoA_scale;
	packet.CW_scale = CW_scale;

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
 * @param AX_bias Estimated ax bias [mg]
 * @param AY_bias Estimated ay bias [mg]
 * @param AZ_bias Estimated az bias [mg]
 * @param MX_bias Estimated mx bias [mG]
 * @param MY_bias Estimated my bias [mG]
 * @param MZ_bias Estimated mz bias [mG]
 * @param Vair_bias Estimated Vair bias [mg]
 * @param AoA_bias Estimated aoa bias [mg]
 * @param CW_bias Estimated cw bias [mg]
 * @param Alt_bias Estimated alt bias [mg]
 * @param Vair_scale Estimated Vair scale [mg]
 * @param AoA_scale Estimated aoa scale [mg]
 * @param CW_scale Estimated cw scale [mg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t GX_bias,int16_t GY_bias,int16_t GZ_bias,int16_t AX_bias,int16_t AY_bias,int16_t AZ_bias,int16_t MX_bias,int16_t MY_bias,int16_t MZ_bias,int16_t Vair_bias,int16_t AoA_bias,int16_t CW_bias,int16_t Alt_bias,int16_t Vair_scale,int16_t AoA_scale,int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, GX_bias);
	_mav_put_int16_t(buf, 6, GY_bias);
	_mav_put_int16_t(buf, 8, GZ_bias);
	_mav_put_int16_t(buf, 10, AX_bias);
	_mav_put_int16_t(buf, 12, AY_bias);
	_mav_put_int16_t(buf, 14, AZ_bias);
	_mav_put_int16_t(buf, 16, MX_bias);
	_mav_put_int16_t(buf, 18, MY_bias);
	_mav_put_int16_t(buf, 20, MZ_bias);
	_mav_put_int16_t(buf, 22, Vair_bias);
	_mav_put_int16_t(buf, 24, AoA_bias);
	_mav_put_int16_t(buf, 26, CW_bias);
	_mav_put_int16_t(buf, 28, Alt_bias);
	_mav_put_int16_t(buf, 30, Vair_scale);
	_mav_put_int16_t(buf, 32, AoA_scale);
	_mav_put_int16_t(buf, 34, CW_scale);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
	mavlink_ekf_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GX_bias = GX_bias;
	packet.GY_bias = GY_bias;
	packet.GZ_bias = GZ_bias;
	packet.AX_bias = AX_bias;
	packet.AY_bias = AY_bias;
	packet.AZ_bias = AZ_bias;
	packet.MX_bias = MX_bias;
	packet.MY_bias = MY_bias;
	packet.MZ_bias = MZ_bias;
	packet.Vair_bias = Vair_bias;
	packet.AoA_bias = AoA_bias;
	packet.CW_bias = CW_bias;
	packet.Alt_bias = Alt_bias;
	packet.Vair_scale = Vair_scale;
	packet.AoA_scale = AoA_scale;
	packet.CW_scale = CW_scale;

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
	return mavlink_msg_ekf_debug_pack(system_id, component_id, msg, ekf_debug->time_boot_ms, ekf_debug->GX_bias, ekf_debug->GY_bias, ekf_debug->GZ_bias, ekf_debug->AX_bias, ekf_debug->AY_bias, ekf_debug->AZ_bias, ekf_debug->MX_bias, ekf_debug->MY_bias, ekf_debug->MZ_bias, ekf_debug->Vair_bias, ekf_debug->AoA_bias, ekf_debug->CW_bias, ekf_debug->Alt_bias, ekf_debug->Vair_scale, ekf_debug->AoA_scale, ekf_debug->CW_scale);
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
	return mavlink_msg_ekf_debug_pack_chan(system_id, component_id, chan, msg, ekf_debug->time_boot_ms, ekf_debug->GX_bias, ekf_debug->GY_bias, ekf_debug->GZ_bias, ekf_debug->AX_bias, ekf_debug->AY_bias, ekf_debug->AZ_bias, ekf_debug->MX_bias, ekf_debug->MY_bias, ekf_debug->MZ_bias, ekf_debug->Vair_bias, ekf_debug->AoA_bias, ekf_debug->CW_bias, ekf_debug->Alt_bias, ekf_debug->Vair_scale, ekf_debug->AoA_scale, ekf_debug->CW_scale);
}

/**
 * @brief Send a ekf_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GX_bias Estimated gyro x bias [deg/s]
 * @param GY_bias Estimated gyro y bias [deg/s]
 * @param GZ_bias Estimated gyro z bias [deg/s]
 * @param AX_bias Estimated ax bias [mg]
 * @param AY_bias Estimated ay bias [mg]
 * @param AZ_bias Estimated az bias [mg]
 * @param MX_bias Estimated mx bias [mG]
 * @param MY_bias Estimated my bias [mG]
 * @param MZ_bias Estimated mz bias [mG]
 * @param Vair_bias Estimated Vair bias [mg]
 * @param AoA_bias Estimated aoa bias [mg]
 * @param CW_bias Estimated cw bias [mg]
 * @param Alt_bias Estimated alt bias [mg]
 * @param Vair_scale Estimated Vair scale [mg]
 * @param AoA_scale Estimated aoa scale [mg]
 * @param CW_scale Estimated cw scale [mg]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t GX_bias, int16_t GY_bias, int16_t GZ_bias, int16_t AX_bias, int16_t AY_bias, int16_t AZ_bias, int16_t MX_bias, int16_t MY_bias, int16_t MZ_bias, int16_t Vair_bias, int16_t AoA_bias, int16_t CW_bias, int16_t Alt_bias, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, GX_bias);
	_mav_put_int16_t(buf, 6, GY_bias);
	_mav_put_int16_t(buf, 8, GZ_bias);
	_mav_put_int16_t(buf, 10, AX_bias);
	_mav_put_int16_t(buf, 12, AY_bias);
	_mav_put_int16_t(buf, 14, AZ_bias);
	_mav_put_int16_t(buf, 16, MX_bias);
	_mav_put_int16_t(buf, 18, MY_bias);
	_mav_put_int16_t(buf, 20, MZ_bias);
	_mav_put_int16_t(buf, 22, Vair_bias);
	_mav_put_int16_t(buf, 24, AoA_bias);
	_mav_put_int16_t(buf, 26, CW_bias);
	_mav_put_int16_t(buf, 28, Alt_bias);
	_mav_put_int16_t(buf, 30, Vair_scale);
	_mav_put_int16_t(buf, 32, AoA_scale);
	_mav_put_int16_t(buf, 34, CW_scale);

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
	packet.AX_bias = AX_bias;
	packet.AY_bias = AY_bias;
	packet.AZ_bias = AZ_bias;
	packet.MX_bias = MX_bias;
	packet.MY_bias = MY_bias;
	packet.MZ_bias = MZ_bias;
	packet.Vair_bias = Vair_bias;
	packet.AoA_bias = AoA_bias;
	packet.CW_bias = CW_bias;
	packet.Alt_bias = Alt_bias;
	packet.Vair_scale = Vair_scale;
	packet.AoA_scale = AoA_scale;
	packet.CW_scale = CW_scale;

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
static inline void mavlink_msg_ekf_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t GX_bias, int16_t GY_bias, int16_t GZ_bias, int16_t AX_bias, int16_t AY_bias, int16_t AZ_bias, int16_t MX_bias, int16_t MY_bias, int16_t MZ_bias, int16_t Vair_bias, int16_t AoA_bias, int16_t CW_bias, int16_t Alt_bias, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, GX_bias);
	_mav_put_int16_t(buf, 6, GY_bias);
	_mav_put_int16_t(buf, 8, GZ_bias);
	_mav_put_int16_t(buf, 10, AX_bias);
	_mav_put_int16_t(buf, 12, AY_bias);
	_mav_put_int16_t(buf, 14, AZ_bias);
	_mav_put_int16_t(buf, 16, MX_bias);
	_mav_put_int16_t(buf, 18, MY_bias);
	_mav_put_int16_t(buf, 20, MZ_bias);
	_mav_put_int16_t(buf, 22, Vair_bias);
	_mav_put_int16_t(buf, 24, AoA_bias);
	_mav_put_int16_t(buf, 26, CW_bias);
	_mav_put_int16_t(buf, 28, Alt_bias);
	_mav_put_int16_t(buf, 30, Vair_scale);
	_mav_put_int16_t(buf, 32, AoA_scale);
	_mav_put_int16_t(buf, 34, CW_scale);

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
	packet->AX_bias = AX_bias;
	packet->AY_bias = AY_bias;
	packet->AZ_bias = AZ_bias;
	packet->MX_bias = MX_bias;
	packet->MY_bias = MY_bias;
	packet->MZ_bias = MZ_bias;
	packet->Vair_bias = Vair_bias;
	packet->AoA_bias = AoA_bias;
	packet->CW_bias = CW_bias;
	packet->Alt_bias = Alt_bias;
	packet->Vair_scale = Vair_scale;
	packet->AoA_scale = AoA_scale;
	packet->CW_scale = CW_scale;

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
static inline int16_t mavlink_msg_ekf_debug_get_GX_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field GY_bias from ekf_debug message
 *
 * @return Estimated gyro y bias [deg/s]
 */
static inline int16_t mavlink_msg_ekf_debug_get_GY_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field GZ_bias from ekf_debug message
 *
 * @return Estimated gyro z bias [deg/s]
 */
static inline int16_t mavlink_msg_ekf_debug_get_GZ_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field AX_bias from ekf_debug message
 *
 * @return Estimated ax bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AX_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field AY_bias from ekf_debug message
 *
 * @return Estimated ay bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AY_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field AZ_bias from ekf_debug message
 *
 * @return Estimated az bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AZ_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field MX_bias from ekf_debug message
 *
 * @return Estimated mx bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MX_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field MY_bias from ekf_debug message
 *
 * @return Estimated my bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MY_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field MZ_bias from ekf_debug message
 *
 * @return Estimated mz bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MZ_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field Vair_bias from ekf_debug message
 *
 * @return Estimated Vair bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Vair_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field AoA_bias from ekf_debug message
 *
 * @return Estimated aoa bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AoA_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field CW_bias from ekf_debug message
 *
 * @return Estimated cw bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_CW_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field Alt_bias from ekf_debug message
 *
 * @return Estimated alt bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Alt_bias(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field Vair_scale from ekf_debug message
 *
 * @return Estimated Vair scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Vair_scale(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field AoA_scale from ekf_debug message
 *
 * @return Estimated aoa scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AoA_scale(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field CW_scale from ekf_debug message
 *
 * @return Estimated cw scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_CW_scale(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  34);
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
	ekf_debug->AX_bias = mavlink_msg_ekf_debug_get_AX_bias(msg);
	ekf_debug->AY_bias = mavlink_msg_ekf_debug_get_AY_bias(msg);
	ekf_debug->AZ_bias = mavlink_msg_ekf_debug_get_AZ_bias(msg);
	ekf_debug->MX_bias = mavlink_msg_ekf_debug_get_MX_bias(msg);
	ekf_debug->MY_bias = mavlink_msg_ekf_debug_get_MY_bias(msg);
	ekf_debug->MZ_bias = mavlink_msg_ekf_debug_get_MZ_bias(msg);
	ekf_debug->Vair_bias = mavlink_msg_ekf_debug_get_Vair_bias(msg);
	ekf_debug->AoA_bias = mavlink_msg_ekf_debug_get_AoA_bias(msg);
	ekf_debug->CW_bias = mavlink_msg_ekf_debug_get_CW_bias(msg);
	ekf_debug->Alt_bias = mavlink_msg_ekf_debug_get_Alt_bias(msg);
	ekf_debug->Vair_scale = mavlink_msg_ekf_debug_get_Vair_scale(msg);
	ekf_debug->AoA_scale = mavlink_msg_ekf_debug_get_AoA_scale(msg);
	ekf_debug->CW_scale = mavlink_msg_ekf_debug_get_CW_scale(msg);
#else
	memcpy(ekf_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif
}
