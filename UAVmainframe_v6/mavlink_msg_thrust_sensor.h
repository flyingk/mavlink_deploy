// MESSAGE THRUST_SENSOR PACKING

#define MAVLINK_MSG_ID_THRUST_SENSOR 221

typedef struct __mavlink_thrust_sensor_t
{
 uint32_t time_boot_ms; /*< Time since boot in msec*/
 uint32_t Load_cell; /*< Load cell data*/
} mavlink_thrust_sensor_t;

#define MAVLINK_MSG_ID_THRUST_SENSOR_LEN 8
#define MAVLINK_MSG_ID_221_LEN 8

#define MAVLINK_MSG_ID_THRUST_SENSOR_CRC 142
#define MAVLINK_MSG_ID_221_CRC 142



#define MAVLINK_MESSAGE_INFO_THRUST_SENSOR { \
	"THRUST_SENSOR", \
	2, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_thrust_sensor_t, time_boot_ms) }, \
         { "Load_cell", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_thrust_sensor_t, Load_cell) }, \
         } \
}


/**
 * @brief Pack a thrust_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param Load_cell Load cell data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint32_t(buf, 4, Load_cell);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#else
	mavlink_thrust_sensor_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Load_cell = Load_cell;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_THRUST_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
}

/**
 * @brief Pack a thrust_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param Load_cell Load cell data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_thrust_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint32_t(buf, 4, Load_cell);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#else
	mavlink_thrust_sensor_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Load_cell = Load_cell;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_THRUST_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
}

/**
 * @brief Encode a thrust_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param thrust_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_thrust_sensor_t* thrust_sensor)
{
	return mavlink_msg_thrust_sensor_pack(system_id, component_id, msg, thrust_sensor->time_boot_ms, thrust_sensor->Load_cell);
}

/**
 * @brief Encode a thrust_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param thrust_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_thrust_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_thrust_sensor_t* thrust_sensor)
{
	return mavlink_msg_thrust_sensor_pack_chan(system_id, component_id, chan, msg, thrust_sensor->time_boot_ms, thrust_sensor->Load_cell);
}

/**
 * @brief Send a thrust_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param Load_cell Load cell data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_thrust_sensor_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_THRUST_SENSOR_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint32_t(buf, 4, Load_cell);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
#else
	mavlink_thrust_sensor_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Load_cell = Load_cell;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_THRUST_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_thrust_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint32_t Load_cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint32_t(buf, 4, Load_cell);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, buf, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
#else
	mavlink_thrust_sensor_t *packet = (mavlink_thrust_sensor_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Load_cell = Load_cell;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN, MAVLINK_MSG_ID_THRUST_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_THRUST_SENSOR, (const char *)packet, MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE THRUST_SENSOR UNPACKING


/**
 * @brief Get field time_boot_ms from thrust_sensor message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Load_cell from thrust_sensor message
 *
 * @return Load cell data
 */
static inline uint32_t mavlink_msg_thrust_sensor_get_Load_cell(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a thrust_sensor message into a struct
 *
 * @param msg The message to decode
 * @param thrust_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_thrust_sensor_decode(const mavlink_message_t* msg, mavlink_thrust_sensor_t* thrust_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP
	thrust_sensor->time_boot_ms = mavlink_msg_thrust_sensor_get_time_boot_ms(msg);
	thrust_sensor->Load_cell = mavlink_msg_thrust_sensor_get_Load_cell(msg);
#else
	memcpy(thrust_sensor, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_THRUST_SENSOR_LEN);
#endif
}
