// MESSAGE Longitudinal PACKING

#define MAVLINK_MSG_ID_Longitudinal 241

typedef struct __mavlink_longitudinal_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 float AoA; ///< Angle of attack
 float q; ///< pitchrate
 float ax; ///< Ax (mg)
 float az; ///< Az (mg)
 float IMU_pitch; ///< theta
 float GBL_pitch; ///< theta
 float elevator; ///< elevator fdbk
 float elevator_cmd; ///< Elevator command
} mavlink_longitudinal_t;

#define MAVLINK_MSG_ID_Longitudinal_LEN 36
#define MAVLINK_MSG_ID_241_LEN 36

#define MAVLINK_MSG_ID_Longitudinal_CRC 68
#define MAVLINK_MSG_ID_241_CRC 68



#define MAVLINK_MESSAGE_INFO_Longitudinal { \
	"Longitudinal", \
	9, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_longitudinal_t, time_boot_ms) }, \
         { "AoA", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_longitudinal_t, AoA) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_longitudinal_t, q) }, \
         { "ax", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_longitudinal_t, ax) }, \
         { "az", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_longitudinal_t, az) }, \
         { "IMU_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_longitudinal_t, IMU_pitch) }, \
         { "GBL_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_longitudinal_t, GBL_pitch) }, \
         { "elevator", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_longitudinal_t, elevator) }, \
         { "elevator_cmd", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_longitudinal_t, elevator_cmd) }, \
         } \
}


/**
 * @brief Pack a longitudinal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param AoA Angle of attack
 * @param q pitchrate
 * @param ax Ax (mg)
 * @param az Az (mg)
 * @param IMU_pitch theta
 * @param GBL_pitch theta
 * @param elevator elevator fdbk
 * @param elevator_cmd Elevator command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_longitudinal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float AoA, float q, float ax, float az, float IMU_pitch, float GBL_pitch, float elevator, float elevator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Longitudinal_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, AoA);
	_mav_put_float(buf, 8, q);
	_mav_put_float(buf, 12, ax);
	_mav_put_float(buf, 16, az);
	_mav_put_float(buf, 20, IMU_pitch);
	_mav_put_float(buf, 24, GBL_pitch);
	_mav_put_float(buf, 28, elevator);
	_mav_put_float(buf, 32, elevator_cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Longitudinal_LEN);
#else
	mavlink_longitudinal_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.AoA = AoA;
	packet.q = q;
	packet.ax = ax;
	packet.az = az;
	packet.IMU_pitch = IMU_pitch;
	packet.GBL_pitch = GBL_pitch;
	packet.elevator = elevator;
	packet.elevator_cmd = elevator_cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Longitudinal;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
}

/**
 * @brief Pack a longitudinal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param AoA Angle of attack
 * @param q pitchrate
 * @param ax Ax (mg)
 * @param az Az (mg)
 * @param IMU_pitch theta
 * @param GBL_pitch theta
 * @param elevator elevator fdbk
 * @param elevator_cmd Elevator command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_longitudinal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float AoA,float q,float ax,float az,float IMU_pitch,float GBL_pitch,float elevator,float elevator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Longitudinal_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, AoA);
	_mav_put_float(buf, 8, q);
	_mav_put_float(buf, 12, ax);
	_mav_put_float(buf, 16, az);
	_mav_put_float(buf, 20, IMU_pitch);
	_mav_put_float(buf, 24, GBL_pitch);
	_mav_put_float(buf, 28, elevator);
	_mav_put_float(buf, 32, elevator_cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Longitudinal_LEN);
#else
	mavlink_longitudinal_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.AoA = AoA;
	packet.q = q;
	packet.ax = ax;
	packet.az = az;
	packet.IMU_pitch = IMU_pitch;
	packet.GBL_pitch = GBL_pitch;
	packet.elevator = elevator;
	packet.elevator_cmd = elevator_cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Longitudinal;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
}

/**
 * @brief Encode a longitudinal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param longitudinal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_longitudinal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_longitudinal_t* longitudinal)
{
	return mavlink_msg_longitudinal_pack(system_id, component_id, msg, longitudinal->time_boot_ms, longitudinal->AoA, longitudinal->q, longitudinal->ax, longitudinal->az, longitudinal->IMU_pitch, longitudinal->GBL_pitch, longitudinal->elevator, longitudinal->elevator_cmd);
}

/**
 * @brief Encode a longitudinal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param longitudinal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_longitudinal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_longitudinal_t* longitudinal)
{
	return mavlink_msg_longitudinal_pack_chan(system_id, component_id, chan, msg, longitudinal->time_boot_ms, longitudinal->AoA, longitudinal->q, longitudinal->ax, longitudinal->az, longitudinal->IMU_pitch, longitudinal->GBL_pitch, longitudinal->elevator, longitudinal->elevator_cmd);
}

/**
 * @brief Send a longitudinal message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param AoA Angle of attack
 * @param q pitchrate
 * @param ax Ax (mg)
 * @param az Az (mg)
 * @param IMU_pitch theta
 * @param GBL_pitch theta
 * @param elevator elevator fdbk
 * @param elevator_cmd Elevator command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_longitudinal_send(mavlink_channel_t chan, uint32_t time_boot_ms, float AoA, float q, float ax, float az, float IMU_pitch, float GBL_pitch, float elevator, float elevator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Longitudinal_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, AoA);
	_mav_put_float(buf, 8, q);
	_mav_put_float(buf, 12, ax);
	_mav_put_float(buf, 16, az);
	_mav_put_float(buf, 20, IMU_pitch);
	_mav_put_float(buf, 24, GBL_pitch);
	_mav_put_float(buf, 28, elevator);
	_mav_put_float(buf, 32, elevator_cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, buf, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, buf, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
#else
	mavlink_longitudinal_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.AoA = AoA;
	packet.q = q;
	packet.ax = ax;
	packet.az = az;
	packet.IMU_pitch = IMU_pitch;
	packet.GBL_pitch = GBL_pitch;
	packet.elevator = elevator;
	packet.elevator_cmd = elevator_cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, (const char *)&packet, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, (const char *)&packet, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_Longitudinal_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_longitudinal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float AoA, float q, float ax, float az, float IMU_pitch, float GBL_pitch, float elevator, float elevator_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, AoA);
	_mav_put_float(buf, 8, q);
	_mav_put_float(buf, 12, ax);
	_mav_put_float(buf, 16, az);
	_mav_put_float(buf, 20, IMU_pitch);
	_mav_put_float(buf, 24, GBL_pitch);
	_mav_put_float(buf, 28, elevator);
	_mav_put_float(buf, 32, elevator_cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, buf, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, buf, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
#else
	mavlink_longitudinal_t *packet = (mavlink_longitudinal_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->AoA = AoA;
	packet->q = q;
	packet->ax = ax;
	packet->az = az;
	packet->IMU_pitch = IMU_pitch;
	packet->GBL_pitch = GBL_pitch;
	packet->elevator = elevator;
	packet->elevator_cmd = elevator_cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, (const char *)packet, MAVLINK_MSG_ID_Longitudinal_LEN, MAVLINK_MSG_ID_Longitudinal_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Longitudinal, (const char *)packet, MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE Longitudinal UNPACKING


/**
 * @brief Get field time_boot_ms from longitudinal message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_longitudinal_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field AoA from longitudinal message
 *
 * @return Angle of attack
 */
static inline float mavlink_msg_longitudinal_get_AoA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field q from longitudinal message
 *
 * @return pitchrate
 */
static inline float mavlink_msg_longitudinal_get_q(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field ax from longitudinal message
 *
 * @return Ax (mg)
 */
static inline float mavlink_msg_longitudinal_get_ax(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field az from longitudinal message
 *
 * @return Az (mg)
 */
static inline float mavlink_msg_longitudinal_get_az(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field IMU_pitch from longitudinal message
 *
 * @return theta
 */
static inline float mavlink_msg_longitudinal_get_IMU_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field GBL_pitch from longitudinal message
 *
 * @return theta
 */
static inline float mavlink_msg_longitudinal_get_GBL_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field elevator from longitudinal message
 *
 * @return elevator fdbk
 */
static inline float mavlink_msg_longitudinal_get_elevator(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field elevator_cmd from longitudinal message
 *
 * @return Elevator command
 */
static inline float mavlink_msg_longitudinal_get_elevator_cmd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a longitudinal message into a struct
 *
 * @param msg The message to decode
 * @param longitudinal C-struct to decode the message contents into
 */
static inline void mavlink_msg_longitudinal_decode(const mavlink_message_t* msg, mavlink_longitudinal_t* longitudinal)
{
#if MAVLINK_NEED_BYTE_SWAP
	longitudinal->time_boot_ms = mavlink_msg_longitudinal_get_time_boot_ms(msg);
	longitudinal->AoA = mavlink_msg_longitudinal_get_AoA(msg);
	longitudinal->q = mavlink_msg_longitudinal_get_q(msg);
	longitudinal->ax = mavlink_msg_longitudinal_get_ax(msg);
	longitudinal->az = mavlink_msg_longitudinal_get_az(msg);
	longitudinal->IMU_pitch = mavlink_msg_longitudinal_get_IMU_pitch(msg);
	longitudinal->GBL_pitch = mavlink_msg_longitudinal_get_GBL_pitch(msg);
	longitudinal->elevator = mavlink_msg_longitudinal_get_elevator(msg);
	longitudinal->elevator_cmd = mavlink_msg_longitudinal_get_elevator_cmd(msg);
#else
	memcpy(longitudinal, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_Longitudinal_LEN);
#endif
}
