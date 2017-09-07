// MESSAGE EKF_Residual PACKING

#define MAVLINK_MSG_ID_EKF_Residual 200

typedef struct __mavlink_ekf_residual_t
{
 int16_t Pn; /*< Estimated Pn (m)*/
 int16_t Pe; /*< Estimated Pe (m)*/
 int16_t Pd; /*< Estimated Pd (m)*/
 int16_t Vn; /*< Estimated Pn (m)*/
 int16_t Ve; /*< Estimated Pe (m)*/
 int16_t Vd; /*< Estimated Pd (m)*/
 int16_t Vair; /*< Estimated Pn (m)*/
 int16_t AoA; /*< Estimated Pe (m)*/
 int16_t CW; /*< Estimated Pd (m)*/
 int16_t Alt; /*< Estimated Pn (m)*/
 int16_t Mx; /*< Estimated Pe (m)*/
 int16_t My; /*< Estimated Pd (m)*/
 int16_t Mz; /*< Estimated Pd (m)*/
} mavlink_ekf_residual_t;

#define MAVLINK_MSG_ID_EKF_Residual_LEN 26
#define MAVLINK_MSG_ID_200_LEN 26

#define MAVLINK_MSG_ID_EKF_Residual_CRC 241
#define MAVLINK_MSG_ID_200_CRC 241



#define MAVLINK_MESSAGE_INFO_EKF_Residual { \
	"EKF_Residual", \
	13, \
	{  { "Pn", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_ekf_residual_t, Pn) }, \
         { "Pe", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_ekf_residual_t, Pe) }, \
         { "Pd", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ekf_residual_t, Pd) }, \
         { "Vn", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ekf_residual_t, Vn) }, \
         { "Ve", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ekf_residual_t, Ve) }, \
         { "Vd", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ekf_residual_t, Vd) }, \
         { "Vair", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ekf_residual_t, Vair) }, \
         { "AoA", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ekf_residual_t, AoA) }, \
         { "CW", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_residual_t, CW) }, \
         { "Alt", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_residual_t, Alt) }, \
         { "Mx", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_residual_t, Mx) }, \
         { "My", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ekf_residual_t, My) }, \
         { "Mz", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ekf_residual_t, Mz) }, \
         } \
}


/**
 * @brief Pack a ekf_residual message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Pn Estimated Pn (m)
 * @param Pe Estimated Pe (m)
 * @param Pd Estimated Pd (m)
 * @param Vn Estimated Pn (m)
 * @param Ve Estimated Pe (m)
 * @param Vd Estimated Pd (m)
 * @param Vair Estimated Pn (m)
 * @param AoA Estimated Pe (m)
 * @param CW Estimated Pd (m)
 * @param Alt Estimated Pn (m)
 * @param Mx Estimated Pe (m)
 * @param My Estimated Pd (m)
 * @param Mz Estimated Pd (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_residual_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t Pn, int16_t Pe, int16_t Pd, int16_t Vn, int16_t Ve, int16_t Vd, int16_t Vair, int16_t AoA, int16_t CW, int16_t Alt, int16_t Mx, int16_t My, int16_t Mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_Residual_LEN];
	_mav_put_int16_t(buf, 0, Pn);
	_mav_put_int16_t(buf, 2, Pe);
	_mav_put_int16_t(buf, 4, Pd);
	_mav_put_int16_t(buf, 6, Vn);
	_mav_put_int16_t(buf, 8, Ve);
	_mav_put_int16_t(buf, 10, Vd);
	_mav_put_int16_t(buf, 12, Vair);
	_mav_put_int16_t(buf, 14, AoA);
	_mav_put_int16_t(buf, 16, CW);
	_mav_put_int16_t(buf, 18, Alt);
	_mav_put_int16_t(buf, 20, Mx);
	_mav_put_int16_t(buf, 22, My);
	_mav_put_int16_t(buf, 24, Mz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_Residual_LEN);
#else
	mavlink_ekf_residual_t packet;
	packet.Pn = Pn;
	packet.Pe = Pe;
	packet.Pd = Pd;
	packet.Vn = Vn;
	packet.Ve = Ve;
	packet.Vd = Vd;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.Alt = Alt;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_Residual;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
}

/**
 * @brief Pack a ekf_residual message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Pn Estimated Pn (m)
 * @param Pe Estimated Pe (m)
 * @param Pd Estimated Pd (m)
 * @param Vn Estimated Pn (m)
 * @param Ve Estimated Pe (m)
 * @param Vd Estimated Pd (m)
 * @param Vair Estimated Pn (m)
 * @param AoA Estimated Pe (m)
 * @param CW Estimated Pd (m)
 * @param Alt Estimated Pn (m)
 * @param Mx Estimated Pe (m)
 * @param My Estimated Pd (m)
 * @param Mz Estimated Pd (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_residual_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t Pn,int16_t Pe,int16_t Pd,int16_t Vn,int16_t Ve,int16_t Vd,int16_t Vair,int16_t AoA,int16_t CW,int16_t Alt,int16_t Mx,int16_t My,int16_t Mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_Residual_LEN];
	_mav_put_int16_t(buf, 0, Pn);
	_mav_put_int16_t(buf, 2, Pe);
	_mav_put_int16_t(buf, 4, Pd);
	_mav_put_int16_t(buf, 6, Vn);
	_mav_put_int16_t(buf, 8, Ve);
	_mav_put_int16_t(buf, 10, Vd);
	_mav_put_int16_t(buf, 12, Vair);
	_mav_put_int16_t(buf, 14, AoA);
	_mav_put_int16_t(buf, 16, CW);
	_mav_put_int16_t(buf, 18, Alt);
	_mav_put_int16_t(buf, 20, Mx);
	_mav_put_int16_t(buf, 22, My);
	_mav_put_int16_t(buf, 24, Mz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_Residual_LEN);
#else
	mavlink_ekf_residual_t packet;
	packet.Pn = Pn;
	packet.Pe = Pe;
	packet.Pd = Pd;
	packet.Vn = Vn;
	packet.Ve = Ve;
	packet.Vd = Vd;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.Alt = Alt;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_EKF_Residual;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
}

/**
 * @brief Encode a ekf_residual struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ekf_residual C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_residual_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ekf_residual_t* ekf_residual)
{
	return mavlink_msg_ekf_residual_pack(system_id, component_id, msg, ekf_residual->Pn, ekf_residual->Pe, ekf_residual->Pd, ekf_residual->Vn, ekf_residual->Ve, ekf_residual->Vd, ekf_residual->Vair, ekf_residual->AoA, ekf_residual->CW, ekf_residual->Alt, ekf_residual->Mx, ekf_residual->My, ekf_residual->Mz);
}

/**
 * @brief Encode a ekf_residual struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ekf_residual C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_residual_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ekf_residual_t* ekf_residual)
{
	return mavlink_msg_ekf_residual_pack_chan(system_id, component_id, chan, msg, ekf_residual->Pn, ekf_residual->Pe, ekf_residual->Pd, ekf_residual->Vn, ekf_residual->Ve, ekf_residual->Vd, ekf_residual->Vair, ekf_residual->AoA, ekf_residual->CW, ekf_residual->Alt, ekf_residual->Mx, ekf_residual->My, ekf_residual->Mz);
}

/**
 * @brief Send a ekf_residual message
 * @param chan MAVLink channel to send the message
 *
 * @param Pn Estimated Pn (m)
 * @param Pe Estimated Pe (m)
 * @param Pd Estimated Pd (m)
 * @param Vn Estimated Pn (m)
 * @param Ve Estimated Pe (m)
 * @param Vd Estimated Pd (m)
 * @param Vair Estimated Pn (m)
 * @param AoA Estimated Pe (m)
 * @param CW Estimated Pd (m)
 * @param Alt Estimated Pn (m)
 * @param Mx Estimated Pe (m)
 * @param My Estimated Pd (m)
 * @param Mz Estimated Pd (m)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_residual_send(mavlink_channel_t chan, int16_t Pn, int16_t Pe, int16_t Pd, int16_t Vn, int16_t Ve, int16_t Vd, int16_t Vair, int16_t AoA, int16_t CW, int16_t Alt, int16_t Mx, int16_t My, int16_t Mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_EKF_Residual_LEN];
	_mav_put_int16_t(buf, 0, Pn);
	_mav_put_int16_t(buf, 2, Pe);
	_mav_put_int16_t(buf, 4, Pd);
	_mav_put_int16_t(buf, 6, Vn);
	_mav_put_int16_t(buf, 8, Ve);
	_mav_put_int16_t(buf, 10, Vd);
	_mav_put_int16_t(buf, 12, Vair);
	_mav_put_int16_t(buf, 14, AoA);
	_mav_put_int16_t(buf, 16, CW);
	_mav_put_int16_t(buf, 18, Alt);
	_mav_put_int16_t(buf, 20, Mx);
	_mav_put_int16_t(buf, 22, My);
	_mav_put_int16_t(buf, 24, Mz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, buf, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, buf, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
#else
	mavlink_ekf_residual_t packet;
	packet.Pn = Pn;
	packet.Pe = Pe;
	packet.Pd = Pd;
	packet.Vn = Vn;
	packet.Ve = Ve;
	packet.Vd = Vd;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.Alt = Alt;
	packet.Mx = Mx;
	packet.My = My;
	packet.Mz = Mz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, (const char *)&packet, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, (const char *)&packet, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_EKF_Residual_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ekf_residual_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t Pn, int16_t Pe, int16_t Pd, int16_t Vn, int16_t Ve, int16_t Vd, int16_t Vair, int16_t AoA, int16_t CW, int16_t Alt, int16_t Mx, int16_t My, int16_t Mz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, Pn);
	_mav_put_int16_t(buf, 2, Pe);
	_mav_put_int16_t(buf, 4, Pd);
	_mav_put_int16_t(buf, 6, Vn);
	_mav_put_int16_t(buf, 8, Ve);
	_mav_put_int16_t(buf, 10, Vd);
	_mav_put_int16_t(buf, 12, Vair);
	_mav_put_int16_t(buf, 14, AoA);
	_mav_put_int16_t(buf, 16, CW);
	_mav_put_int16_t(buf, 18, Alt);
	_mav_put_int16_t(buf, 20, Mx);
	_mav_put_int16_t(buf, 22, My);
	_mav_put_int16_t(buf, 24, Mz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, buf, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, buf, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
#else
	mavlink_ekf_residual_t *packet = (mavlink_ekf_residual_t *)msgbuf;
	packet->Pn = Pn;
	packet->Pe = Pe;
	packet->Pd = Pd;
	packet->Vn = Vn;
	packet->Ve = Ve;
	packet->Vd = Vd;
	packet->Vair = Vair;
	packet->AoA = AoA;
	packet->CW = CW;
	packet->Alt = Alt;
	packet->Mx = Mx;
	packet->My = My;
	packet->Mz = Mz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, (const char *)packet, MAVLINK_MSG_ID_EKF_Residual_LEN, MAVLINK_MSG_ID_EKF_Residual_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_Residual, (const char *)packet, MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE EKF_Residual UNPACKING


/**
 * @brief Get field Pn from ekf_residual message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Pn(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field Pe from ekf_residual message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Pe(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field Pd from ekf_residual message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Pd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field Vn from ekf_residual message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Vn(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field Ve from ekf_residual message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Ve(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field Vd from ekf_residual message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Vd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field Vair from ekf_residual message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Vair(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field AoA from ekf_residual message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_AoA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field CW from ekf_residual message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_CW(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field Alt from ekf_residual message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Alt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field Mx from ekf_residual message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Mx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field My from ekf_residual message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_My(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field Mz from ekf_residual message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_ekf_residual_get_Mz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Decode a ekf_residual message into a struct
 *
 * @param msg The message to decode
 * @param ekf_residual C-struct to decode the message contents into
 */
static inline void mavlink_msg_ekf_residual_decode(const mavlink_message_t* msg, mavlink_ekf_residual_t* ekf_residual)
{
#if MAVLINK_NEED_BYTE_SWAP
	ekf_residual->Pn = mavlink_msg_ekf_residual_get_Pn(msg);
	ekf_residual->Pe = mavlink_msg_ekf_residual_get_Pe(msg);
	ekf_residual->Pd = mavlink_msg_ekf_residual_get_Pd(msg);
	ekf_residual->Vn = mavlink_msg_ekf_residual_get_Vn(msg);
	ekf_residual->Ve = mavlink_msg_ekf_residual_get_Ve(msg);
	ekf_residual->Vd = mavlink_msg_ekf_residual_get_Vd(msg);
	ekf_residual->Vair = mavlink_msg_ekf_residual_get_Vair(msg);
	ekf_residual->AoA = mavlink_msg_ekf_residual_get_AoA(msg);
	ekf_residual->CW = mavlink_msg_ekf_residual_get_CW(msg);
	ekf_residual->Alt = mavlink_msg_ekf_residual_get_Alt(msg);
	ekf_residual->Mx = mavlink_msg_ekf_residual_get_Mx(msg);
	ekf_residual->My = mavlink_msg_ekf_residual_get_My(msg);
	ekf_residual->Mz = mavlink_msg_ekf_residual_get_Mz(msg);
#else
	memcpy(ekf_residual, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_EKF_Residual_LEN);
#endif
}
