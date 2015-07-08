// MESSAGE AIRDATA_DEBUG PACKING

#define MAVLINK_MSG_ID_AIRDATA_DEBUG 232

typedef struct __mavlink_airdata_debug_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 float density; ///< air density
 float DP1; ///< Differential Pressure 1
 float DP2; ///< Differential Pressure 2
 float DP3; ///< Differential Pressure 3
 uint16_t dynamic_pressure; ///< Dynamic pressure in Pa
 int8_t temperature; ///< Temperature in deg C
} mavlink_airdata_debug_t;

#define MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN 23
#define MAVLINK_MSG_ID_232_LEN 23

#define MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC 105
#define MAVLINK_MSG_ID_232_CRC 105



#define MAVLINK_MESSAGE_INFO_AIRDATA_DEBUG { \
	"AIRDATA_DEBUG", \
	7, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_airdata_debug_t, time_boot_ms) }, \
         { "density", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_airdata_debug_t, density) }, \
         { "DP1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_airdata_debug_t, DP1) }, \
         { "DP2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_airdata_debug_t, DP2) }, \
         { "DP3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_airdata_debug_t, DP3) }, \
         { "dynamic_pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_airdata_debug_t, dynamic_pressure) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 22, offsetof(mavlink_airdata_debug_t, temperature) }, \
         } \
}


/**
 * @brief Pack a airdata_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param dynamic_pressure Dynamic pressure in Pa
 * @param density air density
 * @param temperature Temperature in deg C
 * @param DP1 Differential Pressure 1
 * @param DP2 Differential Pressure 2
 * @param DP3 Differential Pressure 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, density);
	_mav_put_float(buf, 8, DP1);
	_mav_put_float(buf, 12, DP2);
	_mav_put_float(buf, 16, DP3);
	_mav_put_uint16_t(buf, 20, dynamic_pressure);
	_mav_put_int8_t(buf, 22, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#else
	mavlink_airdata_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.density = density;
	packet.DP1 = DP1;
	packet.DP2 = DP2;
	packet.DP3 = DP3;
	packet.dynamic_pressure = dynamic_pressure;
	packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AIRDATA_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
}

/**
 * @brief Pack a airdata_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param dynamic_pressure Dynamic pressure in Pa
 * @param density air density
 * @param temperature Temperature in deg C
 * @param DP1 Differential Pressure 1
 * @param DP2 Differential Pressure 2
 * @param DP3 Differential Pressure 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,uint16_t dynamic_pressure,float density,int8_t temperature,float DP1,float DP2,float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, density);
	_mav_put_float(buf, 8, DP1);
	_mav_put_float(buf, 12, DP2);
	_mav_put_float(buf, 16, DP3);
	_mav_put_uint16_t(buf, 20, dynamic_pressure);
	_mav_put_int8_t(buf, 22, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#else
	mavlink_airdata_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.density = density;
	packet.DP1 = DP1;
	packet.DP2 = DP2;
	packet.DP3 = DP3;
	packet.dynamic_pressure = dynamic_pressure;
	packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AIRDATA_DEBUG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
}

/**
 * @brief Encode a airdata_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param airdata_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_airdata_debug_t* airdata_debug)
{
	return mavlink_msg_airdata_debug_pack(system_id, component_id, msg, airdata_debug->time_boot_ms, airdata_debug->dynamic_pressure, airdata_debug->density, airdata_debug->temperature, airdata_debug->DP1, airdata_debug->DP2, airdata_debug->DP3);
}

/**
 * @brief Encode a airdata_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airdata_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_airdata_debug_t* airdata_debug)
{
	return mavlink_msg_airdata_debug_pack_chan(system_id, component_id, chan, msg, airdata_debug->time_boot_ms, airdata_debug->dynamic_pressure, airdata_debug->density, airdata_debug->temperature, airdata_debug->DP1, airdata_debug->DP2, airdata_debug->DP3);
}

/**
 * @brief Send a airdata_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param dynamic_pressure Dynamic pressure in Pa
 * @param density air density
 * @param temperature Temperature in deg C
 * @param DP1 Differential Pressure 1
 * @param DP2 Differential Pressure 2
 * @param DP3 Differential Pressure 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_airdata_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, density);
	_mav_put_float(buf, 8, DP1);
	_mav_put_float(buf, 12, DP2);
	_mav_put_float(buf, 16, DP3);
	_mav_put_uint16_t(buf, 20, dynamic_pressure);
	_mav_put_int8_t(buf, 22, temperature);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
#else
	mavlink_airdata_debug_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.density = density;
	packet.DP1 = DP1;
	packet.DP2 = DP2;
	packet.DP3 = DP3;
	packet.dynamic_pressure = dynamic_pressure;
	packet.temperature = temperature;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_airdata_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t dynamic_pressure, float density, int8_t temperature, float DP1, float DP2, float DP3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, density);
	_mav_put_float(buf, 8, DP1);
	_mav_put_float(buf, 12, DP2);
	_mav_put_float(buf, 16, DP3);
	_mav_put_uint16_t(buf, 20, dynamic_pressure);
	_mav_put_int8_t(buf, 22, temperature);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, buf, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
#else
	mavlink_airdata_debug_t *packet = (mavlink_airdata_debug_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->density = density;
	packet->DP1 = DP1;
	packet->DP2 = DP2;
	packet->DP3 = DP3;
	packet->dynamic_pressure = dynamic_pressure;
	packet->temperature = temperature;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN, MAVLINK_MSG_ID_AIRDATA_DEBUG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA_DEBUG, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE AIRDATA_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from airdata_debug message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_airdata_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field dynamic_pressure from airdata_debug message
 *
 * @return Dynamic pressure in Pa
 */
static inline uint16_t mavlink_msg_airdata_debug_get_dynamic_pressure(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field density from airdata_debug message
 *
 * @return air density
 */
static inline float mavlink_msg_airdata_debug_get_density(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field temperature from airdata_debug message
 *
 * @return Temperature in deg C
 */
static inline int8_t mavlink_msg_airdata_debug_get_temperature(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  22);
}

/**
 * @brief Get field DP1 from airdata_debug message
 *
 * @return Differential Pressure 1
 */
static inline float mavlink_msg_airdata_debug_get_DP1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field DP2 from airdata_debug message
 *
 * @return Differential Pressure 2
 */
static inline float mavlink_msg_airdata_debug_get_DP2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field DP3 from airdata_debug message
 *
 * @return Differential Pressure 3
 */
static inline float mavlink_msg_airdata_debug_get_DP3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a airdata_debug message into a struct
 *
 * @param msg The message to decode
 * @param airdata_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_airdata_debug_decode(const mavlink_message_t* msg, mavlink_airdata_debug_t* airdata_debug)
{
#if MAVLINK_NEED_BYTE_SWAP
	airdata_debug->time_boot_ms = mavlink_msg_airdata_debug_get_time_boot_ms(msg);
	airdata_debug->density = mavlink_msg_airdata_debug_get_density(msg);
	airdata_debug->DP1 = mavlink_msg_airdata_debug_get_DP1(msg);
	airdata_debug->DP2 = mavlink_msg_airdata_debug_get_DP2(msg);
	airdata_debug->DP3 = mavlink_msg_airdata_debug_get_DP3(msg);
	airdata_debug->dynamic_pressure = mavlink_msg_airdata_debug_get_dynamic_pressure(msg);
	airdata_debug->temperature = mavlink_msg_airdata_debug_get_temperature(msg);
#else
	memcpy(airdata_debug, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_AIRDATA_DEBUG_LEN);
#endif
}
