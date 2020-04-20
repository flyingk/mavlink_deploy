// MESSAGE TECS_DEBUG PACKING

#define MAVLINK_MSG_ID_TECS_DEBUG 201

typedef struct __mavlink_tecs_debug_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 float Alt_Dem; /*< Desired altitude [m]*/
 float Spd_Dem; /*< Desired Airspeed [m/s]*/
 float tecs_SPE_dem; /*< SPE_dem*/
 float tecs_SKE_dem; /*< SKE_dem*/
 float tecs_STE_dem; /*< STE_dem*/
 float tecs_SEB_dem; /*< SEB_dem*/
 float tecs_SPE_est; /*< SPE_est*/
 float tecs_SKE_est; /*< SKE_est*/
 float tecs_STE_est; /*< STE_est*/
 float tecs_SEB_est; /*< SEB_est*/
 float Pitch_Dem; /*< Tecs output pitch demand [deg]*/
 float Thr_Dem; /*< Tecs output throttle demand [%]*/
} mavlink_tecs_debug_t;

#define MAVLINK_MSG_ID_TECS_DEBUG_LEN 52
#define MAVLINK_MSG_ID_201_LEN 52

#define MAVLINK_MSG_ID_TECS_DEBUG_CRC 82
#define MAVLINK_MSG_ID_201_CRC 82



#define MAVLINK_MESSAGE_INFO_TECS_DEBUG { \
	"TECS_DEBUG", \
	13, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_tecs_debug_t, time_boot_ms) }, \
         { "Alt_Dem", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_tecs_debug_t, Alt_Dem) }, \
         { "Spd_Dem", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_tecs_debug_t, Spd_Dem) }, \
         { "tecs_SPE_dem", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_tecs_debug_t, tecs_SPE_dem) }, \
         { "tecs_SKE_dem", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_tecs_debug_t, tecs_SKE_dem) }, \
         { "tecs_STE_dem", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_tecs_debug_t, tecs_STE_dem) }, \
         { "tecs_SEB_dem", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_tecs_debug_t, tecs_SEB_dem) }, \
         { "tecs_SPE_est", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_tecs_debug_t, tecs_SPE_est) }, \
         { "tecs_SKE_est", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_tecs_debug_t, tecs_SKE_est) }, \
         { "tecs_STE_est", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_tecs_debug_t, tecs_STE_est) }, \
         { "tecs_SEB_est", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_tecs_debug_t, tecs_SEB_est) }, \
         { "Pitch_Dem", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_tecs_debug_t, Pitch_Dem) }, \
         { "Thr_Dem", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_tecs_debug_t, Thr_Dem) }, \
         } \
}


/**
 * @brief Pack a tecs_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Alt_Dem Desired altitude [m]
 * @param Spd_Dem Desired Airspeed [m/s]
 * @param tecs_SPE_dem SPE_dem
 * @param tecs_SKE_dem SKE_dem
 * @param tecs_STE_dem STE_dem
 * @param tecs_SEB_dem SEB_dem
 * @param tecs_SPE_est SPE_est
 * @param tecs_SKE_est SKE_est
 * @param tecs_STE_est STE_est
 * @param tecs_SEB_est SEB_est
 * @param Pitch_Dem Tecs output pitch demand [deg]
 * @param Thr_Dem Tecs output throttle demand [%]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tecs_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float Alt_Dem, float Spd_Dem, float tecs_SPE_dem, float tecs_SKE_dem, float tecs_STE_dem, float tecs_SEB_dem, float tecs_SPE_est, float tecs_SKE_est, float tecs_STE_est, float tecs_SEB_est, float Pitch_Dem, float Thr_Dem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TECS_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Alt_Dem);
	_mav_put_float(buf, 8, Spd_Dem);
	_mav_put_float(buf, 12, tecs_SPE_dem);
	_mav_put_float(buf, 16, tecs_SKE_dem);
	_mav_put_float(buf, 20, tecs_STE_dem);
	_mav_put_float(buf, 24, tecs_SEB_dem);
	_mav_put_float(buf, 28, tecs_SPE_est);
	_mav_put_float(buf, 32, tecs_SKE_est);
	_mav_put_float(buf, 36, tecs_STE_est);
	_mav_put_float(buf, 40, tecs_SEB_est);
	_mav_put_float(buf, 44, Pitch_Dem);
	_mav_put_float(buf, 48, Thr_Dem);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#else
	mavlink_tecs_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Alt_Dem = Alt_Dem;
	packet.Spd_Dem = Spd_Dem;
	packet.tecs_SPE_dem = tecs_SPE_dem;
	packet.tecs_SKE_dem = tecs_SKE_dem;
	packet.tecs_STE_dem = tecs_STE_dem;
	packet.tecs_SEB_dem = tecs_SEB_dem;
	packet.tecs_SPE_est = tecs_SPE_est;
	packet.tecs_SKE_est = tecs_SKE_est;
	packet.tecs_STE_est = tecs_STE_est;
	packet.tecs_SEB_est = tecs_SEB_est;
	packet.Pitch_Dem = Pitch_Dem;
	packet.Thr_Dem = Thr_Dem;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TECS_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a tecs_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Alt_Dem Desired altitude [m]
 * @param Spd_Dem Desired Airspeed [m/s]
 * @param tecs_SPE_dem SPE_dem
 * @param tecs_SKE_dem SKE_dem
 * @param tecs_STE_dem STE_dem
 * @param tecs_SEB_dem SEB_dem
 * @param tecs_SPE_est SPE_est
 * @param tecs_SKE_est SKE_est
 * @param tecs_STE_est STE_est
 * @param tecs_SEB_est SEB_est
 * @param Pitch_Dem Tecs output pitch demand [deg]
 * @param Thr_Dem Tecs output throttle demand [%]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tecs_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float Alt_Dem,float Spd_Dem,float tecs_SPE_dem,float tecs_SKE_dem,float tecs_STE_dem,float tecs_SEB_dem,float tecs_SPE_est,float tecs_SKE_est,float tecs_STE_est,float tecs_SEB_est,float Pitch_Dem,float Thr_Dem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TECS_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Alt_Dem);
	_mav_put_float(buf, 8, Spd_Dem);
	_mav_put_float(buf, 12, tecs_SPE_dem);
	_mav_put_float(buf, 16, tecs_SKE_dem);
	_mav_put_float(buf, 20, tecs_STE_dem);
	_mav_put_float(buf, 24, tecs_SEB_dem);
	_mav_put_float(buf, 28, tecs_SPE_est);
	_mav_put_float(buf, 32, tecs_SKE_est);
	_mav_put_float(buf, 36, tecs_STE_est);
	_mav_put_float(buf, 40, tecs_SEB_est);
	_mav_put_float(buf, 44, Pitch_Dem);
	_mav_put_float(buf, 48, Thr_Dem);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#else
	mavlink_tecs_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Alt_Dem = Alt_Dem;
	packet.Spd_Dem = Spd_Dem;
	packet.tecs_SPE_dem = tecs_SPE_dem;
	packet.tecs_SKE_dem = tecs_SKE_dem;
	packet.tecs_STE_dem = tecs_STE_dem;
	packet.tecs_SEB_dem = tecs_SEB_dem;
	packet.tecs_SPE_est = tecs_SPE_est;
	packet.tecs_SKE_est = tecs_SKE_est;
	packet.tecs_STE_est = tecs_STE_est;
	packet.tecs_SEB_est = tecs_SEB_est;
	packet.Pitch_Dem = Pitch_Dem;
	packet.Thr_Dem = Thr_Dem;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TECS_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a tecs_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tecs_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tecs_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tecs_debug_t* tecs_debug)
{
	return mavlink_msg_tecs_debug_pack(system_id, component_id, msg, tecs_debug->time_boot_ms, tecs_debug->Alt_Dem, tecs_debug->Spd_Dem, tecs_debug->tecs_SPE_dem, tecs_debug->tecs_SKE_dem, tecs_debug->tecs_STE_dem, tecs_debug->tecs_SEB_dem, tecs_debug->tecs_SPE_est, tecs_debug->tecs_SKE_est, tecs_debug->tecs_STE_est, tecs_debug->tecs_SEB_est, tecs_debug->Pitch_Dem, tecs_debug->Thr_Dem);
}

/**
 * @brief Encode a tecs_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tecs_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tecs_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tecs_debug_t* tecs_debug)
{
	return mavlink_msg_tecs_debug_pack_chan(system_id, component_id, chan, msg, tecs_debug->time_boot_ms, tecs_debug->Alt_Dem, tecs_debug->Spd_Dem, tecs_debug->tecs_SPE_dem, tecs_debug->tecs_SKE_dem, tecs_debug->tecs_STE_dem, tecs_debug->tecs_SEB_dem, tecs_debug->tecs_SPE_est, tecs_debug->tecs_SKE_est, tecs_debug->tecs_STE_est, tecs_debug->tecs_SEB_est, tecs_debug->Pitch_Dem, tecs_debug->Thr_Dem);
}

/**
 * @brief Send a tecs_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Alt_Dem Desired altitude [m]
 * @param Spd_Dem Desired Airspeed [m/s]
 * @param tecs_SPE_dem SPE_dem
 * @param tecs_SKE_dem SKE_dem
 * @param tecs_STE_dem STE_dem
 * @param tecs_SEB_dem SEB_dem
 * @param tecs_SPE_est SPE_est
 * @param tecs_SKE_est SKE_est
 * @param tecs_STE_est STE_est
 * @param tecs_SEB_est SEB_est
 * @param Pitch_Dem Tecs output pitch demand [deg]
 * @param Thr_Dem Tecs output throttle demand [%]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tecs_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, float Alt_Dem, float Spd_Dem, float tecs_SPE_dem, float tecs_SKE_dem, float tecs_STE_dem, float tecs_SEB_dem, float tecs_SPE_est, float tecs_SKE_est, float tecs_STE_est, float tecs_SEB_est, float Pitch_Dem, float Thr_Dem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TECS_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Alt_Dem);
	_mav_put_float(buf, 8, Spd_Dem);
	_mav_put_float(buf, 12, tecs_SPE_dem);
	_mav_put_float(buf, 16, tecs_SKE_dem);
	_mav_put_float(buf, 20, tecs_STE_dem);
	_mav_put_float(buf, 24, tecs_SEB_dem);
	_mav_put_float(buf, 28, tecs_SPE_est);
	_mav_put_float(buf, 32, tecs_SKE_est);
	_mav_put_float(buf, 36, tecs_STE_est);
	_mav_put_float(buf, 40, tecs_SEB_est);
	_mav_put_float(buf, 44, Pitch_Dem);
	_mav_put_float(buf, 48, Thr_Dem);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
#else
	mavlink_tecs_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Alt_Dem = Alt_Dem;
	packet.Spd_Dem = Spd_Dem;
	packet.tecs_SPE_dem = tecs_SPE_dem;
	packet.tecs_SKE_dem = tecs_SKE_dem;
	packet.tecs_STE_dem = tecs_STE_dem;
	packet.tecs_SEB_dem = tecs_SEB_dem;
	packet.tecs_SPE_est = tecs_SPE_est;
	packet.tecs_SKE_est = tecs_SKE_est;
	packet.tecs_STE_est = tecs_STE_est;
	packet.tecs_SEB_est = tecs_SEB_est;
	packet.Pitch_Dem = Pitch_Dem;
	packet.Thr_Dem = Thr_Dem;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TECS_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tecs_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float Alt_Dem, float Spd_Dem, float tecs_SPE_dem, float tecs_SKE_dem, float tecs_STE_dem, float tecs_SEB_dem, float tecs_SPE_est, float tecs_SKE_est, float tecs_STE_est, float tecs_SEB_est, float Pitch_Dem, float Thr_Dem)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Alt_Dem);
	_mav_put_float(buf, 8, Spd_Dem);
	_mav_put_float(buf, 12, tecs_SPE_dem);
	_mav_put_float(buf, 16, tecs_SKE_dem);
	_mav_put_float(buf, 20, tecs_STE_dem);
	_mav_put_float(buf, 24, tecs_SEB_dem);
	_mav_put_float(buf, 28, tecs_SPE_est);
	_mav_put_float(buf, 32, tecs_SKE_est);
	_mav_put_float(buf, 36, tecs_STE_est);
	_mav_put_float(buf, 40, tecs_SEB_est);
	_mav_put_float(buf, 44, Pitch_Dem);
	_mav_put_float(buf, 48, Thr_Dem);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, buf, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
#else
	mavlink_tecs_debug_t *packet = (mavlink_tecs_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Alt_Dem = Alt_Dem;
	packet->Spd_Dem = Spd_Dem;
	packet->tecs_SPE_dem = tecs_SPE_dem;
	packet->tecs_SKE_dem = tecs_SKE_dem;
	packet->tecs_STE_dem = tecs_STE_dem;
	packet->tecs_SEB_dem = tecs_SEB_dem;
	packet->tecs_SPE_est = tecs_SPE_est;
	packet->tecs_SKE_est = tecs_SKE_est;
	packet->tecs_STE_est = tecs_STE_est;
	packet->tecs_SEB_est = tecs_SEB_est;
	packet->Pitch_Dem = Pitch_Dem;
	packet->Thr_Dem = Thr_Dem;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, (const char *)packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN, MAVLINK_MSG_ID_TECS_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TECS_DEBUG, (const char *)packet, MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TECS_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from tecs_debug message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_tecs_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Alt_Dem from tecs_debug message
 *
 * @return Desired altitude [m]
 */
static inline float mavlink_msg_tecs_debug_get_Alt_Dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Spd_Dem from tecs_debug message
 *
 * @return Desired Airspeed [m/s]
 */
static inline float mavlink_msg_tecs_debug_get_Spd_Dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field tecs_SPE_dem from tecs_debug message
 *
 * @return SPE_dem
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SPE_dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field tecs_SKE_dem from tecs_debug message
 *
 * @return SKE_dem
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SKE_dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field tecs_STE_dem from tecs_debug message
 *
 * @return STE_dem
 */
static inline float mavlink_msg_tecs_debug_get_tecs_STE_dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field tecs_SEB_dem from tecs_debug message
 *
 * @return SEB_dem
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SEB_dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field tecs_SPE_est from tecs_debug message
 *
 * @return SPE_est
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SPE_est(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field tecs_SKE_est from tecs_debug message
 *
 * @return SKE_est
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SKE_est(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field tecs_STE_est from tecs_debug message
 *
 * @return STE_est
 */
static inline float mavlink_msg_tecs_debug_get_tecs_STE_est(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field tecs_SEB_est from tecs_debug message
 *
 * @return SEB_est
 */
static inline float mavlink_msg_tecs_debug_get_tecs_SEB_est(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Pitch_Dem from tecs_debug message
 *
 * @return Tecs output pitch demand [deg]
 */
static inline float mavlink_msg_tecs_debug_get_Pitch_Dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Thr_Dem from tecs_debug message
 *
 * @return Tecs output throttle demand [%]
 */
static inline float mavlink_msg_tecs_debug_get_Thr_Dem(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a tecs_debug message into a struct
 *
 * @param msg The message to decode
 * @param tecs_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_tecs_debug_decode(const mavlink_message_t* msg, mavlink_tecs_debug_t* tecs_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	tecs_debug->time_boot_ms = mavlink_msg_tecs_debug_get_time_boot_ms(msg);
	tecs_debug->Alt_Dem = mavlink_msg_tecs_debug_get_Alt_Dem(msg);
	tecs_debug->Spd_Dem = mavlink_msg_tecs_debug_get_Spd_Dem(msg);
	tecs_debug->tecs_SPE_dem = mavlink_msg_tecs_debug_get_tecs_SPE_dem(msg);
	tecs_debug->tecs_SKE_dem = mavlink_msg_tecs_debug_get_tecs_SKE_dem(msg);
	tecs_debug->tecs_STE_dem = mavlink_msg_tecs_debug_get_tecs_STE_dem(msg);
	tecs_debug->tecs_SEB_dem = mavlink_msg_tecs_debug_get_tecs_SEB_dem(msg);
	tecs_debug->tecs_SPE_est = mavlink_msg_tecs_debug_get_tecs_SPE_est(msg);
	tecs_debug->tecs_SKE_est = mavlink_msg_tecs_debug_get_tecs_SKE_est(msg);
	tecs_debug->tecs_STE_est = mavlink_msg_tecs_debug_get_tecs_STE_est(msg);
	tecs_debug->tecs_SEB_est = mavlink_msg_tecs_debug_get_tecs_SEB_est(msg);
	tecs_debug->Pitch_Dem = mavlink_msg_tecs_debug_get_Pitch_Dem(msg);
	tecs_debug->Thr_Dem = mavlink_msg_tecs_debug_get_Thr_Dem(msg);
#else
	memcpy(tecs_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TECS_DEBUG_LEN);
#endif
}
