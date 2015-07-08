// MESSAGE WEATHER PACKING

#define MAVLINK_MSG_ID_WEATHER 248

typedef struct __mavlink_weather_t
{
 float Wind_speed; ///< Wind speed in m/s
 float Wind_dir; ///< Wind direction in deg
 float Temp; ///< Ground temp in C
 float Pressure; ///< Ground air pressure in Pa
 float Density; ///< Ground air density in kg/m3
 uint8_t Beaufort; ///< Wind in Beaufort scale
} mavlink_weather_t;

#define MAVLINK_MSG_ID_WEATHER_LEN 21
#define MAVLINK_MSG_ID_248_LEN 21

#define MAVLINK_MSG_ID_WEATHER_CRC 16
#define MAVLINK_MSG_ID_248_CRC 16



#define MAVLINK_MESSAGE_INFO_WEATHER { \
	"WEATHER", \
	6, \
	{  { "Wind_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_weather_t, Wind_speed) }, \
         { "Wind_dir", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_weather_t, Wind_dir) }, \
         { "Temp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_weather_t, Temp) }, \
         { "Pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_weather_t, Pressure) }, \
         { "Density", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_weather_t, Density) }, \
         { "Beaufort", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_weather_t, Beaufort) }, \
         } \
}


/**
 * @brief Pack a weather message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Wind_speed Wind speed in m/s
 * @param Wind_dir Wind direction in deg
 * @param Temp Ground temp in C
 * @param Pressure Ground air pressure in Pa
 * @param Density Ground air density in kg/m3
 * @param Beaufort Wind in Beaufort scale
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float Wind_speed, float Wind_dir, float Temp, float Pressure, float Density, uint8_t Beaufort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_WEATHER_LEN];
	_mav_put_float(buf, 0, Wind_speed);
	_mav_put_float(buf, 4, Wind_dir);
	_mav_put_float(buf, 8, Temp);
	_mav_put_float(buf, 12, Pressure);
	_mav_put_float(buf, 16, Density);
	_mav_put_uint8_t(buf, 20, Beaufort);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_LEN);
#else
	mavlink_weather_t packet;
	packet.Wind_speed = Wind_speed;
	packet.Wind_dir = Wind_dir;
	packet.Temp = Temp;
	packet.Pressure = Pressure;
	packet.Density = Density;
	packet.Beaufort = Beaufort;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_WEATHER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
}

/**
 * @brief Pack a weather message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Wind_speed Wind speed in m/s
 * @param Wind_dir Wind direction in deg
 * @param Temp Ground temp in C
 * @param Pressure Ground air pressure in Pa
 * @param Density Ground air density in kg/m3
 * @param Beaufort Wind in Beaufort scale
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float Wind_speed,float Wind_dir,float Temp,float Pressure,float Density,uint8_t Beaufort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_WEATHER_LEN];
	_mav_put_float(buf, 0, Wind_speed);
	_mav_put_float(buf, 4, Wind_dir);
	_mav_put_float(buf, 8, Temp);
	_mav_put_float(buf, 12, Pressure);
	_mav_put_float(buf, 16, Density);
	_mav_put_uint8_t(buf, 20, Beaufort);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_LEN);
#else
	mavlink_weather_t packet;
	packet.Wind_speed = Wind_speed;
	packet.Wind_dir = Wind_dir;
	packet.Temp = Temp;
	packet.Pressure = Pressure;
	packet.Density = Density;
	packet.Beaufort = Beaufort;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_WEATHER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
}

/**
 * @brief Encode a weather struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param weather C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_weather_t* weather)
{
	return mavlink_msg_weather_pack(system_id, component_id, msg, weather->Wind_speed, weather->Wind_dir, weather->Temp, weather->Pressure, weather->Density, weather->Beaufort);
}

/**
 * @brief Encode a weather struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param weather C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_weather_t* weather)
{
	return mavlink_msg_weather_pack_chan(system_id, component_id, chan, msg, weather->Wind_speed, weather->Wind_dir, weather->Temp, weather->Pressure, weather->Density, weather->Beaufort);
}

/**
 * @brief Send a weather message
 * @param chan MAVLink channel to send the message
 *
 * @param Wind_speed Wind speed in m/s
 * @param Wind_dir Wind direction in deg
 * @param Temp Ground temp in C
 * @param Pressure Ground air pressure in Pa
 * @param Density Ground air density in kg/m3
 * @param Beaufort Wind in Beaufort scale
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_weather_send(mavlink_channel_t chan, float Wind_speed, float Wind_dir, float Temp, float Pressure, float Density, uint8_t Beaufort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_WEATHER_LEN];
	_mav_put_float(buf, 0, Wind_speed);
	_mav_put_float(buf, 4, Wind_dir);
	_mav_put_float(buf, 8, Temp);
	_mav_put_float(buf, 12, Pressure);
	_mav_put_float(buf, 16, Density);
	_mav_put_uint8_t(buf, 20, Beaufort);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, buf, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, buf, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
#else
	mavlink_weather_t packet;
	packet.Wind_speed = Wind_speed;
	packet.Wind_dir = Wind_dir;
	packet.Temp = Temp;
	packet.Pressure = Pressure;
	packet.Density = Density;
	packet.Beaufort = Beaufort;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, (const char *)&packet, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, (const char *)&packet, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_WEATHER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_weather_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float Wind_speed, float Wind_dir, float Temp, float Pressure, float Density, uint8_t Beaufort)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, Wind_speed);
	_mav_put_float(buf, 4, Wind_dir);
	_mav_put_float(buf, 8, Temp);
	_mav_put_float(buf, 12, Pressure);
	_mav_put_float(buf, 16, Density);
	_mav_put_uint8_t(buf, 20, Beaufort);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, buf, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, buf, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
#else
	mavlink_weather_t *packet = (mavlink_weather_t *)msgbuf;
	packet->Wind_speed = Wind_speed;
	packet->Wind_dir = Wind_dir;
	packet->Temp = Temp;
	packet->Pressure = Pressure;
	packet->Density = Density;
	packet->Beaufort = Beaufort;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, (const char *)packet, MAVLINK_MSG_ID_WEATHER_LEN, MAVLINK_MSG_ID_WEATHER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER, (const char *)packet, MAVLINK_MSG_ID_WEATHER_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE WEATHER UNPACKING


/**
 * @brief Get field Wind_speed from weather message
 *
 * @return Wind speed in m/s
 */
static inline float mavlink_msg_weather_get_Wind_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field Wind_dir from weather message
 *
 * @return Wind direction in deg
 */
static inline float mavlink_msg_weather_get_Wind_dir(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Temp from weather message
 *
 * @return Ground temp in C
 */
static inline float mavlink_msg_weather_get_Temp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Pressure from weather message
 *
 * @return Ground air pressure in Pa
 */
static inline float mavlink_msg_weather_get_Pressure(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Density from weather message
 *
 * @return Ground air density in kg/m3
 */
static inline float mavlink_msg_weather_get_Density(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Beaufort from weather message
 *
 * @return Wind in Beaufort scale
 */
static inline uint8_t mavlink_msg_weather_get_Beaufort(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a weather message into a struct
 *
 * @param msg The message to decode
 * @param weather C-struct to decode the message contents into
 */
static inline void mavlink_msg_weather_decode(const mavlink_message_t* msg, mavlink_weather_t* weather)
{
#if MAVLINK_NEED_BYTE_SWAP
	weather->Wind_speed = mavlink_msg_weather_get_Wind_speed(msg);
	weather->Wind_dir = mavlink_msg_weather_get_Wind_dir(msg);
	weather->Temp = mavlink_msg_weather_get_Temp(msg);
	weather->Pressure = mavlink_msg_weather_get_Pressure(msg);
	weather->Density = mavlink_msg_weather_get_Density(msg);
	weather->Beaufort = mavlink_msg_weather_get_Beaufort(msg);
#else
	memcpy(weather, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_WEATHER_LEN);
#endif
}
