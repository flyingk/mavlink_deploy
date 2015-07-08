// MESSAGE SERVO_NODE PACKING

#define MAVLINK_MSG_ID_SERVO_NODE 236

typedef struct __mavlink_servo_node_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 int8_t relay_ch_1; ///< Relay status channel 1 (on/off)
 int8_t relay_ch_2; ///< Relay status channel 2 (on/off)
 int8_t relay_ch_3; ///< Relay status channel 3 (on/off)
 int8_t relay_ch_4; ///< Relay status channel 4 (on/off)
 int8_t relay_ch_5; ///< Relay status channel 5 (on/off)
 int8_t relay_ch_6; ///< Relay status channel 6 (on/off)
 uint8_t RC_ch9; ///< RC signal for override switch
 uint8_t Override_SW; ///< Override switch feedback
} mavlink_servo_node_t;

#define MAVLINK_MSG_ID_SERVO_NODE_LEN 12
#define MAVLINK_MSG_ID_236_LEN 12

#define MAVLINK_MSG_ID_SERVO_NODE_CRC 87
#define MAVLINK_MSG_ID_236_CRC 87



#define MAVLINK_MESSAGE_INFO_SERVO_NODE { \
	"SERVO_NODE", \
	9, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_servo_node_t, time_boot_ms) }, \
         { "relay_ch_1", NULL, MAVLINK_TYPE_INT8_T, 0, 4, offsetof(mavlink_servo_node_t, relay_ch_1) }, \
         { "relay_ch_2", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_servo_node_t, relay_ch_2) }, \
         { "relay_ch_3", NULL, MAVLINK_TYPE_INT8_T, 0, 6, offsetof(mavlink_servo_node_t, relay_ch_3) }, \
         { "relay_ch_4", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_servo_node_t, relay_ch_4) }, \
         { "relay_ch_5", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_servo_node_t, relay_ch_5) }, \
         { "relay_ch_6", NULL, MAVLINK_TYPE_INT8_T, 0, 9, offsetof(mavlink_servo_node_t, relay_ch_6) }, \
         { "RC_ch9", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_servo_node_t, RC_ch9) }, \
         { "Override_SW", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_servo_node_t, Override_SW) }, \
         } \
}


/**
 * @brief Pack a servo_node message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param relay_ch_1 Relay status channel 1 (on/off)
 * @param relay_ch_2 Relay status channel 2 (on/off)
 * @param relay_ch_3 Relay status channel 3 (on/off)
 * @param relay_ch_4 Relay status channel 4 (on/off)
 * @param relay_ch_5 Relay status channel 5 (on/off)
 * @param relay_ch_6 Relay status channel 6 (on/off)
 * @param RC_ch9 RC signal for override switch
 * @param Override_SW Override switch feedback
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_servo_node_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int8_t relay_ch_1, int8_t relay_ch_2, int8_t relay_ch_3, int8_t relay_ch_4, int8_t relay_ch_5, int8_t relay_ch_6, uint8_t RC_ch9, uint8_t Override_SW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SERVO_NODE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int8_t(buf, 4, relay_ch_1);
	_mav_put_int8_t(buf, 5, relay_ch_2);
	_mav_put_int8_t(buf, 6, relay_ch_3);
	_mav_put_int8_t(buf, 7, relay_ch_4);
	_mav_put_int8_t(buf, 8, relay_ch_5);
	_mav_put_int8_t(buf, 9, relay_ch_6);
	_mav_put_uint8_t(buf, 10, RC_ch9);
	_mav_put_uint8_t(buf, 11, Override_SW);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#else
	mavlink_servo_node_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.relay_ch_1 = relay_ch_1;
	packet.relay_ch_2 = relay_ch_2;
	packet.relay_ch_3 = relay_ch_3;
	packet.relay_ch_4 = relay_ch_4;
	packet.relay_ch_5 = relay_ch_5;
	packet.relay_ch_6 = relay_ch_6;
	packet.RC_ch9 = RC_ch9;
	packet.Override_SW = Override_SW;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SERVO_NODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
}

/**
 * @brief Pack a servo_node message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param relay_ch_1 Relay status channel 1 (on/off)
 * @param relay_ch_2 Relay status channel 2 (on/off)
 * @param relay_ch_3 Relay status channel 3 (on/off)
 * @param relay_ch_4 Relay status channel 4 (on/off)
 * @param relay_ch_5 Relay status channel 5 (on/off)
 * @param relay_ch_6 Relay status channel 6 (on/off)
 * @param RC_ch9 RC signal for override switch
 * @param Override_SW Override switch feedback
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_servo_node_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int8_t relay_ch_1,int8_t relay_ch_2,int8_t relay_ch_3,int8_t relay_ch_4,int8_t relay_ch_5,int8_t relay_ch_6,uint8_t RC_ch9,uint8_t Override_SW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SERVO_NODE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int8_t(buf, 4, relay_ch_1);
	_mav_put_int8_t(buf, 5, relay_ch_2);
	_mav_put_int8_t(buf, 6, relay_ch_3);
	_mav_put_int8_t(buf, 7, relay_ch_4);
	_mav_put_int8_t(buf, 8, relay_ch_5);
	_mav_put_int8_t(buf, 9, relay_ch_6);
	_mav_put_uint8_t(buf, 10, RC_ch9);
	_mav_put_uint8_t(buf, 11, Override_SW);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#else
	mavlink_servo_node_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.relay_ch_1 = relay_ch_1;
	packet.relay_ch_2 = relay_ch_2;
	packet.relay_ch_3 = relay_ch_3;
	packet.relay_ch_4 = relay_ch_4;
	packet.relay_ch_5 = relay_ch_5;
	packet.relay_ch_6 = relay_ch_6;
	packet.RC_ch9 = RC_ch9;
	packet.Override_SW = Override_SW;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SERVO_NODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
}

/**
 * @brief Encode a servo_node struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param servo_node C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_servo_node_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_servo_node_t* servo_node)
{
	return mavlink_msg_servo_node_pack(system_id, component_id, msg, servo_node->time_boot_ms, servo_node->relay_ch_1, servo_node->relay_ch_2, servo_node->relay_ch_3, servo_node->relay_ch_4, servo_node->relay_ch_5, servo_node->relay_ch_6, servo_node->RC_ch9, servo_node->Override_SW);
}

/**
 * @brief Encode a servo_node struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param servo_node C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_servo_node_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_servo_node_t* servo_node)
{
	return mavlink_msg_servo_node_pack_chan(system_id, component_id, chan, msg, servo_node->time_boot_ms, servo_node->relay_ch_1, servo_node->relay_ch_2, servo_node->relay_ch_3, servo_node->relay_ch_4, servo_node->relay_ch_5, servo_node->relay_ch_6, servo_node->RC_ch9, servo_node->Override_SW);
}

/**
 * @brief Send a servo_node message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param relay_ch_1 Relay status channel 1 (on/off)
 * @param relay_ch_2 Relay status channel 2 (on/off)
 * @param relay_ch_3 Relay status channel 3 (on/off)
 * @param relay_ch_4 Relay status channel 4 (on/off)
 * @param relay_ch_5 Relay status channel 5 (on/off)
 * @param relay_ch_6 Relay status channel 6 (on/off)
 * @param RC_ch9 RC signal for override switch
 * @param Override_SW Override switch feedback
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_servo_node_send(mavlink_channel_t chan, uint32_t time_boot_ms, int8_t relay_ch_1, int8_t relay_ch_2, int8_t relay_ch_3, int8_t relay_ch_4, int8_t relay_ch_5, int8_t relay_ch_6, uint8_t RC_ch9, uint8_t Override_SW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SERVO_NODE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int8_t(buf, 4, relay_ch_1);
	_mav_put_int8_t(buf, 5, relay_ch_2);
	_mav_put_int8_t(buf, 6, relay_ch_3);
	_mav_put_int8_t(buf, 7, relay_ch_4);
	_mav_put_int8_t(buf, 8, relay_ch_5);
	_mav_put_int8_t(buf, 9, relay_ch_6);
	_mav_put_uint8_t(buf, 10, RC_ch9);
	_mav_put_uint8_t(buf, 11, Override_SW);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, buf, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, buf, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
#else
	mavlink_servo_node_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.relay_ch_1 = relay_ch_1;
	packet.relay_ch_2 = relay_ch_2;
	packet.relay_ch_3 = relay_ch_3;
	packet.relay_ch_4 = relay_ch_4;
	packet.relay_ch_5 = relay_ch_5;
	packet.relay_ch_6 = relay_ch_6;
	packet.RC_ch9 = RC_ch9;
	packet.Override_SW = Override_SW;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, (const char *)&packet, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, (const char *)&packet, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SERVO_NODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_servo_node_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int8_t relay_ch_1, int8_t relay_ch_2, int8_t relay_ch_3, int8_t relay_ch_4, int8_t relay_ch_5, int8_t relay_ch_6, uint8_t RC_ch9, uint8_t Override_SW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int8_t(buf, 4, relay_ch_1);
	_mav_put_int8_t(buf, 5, relay_ch_2);
	_mav_put_int8_t(buf, 6, relay_ch_3);
	_mav_put_int8_t(buf, 7, relay_ch_4);
	_mav_put_int8_t(buf, 8, relay_ch_5);
	_mav_put_int8_t(buf, 9, relay_ch_6);
	_mav_put_uint8_t(buf, 10, RC_ch9);
	_mav_put_uint8_t(buf, 11, Override_SW);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, buf, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, buf, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
#else
	mavlink_servo_node_t *packet = (mavlink_servo_node_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->relay_ch_1 = relay_ch_1;
	packet->relay_ch_2 = relay_ch_2;
	packet->relay_ch_3 = relay_ch_3;
	packet->relay_ch_4 = relay_ch_4;
	packet->relay_ch_5 = relay_ch_5;
	packet->relay_ch_6 = relay_ch_6;
	packet->RC_ch9 = RC_ch9;
	packet->Override_SW = Override_SW;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, (const char *)packet, MAVLINK_MSG_ID_SERVO_NODE_LEN, MAVLINK_MSG_ID_SERVO_NODE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SERVO_NODE, (const char *)packet, MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SERVO_NODE UNPACKING


/**
 * @brief Get field time_boot_ms from servo_node message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_servo_node_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field relay_ch_1 from servo_node message
 *
 * @return Relay status channel 1 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  4);
}

/**
 * @brief Get field relay_ch_2 from servo_node message
 *
 * @return Relay status channel 2 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Get field relay_ch_3 from servo_node message
 *
 * @return Relay status channel 3 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  6);
}

/**
 * @brief Get field relay_ch_4 from servo_node message
 *
 * @return Relay status channel 4 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Get field relay_ch_5 from servo_node message
 *
 * @return Relay status channel 5 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Get field relay_ch_6 from servo_node message
 *
 * @return Relay status channel 6 (on/off)
 */
static inline int8_t mavlink_msg_servo_node_get_relay_ch_6(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  9);
}

/**
 * @brief Get field RC_ch9 from servo_node message
 *
 * @return RC signal for override switch
 */
static inline uint8_t mavlink_msg_servo_node_get_RC_ch9(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field Override_SW from servo_node message
 *
 * @return Override switch feedback
 */
static inline uint8_t mavlink_msg_servo_node_get_Override_SW(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Decode a servo_node message into a struct
 *
 * @param msg The message to decode
 * @param servo_node C-struct to decode the message contents into
 */
static inline void mavlink_msg_servo_node_decode(const mavlink_message_t* msg, mavlink_servo_node_t* servo_node)
{
#if MAVLINK_NEED_BYTE_SWAP
	servo_node->time_boot_ms = mavlink_msg_servo_node_get_time_boot_ms(msg);
	servo_node->relay_ch_1 = mavlink_msg_servo_node_get_relay_ch_1(msg);
	servo_node->relay_ch_2 = mavlink_msg_servo_node_get_relay_ch_2(msg);
	servo_node->relay_ch_3 = mavlink_msg_servo_node_get_relay_ch_3(msg);
	servo_node->relay_ch_4 = mavlink_msg_servo_node_get_relay_ch_4(msg);
	servo_node->relay_ch_5 = mavlink_msg_servo_node_get_relay_ch_5(msg);
	servo_node->relay_ch_6 = mavlink_msg_servo_node_get_relay_ch_6(msg);
	servo_node->RC_ch9 = mavlink_msg_servo_node_get_RC_ch9(msg);
	servo_node->Override_SW = mavlink_msg_servo_node_get_Override_SW(msg);
#else
	memcpy(servo_node, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SERVO_NODE_LEN);
#endif
}
