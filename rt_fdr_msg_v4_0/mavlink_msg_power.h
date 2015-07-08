// MESSAGE POWER PACKING

#define MAVLINK_MSG_ID_POWER 235

typedef struct __mavlink_power_t
{
 uint32_t time_boot_ms; ///< Time since boot in msec
 float Avionics_Volt; ///< FDR Batt Volts
 float Servo_Volt; ///< Servo Amps
 float Shunt_temp; ///< Shunt temp in deg C
 uint16_t Avionics_mA; ///< FDR Amps*1000
 uint16_t Avionics_mAh; ///< FDR Batt capacity used
 uint16_t Servo_mA; ///< Servo Amps *1000
 uint16_t Main_mAh; ///< Main Batt capacity used
 uint8_t Avionics_Batt; ///< FDR Batt capacity remaining
 uint8_t Main_Batt; ///< Main Batt capacity remaining
} mavlink_power_t;

#define MAVLINK_MSG_ID_POWER_LEN 26
#define MAVLINK_MSG_ID_235_LEN 26

#define MAVLINK_MSG_ID_POWER_CRC 24
#define MAVLINK_MSG_ID_235_CRC 24



#define MAVLINK_MESSAGE_INFO_POWER { \
	"POWER", \
	10, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_power_t, time_boot_ms) }, \
         { "Avionics_Volt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_power_t, Avionics_Volt) }, \
         { "Servo_Volt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_power_t, Servo_Volt) }, \
         { "Shunt_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_power_t, Shunt_temp) }, \
         { "Avionics_mA", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_power_t, Avionics_mA) }, \
         { "Avionics_mAh", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_power_t, Avionics_mAh) }, \
         { "Servo_mA", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_power_t, Servo_mA) }, \
         { "Main_mAh", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_power_t, Main_mAh) }, \
         { "Avionics_Batt", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_power_t, Avionics_Batt) }, \
         { "Main_Batt", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_power_t, Main_Batt) }, \
         } \
}


/**
 * @brief Pack a power message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Time since boot in msec
 * @param Avionics_Volt FDR Batt Volts
 * @param Avionics_mA FDR Amps*1000
 * @param Avionics_mAh FDR Batt capacity used
 * @param Avionics_Batt FDR Batt capacity remaining
 * @param Servo_Volt Servo Amps
 * @param Servo_mA Servo Amps *1000
 * @param Main_mAh Main Batt capacity used
 * @param Main_Batt Main Batt capacity remaining
 * @param Shunt_temp Shunt temp in deg C
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float Avionics_Volt, uint16_t Avionics_mA, uint16_t Avionics_mAh, uint8_t Avionics_Batt, float Servo_Volt, uint16_t Servo_mA, uint16_t Main_mAh, uint8_t Main_Batt, float Shunt_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POWER_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Avionics_Volt);
	_mav_put_float(buf, 8, Servo_Volt);
	_mav_put_float(buf, 12, Shunt_temp);
	_mav_put_uint16_t(buf, 16, Avionics_mA);
	_mav_put_uint16_t(buf, 18, Avionics_mAh);
	_mav_put_uint16_t(buf, 20, Servo_mA);
	_mav_put_uint16_t(buf, 22, Main_mAh);
	_mav_put_uint8_t(buf, 24, Avionics_Batt);
	_mav_put_uint8_t(buf, 25, Main_Batt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_LEN);
#else
	mavlink_power_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Avionics_Volt = Avionics_Volt;
	packet.Servo_Volt = Servo_Volt;
	packet.Shunt_temp = Shunt_temp;
	packet.Avionics_mA = Avionics_mA;
	packet.Avionics_mAh = Avionics_mAh;
	packet.Servo_mA = Servo_mA;
	packet.Main_mAh = Main_mAh;
	packet.Avionics_Batt = Avionics_Batt;
	packet.Main_Batt = Main_Batt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POWER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POWER_LEN);
#endif
}

/**
 * @brief Pack a power message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Time since boot in msec
 * @param Avionics_Volt FDR Batt Volts
 * @param Avionics_mA FDR Amps*1000
 * @param Avionics_mAh FDR Batt capacity used
 * @param Avionics_Batt FDR Batt capacity remaining
 * @param Servo_Volt Servo Amps
 * @param Servo_mA Servo Amps *1000
 * @param Main_mAh Main Batt capacity used
 * @param Main_Batt Main Batt capacity remaining
 * @param Shunt_temp Shunt temp in deg C
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float Avionics_Volt,uint16_t Avionics_mA,uint16_t Avionics_mAh,uint8_t Avionics_Batt,float Servo_Volt,uint16_t Servo_mA,uint16_t Main_mAh,uint8_t Main_Batt,float Shunt_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POWER_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Avionics_Volt);
	_mav_put_float(buf, 8, Servo_Volt);
	_mav_put_float(buf, 12, Shunt_temp);
	_mav_put_uint16_t(buf, 16, Avionics_mA);
	_mav_put_uint16_t(buf, 18, Avionics_mAh);
	_mav_put_uint16_t(buf, 20, Servo_mA);
	_mav_put_uint16_t(buf, 22, Main_mAh);
	_mav_put_uint8_t(buf, 24, Avionics_Batt);
	_mav_put_uint8_t(buf, 25, Main_Batt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_LEN);
#else
	mavlink_power_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Avionics_Volt = Avionics_Volt;
	packet.Servo_Volt = Servo_Volt;
	packet.Shunt_temp = Shunt_temp;
	packet.Avionics_mA = Avionics_mA;
	packet.Avionics_mAh = Avionics_mAh;
	packet.Servo_mA = Servo_mA;
	packet.Main_mAh = Main_mAh;
	packet.Avionics_Batt = Avionics_Batt;
	packet.Main_Batt = Main_Batt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POWER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POWER_LEN);
#endif
}

/**
 * @brief Encode a power struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param power C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_power_t* power)
{
	return mavlink_msg_power_pack(system_id, component_id, msg, power->time_boot_ms, power->Avionics_Volt, power->Avionics_mA, power->Avionics_mAh, power->Avionics_Batt, power->Servo_Volt, power->Servo_mA, power->Main_mAh, power->Main_Batt, power->Shunt_temp);
}

/**
 * @brief Encode a power struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param power C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_power_t* power)
{
	return mavlink_msg_power_pack_chan(system_id, component_id, chan, msg, power->time_boot_ms, power->Avionics_Volt, power->Avionics_mA, power->Avionics_mAh, power->Avionics_Batt, power->Servo_Volt, power->Servo_mA, power->Main_mAh, power->Main_Batt, power->Shunt_temp);
}

/**
 * @brief Send a power message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Time since boot in msec
 * @param Avionics_Volt FDR Batt Volts
 * @param Avionics_mA FDR Amps*1000
 * @param Avionics_mAh FDR Batt capacity used
 * @param Avionics_Batt FDR Batt capacity remaining
 * @param Servo_Volt Servo Amps
 * @param Servo_mA Servo Amps *1000
 * @param Main_mAh Main Batt capacity used
 * @param Main_Batt Main Batt capacity remaining
 * @param Shunt_temp Shunt temp in deg C
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_power_send(mavlink_channel_t chan, uint32_t time_boot_ms, float Avionics_Volt, uint16_t Avionics_mA, uint16_t Avionics_mAh, uint8_t Avionics_Batt, float Servo_Volt, uint16_t Servo_mA, uint16_t Main_mAh, uint8_t Main_Batt, float Shunt_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POWER_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Avionics_Volt);
	_mav_put_float(buf, 8, Servo_Volt);
	_mav_put_float(buf, 12, Shunt_temp);
	_mav_put_uint16_t(buf, 16, Avionics_mA);
	_mav_put_uint16_t(buf, 18, Avionics_mAh);
	_mav_put_uint16_t(buf, 20, Servo_mA);
	_mav_put_uint16_t(buf, 22, Main_mAh);
	_mav_put_uint8_t(buf, 24, Avionics_Batt);
	_mav_put_uint8_t(buf, 25, Main_Batt);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, buf, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, buf, MAVLINK_MSG_ID_POWER_LEN);
#endif
#else
	mavlink_power_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.Avionics_Volt = Avionics_Volt;
	packet.Servo_Volt = Servo_Volt;
	packet.Shunt_temp = Shunt_temp;
	packet.Avionics_mA = Avionics_mA;
	packet.Avionics_mAh = Avionics_mAh;
	packet.Servo_mA = Servo_mA;
	packet.Main_mAh = Main_mAh;
	packet.Avionics_Batt = Avionics_Batt;
	packet.Main_Batt = Main_Batt;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, (const char *)&packet, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, (const char *)&packet, MAVLINK_MSG_ID_POWER_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POWER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_power_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float Avionics_Volt, uint16_t Avionics_mA, uint16_t Avionics_mAh, uint8_t Avionics_Batt, float Servo_Volt, uint16_t Servo_mA, uint16_t Main_mAh, uint8_t Main_Batt, float Shunt_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, Avionics_Volt);
	_mav_put_float(buf, 8, Servo_Volt);
	_mav_put_float(buf, 12, Shunt_temp);
	_mav_put_uint16_t(buf, 16, Avionics_mA);
	_mav_put_uint16_t(buf, 18, Avionics_mAh);
	_mav_put_uint16_t(buf, 20, Servo_mA);
	_mav_put_uint16_t(buf, 22, Main_mAh);
	_mav_put_uint8_t(buf, 24, Avionics_Batt);
	_mav_put_uint8_t(buf, 25, Main_Batt);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, buf, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, buf, MAVLINK_MSG_ID_POWER_LEN);
#endif
#else
	mavlink_power_t *packet = (mavlink_power_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->Avionics_Volt = Avionics_Volt;
	packet->Servo_Volt = Servo_Volt;
	packet->Shunt_temp = Shunt_temp;
	packet->Avionics_mA = Avionics_mA;
	packet->Avionics_mAh = Avionics_mAh;
	packet->Servo_mA = Servo_mA;
	packet->Main_mAh = Main_mAh;
	packet->Avionics_Batt = Avionics_Batt;
	packet->Main_Batt = Main_Batt;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, (const char *)packet, MAVLINK_MSG_ID_POWER_LEN, MAVLINK_MSG_ID_POWER_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER, (const char *)packet, MAVLINK_MSG_ID_POWER_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POWER UNPACKING


/**
 * @brief Get field time_boot_ms from power message
 *
 * @return Time since boot in msec
 */
static inline uint32_t mavlink_msg_power_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Avionics_Volt from power message
 *
 * @return FDR Batt Volts
 */
static inline float mavlink_msg_power_get_Avionics_Volt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Avionics_mA from power message
 *
 * @return FDR Amps*1000
 */
static inline uint16_t mavlink_msg_power_get_Avionics_mA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field Avionics_mAh from power message
 *
 * @return FDR Batt capacity used
 */
static inline uint16_t mavlink_msg_power_get_Avionics_mAh(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field Avionics_Batt from power message
 *
 * @return FDR Batt capacity remaining
 */
static inline uint8_t mavlink_msg_power_get_Avionics_Batt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field Servo_Volt from power message
 *
 * @return Servo Amps
 */
static inline float mavlink_msg_power_get_Servo_Volt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Servo_mA from power message
 *
 * @return Servo Amps *1000
 */
static inline uint16_t mavlink_msg_power_get_Servo_mA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field Main_mAh from power message
 *
 * @return Main Batt capacity used
 */
static inline uint16_t mavlink_msg_power_get_Main_mAh(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field Main_Batt from power message
 *
 * @return Main Batt capacity remaining
 */
static inline uint8_t mavlink_msg_power_get_Main_Batt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field Shunt_temp from power message
 *
 * @return Shunt temp in deg C
 */
static inline float mavlink_msg_power_get_Shunt_temp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a power message into a struct
 *
 * @param msg The message to decode
 * @param power C-struct to decode the message contents into
 */
static inline void mavlink_msg_power_decode(const mavlink_message_t* msg, mavlink_power_t* power)
{
#if MAVLINK_NEED_BYTE_SWAP
	power->time_boot_ms = mavlink_msg_power_get_time_boot_ms(msg);
	power->Avionics_Volt = mavlink_msg_power_get_Avionics_Volt(msg);
	power->Servo_Volt = mavlink_msg_power_get_Servo_Volt(msg);
	power->Shunt_temp = mavlink_msg_power_get_Shunt_temp(msg);
	power->Avionics_mA = mavlink_msg_power_get_Avionics_mA(msg);
	power->Avionics_mAh = mavlink_msg_power_get_Avionics_mAh(msg);
	power->Servo_mA = mavlink_msg_power_get_Servo_mA(msg);
	power->Main_mAh = mavlink_msg_power_get_Main_mAh(msg);
	power->Avionics_Batt = mavlink_msg_power_get_Avionics_Batt(msg);
	power->Main_Batt = mavlink_msg_power_get_Main_Batt(msg);
#else
	memcpy(power, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POWER_LEN);
#endif
}
