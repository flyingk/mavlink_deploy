// MESSAGE VEHICLE_STATE PACKING

#define MAVLINK_MSG_ID_VEHICLE_STATE 198

typedef struct __mavlink_vehicle_state_t
{
 uint32_t time_boot_ms; /*< Timestamp (milliseconds since system boot)*/
 float u; /*< Estimated body axis x-vel (m/sec)*/
 float v; /*< Estimated body axis y-vel (m/sec)*/
 float w; /*< Estimated body axis z-vel (m/sec)*/
 float Roll; /*< Estimated roll angle [deg]*/
 float Pitch; /*< Estimated pitch angle [deg]*/
 float Yaw; /*< Estimated yaw angle [deg]*/
 float Wn; /*< Estimated Wn (m/s)*/
 float We; /*< Estimated We (m/s)*/
 float Vair; /*< Estimated airspeed [m/s]*/
 float AoA; /*< Estimated aoa [deg]*/
 float CW; /*< Estimated sideslip [deg]*/
 int16_t N; /*< Estimated Pn (m)*/
 int16_t E; /*< Estimated Pe (m)*/
 int16_t D; /*< Estimated Pd (m)*/
 int16_t p; /*< Estimated angular rate X axis (deg/sec)*/
 int16_t q; /*< Estimated angular rate Y axis (deg/sec)*/
 int16_t r; /*< Estimated angular rate Z axis (deg/sec)*/
} mavlink_vehicle_state_t;

#define MAVLINK_MSG_ID_VEHICLE_STATE_LEN 60
#define MAVLINK_MSG_ID_198_LEN 60

#define MAVLINK_MSG_ID_VEHICLE_STATE_CRC 58
#define MAVLINK_MSG_ID_198_CRC 58



#define MAVLINK_MESSAGE_INFO_VEHICLE_STATE { \
	"VEHICLE_STATE", \
	18, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_vehicle_state_t, time_boot_ms) }, \
         { "u", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_state_t, u) }, \
         { "v", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_state_t, v) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vehicle_state_t, w) }, \
         { "Roll", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vehicle_state_t, Roll) }, \
         { "Pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vehicle_state_t, Pitch) }, \
         { "Yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vehicle_state_t, Yaw) }, \
         { "Wn", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vehicle_state_t, Wn) }, \
         { "We", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_vehicle_state_t, We) }, \
         { "Vair", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_vehicle_state_t, Vair) }, \
         { "AoA", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_vehicle_state_t, AoA) }, \
         { "CW", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_vehicle_state_t, CW) }, \
         { "N", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_vehicle_state_t, N) }, \
         { "E", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_vehicle_state_t, E) }, \
         { "D", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_vehicle_state_t, D) }, \
         { "p", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_vehicle_state_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_vehicle_state_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_vehicle_state_t, r) }, \
         } \
}


/**
 * @brief Pack a vehicle_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param N Estimated Pn (m)
 * @param E Estimated Pe (m)
 * @param D Estimated Pd (m)
 * @param u Estimated body axis x-vel (m/sec)
 * @param v Estimated body axis y-vel (m/sec)
 * @param w Estimated body axis z-vel (m/sec)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 * @param Wn Estimated Wn (m/s)
 * @param We Estimated We (m/s)
 * @param Vair Estimated airspeed [m/s]
 * @param AoA Estimated aoa [deg]
 * @param CW Estimated sideslip [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, int16_t N, int16_t E, int16_t D, float u, float v, float w, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw, float Wn, float We, float Vair, float AoA, float CW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VEHICLE_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, u);
	_mav_put_float(buf, 8, v);
	_mav_put_float(buf, 12, w);
	_mav_put_float(buf, 16, Roll);
	_mav_put_float(buf, 20, Pitch);
	_mav_put_float(buf, 24, Yaw);
	_mav_put_float(buf, 28, Wn);
	_mav_put_float(buf, 32, We);
	_mav_put_float(buf, 36, Vair);
	_mav_put_float(buf, 40, AoA);
	_mav_put_float(buf, 44, CW);
	_mav_put_int16_t(buf, 48, N);
	_mav_put_int16_t(buf, 50, E);
	_mav_put_int16_t(buf, 52, D);
	_mav_put_int16_t(buf, 54, p);
	_mav_put_int16_t(buf, 56, q);
	_mav_put_int16_t(buf, 58, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#else
	mavlink_vehicle_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.u = u;
	packet.v = v;
	packet.w = w;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.Wn = Wn;
	packet.We = We;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.N = N;
	packet.E = E;
	packet.D = D;
	packet.p = p;
	packet.q = q;
	packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VEHICLE_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
}

/**
 * @brief Pack a vehicle_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param N Estimated Pn (m)
 * @param E Estimated Pe (m)
 * @param D Estimated Pd (m)
 * @param u Estimated body axis x-vel (m/sec)
 * @param v Estimated body axis y-vel (m/sec)
 * @param w Estimated body axis z-vel (m/sec)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 * @param Wn Estimated Wn (m/s)
 * @param We Estimated We (m/s)
 * @param Vair Estimated airspeed [m/s]
 * @param AoA Estimated aoa [deg]
 * @param CW Estimated sideslip [deg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,int16_t N,int16_t E,int16_t D,float u,float v,float w,int16_t p,int16_t q,int16_t r,float Roll,float Pitch,float Yaw,float Wn,float We,float Vair,float AoA,float CW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VEHICLE_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, u);
	_mav_put_float(buf, 8, v);
	_mav_put_float(buf, 12, w);
	_mav_put_float(buf, 16, Roll);
	_mav_put_float(buf, 20, Pitch);
	_mav_put_float(buf, 24, Yaw);
	_mav_put_float(buf, 28, Wn);
	_mav_put_float(buf, 32, We);
	_mav_put_float(buf, 36, Vair);
	_mav_put_float(buf, 40, AoA);
	_mav_put_float(buf, 44, CW);
	_mav_put_int16_t(buf, 48, N);
	_mav_put_int16_t(buf, 50, E);
	_mav_put_int16_t(buf, 52, D);
	_mav_put_int16_t(buf, 54, p);
	_mav_put_int16_t(buf, 56, q);
	_mav_put_int16_t(buf, 58, r);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#else
	mavlink_vehicle_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.u = u;
	packet.v = v;
	packet.w = w;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.Wn = Wn;
	packet.We = We;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.N = N;
	packet.E = E;
	packet.D = D;
	packet.p = p;
	packet.q = q;
	packet.r = r;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VEHICLE_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
}

/**
 * @brief Encode a vehicle_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_state_t* vehicle_state)
{
	return mavlink_msg_vehicle_state_pack(system_id, component_id, msg, vehicle_state->time_boot_ms, vehicle_state->N, vehicle_state->E, vehicle_state->D, vehicle_state->u, vehicle_state->v, vehicle_state->w, vehicle_state->p, vehicle_state->q, vehicle_state->r, vehicle_state->Roll, vehicle_state->Pitch, vehicle_state->Yaw, vehicle_state->Wn, vehicle_state->We, vehicle_state->Vair, vehicle_state->AoA, vehicle_state->CW);
}

/**
 * @brief Encode a vehicle_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_state_t* vehicle_state)
{
	return mavlink_msg_vehicle_state_pack_chan(system_id, component_id, chan, msg, vehicle_state->time_boot_ms, vehicle_state->N, vehicle_state->E, vehicle_state->D, vehicle_state->u, vehicle_state->v, vehicle_state->w, vehicle_state->p, vehicle_state->q, vehicle_state->r, vehicle_state->Roll, vehicle_state->Pitch, vehicle_state->Yaw, vehicle_state->Wn, vehicle_state->We, vehicle_state->Vair, vehicle_state->AoA, vehicle_state->CW);
}

/**
 * @brief Send a vehicle_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp (milliseconds since system boot)
 * @param N Estimated Pn (m)
 * @param E Estimated Pe (m)
 * @param D Estimated Pd (m)
 * @param u Estimated body axis x-vel (m/sec)
 * @param v Estimated body axis y-vel (m/sec)
 * @param w Estimated body axis z-vel (m/sec)
 * @param p Estimated angular rate X axis (deg/sec)
 * @param q Estimated angular rate Y axis (deg/sec)
 * @param r Estimated angular rate Z axis (deg/sec)
 * @param Roll Estimated roll angle [deg]
 * @param Pitch Estimated pitch angle [deg]
 * @param Yaw Estimated yaw angle [deg]
 * @param Wn Estimated Wn (m/s)
 * @param We Estimated We (m/s)
 * @param Vair Estimated airspeed [m/s]
 * @param AoA Estimated aoa [deg]
 * @param CW Estimated sideslip [deg]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_state_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t N, int16_t E, int16_t D, float u, float v, float w, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw, float Wn, float We, float Vair, float AoA, float CW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VEHICLE_STATE_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, u);
	_mav_put_float(buf, 8, v);
	_mav_put_float(buf, 12, w);
	_mav_put_float(buf, 16, Roll);
	_mav_put_float(buf, 20, Pitch);
	_mav_put_float(buf, 24, Yaw);
	_mav_put_float(buf, 28, Wn);
	_mav_put_float(buf, 32, We);
	_mav_put_float(buf, 36, Vair);
	_mav_put_float(buf, 40, AoA);
	_mav_put_float(buf, 44, CW);
	_mav_put_int16_t(buf, 48, N);
	_mav_put_int16_t(buf, 50, E);
	_mav_put_int16_t(buf, 52, D);
	_mav_put_int16_t(buf, 54, p);
	_mav_put_int16_t(buf, 56, q);
	_mav_put_int16_t(buf, 58, r);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
#else
	mavlink_vehicle_state_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.u = u;
	packet.v = v;
	packet.w = w;
	packet.Roll = Roll;
	packet.Pitch = Pitch;
	packet.Yaw = Yaw;
	packet.Wn = Wn;
	packet.We = We;
	packet.Vair = Vair;
	packet.AoA = AoA;
	packet.CW = CW;
	packet.N = N;
	packet.E = E;
	packet.D = D;
	packet.p = p;
	packet.q = q;
	packet.r = r;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t N, int16_t E, int16_t D, float u, float v, float w, int16_t p, int16_t q, int16_t r, float Roll, float Pitch, float Yaw, float Wn, float We, float Vair, float AoA, float CW)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, u);
	_mav_put_float(buf, 8, v);
	_mav_put_float(buf, 12, w);
	_mav_put_float(buf, 16, Roll);
	_mav_put_float(buf, 20, Pitch);
	_mav_put_float(buf, 24, Yaw);
	_mav_put_float(buf, 28, Wn);
	_mav_put_float(buf, 32, We);
	_mav_put_float(buf, 36, Vair);
	_mav_put_float(buf, 40, AoA);
	_mav_put_float(buf, 44, CW);
	_mav_put_int16_t(buf, 48, N);
	_mav_put_int16_t(buf, 50, E);
	_mav_put_int16_t(buf, 52, D);
	_mav_put_int16_t(buf, 54, p);
	_mav_put_int16_t(buf, 56, q);
	_mav_put_int16_t(buf, 58, r);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, buf, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
#else
	mavlink_vehicle_state_t *packet = (mavlink_vehicle_state_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->u = u;
	packet->v = v;
	packet->w = w;
	packet->Roll = Roll;
	packet->Pitch = Pitch;
	packet->Yaw = Yaw;
	packet->Wn = Wn;
	packet->We = We;
	packet->Vair = Vair;
	packet->AoA = AoA;
	packet->CW = CW;
	packet->N = N;
	packet->E = E;
	packet->D = D;
	packet->p = p;
	packet->q = q;
	packet->r = r;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN, MAVLINK_MSG_ID_VEHICLE_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATE, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE VEHICLE_STATE UNPACKING


/**
 * @brief Get field time_boot_ms from vehicle_state message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_vehicle_state_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field N from vehicle_state message
 *
 * @return Estimated Pn (m)
 */
static inline int16_t mavlink_msg_vehicle_state_get_N(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field E from vehicle_state message
 *
 * @return Estimated Pe (m)
 */
static inline int16_t mavlink_msg_vehicle_state_get_E(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field D from vehicle_state message
 *
 * @return Estimated Pd (m)
 */
static inline int16_t mavlink_msg_vehicle_state_get_D(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field u from vehicle_state message
 *
 * @return Estimated body axis x-vel (m/sec)
 */
static inline float mavlink_msg_vehicle_state_get_u(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field v from vehicle_state message
 *
 * @return Estimated body axis y-vel (m/sec)
 */
static inline float mavlink_msg_vehicle_state_get_v(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field w from vehicle_state message
 *
 * @return Estimated body axis z-vel (m/sec)
 */
static inline float mavlink_msg_vehicle_state_get_w(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field p from vehicle_state message
 *
 * @return Estimated angular rate X axis (deg/sec)
 */
static inline int16_t mavlink_msg_vehicle_state_get_p(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field q from vehicle_state message
 *
 * @return Estimated angular rate Y axis (deg/sec)
 */
static inline int16_t mavlink_msg_vehicle_state_get_q(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field r from vehicle_state message
 *
 * @return Estimated angular rate Z axis (deg/sec)
 */
static inline int16_t mavlink_msg_vehicle_state_get_r(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field Roll from vehicle_state message
 *
 * @return Estimated roll angle [deg]
 */
static inline float mavlink_msg_vehicle_state_get_Roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Pitch from vehicle_state message
 *
 * @return Estimated pitch angle [deg]
 */
static inline float mavlink_msg_vehicle_state_get_Pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Yaw from vehicle_state message
 *
 * @return Estimated yaw angle [deg]
 */
static inline float mavlink_msg_vehicle_state_get_Yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Wn from vehicle_state message
 *
 * @return Estimated Wn (m/s)
 */
static inline float mavlink_msg_vehicle_state_get_Wn(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field We from vehicle_state message
 *
 * @return Estimated We (m/s)
 */
static inline float mavlink_msg_vehicle_state_get_We(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field Vair from vehicle_state message
 *
 * @return Estimated airspeed [m/s]
 */
static inline float mavlink_msg_vehicle_state_get_Vair(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field AoA from vehicle_state message
 *
 * @return Estimated aoa [deg]
 */
static inline float mavlink_msg_vehicle_state_get_AoA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field CW from vehicle_state message
 *
 * @return Estimated sideslip [deg]
 */
static inline float mavlink_msg_vehicle_state_get_CW(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a vehicle_state message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_state_decode(const mavlink_message_t* msg, mavlink_vehicle_state_t* vehicle_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	vehicle_state->time_boot_ms = mavlink_msg_vehicle_state_get_time_boot_ms(msg);
	vehicle_state->u = mavlink_msg_vehicle_state_get_u(msg);
	vehicle_state->v = mavlink_msg_vehicle_state_get_v(msg);
	vehicle_state->w = mavlink_msg_vehicle_state_get_w(msg);
	vehicle_state->Roll = mavlink_msg_vehicle_state_get_Roll(msg);
	vehicle_state->Pitch = mavlink_msg_vehicle_state_get_Pitch(msg);
	vehicle_state->Yaw = mavlink_msg_vehicle_state_get_Yaw(msg);
	vehicle_state->Wn = mavlink_msg_vehicle_state_get_Wn(msg);
	vehicle_state->We = mavlink_msg_vehicle_state_get_We(msg);
	vehicle_state->Vair = mavlink_msg_vehicle_state_get_Vair(msg);
	vehicle_state->AoA = mavlink_msg_vehicle_state_get_AoA(msg);
	vehicle_state->CW = mavlink_msg_vehicle_state_get_CW(msg);
	vehicle_state->N = mavlink_msg_vehicle_state_get_N(msg);
	vehicle_state->E = mavlink_msg_vehicle_state_get_E(msg);
	vehicle_state->D = mavlink_msg_vehicle_state_get_D(msg);
	vehicle_state->p = mavlink_msg_vehicle_state_get_p(msg);
	vehicle_state->q = mavlink_msg_vehicle_state_get_q(msg);
	vehicle_state->r = mavlink_msg_vehicle_state_get_r(msg);
#else
	memcpy(vehicle_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_VEHICLE_STATE_LEN);
#endif
}
