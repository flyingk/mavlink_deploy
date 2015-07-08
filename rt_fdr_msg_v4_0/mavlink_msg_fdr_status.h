// MESSAGE FDR_STATUS PACKING

#define MAVLINK_MSG_ID_FDR_STATUS 240

typedef struct __mavlink_fdr_status_t
{
 uint32_t time_boot_ms; ///< Timestamp (milliseconds since system boot)
 uint8_t GPS_SAT; ///< Satnum
 uint8_t GPS_FIX; ///< 2d/3d fix
 uint8_t GPS_HDOP; ///< gps hdop
 uint8_t GPS_VDOP; ///< gps vdop
 uint8_t VN200_SAT; ///< Satnum VN200
 uint8_t VN200_FIX; ///< Fix VN200
 uint8_t VN200_Status; ///< Filter status VN200
 uint8_t Radio_txbuff; ///< On board radio tx buffer
 uint8_t PWR_Gains; ///< Binary gains feedback
 uint8_t CPU_load; ///< CPU load
} mavlink_fdr_status_t;

#define MAVLINK_MSG_ID_FDR_STATUS_LEN 14
#define MAVLINK_MSG_ID_240_LEN 14

#define MAVLINK_MSG_ID_FDR_STATUS_CRC 128
#define MAVLINK_MSG_ID_240_CRC 128



#define MAVLINK_MESSAGE_INFO_FDR_STATUS { \
	"FDR_STATUS", \
	11, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fdr_status_t, time_boot_ms) }, \
         { "GPS_SAT", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_fdr_status_t, GPS_SAT) }, \
         { "GPS_FIX", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_fdr_status_t, GPS_FIX) }, \
         { "GPS_HDOP", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_fdr_status_t, GPS_HDOP) }, \
         { "GPS_VDOP", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_fdr_status_t, GPS_VDOP) }, \
         { "VN200_SAT", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_fdr_status_t, VN200_SAT) }, \
         { "VN200_FIX", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_fdr_status_t, VN200_FIX) }, \
         { "VN200_Status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_fdr_status_t, VN200_Status) }, \
         { "Radio_txbuff", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_fdr_status_t, Radio_txbuff) }, \
         { "PWR_Gains", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_fdr_status_t, PWR_Gains) }, \
         { "CPU_load", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_fdr_status_t, CPU_load) }, \
         } \
}


/**
 * @brief Pack a fdr_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GPS_SAT Satnum
 * @param GPS_FIX 2d/3d fix
 * @param GPS_HDOP gps hdop
 * @param GPS_VDOP gps vdop
 * @param VN200_SAT Satnum VN200
 * @param VN200_FIX Fix VN200
 * @param VN200_Status Filter status VN200
 * @param Radio_txbuff On board radio tx buffer
 * @param PWR_Gains Binary gains feedback
 * @param CPU_load CPU load
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fdr_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint8_t GPS_SAT, uint8_t GPS_FIX, uint8_t GPS_HDOP, uint8_t GPS_VDOP, uint8_t VN200_SAT, uint8_t VN200_FIX, uint8_t VN200_Status, uint8_t Radio_txbuff, uint8_t PWR_Gains, uint8_t CPU_load)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FDR_STATUS_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint8_t(buf, 4, GPS_SAT);
	_mav_put_uint8_t(buf, 5, GPS_FIX);
	_mav_put_uint8_t(buf, 6, GPS_HDOP);
	_mav_put_uint8_t(buf, 7, GPS_VDOP);
	_mav_put_uint8_t(buf, 8, VN200_SAT);
	_mav_put_uint8_t(buf, 9, VN200_FIX);
	_mav_put_uint8_t(buf, 10, VN200_Status);
	_mav_put_uint8_t(buf, 11, Radio_txbuff);
	_mav_put_uint8_t(buf, 12, PWR_Gains);
	_mav_put_uint8_t(buf, 13, CPU_load);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#else
	mavlink_fdr_status_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GPS_SAT = GPS_SAT;
	packet.GPS_FIX = GPS_FIX;
	packet.GPS_HDOP = GPS_HDOP;
	packet.GPS_VDOP = GPS_VDOP;
	packet.VN200_SAT = VN200_SAT;
	packet.VN200_FIX = VN200_FIX;
	packet.VN200_Status = VN200_Status;
	packet.Radio_txbuff = Radio_txbuff;
	packet.PWR_Gains = PWR_Gains;
	packet.CPU_load = CPU_load;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FDR_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
}

/**
 * @brief Pack a fdr_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GPS_SAT Satnum
 * @param GPS_FIX 2d/3d fix
 * @param GPS_HDOP gps hdop
 * @param GPS_VDOP gps vdop
 * @param VN200_SAT Satnum VN200
 * @param VN200_FIX Fix VN200
 * @param VN200_Status Filter status VN200
 * @param Radio_txbuff On board radio tx buffer
 * @param PWR_Gains Binary gains feedback
 * @param CPU_load CPU load
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fdr_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,uint8_t GPS_SAT,uint8_t GPS_FIX,uint8_t GPS_HDOP,uint8_t GPS_VDOP,uint8_t VN200_SAT,uint8_t VN200_FIX,uint8_t VN200_Status,uint8_t Radio_txbuff,uint8_t PWR_Gains,uint8_t CPU_load)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FDR_STATUS_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint8_t(buf, 4, GPS_SAT);
	_mav_put_uint8_t(buf, 5, GPS_FIX);
	_mav_put_uint8_t(buf, 6, GPS_HDOP);
	_mav_put_uint8_t(buf, 7, GPS_VDOP);
	_mav_put_uint8_t(buf, 8, VN200_SAT);
	_mav_put_uint8_t(buf, 9, VN200_FIX);
	_mav_put_uint8_t(buf, 10, VN200_Status);
	_mav_put_uint8_t(buf, 11, Radio_txbuff);
	_mav_put_uint8_t(buf, 12, PWR_Gains);
	_mav_put_uint8_t(buf, 13, CPU_load);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#else
	mavlink_fdr_status_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GPS_SAT = GPS_SAT;
	packet.GPS_FIX = GPS_FIX;
	packet.GPS_HDOP = GPS_HDOP;
	packet.GPS_VDOP = GPS_VDOP;
	packet.VN200_SAT = VN200_SAT;
	packet.VN200_FIX = VN200_FIX;
	packet.VN200_Status = VN200_Status;
	packet.Radio_txbuff = Radio_txbuff;
	packet.PWR_Gains = PWR_Gains;
	packet.CPU_load = CPU_load;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FDR_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
}

/**
 * @brief Encode a fdr_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fdr_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fdr_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fdr_status_t* fdr_status)
{
	return mavlink_msg_fdr_status_pack(system_id, component_id, msg, fdr_status->time_boot_ms, fdr_status->GPS_SAT, fdr_status->GPS_FIX, fdr_status->GPS_HDOP, fdr_status->GPS_VDOP, fdr_status->VN200_SAT, fdr_status->VN200_FIX, fdr_status->VN200_Status, fdr_status->Radio_txbuff, fdr_status->PWR_Gains, fdr_status->CPU_load);
}

/**
 * @brief Encode a fdr_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fdr_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fdr_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fdr_status_t* fdr_status)
{
	return mavlink_msg_fdr_status_pack_chan(system_id, component_id, chan, msg, fdr_status->time_boot_ms, fdr_status->GPS_SAT, fdr_status->GPS_FIX, fdr_status->GPS_HDOP, fdr_status->GPS_VDOP, fdr_status->VN200_SAT, fdr_status->VN200_FIX, fdr_status->VN200_Status, fdr_status->Radio_txbuff, fdr_status->PWR_Gains, fdr_status->CPU_load);
}

/**
 * @brief Send a fdr_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param GPS_SAT Satnum
 * @param GPS_FIX 2d/3d fix
 * @param GPS_HDOP gps hdop
 * @param GPS_VDOP gps vdop
 * @param VN200_SAT Satnum VN200
 * @param VN200_FIX Fix VN200
 * @param VN200_Status Filter status VN200
 * @param Radio_txbuff On board radio tx buffer
 * @param PWR_Gains Binary gains feedback
 * @param CPU_load CPU load
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fdr_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t GPS_SAT, uint8_t GPS_FIX, uint8_t GPS_HDOP, uint8_t GPS_VDOP, uint8_t VN200_SAT, uint8_t VN200_FIX, uint8_t VN200_Status, uint8_t Radio_txbuff, uint8_t PWR_Gains, uint8_t CPU_load)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FDR_STATUS_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint8_t(buf, 4, GPS_SAT);
	_mav_put_uint8_t(buf, 5, GPS_FIX);
	_mav_put_uint8_t(buf, 6, GPS_HDOP);
	_mav_put_uint8_t(buf, 7, GPS_VDOP);
	_mav_put_uint8_t(buf, 8, VN200_SAT);
	_mav_put_uint8_t(buf, 9, VN200_FIX);
	_mav_put_uint8_t(buf, 10, VN200_Status);
	_mav_put_uint8_t(buf, 11, Radio_txbuff);
	_mav_put_uint8_t(buf, 12, PWR_Gains);
	_mav_put_uint8_t(buf, 13, CPU_load);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, buf, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, buf, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
#else
	mavlink_fdr_status_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.GPS_SAT = GPS_SAT;
	packet.GPS_FIX = GPS_FIX;
	packet.GPS_HDOP = GPS_HDOP;
	packet.GPS_VDOP = GPS_VDOP;
	packet.VN200_SAT = VN200_SAT;
	packet.VN200_FIX = VN200_FIX;
	packet.VN200_Status = VN200_Status;
	packet.Radio_txbuff = Radio_txbuff;
	packet.PWR_Gains = PWR_Gains;
	packet.CPU_load = CPU_load;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_FDR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fdr_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t GPS_SAT, uint8_t GPS_FIX, uint8_t GPS_HDOP, uint8_t GPS_VDOP, uint8_t VN200_SAT, uint8_t VN200_FIX, uint8_t VN200_Status, uint8_t Radio_txbuff, uint8_t PWR_Gains, uint8_t CPU_load)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint8_t(buf, 4, GPS_SAT);
	_mav_put_uint8_t(buf, 5, GPS_FIX);
	_mav_put_uint8_t(buf, 6, GPS_HDOP);
	_mav_put_uint8_t(buf, 7, GPS_VDOP);
	_mav_put_uint8_t(buf, 8, VN200_SAT);
	_mav_put_uint8_t(buf, 9, VN200_FIX);
	_mav_put_uint8_t(buf, 10, VN200_Status);
	_mav_put_uint8_t(buf, 11, Radio_txbuff);
	_mav_put_uint8_t(buf, 12, PWR_Gains);
	_mav_put_uint8_t(buf, 13, CPU_load);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, buf, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, buf, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
#else
	mavlink_fdr_status_t *packet = (mavlink_fdr_status_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->GPS_SAT = GPS_SAT;
	packet->GPS_FIX = GPS_FIX;
	packet->GPS_HDOP = GPS_HDOP;
	packet->GPS_VDOP = GPS_VDOP;
	packet->VN200_SAT = VN200_SAT;
	packet->VN200_FIX = VN200_FIX;
	packet->VN200_Status = VN200_Status;
	packet->Radio_txbuff = Radio_txbuff;
	packet->PWR_Gains = PWR_Gains;
	packet->CPU_load = CPU_load;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, (const char *)packet, MAVLINK_MSG_ID_FDR_STATUS_LEN, MAVLINK_MSG_ID_FDR_STATUS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FDR_STATUS, (const char *)packet, MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE FDR_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from fdr_status message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_fdr_status_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field GPS_SAT from fdr_status message
 *
 * @return Satnum
 */
static inline uint8_t mavlink_msg_fdr_status_get_GPS_SAT(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field GPS_FIX from fdr_status message
 *
 * @return 2d/3d fix
 */
static inline uint8_t mavlink_msg_fdr_status_get_GPS_FIX(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field GPS_HDOP from fdr_status message
 *
 * @return gps hdop
 */
static inline uint8_t mavlink_msg_fdr_status_get_GPS_HDOP(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field GPS_VDOP from fdr_status message
 *
 * @return gps vdop
 */
static inline uint8_t mavlink_msg_fdr_status_get_GPS_VDOP(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field VN200_SAT from fdr_status message
 *
 * @return Satnum VN200
 */
static inline uint8_t mavlink_msg_fdr_status_get_VN200_SAT(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field VN200_FIX from fdr_status message
 *
 * @return Fix VN200
 */
static inline uint8_t mavlink_msg_fdr_status_get_VN200_FIX(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field VN200_Status from fdr_status message
 *
 * @return Filter status VN200
 */
static inline uint8_t mavlink_msg_fdr_status_get_VN200_Status(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field Radio_txbuff from fdr_status message
 *
 * @return On board radio tx buffer
 */
static inline uint8_t mavlink_msg_fdr_status_get_Radio_txbuff(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field PWR_Gains from fdr_status message
 *
 * @return Binary gains feedback
 */
static inline uint8_t mavlink_msg_fdr_status_get_PWR_Gains(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field CPU_load from fdr_status message
 *
 * @return CPU load
 */
static inline uint8_t mavlink_msg_fdr_status_get_CPU_load(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a fdr_status message into a struct
 *
 * @param msg The message to decode
 * @param fdr_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_fdr_status_decode(const mavlink_message_t* msg, mavlink_fdr_status_t* fdr_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	fdr_status->time_boot_ms = mavlink_msg_fdr_status_get_time_boot_ms(msg);
	fdr_status->GPS_SAT = mavlink_msg_fdr_status_get_GPS_SAT(msg);
	fdr_status->GPS_FIX = mavlink_msg_fdr_status_get_GPS_FIX(msg);
	fdr_status->GPS_HDOP = mavlink_msg_fdr_status_get_GPS_HDOP(msg);
	fdr_status->GPS_VDOP = mavlink_msg_fdr_status_get_GPS_VDOP(msg);
	fdr_status->VN200_SAT = mavlink_msg_fdr_status_get_VN200_SAT(msg);
	fdr_status->VN200_FIX = mavlink_msg_fdr_status_get_VN200_FIX(msg);
	fdr_status->VN200_Status = mavlink_msg_fdr_status_get_VN200_Status(msg);
	fdr_status->Radio_txbuff = mavlink_msg_fdr_status_get_Radio_txbuff(msg);
	fdr_status->PWR_Gains = mavlink_msg_fdr_status_get_PWR_Gains(msg);
	fdr_status->CPU_load = mavlink_msg_fdr_status_get_CPU_load(msg);
#else
	memcpy(fdr_status, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_FDR_STATUS_LEN);
#endif
}
