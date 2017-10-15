// MESSAGE EKF_HEALTH PACKING

#define MAVLINK_MSG_ID_EKF_HEALTH 200

typedef struct __mavlink_ekf_health_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 int16_t Pn__cm; /*< Pn (m)*/
 int16_t Pe__cm; /*< Pe (m)*/
 int16_t Pd__cm; /*< Pd (m)*/
 int16_t Vn__cmps; /*< Vn (m)*/
 int16_t Ve__cmps; /*< Ve (m)*/
 int16_t Vd__cmps; /*< Vd (m)*/
 int16_t Vair__cmps; /*< Estimated Pn (m)*/
 int16_t AoA__mdeg; /*< Estimated Pe (m)*/
 int16_t CW__mdeg; /*< Estimated Pd (m)*/
 int16_t Alt__cm; /*< Estimated Pn (m)*/
 int16_t Mx__mG; /*< Estimated Pe (m)*/
 int16_t My__mG; /*< Estimated Pd (m)*/
 int16_t Mz__mG; /*< Estimated Pd (m)*/
} mavlink_ekf_health_t;

#define MAVLINK_MSG_ID_EKF_HEALTH_LEN 30
#define MAVLINK_MSG_ID_200_LEN 30

#define MAVLINK_MSG_ID_EKF_HEALTH_CRC 8
#define MAVLINK_MSG_ID_200_CRC 8



#define MAVLINK_MESSAGE_INFO_EKF_HEALTH { \
	"EKF_HEALTH", \
	14, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_health_t, time_boot_ms) }, \
         { "Pn__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ekf_health_t, Pn__cm) }, \
         { "Pe__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ekf_health_t, Pe__cm) }, \
         { "Pd__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ekf_health_t, Pd__cm) }, \
         { "Vn__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ekf_health_t, Vn__cmps) }, \
         { "Ve__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ekf_health_t, Ve__cmps) }, \
         { "Vd__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ekf_health_t, Vd__cmps) }, \
         { "Vair__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_health_t, Vair__cmps) }, \
         { "AoA__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_health_t, AoA__mdeg) }, \
         { "CW__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_health_t, CW__mdeg) }, \
         { "Alt__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ekf_health_t, Alt__cm) }, \
         { "Mx__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ekf_health_t, Mx__mG) }, \
         { "My__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ekf_health_t, My__mG) }, \
         { "Mz__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ekf_health_t, Mz__mG) }, \
         } \
}


/**
 * @brief Pack a ekf_health message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Pn__cm Pn (m)
 * @param Pe__cm Pe (m)
 * @param Pd__cm Pd (m)
 * @param Vn__cmps Vn (m)
 * @param Ve__cmps Ve (m)
 * @param Vd__cmps Vd (m)
 * @param Vair__cmps Estimated Pn (m)
 * @param AoA__mdeg Estimated Pe (m)
 * @param CW__mdeg Estimated Pd (m)
 * @param Alt__cm Estimated Pn (m)
 * @param Mx__mG Estimated Pe (m)
 * @param My__mG Estimated Pd (m)
 * @param Mz__mG Estimated Pd (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_health_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t Pn__cm, int16_t Pe__cm, int16_t Pd__cm, int16_t Vn__cmps, int16_t Ve__cmps, int16_t Vd__cmps, int16_t Vair__cmps, int16_t AoA__mdeg, int16_t CW__mdeg, int16_t Alt__cm, int16_t Mx__mG, int16_t My__mG, int16_t Mz__mG)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_HEALTH_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Pn__cm);
	_mav_put_int16_t(buf, 6, Pe__cm);
	_mav_put_int16_t(buf, 8, Pd__cm);
	_mav_put_int16_t(buf, 10, Vn__cmps);
	_mav_put_int16_t(buf, 12, Ve__cmps);
	_mav_put_int16_t(buf, 14, Vd__cmps);
	_mav_put_int16_t(buf, 16, Vair__cmps);
	_mav_put_int16_t(buf, 18, AoA__mdeg);
	_mav_put_int16_t(buf, 20, CW__mdeg);
	_mav_put_int16_t(buf, 22, Alt__cm);
	_mav_put_int16_t(buf, 24, Mx__mG);
	_mav_put_int16_t(buf, 26, My__mG);
	_mav_put_int16_t(buf, 28, Mz__mG);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#else
	mavlink_ekf_health_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Pn__cm = Pn__cm;
	packet.Pe__cm = Pe__cm;
	packet.Pd__cm = Pd__cm;
	packet.Vn__cmps = Vn__cmps;
	packet.Ve__cmps = Ve__cmps;
	packet.Vd__cmps = Vd__cmps;
	packet.Vair__cmps = Vair__cmps;
	packet.AoA__mdeg = AoA__mdeg;
	packet.CW__mdeg = CW__mdeg;
	packet.Alt__cm = Alt__cm;
	packet.Mx__mG = Mx__mG;
	packet.My__mG = My__mG;
	packet.Mz__mG = Mz__mG;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_HEALTH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
}

/**
 * @brief Pack a ekf_health message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Pn__cm Pn (m)
 * @param Pe__cm Pe (m)
 * @param Pd__cm Pd (m)
 * @param Vn__cmps Vn (m)
 * @param Ve__cmps Ve (m)
 * @param Vd__cmps Vd (m)
 * @param Vair__cmps Estimated Pn (m)
 * @param AoA__mdeg Estimated Pe (m)
 * @param CW__mdeg Estimated Pd (m)
 * @param Alt__cm Estimated Pn (m)
 * @param Mx__mG Estimated Pe (m)
 * @param My__mG Estimated Pd (m)
 * @param Mz__mG Estimated Pd (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_health_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t Pn__cm,int16_t Pe__cm,int16_t Pd__cm,int16_t Vn__cmps,int16_t Ve__cmps,int16_t Vd__cmps,int16_t Vair__cmps,int16_t AoA__mdeg,int16_t CW__mdeg,int16_t Alt__cm,int16_t Mx__mG,int16_t My__mG,int16_t Mz__mG)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_HEALTH_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Pn__cm);
	_mav_put_int16_t(buf, 6, Pe__cm);
	_mav_put_int16_t(buf, 8, Pd__cm);
	_mav_put_int16_t(buf, 10, Vn__cmps);
	_mav_put_int16_t(buf, 12, Ve__cmps);
	_mav_put_int16_t(buf, 14, Vd__cmps);
	_mav_put_int16_t(buf, 16, Vair__cmps);
	_mav_put_int16_t(buf, 18, AoA__mdeg);
	_mav_put_int16_t(buf, 20, CW__mdeg);
	_mav_put_int16_t(buf, 22, Alt__cm);
	_mav_put_int16_t(buf, 24, Mx__mG);
	_mav_put_int16_t(buf, 26, My__mG);
	_mav_put_int16_t(buf, 28, Mz__mG);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#else
	mavlink_ekf_health_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Pn__cm = Pn__cm;
	packet.Pe__cm = Pe__cm;
	packet.Pd__cm = Pd__cm;
	packet.Vn__cmps = Vn__cmps;
	packet.Ve__cmps = Ve__cmps;
	packet.Vd__cmps = Vd__cmps;
	packet.Vair__cmps = Vair__cmps;
	packet.AoA__mdeg = AoA__mdeg;
	packet.CW__mdeg = CW__mdeg;
	packet.Alt__cm = Alt__cm;
	packet.Mx__mG = Mx__mG;
	packet.My__mG = My__mG;
	packet.Mz__mG = Mz__mG;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_HEALTH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
}

/**
 * @brief Encode a ekf_health struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ekf_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_health_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ekf_health_t* ekf_health)
{
	return mavlink_msg_ekf_health_pack(system_id, component_id, msg, ekf_health->time_boot_ms, ekf_health->Pn__cm, ekf_health->Pe__cm, ekf_health->Pd__cm, ekf_health->Vn__cmps, ekf_health->Ve__cmps, ekf_health->Vd__cmps, ekf_health->Vair__cmps, ekf_health->AoA__mdeg, ekf_health->CW__mdeg, ekf_health->Alt__cm, ekf_health->Mx__mG, ekf_health->My__mG, ekf_health->Mz__mG);
}

/**
 * @brief Encode a ekf_health struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ekf_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_health_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ekf_health_t* ekf_health)
{
	return mavlink_msg_ekf_health_pack_chan(system_id, component_id, chan, msg, ekf_health->time_boot_ms, ekf_health->Pn__cm, ekf_health->Pe__cm, ekf_health->Pd__cm, ekf_health->Vn__cmps, ekf_health->Ve__cmps, ekf_health->Vd__cmps, ekf_health->Vair__cmps, ekf_health->AoA__mdeg, ekf_health->CW__mdeg, ekf_health->Alt__cm, ekf_health->Mx__mG, ekf_health->My__mG, ekf_health->Mz__mG);
}

/**
 * @brief Send a ekf_health message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param Pn__cm Pn (m)
 * @param Pe__cm Pe (m)
 * @param Pd__cm Pd (m)
 * @param Vn__cmps Vn (m)
 * @param Ve__cmps Ve (m)
 * @param Vd__cmps Vd (m)
 * @param Vair__cmps Estimated Pn (m)
 * @param AoA__mdeg Estimated Pe (m)
 * @param CW__mdeg Estimated Pd (m)
 * @param Alt__cm Estimated Pn (m)
 * @param Mx__mG Estimated Pe (m)
 * @param My__mG Estimated Pd (m)
 * @param Mz__mG Estimated Pd (m)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_health_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t Pn__cm, int16_t Pe__cm, int16_t Pd__cm, int16_t Vn__cmps, int16_t Ve__cmps, int16_t Vd__cmps, int16_t Vair__cmps, int16_t AoA__mdeg, int16_t CW__mdeg, int16_t Alt__cm, int16_t Mx__mG, int16_t My__mG, int16_t Mz__mG)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_HEALTH_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Pn__cm);
	_mav_put_int16_t(buf, 6, Pe__cm);
	_mav_put_int16_t(buf, 8, Pd__cm);
	_mav_put_int16_t(buf, 10, Vn__cmps);
	_mav_put_int16_t(buf, 12, Ve__cmps);
	_mav_put_int16_t(buf, 14, Vd__cmps);
	_mav_put_int16_t(buf, 16, Vair__cmps);
	_mav_put_int16_t(buf, 18, AoA__mdeg);
	_mav_put_int16_t(buf, 20, CW__mdeg);
	_mav_put_int16_t(buf, 22, Alt__cm);
	_mav_put_int16_t(buf, 24, Mx__mG);
	_mav_put_int16_t(buf, 26, My__mG);
	_mav_put_int16_t(buf, 28, Mz__mG);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
#else
	mavlink_ekf_health_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Pn__cm = Pn__cm;
	packet.Pe__cm = Pe__cm;
	packet.Pd__cm = Pd__cm;
	packet.Vn__cmps = Vn__cmps;
	packet.Ve__cmps = Ve__cmps;
	packet.Vd__cmps = Vd__cmps;
	packet.Vair__cmps = Vair__cmps;
	packet.AoA__mdeg = AoA__mdeg;
	packet.CW__mdeg = CW__mdeg;
	packet.Alt__cm = Alt__cm;
	packet.Mx__mG = Mx__mG;
	packet.My__mG = My__mG;
	packet.Mz__mG = Mz__mG;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, (const char *)&packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, (const char *)&packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_EKF_HEALTH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ekf_health_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t Pn__cm, int16_t Pe__cm, int16_t Pd__cm, int16_t Vn__cmps, int16_t Ve__cmps, int16_t Vd__cmps, int16_t Vair__cmps, int16_t AoA__mdeg, int16_t CW__mdeg, int16_t Alt__cm, int16_t Mx__mG, int16_t My__mG, int16_t Mz__mG)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_int16_t(buf, 4, Pn__cm);
	_mav_put_int16_t(buf, 6, Pe__cm);
	_mav_put_int16_t(buf, 8, Pd__cm);
	_mav_put_int16_t(buf, 10, Vn__cmps);
	_mav_put_int16_t(buf, 12, Ve__cmps);
	_mav_put_int16_t(buf, 14, Vd__cmps);
	_mav_put_int16_t(buf, 16, Vair__cmps);
	_mav_put_int16_t(buf, 18, AoA__mdeg);
	_mav_put_int16_t(buf, 20, CW__mdeg);
	_mav_put_int16_t(buf, 22, Alt__cm);
	_mav_put_int16_t(buf, 24, Mx__mG);
	_mav_put_int16_t(buf, 26, My__mG);
	_mav_put_int16_t(buf, 28, Mz__mG);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, buf, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
#else
	mavlink_ekf_health_t *packet = (mavlink_ekf_health_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Pn__cm = Pn__cm;
	packet->Pe__cm = Pe__cm;
	packet->Pd__cm = Pd__cm;
	packet->Vn__cmps = Vn__cmps;
	packet->Ve__cmps = Ve__cmps;
	packet->Vd__cmps = Vd__cmps;
	packet->Vair__cmps = Vair__cmps;
	packet->AoA__mdeg = AoA__mdeg;
	packet->CW__mdeg = CW__mdeg;
	packet->Alt__cm = Alt__cm;
	packet->Mx__mG = Mx__mG;
	packet->My__mG = My__mG;
	packet->Mz__mG = Mz__mG;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, (const char *)packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN, MAVLINK_MSG_ID_EKF_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_HEALTH, (const char *)packet, MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE EKF_HEALTH UNPACKING


/**
 * @brief Get field time_boot_ms from ekf_health message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_ekf_health_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Pn__cm from ekf_health message
 *
 * @return Pn (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Pn__cm(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field Pe__cm from ekf_health message
 *
 * @return Pe (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Pe__cm(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field Pd__cm from ekf_health message
 *
 * @return Pd (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Pd__cm(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field Vn__cmps from ekf_health message
 *
 * @return Vn (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Vn__cmps(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field Ve__cmps from ekf_health message
 *
 * @return Ve (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Ve__cmps(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field Vd__cmps from ekf_health message
 *
 * @return Vd (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Vd__cmps(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field Vair__cmps from ekf_health message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Vair__cmps(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field AoA__mdeg from ekf_health message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_AoA__mdeg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field CW__mdeg from ekf_health message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_CW__mdeg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field Alt__cm from ekf_health message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Alt__cm(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field Mx__mG from ekf_health message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Mx__mG(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field My__mG from ekf_health message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_My__mG(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field Mz__mG from ekf_health message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_health_get_Mz__mG(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Decode a ekf_health message into a struct
 *
 * @param msg The message to decode
 * @param ekf_health C-struct to decode the message contents into
 */
static inline void mavlink_msg_ekf_health_decode(const mavlink_message_t* msg, mavlink_ekf_health_t* ekf_health)
{
#if MAVLINK_NEED_BYTE_SWAP
	ekf_health->time_boot_ms = mavlink_msg_ekf_health_get_time_boot_ms(msg);
	ekf_health->Pn__cm = mavlink_msg_ekf_health_get_Pn__cm(msg);
	ekf_health->Pe__cm = mavlink_msg_ekf_health_get_Pe__cm(msg);
	ekf_health->Pd__cm = mavlink_msg_ekf_health_get_Pd__cm(msg);
	ekf_health->Vn__cmps = mavlink_msg_ekf_health_get_Vn__cmps(msg);
	ekf_health->Ve__cmps = mavlink_msg_ekf_health_get_Ve__cmps(msg);
	ekf_health->Vd__cmps = mavlink_msg_ekf_health_get_Vd__cmps(msg);
	ekf_health->Vair__cmps = mavlink_msg_ekf_health_get_Vair__cmps(msg);
	ekf_health->AoA__mdeg = mavlink_msg_ekf_health_get_AoA__mdeg(msg);
	ekf_health->CW__mdeg = mavlink_msg_ekf_health_get_CW__mdeg(msg);
	ekf_health->Alt__cm = mavlink_msg_ekf_health_get_Alt__cm(msg);
	ekf_health->Mx__mG = mavlink_msg_ekf_health_get_Mx__mG(msg);
	ekf_health->My__mG = mavlink_msg_ekf_health_get_My__mG(msg);
	ekf_health->Mz__mG = mavlink_msg_ekf_health_get_Mz__mG(msg);
#else
	memcpy(ekf_health, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EKF_HEALTH_LEN);
#endif
}
