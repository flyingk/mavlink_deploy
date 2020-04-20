// MESSAGE PID_TUNE PACKING

#define MAVLINK_MSG_ID_PID_TUNE 197

typedef struct __mavlink_pid_tune_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 float Cmd_In; /*< Input command*/
 float Sensor_Fbk; /*< Feedback data*/
 float Cmd_Out; /*< Output command*/
 float Kp; /*< Proportional control component*/
 float Ki; /*< Integral control component*/
 float Kd; /*< Differential control component*/
} mavlink_pid_tune_t;

#define MAVLINK_MSG_ID_PID_TUNE_LEN 28
#define MAVLINK_MSG_ID_197_LEN 28

#define MAVLINK_MSG_ID_PID_TUNE_CRC 48
#define MAVLINK_MSG_ID_197_CRC 48



#define MAVLINK_MESSAGE_INFO_PID_TUNE { \
	"PID_TUNE", \
	7, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_pid_tune_t, time_boot_ms) }, \
         { "Cmd_In", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pid_tune_t, Cmd_In) }, \
         { "Sensor_Fbk", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pid_tune_t, Sensor_Fbk) }, \
         { "Cmd_Out", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pid_tune_t, Cmd_Out) }, \
         { "Kp", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_pid_tune_t, Kp) }, \
         { "Ki", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_pid_tune_t, Ki) }, \
         { "Kd", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_pid_tune_t, Kd) }, \
         } \
}


/**
 * @brief Pack a pid_tune message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Cmd_In Input command
 * @param Sensor_Fbk Feedback data
 * @param Cmd_Out Output command
 * @param Kp Proportional control component
 * @param Ki Integral control component
 * @param Kd Differential control component
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pid_tune_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float Cmd_In, float Sensor_Fbk, float Cmd_Out, float Kp, float Ki, float Kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TUNE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Cmd_In);
	_mav_put_float(buf, 8, Sensor_Fbk);
	_mav_put_float(buf, 12, Cmd_Out);
	_mav_put_float(buf, 16, Kp);
	_mav_put_float(buf, 20, Ki);
	_mav_put_float(buf, 24, Kd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PID_TUNE_LEN);
#else
	mavlink_pid_tune_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Cmd_In = Cmd_In;
	packet.Sensor_Fbk = Sensor_Fbk;
	packet.Cmd_Out = Cmd_Out;
	packet.Kp = Kp;
	packet.Ki = Ki;
	packet.Kd = Kd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PID_TUNE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
}

/**
 * @brief Pack a pid_tune message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Cmd_In Input command
 * @param Sensor_Fbk Feedback data
 * @param Cmd_Out Output command
 * @param Kp Proportional control component
 * @param Ki Integral control component
 * @param Kd Differential control component
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pid_tune_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float Cmd_In,float Sensor_Fbk,float Cmd_Out,float Kp,float Ki,float Kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TUNE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Cmd_In);
	_mav_put_float(buf, 8, Sensor_Fbk);
	_mav_put_float(buf, 12, Cmd_Out);
	_mav_put_float(buf, 16, Kp);
	_mav_put_float(buf, 20, Ki);
	_mav_put_float(buf, 24, Kd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PID_TUNE_LEN);
#else
	mavlink_pid_tune_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Cmd_In = Cmd_In;
	packet.Sensor_Fbk = Sensor_Fbk;
	packet.Cmd_Out = Cmd_Out;
	packet.Kp = Kp;
	packet.Ki = Ki;
	packet.Kd = Kd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PID_TUNE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
}

/**
 * @brief Encode a pid_tune struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pid_tune C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pid_tune_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pid_tune_t* pid_tune)
{
	return mavlink_msg_pid_tune_pack(system_id, component_id, msg, pid_tune->time_boot_ms, pid_tune->Cmd_In, pid_tune->Sensor_Fbk, pid_tune->Cmd_Out, pid_tune->Kp, pid_tune->Ki, pid_tune->Kd);
}

/**
 * @brief Encode a pid_tune struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pid_tune C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pid_tune_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pid_tune_t* pid_tune)
{
	return mavlink_msg_pid_tune_pack_chan(system_id, component_id, chan, msg, pid_tune->time_boot_ms, pid_tune->Cmd_In, pid_tune->Sensor_Fbk, pid_tune->Cmd_Out, pid_tune->Kp, pid_tune->Ki, pid_tune->Kd);
}

/**
 * @brief Send a pid_tune message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Cmd_In Input command
 * @param Sensor_Fbk Feedback data
 * @param Cmd_Out Output command
 * @param Kp Proportional control component
 * @param Ki Integral control component
 * @param Kd Differential control component
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pid_tune_send(mavlink_channel_t chan, uint32_t time_boot_ms, float Cmd_In, float Sensor_Fbk, float Cmd_Out, float Kp, float Ki, float Kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PID_TUNE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Cmd_In);
	_mav_put_float(buf, 8, Sensor_Fbk);
	_mav_put_float(buf, 12, Cmd_Out);
	_mav_put_float(buf, 16, Kp);
	_mav_put_float(buf, 20, Ki);
	_mav_put_float(buf, 24, Kd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, buf, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, buf, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
#else
	mavlink_pid_tune_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Cmd_In = Cmd_In;
	packet.Sensor_Fbk = Sensor_Fbk;
	packet.Cmd_Out = Cmd_Out;
	packet.Kp = Kp;
	packet.Ki = Ki;
	packet.Kd = Kd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, (const char *)&packet, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, (const char *)&packet, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PID_TUNE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pid_tune_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float Cmd_In, float Sensor_Fbk, float Cmd_Out, float Kp, float Ki, float Kd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Cmd_In);
	_mav_put_float(buf, 8, Sensor_Fbk);
	_mav_put_float(buf, 12, Cmd_Out);
	_mav_put_float(buf, 16, Kp);
	_mav_put_float(buf, 20, Ki);
	_mav_put_float(buf, 24, Kd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, buf, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, buf, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
#else
	mavlink_pid_tune_t *packet = (mavlink_pid_tune_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Cmd_In = Cmd_In;
	packet->Sensor_Fbk = Sensor_Fbk;
	packet->Cmd_Out = Cmd_Out;
	packet->Kp = Kp;
	packet->Ki = Ki;
	packet->Kd = Kd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, (const char *)packet, MAVLINK_MSG_ID_PID_TUNE_LEN, MAVLINK_MSG_ID_PID_TUNE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PID_TUNE, (const char *)packet, MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PID_TUNE UNPACKING


/**
 * @brief Get field time_boot_ms from pid_tune message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_pid_tune_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Cmd_In from pid_tune message
 *
 * @return Input command
 */
static inline float mavlink_msg_pid_tune_get_Cmd_In(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Sensor_Fbk from pid_tune message
 *
 * @return Feedback data
 */
static inline float mavlink_msg_pid_tune_get_Sensor_Fbk(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Cmd_Out from pid_tune message
 *
 * @return Output command
 */
static inline float mavlink_msg_pid_tune_get_Cmd_Out(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Kp from pid_tune message
 *
 * @return Proportional control component
 */
static inline float mavlink_msg_pid_tune_get_Kp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Ki from pid_tune message
 *
 * @return Integral control component
 */
static inline float mavlink_msg_pid_tune_get_Ki(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Kd from pid_tune message
 *
 * @return Differential control component
 */
static inline float mavlink_msg_pid_tune_get_Kd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a pid_tune message into a struct
 *
 * @param msg The message to decode
 * @param pid_tune C-struct to decode the message contents into
 */
static inline void mavlink_msg_pid_tune_decode(const mavlink_message_t* msg, mavlink_pid_tune_t* pid_tune)
{
#if MAVLINK_NEED_BYTE_SWAP
	pid_tune->time_boot_ms = mavlink_msg_pid_tune_get_time_boot_ms(msg);
	pid_tune->Cmd_In = mavlink_msg_pid_tune_get_Cmd_In(msg);
	pid_tune->Sensor_Fbk = mavlink_msg_pid_tune_get_Sensor_Fbk(msg);
	pid_tune->Cmd_Out = mavlink_msg_pid_tune_get_Cmd_Out(msg);
	pid_tune->Kp = mavlink_msg_pid_tune_get_Kp(msg);
	pid_tune->Ki = mavlink_msg_pid_tune_get_Ki(msg);
	pid_tune->Kd = mavlink_msg_pid_tune_get_Kd(msg);
#else
	memcpy(pid_tune, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PID_TUNE_LEN);
#endif
}
