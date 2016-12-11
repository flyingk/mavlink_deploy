// MESSAGE EKF_STATE PACKING

#define MAVLINK_MSG_ID_EKF_STATE 198

typedef struct __mavlink_ekf_state_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 float Roll; /*< Estimated roll angle [deg]*/
 float Pitch; /*< Estimated pitch angle [deg]*/
 float Yaw; /*< Estimated yaw angle [deg]*/
 int16_t p; /*< Estimated angular rate X axis (deg/sec)*/
 int16_t q; /*< Estimated angular rate Y axis (deg/sec)*/
 int16_t r; /*< Estimated angular rate Z axis (deg/sec)*/
} mavlink_ekf_state_t;

#define MAVLINK_MSG_ID_EKF_STATE_LEN 22
#define MAVLINK_MSG_ID_198_LEN 22

#define MAVLINK_MSG_ID_EKF_STATE_CRC 53
#define MAVLINK_MSG_ID_198_CRC 53



#define MAVLINK_MESSAGE_INFO_EKF_STATE { \
	"EKF_STATE", \
	7, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_state_t, time_boot_ms) }, \
         { "Roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ekf_state_t, Roll) }, \
         { "Pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ekf_state_t, Pitch) }, \
         { "Yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ekf_state_t, Yaw) }, \
         { "p", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_state_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_state_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_state_t, r) }, \
         } \
}


/**
 * @brief Pack a ekf_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Roll);
	_mav_put_float(buf, 8, Pitch);
	_mav_put_float(buf, 12, Yaw);
	_mav_put_int16_t(buf, 16, p);
	_mav_put_int16_t(buf, 18, q);
	_mav_put_int16_t(buf, 20, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_STATE_LEN);
#else
	mavlink_ekf_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.p = p;
	packet.q = q;
	packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
}

/**
 * @brief Pack a ekf_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t p,int16_t q,int16_t r,float Roll,float Pitch,float Yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Roll);
	_mav_put_float(buf, 8, Pitch);
	_mav_put_float(buf, 12, Yaw);
	_mav_put_int16_t(buf, 16, p);
	_mav_put_int16_t(buf, 18, q);
	_mav_put_int16_t(buf, 20, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_STATE_LEN);
#else
	mavlink_ekf_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.p = p;
	packet.q = q;
	packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
}

/**
 * @brief Encode a ekf_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ekf_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ekf_state_t* ekf_state)
{
	return mavlink_msg_ekf_state_pack(system_id, component_id, msg, ekf_state->time_boot_ms, ekf_state->p, ekf_state->q, ekf_state->r, ekf_state->Roll, ekf_state->Pitch, ekf_state->Yaw);
}

/**
 * @brief Encode a ekf_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ekf_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ekf_state_t* ekf_state)
{
	return mavlink_msg_ekf_state_pack_chan(system_id, component_id, chan, msg, ekf_state->time_boot_ms, ekf_state->p, ekf_state->q, ekf_state->r, ekf_state->Roll, ekf_state->Pitch, ekf_state->Yaw);
}

/**
 * @brief Send a ekf_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_state_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Roll);
	_mav_put_float(buf, 8, Pitch);
	_mav_put_float(buf, 12, Yaw);
	_mav_put_int16_t(buf, 16, p);
	_mav_put_int16_t(buf, 18, q);
	_mav_put_int16_t(buf, 20, r);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, buf, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, buf, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
#else
	mavlink_ekf_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.p = p;
	packet.q = q;
	packet.r = r;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, (const char *)&packet, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, (const char *)&packet, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_EKF_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ekf_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Roll);
	_mav_put_float(buf, 8, Pitch);
	_mav_put_float(buf, 12, Yaw);
	_mav_put_int16_t(buf, 16, p);
	_mav_put_int16_t(buf, 18, q);
	_mav_put_int16_t(buf, 20, r);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, buf, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, buf, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
#else
	mavlink_ekf_state_t *packet = (mavlink_ekf_state_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Roll = Roll;
	packet->Pitch = Pitch;
	packet->Yaw = Yaw;
	packet->p = p;
	packet->q = q;
	packet->r = r;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, (const char *)packet, MAVLINK_MSG_ID_EKF_STATE_LEN, MAVLINK_MSG_ID_EKF_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_STATE, (const char *)packet, MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE EKF_STATE UNPACKING


/**
 * @brief Get field time_boot_ms from ekf_state message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_ekf_state_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field p from ekf_state message
 *
 * @return Estimated angular rate X axis (deg/sec)
 */
static inline int16_t mavlink_msg_ekf_state_get_p(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field q from ekf_state message
 *
 * @return Estimated angular rate Y axis (deg/sec)
 */
static inline int16_t mavlink_msg_ekf_state_get_q(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field r from ekf_state message
 *
 * @return Estimated angular rate Z axis (deg/sec)
 */
static inline int16_t mavlink_msg_ekf_state_get_r(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field Roll from ekf_state message
 *
 * @return Estimated roll angle [deg]
 */
static inline float mavlink_msg_ekf_state_get_Roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Pitch from ekf_state message
 *
 * @return Estimated pitch angle [deg]
 */
static inline float mavlink_msg_ekf_state_get_Pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Yaw from ekf_state message
 *
 * @return Estimated yaw angle [deg]
 */
static inline float mavlink_msg_ekf_state_get_Yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a ekf_state message into a struct
 *
 * @param msg The message to decode
 * @param ekf_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_ekf_state_decode(const mavlink_message_t* msg, mavlink_ekf_state_t* ekf_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	ekf_state->time_boot_ms = mavlink_msg_ekf_state_get_time_boot_ms(msg);
	ekf_state->Roll = mavlink_msg_ekf_state_get_Roll(msg);
	ekf_state->Pitch = mavlink_msg_ekf_state_get_Pitch(msg);
	ekf_state->Yaw = mavlink_msg_ekf_state_get_Yaw(msg);
	ekf_state->p = mavlink_msg_ekf_state_get_p(msg);
	ekf_state->q = mavlink_msg_ekf_state_get_q(msg);
	ekf_state->r = mavlink_msg_ekf_state_get_r(msg);
#else
	memcpy(ekf_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EKF_STATE_LEN);
#endif
}
