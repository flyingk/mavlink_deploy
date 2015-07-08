// MESSAGE Lateral PACKING

#define MAVLINK_MSG_ID_Lateral 242

typedef struct __mavlink_lateral_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 float Beta; ///< Sideslip
 float p; ///< roll rate
 float r; ///< yaw rate
 float ay; ///< Ay (mg)
 float IMU_roll; ///< phi
 float IMU_yaw; ///< psi
 float GBL_roll; ///< phi
 float GBL_yaw; ///< psi
 float Rudder; ///< rudder fdbk
 float Aileron; ///< aileron fdbk
 float Rudder_cmd; ///< Rudder command
 float Aileron_cmd; ///< Aileron command
} mavlink_lateral_t;

#define MAVLINK_MSG_ID_Lateral_LEN 52
#define MAVLINK_MSG_ID_242_LEN 52

#define MAVLINK_MSG_ID_Lateral_CRC 179
#define MAVLINK_MSG_ID_242_CRC 179



#define MAVLINK_MESSAGE_INFO_Lateral { \
	"Lateral", \
	13, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_lateral_t, time_boot_ms) }, \
         { "Beta", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_lateral_t, Beta) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_lateral_t, p) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_lateral_t, r) }, \
         { "ay", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_lateral_t, ay) }, \
         { "IMU_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_lateral_t, IMU_roll) }, \
         { "IMU_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_lateral_t, IMU_yaw) }, \
         { "GBL_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_lateral_t, GBL_roll) }, \
         { "GBL_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_lateral_t, GBL_yaw) }, \
         { "Rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_lateral_t, Rudder) }, \
         { "Aileron", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_lateral_t, Aileron) }, \
         { "Rudder_cmd", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_lateral_t, Rudder_cmd) }, \
         { "Aileron_cmd", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_lateral_t, Aileron_cmd) }, \
         } \
}


/**
 * @brief Pack a lateral message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Beta Sideslip
 * @param p roll rate
 * @param r yaw rate
 * @param ay Ay (mg)
 * @param IMU_roll phi
 * @param IMU_yaw psi
 * @param GBL_roll phi
 * @param GBL_yaw psi
 * @param Rudder rudder fdbk
 * @param Aileron aileron fdbk
 * @param Rudder_cmd Rudder command
 * @param Aileron_cmd Aileron command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lateral_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float Beta, float p, float r, float ay, float IMU_roll, float IMU_yaw, float GBL_roll, float GBL_yaw, float Rudder, float Aileron, float Rudder_cmd, float Aileron_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Lateral_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Beta);
	_mav_put_float(buf, 8, p);
	_mav_put_float(buf, 12, r);
	_mav_put_float(buf, 16, ay);
	_mav_put_float(buf, 20, IMU_roll);
	_mav_put_float(buf, 24, IMU_yaw);
	_mav_put_float(buf, 28, GBL_roll);
	_mav_put_float(buf, 32, GBL_yaw);
	_mav_put_float(buf, 36, Rudder);
	_mav_put_float(buf, 40, Aileron);
	_mav_put_float(buf, 44, Rudder_cmd);
	_mav_put_float(buf, 48, Aileron_cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Lateral_LEN);
#else
	mavlink_lateral_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Beta = Beta;
	packet.p = p;
	packet.r = r;
	packet.ay = ay;
	packet.IMU_roll = IMU_roll;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_yaw = GBL_yaw;
	packet.Rudder = Rudder;
	packet.Aileron = Aileron;
	packet.Rudder_cmd = Rudder_cmd;
	packet.Aileron_cmd = Aileron_cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Lateral_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Lateral;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Lateral_LEN);
#endif
}

/**
 * @brief Pack a lateral message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Beta Sideslip
 * @param p roll rate
 * @param r yaw rate
 * @param ay Ay (mg)
 * @param IMU_roll phi
 * @param IMU_yaw psi
 * @param GBL_roll phi
 * @param GBL_yaw psi
 * @param Rudder rudder fdbk
 * @param Aileron aileron fdbk
 * @param Rudder_cmd Rudder command
 * @param Aileron_cmd Aileron command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lateral_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float Beta,float p,float r,float ay,float IMU_roll,float IMU_yaw,float GBL_roll,float GBL_yaw,float Rudder,float Aileron,float Rudder_cmd,float Aileron_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Lateral_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Beta);
	_mav_put_float(buf, 8, p);
	_mav_put_float(buf, 12, r);
	_mav_put_float(buf, 16, ay);
	_mav_put_float(buf, 20, IMU_roll);
	_mav_put_float(buf, 24, IMU_yaw);
	_mav_put_float(buf, 28, GBL_roll);
	_mav_put_float(buf, 32, GBL_yaw);
	_mav_put_float(buf, 36, Rudder);
	_mav_put_float(buf, 40, Aileron);
	_mav_put_float(buf, 44, Rudder_cmd);
	_mav_put_float(buf, 48, Aileron_cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Lateral_LEN);
#else
	mavlink_lateral_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Beta = Beta;
	packet.p = p;
	packet.r = r;
	packet.ay = ay;
	packet.IMU_roll = IMU_roll;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_yaw = GBL_yaw;
	packet.Rudder = Rudder;
	packet.Aileron = Aileron;
	packet.Rudder_cmd = Rudder_cmd;
	packet.Aileron_cmd = Aileron_cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Lateral_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Lateral;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Lateral_LEN);
#endif
}

/**
 * @brief Encode a lateral struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param lateral C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lateral_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_lateral_t* lateral)
{
	return mavlink_msg_lateral_pack(system_id, component_id, msg, lateral->time_boot_ms, lateral->Beta, lateral->p, lateral->r, lateral->ay, lateral->IMU_roll, lateral->IMU_yaw, lateral->GBL_roll, lateral->GBL_yaw, lateral->Rudder, lateral->Aileron, lateral->Rudder_cmd, lateral->Aileron_cmd);
}

/**
 * @brief Encode a lateral struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lateral C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lateral_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_lateral_t* lateral)
{
	return mavlink_msg_lateral_pack_chan(system_id, component_id, chan, msg, lateral->time_boot_ms, lateral->Beta, lateral->p, lateral->r, lateral->ay, lateral->IMU_roll, lateral->IMU_yaw, lateral->GBL_roll, lateral->GBL_yaw, lateral->Rudder, lateral->Aileron, lateral->Rudder_cmd, lateral->Aileron_cmd);
}

/**
 * @brief Send a lateral message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Beta Sideslip
 * @param p roll rate
 * @param r yaw rate
 * @param ay Ay (mg)
 * @param IMU_roll phi
 * @param IMU_yaw psi
 * @param GBL_roll phi
 * @param GBL_yaw psi
 * @param Rudder rudder fdbk
 * @param Aileron aileron fdbk
 * @param Rudder_cmd Rudder command
 * @param Aileron_cmd Aileron command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_lateral_send(mavlink_channel_t chan, uint32_t time_boot_ms, float Beta, float p, float r, float ay, float IMU_roll, float IMU_yaw, float GBL_roll, float GBL_yaw, float Rudder, float Aileron, float Rudder_cmd, float Aileron_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Lateral_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Beta);
	_mav_put_float(buf, 8, p);
	_mav_put_float(buf, 12, r);
	_mav_put_float(buf, 16, ay);
	_mav_put_float(buf, 20, IMU_roll);
	_mav_put_float(buf, 24, IMU_yaw);
	_mav_put_float(buf, 28, GBL_roll);
	_mav_put_float(buf, 32, GBL_yaw);
	_mav_put_float(buf, 36, Rudder);
	_mav_put_float(buf, 40, Aileron);
	_mav_put_float(buf, 44, Rudder_cmd);
	_mav_put_float(buf, 48, Aileron_cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, buf, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, buf, MAVLINK_MSG_ID_Lateral_LEN);
#endif
#else
	mavlink_lateral_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Beta = Beta;
	packet.p = p;
	packet.r = r;
	packet.ay = ay;
	packet.IMU_roll = IMU_roll;
	packet.IMU_yaw = IMU_yaw;
	packet.GBL_roll = GBL_roll;
	packet.GBL_yaw = GBL_yaw;
	packet.Rudder = Rudder;
	packet.Aileron = Aileron;
	packet.Rudder_cmd = Rudder_cmd;
	packet.Aileron_cmd = Aileron_cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, (const char *)&packet, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, (const char *)&packet, MAVLINK_MSG_ID_Lateral_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_Lateral_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_lateral_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float Beta, float p, float r, float ay, float IMU_roll, float IMU_yaw, float GBL_roll, float GBL_yaw, float Rudder, float Aileron, float Rudder_cmd, float Aileron_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Beta);
	_mav_put_float(buf, 8, p);
	_mav_put_float(buf, 12, r);
	_mav_put_float(buf, 16, ay);
	_mav_put_float(buf, 20, IMU_roll);
	_mav_put_float(buf, 24, IMU_yaw);
	_mav_put_float(buf, 28, GBL_roll);
	_mav_put_float(buf, 32, GBL_yaw);
	_mav_put_float(buf, 36, Rudder);
	_mav_put_float(buf, 40, Aileron);
	_mav_put_float(buf, 44, Rudder_cmd);
	_mav_put_float(buf, 48, Aileron_cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, buf, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, buf, MAVLINK_MSG_ID_Lateral_LEN);
#endif
#else
	mavlink_lateral_t *packet = (mavlink_lateral_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Beta = Beta;
	packet->p = p;
	packet->r = r;
	packet->ay = ay;
	packet->IMU_roll = IMU_roll;
	packet->IMU_yaw = IMU_yaw;
	packet->GBL_roll = GBL_roll;
	packet->GBL_yaw = GBL_yaw;
	packet->Rudder = Rudder;
	packet->Aileron = Aileron;
	packet->Rudder_cmd = Rudder_cmd;
	packet->Aileron_cmd = Aileron_cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, (const char *)packet, MAVLINK_MSG_ID_Lateral_LEN, MAVLINK_MSG_ID_Lateral_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Lateral, (const char *)packet, MAVLINK_MSG_ID_Lateral_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE Lateral UNPACKING


/**
 * @brief Get field time_boot_ms from lateral message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_lateral_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Beta from lateral message
 *
 * @return Sideslip
 */
static inline float mavlink_msg_lateral_get_Beta(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field p from lateral message
 *
 * @return roll rate
 */
static inline float mavlink_msg_lateral_get_p(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field r from lateral message
 *
 * @return yaw rate
 */
static inline float mavlink_msg_lateral_get_r(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field ay from lateral message
 *
 * @return Ay (mg)
 */
static inline float mavlink_msg_lateral_get_ay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field IMU_roll from lateral message
 *
 * @return phi
 */
static inline float mavlink_msg_lateral_get_IMU_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field IMU_yaw from lateral message
 *
 * @return psi
 */
static inline float mavlink_msg_lateral_get_IMU_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field GBL_roll from lateral message
 *
 * @return phi
 */
static inline float mavlink_msg_lateral_get_GBL_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field GBL_yaw from lateral message
 *
 * @return psi
 */
static inline float mavlink_msg_lateral_get_GBL_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Rudder from lateral message
 *
 * @return rudder fdbk
 */
static inline float mavlink_msg_lateral_get_Rudder(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field Aileron from lateral message
 *
 * @return aileron fdbk
 */
static inline float mavlink_msg_lateral_get_Aileron(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field Rudder_cmd from lateral message
 *
 * @return Rudder command
 */
static inline float mavlink_msg_lateral_get_Rudder_cmd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Aileron_cmd from lateral message
 *
 * @return Aileron command
 */
static inline float mavlink_msg_lateral_get_Aileron_cmd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a lateral message into a struct
 *
 * @param msg The message to decode
 * @param lateral C-struct to decode the message contents into
 */
static inline void mavlink_msg_lateral_decode(const mavlink_message_t* msg, mavlink_lateral_t* lateral)
{
#if MAVLINK_NEED_BYTE_SWAP
	lateral->time_boot_ms = mavlink_msg_lateral_get_time_boot_ms(msg);
	lateral->Beta = mavlink_msg_lateral_get_Beta(msg);
	lateral->p = mavlink_msg_lateral_get_p(msg);
	lateral->r = mavlink_msg_lateral_get_r(msg);
	lateral->ay = mavlink_msg_lateral_get_ay(msg);
	lateral->IMU_roll = mavlink_msg_lateral_get_IMU_roll(msg);
	lateral->IMU_yaw = mavlink_msg_lateral_get_IMU_yaw(msg);
	lateral->GBL_roll = mavlink_msg_lateral_get_GBL_roll(msg);
	lateral->GBL_yaw = mavlink_msg_lateral_get_GBL_yaw(msg);
	lateral->Rudder = mavlink_msg_lateral_get_Rudder(msg);
	lateral->Aileron = mavlink_msg_lateral_get_Aileron(msg);
	lateral->Rudder_cmd = mavlink_msg_lateral_get_Rudder_cmd(msg);
	lateral->Aileron_cmd = mavlink_msg_lateral_get_Aileron_cmd(msg);
#else
	memcpy(lateral, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_Lateral_LEN);
#endif
}
