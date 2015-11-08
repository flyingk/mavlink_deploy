// MESSAGE FUEL_CELL_DETAIL PACKING

#define MAVLINK_MSG_ID_FUEL_CELL_DETAIL 196

typedef struct __mavlink_fuel_cell_detail_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 uint16_t FC_Aux_V2; /*< Aux2 voltage*/
 uint16_t FC_Aux_A2; /*< Aux2 current*/
 uint16_t FC_Aux_V3; /*< Aux3 voltage*/
 uint16_t FC_Aux_A3; /*< Aux3 current*/
 uint16_t FC_Mass_flow; /*< Aux current*/
 uint16_t FC_Pressure; /*< Fuel cell voltage*/
 uint16_t FC_Airflow; /*< Fuel cell current*/
 uint16_t FC_RPM_1; /*< Fuel cell temperature*/
 uint16_t FC_RPM_2; /*< Aux voltage*/
} mavlink_fuel_cell_detail_t;

#define MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN 22
#define MAVLINK_MSG_ID_196_LEN 22

#define MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC 27
#define MAVLINK_MSG_ID_196_CRC 27



#define MAVLINK_MESSAGE_INFO_FUEL_CELL_DETAIL { \
	"FUEL_CELL_DETAIL", \
	10, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_detail_t, time_boot_ms) }, \
         { "FC_Aux_V2", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_fuel_cell_detail_t, FC_Aux_V2) }, \
         { "FC_Aux_A2", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_fuel_cell_detail_t, FC_Aux_A2) }, \
         { "FC_Aux_V3", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_detail_t, FC_Aux_V3) }, \
         { "FC_Aux_A3", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_fuel_cell_detail_t, FC_Aux_A3) }, \
         { "FC_Mass_flow", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_fuel_cell_detail_t, FC_Mass_flow) }, \
         { "FC_Pressure", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_fuel_cell_detail_t, FC_Pressure) }, \
         { "FC_Airflow", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_fuel_cell_detail_t, FC_Airflow) }, \
         { "FC_RPM_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_fuel_cell_detail_t, FC_RPM_1) }, \
         { "FC_RPM_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_fuel_cell_detail_t, FC_RPM_2) }, \
         } \
}


/**
 * @brief Pack a fuel_cell_detail message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param FC_Aux_V2 Aux2 voltage
 * @param FC_Aux_A2 Aux2 current
 * @param FC_Aux_V3 Aux3 voltage
 * @param FC_Aux_A3 Aux3 current
 * @param FC_Mass_flow Aux current
 * @param FC_Pressure Fuel cell voltage
 * @param FC_Airflow Fuel cell current
 * @param FC_RPM_1 Fuel cell temperature
 * @param FC_RPM_2 Aux voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, uint16_t FC_Aux_V2, uint16_t FC_Aux_A2, uint16_t FC_Aux_V3, uint16_t FC_Aux_A3, uint16_t FC_Mass_flow, uint16_t FC_Pressure, uint16_t FC_Airflow, uint16_t FC_RPM_1, uint16_t FC_RPM_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, FC_Aux_V2);
	_mav_put_uint16_t(buf, 6, FC_Aux_A2);
	_mav_put_uint16_t(buf, 8, FC_Aux_V3);
	_mav_put_uint16_t(buf, 10, FC_Aux_A3);
	_mav_put_uint16_t(buf, 12, FC_Mass_flow);
	_mav_put_uint16_t(buf, 14, FC_Pressure);
	_mav_put_uint16_t(buf, 16, FC_Airflow);
	_mav_put_uint16_t(buf, 18, FC_RPM_1);
	_mav_put_uint16_t(buf, 20, FC_RPM_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#else
	mavlink_fuel_cell_detail_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.FC_Aux_V2 = FC_Aux_V2;
	packet.FC_Aux_A2 = FC_Aux_A2;
	packet.FC_Aux_V3 = FC_Aux_V3;
	packet.FC_Aux_A3 = FC_Aux_A3;
	packet.FC_Mass_flow = FC_Mass_flow;
	packet.FC_Pressure = FC_Pressure;
	packet.FC_Airflow = FC_Airflow;
	packet.FC_RPM_1 = FC_RPM_1;
	packet.FC_RPM_2 = FC_RPM_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FUEL_CELL_DETAIL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
}

/**
 * @brief Pack a fuel_cell_detail message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param FC_Aux_V2 Aux2 voltage
 * @param FC_Aux_A2 Aux2 current
 * @param FC_Aux_V3 Aux3 voltage
 * @param FC_Aux_A3 Aux3 current
 * @param FC_Mass_flow Aux current
 * @param FC_Pressure Fuel cell voltage
 * @param FC_Airflow Fuel cell current
 * @param FC_RPM_1 Fuel cell temperature
 * @param FC_RPM_2 Aux voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,uint16_t FC_Aux_V2,uint16_t FC_Aux_A2,uint16_t FC_Aux_V3,uint16_t FC_Aux_A3,uint16_t FC_Mass_flow,uint16_t FC_Pressure,uint16_t FC_Airflow,uint16_t FC_RPM_1,uint16_t FC_RPM_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, FC_Aux_V2);
	_mav_put_uint16_t(buf, 6, FC_Aux_A2);
	_mav_put_uint16_t(buf, 8, FC_Aux_V3);
	_mav_put_uint16_t(buf, 10, FC_Aux_A3);
	_mav_put_uint16_t(buf, 12, FC_Mass_flow);
	_mav_put_uint16_t(buf, 14, FC_Pressure);
	_mav_put_uint16_t(buf, 16, FC_Airflow);
	_mav_put_uint16_t(buf, 18, FC_RPM_1);
	_mav_put_uint16_t(buf, 20, FC_RPM_2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#else
	mavlink_fuel_cell_detail_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.FC_Aux_V2 = FC_Aux_V2;
	packet.FC_Aux_A2 = FC_Aux_A2;
	packet.FC_Aux_V3 = FC_Aux_V3;
	packet.FC_Aux_A3 = FC_Aux_A3;
	packet.FC_Mass_flow = FC_Mass_flow;
	packet.FC_Pressure = FC_Pressure;
	packet.FC_Airflow = FC_Airflow;
	packet.FC_RPM_1 = FC_RPM_1;
	packet.FC_RPM_2 = FC_RPM_2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_FUEL_CELL_DETAIL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
}

/**
 * @brief Encode a fuel_cell_detail struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell_detail C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fuel_cell_detail_t* fuel_cell_detail)
{
	return mavlink_msg_fuel_cell_detail_pack(system_id, component_id, msg, fuel_cell_detail->time_boot_ms, fuel_cell_detail->FC_Aux_V2, fuel_cell_detail->FC_Aux_A2, fuel_cell_detail->FC_Aux_V3, fuel_cell_detail->FC_Aux_A3, fuel_cell_detail->FC_Mass_flow, fuel_cell_detail->FC_Pressure, fuel_cell_detail->FC_Airflow, fuel_cell_detail->FC_RPM_1, fuel_cell_detail->FC_RPM_2);
}

/**
 * @brief Encode a fuel_cell_detail struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell_detail C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fuel_cell_detail_t* fuel_cell_detail)
{
	return mavlink_msg_fuel_cell_detail_pack_chan(system_id, component_id, chan, msg, fuel_cell_detail->time_boot_ms, fuel_cell_detail->FC_Aux_V2, fuel_cell_detail->FC_Aux_A2, fuel_cell_detail->FC_Aux_V3, fuel_cell_detail->FC_Aux_A3, fuel_cell_detail->FC_Mass_flow, fuel_cell_detail->FC_Pressure, fuel_cell_detail->FC_Airflow, fuel_cell_detail->FC_RPM_1, fuel_cell_detail->FC_RPM_2);
}

/**
 * @brief Send a fuel_cell_detail message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param FC_Aux_V2 Aux2 voltage
 * @param FC_Aux_A2 Aux2 current
 * @param FC_Aux_V3 Aux3 voltage
 * @param FC_Aux_A3 Aux3 current
 * @param FC_Mass_flow Aux current
 * @param FC_Pressure Fuel cell voltage
 * @param FC_Airflow Fuel cell current
 * @param FC_RPM_1 Fuel cell temperature
 * @param FC_RPM_2 Aux voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fuel_cell_detail_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint16_t FC_Aux_V2, uint16_t FC_Aux_A2, uint16_t FC_Aux_V3, uint16_t FC_Aux_A3, uint16_t FC_Mass_flow, uint16_t FC_Pressure, uint16_t FC_Airflow, uint16_t FC_RPM_1, uint16_t FC_RPM_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, FC_Aux_V2);
	_mav_put_uint16_t(buf, 6, FC_Aux_A2);
	_mav_put_uint16_t(buf, 8, FC_Aux_V3);
	_mav_put_uint16_t(buf, 10, FC_Aux_A3);
	_mav_put_uint16_t(buf, 12, FC_Mass_flow);
	_mav_put_uint16_t(buf, 14, FC_Pressure);
	_mav_put_uint16_t(buf, 16, FC_Airflow);
	_mav_put_uint16_t(buf, 18, FC_RPM_1);
	_mav_put_uint16_t(buf, 20, FC_RPM_2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
#else
	mavlink_fuel_cell_detail_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.FC_Aux_V2 = FC_Aux_V2;
	packet.FC_Aux_A2 = FC_Aux_A2;
	packet.FC_Aux_V3 = FC_Aux_V3;
	packet.FC_Aux_A3 = FC_Aux_A3;
	packet.FC_Mass_flow = FC_Mass_flow;
	packet.FC_Pressure = FC_Pressure;
	packet.FC_Airflow = FC_Airflow;
	packet.FC_RPM_1 = FC_RPM_1;
	packet.FC_RPM_2 = FC_RPM_2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, (const char *)&packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, (const char *)&packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fuel_cell_detail_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint16_t FC_Aux_V2, uint16_t FC_Aux_A2, uint16_t FC_Aux_V3, uint16_t FC_Aux_A3, uint16_t FC_Mass_flow, uint16_t FC_Pressure, uint16_t FC_Airflow, uint16_t FC_RPM_1, uint16_t FC_RPM_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_uint16_t(buf, 4, FC_Aux_V2);
	_mav_put_uint16_t(buf, 6, FC_Aux_A2);
	_mav_put_uint16_t(buf, 8, FC_Aux_V3);
	_mav_put_uint16_t(buf, 10, FC_Aux_A3);
	_mav_put_uint16_t(buf, 12, FC_Mass_flow);
	_mav_put_uint16_t(buf, 14, FC_Pressure);
	_mav_put_uint16_t(buf, 16, FC_Airflow);
	_mav_put_uint16_t(buf, 18, FC_RPM_1);
	_mav_put_uint16_t(buf, 20, FC_RPM_2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, buf, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
#else
	mavlink_fuel_cell_detail_t *packet = (mavlink_fuel_cell_detail_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->FC_Aux_V2 = FC_Aux_V2;
	packet->FC_Aux_A2 = FC_Aux_A2;
	packet->FC_Aux_V3 = FC_Aux_V3;
	packet->FC_Aux_A3 = FC_Aux_A3;
	packet->FC_Mass_flow = FC_Mass_flow;
	packet->FC_Pressure = FC_Pressure;
	packet->FC_Airflow = FC_Airflow;
	packet->FC_RPM_1 = FC_RPM_1;
	packet->FC_RPM_2 = FC_RPM_2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_DETAIL, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE FUEL_CELL_DETAIL UNPACKING


/**
 * @brief Get field time_boot_ms from fuel_cell_detail message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_fuel_cell_detail_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field FC_Aux_V2 from fuel_cell_detail message
 *
 * @return Aux2 voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Aux_V2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field FC_Aux_A2 from fuel_cell_detail message
 *
 * @return Aux2 current
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Aux_A2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field FC_Aux_V3 from fuel_cell_detail message
 *
 * @return Aux3 voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Aux_V3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field FC_Aux_A3 from fuel_cell_detail message
 *
 * @return Aux3 current
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Aux_A3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field FC_Mass_flow from fuel_cell_detail message
 *
 * @return Aux current
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Mass_flow(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field FC_Pressure from fuel_cell_detail message
 *
 * @return Fuel cell voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Pressure(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field FC_Airflow from fuel_cell_detail message
 *
 * @return Fuel cell current
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_Airflow(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field FC_RPM_1 from fuel_cell_detail message
 *
 * @return Fuel cell temperature
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_RPM_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field FC_RPM_2 from fuel_cell_detail message
 *
 * @return Aux voltage
 */
static inline uint16_t mavlink_msg_fuel_cell_detail_get_FC_RPM_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Decode a fuel_cell_detail message into a struct
 *
 * @param msg The message to decode
 * @param fuel_cell_detail C-struct to decode the message contents into
 */
static inline void mavlink_msg_fuel_cell_detail_decode(const mavlink_message_t* msg, mavlink_fuel_cell_detail_t* fuel_cell_detail)
{
#if MAVLINK_NEED_BYTE_SWAP
	fuel_cell_detail->time_boot_ms = mavlink_msg_fuel_cell_detail_get_time_boot_ms(msg);
	fuel_cell_detail->FC_Aux_V2 = mavlink_msg_fuel_cell_detail_get_FC_Aux_V2(msg);
	fuel_cell_detail->FC_Aux_A2 = mavlink_msg_fuel_cell_detail_get_FC_Aux_A2(msg);
	fuel_cell_detail->FC_Aux_V3 = mavlink_msg_fuel_cell_detail_get_FC_Aux_V3(msg);
	fuel_cell_detail->FC_Aux_A3 = mavlink_msg_fuel_cell_detail_get_FC_Aux_A3(msg);
	fuel_cell_detail->FC_Mass_flow = mavlink_msg_fuel_cell_detail_get_FC_Mass_flow(msg);
	fuel_cell_detail->FC_Pressure = mavlink_msg_fuel_cell_detail_get_FC_Pressure(msg);
	fuel_cell_detail->FC_Airflow = mavlink_msg_fuel_cell_detail_get_FC_Airflow(msg);
	fuel_cell_detail->FC_RPM_1 = mavlink_msg_fuel_cell_detail_get_FC_RPM_1(msg);
	fuel_cell_detail->FC_RPM_2 = mavlink_msg_fuel_cell_detail_get_FC_RPM_2(msg);
#else
	memcpy(fuel_cell_detail, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_FUEL_CELL_DETAIL_LEN);
#endif
}
