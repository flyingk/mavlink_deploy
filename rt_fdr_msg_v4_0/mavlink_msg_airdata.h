// MESSAGE AIRDATA PACKING

#define MAVLINK_MSG_ID_AIRDATA 231

typedef struct __mavlink_airdata_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 float pressure_alt; ///< Altitude above ground in m
 float airspeed; ///< Airspeed in m/s
 float aoa; ///< Angle of attack in deg
 float sideslip; ///< Sideslip in deg
} mavlink_airdata_t;

#define MAVLINK_MSG_ID_AIRDATA_LEN 20
#define MAVLINK_MSG_ID_231_LEN 20

#define MAVLINK_MSG_ID_AIRDATA_CRC 130
#define MAVLINK_MSG_ID_231_CRC 130



#define MAVLINK_MESSAGE_INFO_AIRDATA { \
	"AIRDATA", \
	5, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_airdata_t, time_boot_ms) }, \
         { "pressure_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_airdata_t, pressure_alt) }, \
         { "airspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_airdata_t, airspeed) }, \
         { "aoa", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_airdata_t, aoa) }, \
         { "sideslip", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_airdata_t, sideslip) }, \
         } \
}


/**
 * @brief Pack a airdata message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param pressure_alt Altitude above ground in m
 * @param airspeed Airspeed in m/s
 * @param aoa Angle of attack in deg
 * @param sideslip Sideslip in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float pressure_alt, float airspeed, float aoa, float sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, pressure_alt);
	_mav_put_float(buf, 8, airspeed);
	_mav_put_float(buf, 12, aoa);
	_mav_put_float(buf, 16, sideslip);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_LEN);
#else
	mavlink_airdata_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.pressure_alt = pressure_alt;
	packet.airspeed = airspeed;
	packet.aoa = aoa;
	packet.sideslip = sideslip;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AIRDATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
}

/**
 * @brief Pack a airdata message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param pressure_alt Altitude above ground in m
 * @param airspeed Airspeed in m/s
 * @param aoa Angle of attack in deg
 * @param sideslip Sideslip in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_airdata_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float pressure_alt,float airspeed,float aoa,float sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, pressure_alt);
	_mav_put_float(buf, 8, airspeed);
	_mav_put_float(buf, 12, aoa);
	_mav_put_float(buf, 16, sideslip);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AIRDATA_LEN);
#else
	mavlink_airdata_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.pressure_alt = pressure_alt;
	packet.airspeed = airspeed;
	packet.aoa = aoa;
	packet.sideslip = sideslip;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AIRDATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
}

/**
 * @brief Encode a airdata struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param airdata C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_airdata_t* airdata)
{
	return mavlink_msg_airdata_pack(system_id, component_id, msg, airdata->time_boot_ms, airdata->pressure_alt, airdata->airspeed, airdata->aoa, airdata->sideslip);
}

/**
 * @brief Encode a airdata struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airdata C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_airdata_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_airdata_t* airdata)
{
	return mavlink_msg_airdata_pack_chan(system_id, component_id, chan, msg, airdata->time_boot_ms, airdata->pressure_alt, airdata->airspeed, airdata->aoa, airdata->sideslip);
}

/**
 * @brief Send a airdata message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param pressure_alt Altitude above ground in m
 * @param airspeed Airspeed in m/s
 * @param aoa Angle of attack in deg
 * @param sideslip Sideslip in deg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_airdata_send(mavlink_channel_t chan, uint32_t time_boot_ms, float pressure_alt, float airspeed, float aoa, float sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AIRDATA_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, pressure_alt);
	_mav_put_float(buf, 8, airspeed);
	_mav_put_float(buf, 12, aoa);
	_mav_put_float(buf, 16, sideslip);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, buf, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, buf, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
#else
	mavlink_airdata_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.pressure_alt = pressure_alt;
	packet.airspeed = airspeed;
	packet.aoa = aoa;
	packet.sideslip = sideslip;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, (const char *)&packet, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_AIRDATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_airdata_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float pressure_alt, float airspeed, float aoa, float sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, pressure_alt);
	_mav_put_float(buf, 8, airspeed);
	_mav_put_float(buf, 12, aoa);
	_mav_put_float(buf, 16, sideslip);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, buf, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, buf, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
#else
	mavlink_airdata_t *packet = (mavlink_airdata_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->pressure_alt = pressure_alt;
	packet->airspeed = airspeed;
	packet->aoa = aoa;
	packet->sideslip = sideslip;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_LEN, MAVLINK_MSG_ID_AIRDATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AIRDATA, (const char *)packet, MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE AIRDATA UNPACKING


/**
 * @brief Get field time_boot_ms from airdata message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_airdata_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pressure_alt from airdata message
 *
 * @return Altitude above ground in m
 */
static inline float mavlink_msg_airdata_get_pressure_alt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field airspeed from airdata message
 *
 * @return Airspeed in m/s
 */
static inline float mavlink_msg_airdata_get_airspeed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field aoa from airdata message
 *
 * @return Angle of attack in deg
 */
static inline float mavlink_msg_airdata_get_aoa(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field sideslip from airdata message
 *
 * @return Sideslip in deg
 */
static inline float mavlink_msg_airdata_get_sideslip(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a airdata message into a struct
 *
 * @param msg The message to decode
 * @param airdata C-struct to decode the message contents into
 */
static inline void mavlink_msg_airdata_decode(const mavlink_message_t* msg, mavlink_airdata_t* airdata)
{
#if MAVLINK_NEED_BYTE_SWAP
	airdata->time_boot_ms = mavlink_msg_airdata_get_time_boot_ms(msg);
	airdata->pressure_alt = mavlink_msg_airdata_get_pressure_alt(msg);
	airdata->airspeed = mavlink_msg_airdata_get_airspeed(msg);
	airdata->aoa = mavlink_msg_airdata_get_aoa(msg);
	airdata->sideslip = mavlink_msg_airdata_get_sideslip(msg);
#else
	memcpy(airdata, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_AIRDATA_LEN);
#endif
}
