// MESSAGE CONTROL_FEEDBACK PACKING

#define MAVLINK_MSG_ID_CONTROL_FEEDBACK 233

typedef struct __mavlink_control_feedback_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 float elevator; ///< Elevator angle in deg
 float rudder; ///< Rudder angle in deg
 float aileron; ///< Aileron angle in deg
 float ctrl_aux_1; ///< Aux channel 1 in deg
 float ctrl_aux_2; ///< Aux channel 2 in deg
 float ctrl_aux_3; ///< Aux channel 3 in deg
} mavlink_control_feedback_t;

#define MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN 28
#define MAVLINK_MSG_ID_233_LEN 28

#define MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC 140
#define MAVLINK_MSG_ID_233_CRC 140



#define MAVLINK_MESSAGE_INFO_CONTROL_FEEDBACK { \
	"CONTROL_FEEDBACK", \
	7, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_control_feedback_t, time_boot_ms) }, \
         { "elevator", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_control_feedback_t, elevator) }, \
         { "rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_control_feedback_t, rudder) }, \
         { "aileron", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_control_feedback_t, aileron) }, \
         { "ctrl_aux_1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_control_feedback_t, ctrl_aux_1) }, \
         { "ctrl_aux_2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_control_feedback_t, ctrl_aux_2) }, \
         { "ctrl_aux_3", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_control_feedback_t, ctrl_aux_3) }, \
         } \
}


/**
 * @brief Pack a control_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param elevator Elevator angle in deg
 * @param rudder Rudder angle in deg
 * @param aileron Aileron angle in deg
 * @param ctrl_aux_1 Aux channel 1 in deg
 * @param ctrl_aux_2 Aux channel 2 in deg
 * @param ctrl_aux_3 Aux channel 3 in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float elevator, float rudder, float aileron, float ctrl_aux_1, float ctrl_aux_2, float ctrl_aux_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, elevator);
	_mav_put_float(buf, 8, rudder);
	_mav_put_float(buf, 12, aileron);
	_mav_put_float(buf, 16, ctrl_aux_1);
	_mav_put_float(buf, 20, ctrl_aux_2);
	_mav_put_float(buf, 24, ctrl_aux_3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#else
	mavlink_control_feedback_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.elevator = elevator;
	packet.rudder = rudder;
	packet.aileron = aileron;
	packet.ctrl_aux_1 = ctrl_aux_1;
	packet.ctrl_aux_2 = ctrl_aux_2;
	packet.ctrl_aux_3 = ctrl_aux_3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROL_FEEDBACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
}

/**
 * @brief Pack a control_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param elevator Elevator angle in deg
 * @param rudder Rudder angle in deg
 * @param aileron Aileron angle in deg
 * @param ctrl_aux_1 Aux channel 1 in deg
 * @param ctrl_aux_2 Aux channel 2 in deg
 * @param ctrl_aux_3 Aux channel 3 in deg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float elevator,float rudder,float aileron,float ctrl_aux_1,float ctrl_aux_2,float ctrl_aux_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, elevator);
	_mav_put_float(buf, 8, rudder);
	_mav_put_float(buf, 12, aileron);
	_mav_put_float(buf, 16, ctrl_aux_1);
	_mav_put_float(buf, 20, ctrl_aux_2);
	_mav_put_float(buf, 24, ctrl_aux_3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#else
	mavlink_control_feedback_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.elevator = elevator;
	packet.rudder = rudder;
	packet.aileron = aileron;
	packet.ctrl_aux_1 = ctrl_aux_1;
	packet.ctrl_aux_2 = ctrl_aux_2;
	packet.ctrl_aux_3 = ctrl_aux_3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROL_FEEDBACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
}

/**
 * @brief Encode a control_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param control_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_control_feedback_t* control_feedback)
{
	return mavlink_msg_control_feedback_pack(system_id, component_id, msg, control_feedback->time_boot_ms, control_feedback->elevator, control_feedback->rudder, control_feedback->aileron, control_feedback->ctrl_aux_1, control_feedback->ctrl_aux_2, control_feedback->ctrl_aux_3);
}

/**
 * @brief Encode a control_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param control_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_control_feedback_t* control_feedback)
{
	return mavlink_msg_control_feedback_pack_chan(system_id, component_id, chan, msg, control_feedback->time_boot_ms, control_feedback->elevator, control_feedback->rudder, control_feedback->aileron, control_feedback->ctrl_aux_1, control_feedback->ctrl_aux_2, control_feedback->ctrl_aux_3);
}

/**
 * @brief Send a control_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param elevator Elevator angle in deg
 * @param rudder Rudder angle in deg
 * @param aileron Aileron angle in deg
 * @param ctrl_aux_1 Aux channel 1 in deg
 * @param ctrl_aux_2 Aux channel 2 in deg
 * @param ctrl_aux_3 Aux channel 3 in deg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_control_feedback_send(mavlink_channel_t chan, uint32_t time_boot_ms, float elevator, float rudder, float aileron, float ctrl_aux_1, float ctrl_aux_2, float ctrl_aux_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, elevator);
	_mav_put_float(buf, 8, rudder);
	_mav_put_float(buf, 12, aileron);
	_mav_put_float(buf, 16, ctrl_aux_1);
	_mav_put_float(buf, 20, ctrl_aux_2);
	_mav_put_float(buf, 24, ctrl_aux_3);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
#else
	mavlink_control_feedback_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.elevator = elevator;
	packet.rudder = rudder;
	packet.aileron = aileron;
	packet.ctrl_aux_1 = ctrl_aux_1;
	packet.ctrl_aux_2 = ctrl_aux_2;
	packet.ctrl_aux_3 = ctrl_aux_3;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_control_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float elevator, float rudder, float aileron, float ctrl_aux_1, float ctrl_aux_2, float ctrl_aux_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, elevator);
	_mav_put_float(buf, 8, rudder);
	_mav_put_float(buf, 12, aileron);
	_mav_put_float(buf, 16, ctrl_aux_1);
	_mav_put_float(buf, 20, ctrl_aux_2);
	_mav_put_float(buf, 24, ctrl_aux_3);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, buf, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
#else
	mavlink_control_feedback_t *packet = (mavlink_control_feedback_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->elevator = elevator;
	packet->rudder = rudder;
	packet->aileron = aileron;
	packet->ctrl_aux_1 = ctrl_aux_1;
	packet->ctrl_aux_2 = ctrl_aux_2;
	packet->ctrl_aux_3 = ctrl_aux_3;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN, MAVLINK_MSG_ID_CONTROL_FEEDBACK_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CONTROL_FEEDBACK UNPACKING


/**
 * @brief Get field time_boot_ms from control_feedback message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_control_feedback_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field elevator from control_feedback message
 *
 * @return Elevator angle in deg
 */
static inline float mavlink_msg_control_feedback_get_elevator(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rudder from control_feedback message
 *
 * @return Rudder angle in deg
 */
static inline float mavlink_msg_control_feedback_get_rudder(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field aileron from control_feedback message
 *
 * @return Aileron angle in deg
 */
static inline float mavlink_msg_control_feedback_get_aileron(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field ctrl_aux_1 from control_feedback message
 *
 * @return Aux channel 1 in deg
 */
static inline float mavlink_msg_control_feedback_get_ctrl_aux_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ctrl_aux_2 from control_feedback message
 *
 * @return Aux channel 2 in deg
 */
static inline float mavlink_msg_control_feedback_get_ctrl_aux_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ctrl_aux_3 from control_feedback message
 *
 * @return Aux channel 3 in deg
 */
static inline float mavlink_msg_control_feedback_get_ctrl_aux_3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a control_feedback message into a struct
 *
 * @param msg The message to decode
 * @param control_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_control_feedback_decode(const mavlink_message_t* msg, mavlink_control_feedback_t* control_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP
	control_feedback->time_boot_ms = mavlink_msg_control_feedback_get_time_boot_ms(msg);
	control_feedback->elevator = mavlink_msg_control_feedback_get_elevator(msg);
	control_feedback->rudder = mavlink_msg_control_feedback_get_rudder(msg);
	control_feedback->aileron = mavlink_msg_control_feedback_get_aileron(msg);
	control_feedback->ctrl_aux_1 = mavlink_msg_control_feedback_get_ctrl_aux_1(msg);
	control_feedback->ctrl_aux_2 = mavlink_msg_control_feedback_get_ctrl_aux_2(msg);
	control_feedback->ctrl_aux_3 = mavlink_msg_control_feedback_get_ctrl_aux_3(msg);
#else
	memcpy(control_feedback, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CONTROL_FEEDBACK_LEN);
#endif
}
