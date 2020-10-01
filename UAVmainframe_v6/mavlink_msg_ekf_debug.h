#pragma once
// MESSAGE EKF_DEBUG PACKING

#define MAVLINK_MSG_ID_EKF_DEBUG 199


typedef struct __mavlink_ekf_debug_t {
 uint32_t time_boot_ms; /*<  Timestamp (milliseconds since system boot)*/
 int16_t GX_b__mdps; /*<  Estimated gyro x bias [deg/s]*/
 int16_t GY_b__mdps; /*<  Estimated gyro y bias [deg/s]*/
 int16_t GZ_b__mdps; /*<  Estimated gyro z bias [deg/s]*/
 int16_t AX_b__mg; /*<  Estimated ax bias [mg]*/
 int16_t AY_b__mg; /*<  Estimated ay bias [mg]*/
 int16_t AZ_b__mg; /*<  Estimated az bias [mg]*/
 int16_t MX_b__mG; /*<  Estimated mx bias [mG]*/
 int16_t MY_b__mG; /*<  Estimated my bias [mG]*/
 int16_t MZ_b__mG; /*<  Estimated mz bias [mG]*/
 int16_t Vair_b__cmps; /*<  Estimated Vair bias [mg]*/
 int16_t AoA_b__mdeg; /*<  Estimated aoa bias [mg]*/
 int16_t CW_b__mdeg; /*<  Estimated cw bias [mg]*/
 int16_t Alt_b__cm; /*<  Estimated alt bias [mg]*/
 int16_t Vair_scale; /*<  Estimated Vair scale [mg]*/
 int16_t AoA_scale; /*<  Estimated aoa scale [mg]*/
 int16_t CW_scale; /*<  Estimated cw scale [mg]*/
} mavlink_ekf_debug_t;

#define MAVLINK_MSG_ID_EKF_DEBUG_LEN 36
#define MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN 36
#define MAVLINK_MSG_ID_199_LEN 36
#define MAVLINK_MSG_ID_199_MIN_LEN 36

#define MAVLINK_MSG_ID_EKF_DEBUG_CRC 9
#define MAVLINK_MSG_ID_199_CRC 9



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EKF_DEBUG { \
    199, \
    "EKF_DEBUG", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_debug_t, time_boot_ms) }, \
         { "GX_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ekf_debug_t, GX_b__mdps) }, \
         { "GY_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ekf_debug_t, GY_b__mdps) }, \
         { "GZ_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ekf_debug_t, GZ_b__mdps) }, \
         { "AX_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ekf_debug_t, AX_b__mg) }, \
         { "AY_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ekf_debug_t, AY_b__mg) }, \
         { "AZ_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ekf_debug_t, AZ_b__mg) }, \
         { "MX_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_debug_t, MX_b__mG) }, \
         { "MY_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_debug_t, MY_b__mG) }, \
         { "MZ_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_debug_t, MZ_b__mG) }, \
         { "Vair_b__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ekf_debug_t, Vair_b__cmps) }, \
         { "AoA_b__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ekf_debug_t, AoA_b__mdeg) }, \
         { "CW_b__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ekf_debug_t, CW_b__mdeg) }, \
         { "Alt_b__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ekf_debug_t, Alt_b__cm) }, \
         { "Vair_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_ekf_debug_t, Vair_scale) }, \
         { "AoA_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_ekf_debug_t, AoA_scale) }, \
         { "CW_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_ekf_debug_t, CW_scale) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EKF_DEBUG { \
    "EKF_DEBUG", \
    17, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ekf_debug_t, time_boot_ms) }, \
         { "GX_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_ekf_debug_t, GX_b__mdps) }, \
         { "GY_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_ekf_debug_t, GY_b__mdps) }, \
         { "GZ_b__mdps", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_ekf_debug_t, GZ_b__mdps) }, \
         { "AX_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_ekf_debug_t, AX_b__mg) }, \
         { "AY_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ekf_debug_t, AY_b__mg) }, \
         { "AZ_b__mg", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_ekf_debug_t, AZ_b__mg) }, \
         { "MX_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ekf_debug_t, MX_b__mG) }, \
         { "MY_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ekf_debug_t, MY_b__mG) }, \
         { "MZ_b__mG", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ekf_debug_t, MZ_b__mG) }, \
         { "Vair_b__cmps", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_ekf_debug_t, Vair_b__cmps) }, \
         { "AoA_b__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_ekf_debug_t, AoA_b__mdeg) }, \
         { "CW_b__mdeg", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_ekf_debug_t, CW_b__mdeg) }, \
         { "Alt_b__cm", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_ekf_debug_t, Alt_b__cm) }, \
         { "Vair_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_ekf_debug_t, Vair_scale) }, \
         { "AoA_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_ekf_debug_t, AoA_scale) }, \
         { "CW_scale", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_ekf_debug_t, CW_scale) }, \
         } \
}
#endif

/**
 * @brief Pack a ekf_debug message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param GX_b__mdps  Estimated gyro x bias [deg/s]
 * @param GY_b__mdps  Estimated gyro y bias [deg/s]
 * @param GZ_b__mdps  Estimated gyro z bias [deg/s]
 * @param AX_b__mg  Estimated ax bias [mg]
 * @param AY_b__mg  Estimated ay bias [mg]
 * @param AZ_b__mg  Estimated az bias [mg]
 * @param MX_b__mG  Estimated mx bias [mG]
 * @param MY_b__mG  Estimated my bias [mG]
 * @param MZ_b__mG  Estimated mz bias [mG]
 * @param Vair_b__cmps  Estimated Vair bias [mg]
 * @param AoA_b__mdeg  Estimated aoa bias [mg]
 * @param CW_b__mdeg  Estimated cw bias [mg]
 * @param Alt_b__cm  Estimated alt bias [mg]
 * @param Vair_scale  Estimated Vair scale [mg]
 * @param AoA_scale  Estimated aoa scale [mg]
 * @param CW_scale  Estimated cw scale [mg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int16_t GX_b__mdps, int16_t GY_b__mdps, int16_t GZ_b__mdps, int16_t AX_b__mg, int16_t AY_b__mg, int16_t AZ_b__mg, int16_t MX_b__mG, int16_t MY_b__mG, int16_t MZ_b__mG, int16_t Vair_b__cmps, int16_t AoA_b__mdeg, int16_t CW_b__mdeg, int16_t Alt_b__cm, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, GX_b__mdps);
    _mav_put_int16_t(buf, 6, GY_b__mdps);
    _mav_put_int16_t(buf, 8, GZ_b__mdps);
    _mav_put_int16_t(buf, 10, AX_b__mg);
    _mav_put_int16_t(buf, 12, AY_b__mg);
    _mav_put_int16_t(buf, 14, AZ_b__mg);
    _mav_put_int16_t(buf, 16, MX_b__mG);
    _mav_put_int16_t(buf, 18, MY_b__mG);
    _mav_put_int16_t(buf, 20, MZ_b__mG);
    _mav_put_int16_t(buf, 22, Vair_b__cmps);
    _mav_put_int16_t(buf, 24, AoA_b__mdeg);
    _mav_put_int16_t(buf, 26, CW_b__mdeg);
    _mav_put_int16_t(buf, 28, Alt_b__cm);
    _mav_put_int16_t(buf, 30, Vair_scale);
    _mav_put_int16_t(buf, 32, AoA_scale);
    _mav_put_int16_t(buf, 34, CW_scale);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
    mavlink_ekf_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.GX_b__mdps = GX_b__mdps;
    packet.GY_b__mdps = GY_b__mdps;
    packet.GZ_b__mdps = GZ_b__mdps;
    packet.AX_b__mg = AX_b__mg;
    packet.AY_b__mg = AY_b__mg;
    packet.AZ_b__mg = AZ_b__mg;
    packet.MX_b__mG = MX_b__mG;
    packet.MY_b__mG = MY_b__mG;
    packet.MZ_b__mG = MZ_b__mG;
    packet.Vair_b__cmps = Vair_b__cmps;
    packet.AoA_b__mdeg = AoA_b__mdeg;
    packet.CW_b__mdeg = CW_b__mdeg;
    packet.Alt_b__cm = Alt_b__cm;
    packet.Vair_scale = Vair_scale;
    packet.AoA_scale = AoA_scale;
    packet.CW_scale = CW_scale;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EKF_DEBUG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
}

/**
 * @brief Pack a ekf_debug message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param GX_b__mdps  Estimated gyro x bias [deg/s]
 * @param GY_b__mdps  Estimated gyro y bias [deg/s]
 * @param GZ_b__mdps  Estimated gyro z bias [deg/s]
 * @param AX_b__mg  Estimated ax bias [mg]
 * @param AY_b__mg  Estimated ay bias [mg]
 * @param AZ_b__mg  Estimated az bias [mg]
 * @param MX_b__mG  Estimated mx bias [mG]
 * @param MY_b__mG  Estimated my bias [mG]
 * @param MZ_b__mG  Estimated mz bias [mG]
 * @param Vair_b__cmps  Estimated Vair bias [mg]
 * @param AoA_b__mdeg  Estimated aoa bias [mg]
 * @param CW_b__mdeg  Estimated cw bias [mg]
 * @param Alt_b__cm  Estimated alt bias [mg]
 * @param Vair_scale  Estimated Vair scale [mg]
 * @param AoA_scale  Estimated aoa scale [mg]
 * @param CW_scale  Estimated cw scale [mg]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ekf_debug_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,int16_t GX_b__mdps,int16_t GY_b__mdps,int16_t GZ_b__mdps,int16_t AX_b__mg,int16_t AY_b__mg,int16_t AZ_b__mg,int16_t MX_b__mG,int16_t MY_b__mG,int16_t MZ_b__mG,int16_t Vair_b__cmps,int16_t AoA_b__mdeg,int16_t CW_b__mdeg,int16_t Alt_b__cm,int16_t Vair_scale,int16_t AoA_scale,int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, GX_b__mdps);
    _mav_put_int16_t(buf, 6, GY_b__mdps);
    _mav_put_int16_t(buf, 8, GZ_b__mdps);
    _mav_put_int16_t(buf, 10, AX_b__mg);
    _mav_put_int16_t(buf, 12, AY_b__mg);
    _mav_put_int16_t(buf, 14, AZ_b__mg);
    _mav_put_int16_t(buf, 16, MX_b__mG);
    _mav_put_int16_t(buf, 18, MY_b__mG);
    _mav_put_int16_t(buf, 20, MZ_b__mG);
    _mav_put_int16_t(buf, 22, Vair_b__cmps);
    _mav_put_int16_t(buf, 24, AoA_b__mdeg);
    _mav_put_int16_t(buf, 26, CW_b__mdeg);
    _mav_put_int16_t(buf, 28, Alt_b__cm);
    _mav_put_int16_t(buf, 30, Vair_scale);
    _mav_put_int16_t(buf, 32, AoA_scale);
    _mav_put_int16_t(buf, 34, CW_scale);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#else
    mavlink_ekf_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.GX_b__mdps = GX_b__mdps;
    packet.GY_b__mdps = GY_b__mdps;
    packet.GZ_b__mdps = GZ_b__mdps;
    packet.AX_b__mg = AX_b__mg;
    packet.AY_b__mg = AY_b__mg;
    packet.AZ_b__mg = AZ_b__mg;
    packet.MX_b__mG = MX_b__mG;
    packet.MY_b__mG = MY_b__mG;
    packet.MZ_b__mG = MZ_b__mG;
    packet.Vair_b__cmps = Vair_b__cmps;
    packet.AoA_b__mdeg = AoA_b__mdeg;
    packet.CW_b__mdeg = CW_b__mdeg;
    packet.Alt_b__cm = Alt_b__cm;
    packet.Vair_scale = Vair_scale;
    packet.AoA_scale = AoA_scale;
    packet.CW_scale = CW_scale;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EKF_DEBUG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
}

/**
 * @brief Encode a ekf_debug struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ekf_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_debug_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ekf_debug_t* ekf_debug)
{
    return mavlink_msg_ekf_debug_pack(system_id, component_id, msg, ekf_debug->time_boot_ms, ekf_debug->GX_b__mdps, ekf_debug->GY_b__mdps, ekf_debug->GZ_b__mdps, ekf_debug->AX_b__mg, ekf_debug->AY_b__mg, ekf_debug->AZ_b__mg, ekf_debug->MX_b__mG, ekf_debug->MY_b__mG, ekf_debug->MZ_b__mG, ekf_debug->Vair_b__cmps, ekf_debug->AoA_b__mdeg, ekf_debug->CW_b__mdeg, ekf_debug->Alt_b__cm, ekf_debug->Vair_scale, ekf_debug->AoA_scale, ekf_debug->CW_scale);
}

/**
 * @brief Encode a ekf_debug struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ekf_debug C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ekf_debug_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ekf_debug_t* ekf_debug)
{
    return mavlink_msg_ekf_debug_pack_chan(system_id, component_id, chan, msg, ekf_debug->time_boot_ms, ekf_debug->GX_b__mdps, ekf_debug->GY_b__mdps, ekf_debug->GZ_b__mdps, ekf_debug->AX_b__mg, ekf_debug->AY_b__mg, ekf_debug->AZ_b__mg, ekf_debug->MX_b__mG, ekf_debug->MY_b__mG, ekf_debug->MZ_b__mG, ekf_debug->Vair_b__cmps, ekf_debug->AoA_b__mdeg, ekf_debug->CW_b__mdeg, ekf_debug->Alt_b__cm, ekf_debug->Vair_scale, ekf_debug->AoA_scale, ekf_debug->CW_scale);
}

/**
 * @brief Send a ekf_debug message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param GX_b__mdps  Estimated gyro x bias [deg/s]
 * @param GY_b__mdps  Estimated gyro y bias [deg/s]
 * @param GZ_b__mdps  Estimated gyro z bias [deg/s]
 * @param AX_b__mg  Estimated ax bias [mg]
 * @param AY_b__mg  Estimated ay bias [mg]
 * @param AZ_b__mg  Estimated az bias [mg]
 * @param MX_b__mG  Estimated mx bias [mG]
 * @param MY_b__mG  Estimated my bias [mG]
 * @param MZ_b__mG  Estimated mz bias [mG]
 * @param Vair_b__cmps  Estimated Vair bias [mg]
 * @param AoA_b__mdeg  Estimated aoa bias [mg]
 * @param CW_b__mdeg  Estimated cw bias [mg]
 * @param Alt_b__cm  Estimated alt bias [mg]
 * @param Vair_scale  Estimated Vair scale [mg]
 * @param AoA_scale  Estimated aoa scale [mg]
 * @param CW_scale  Estimated cw scale [mg]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ekf_debug_send(mavlink_channel_t chan, uint32_t time_boot_ms, int16_t GX_b__mdps, int16_t GY_b__mdps, int16_t GZ_b__mdps, int16_t AX_b__mg, int16_t AY_b__mg, int16_t AZ_b__mg, int16_t MX_b__mG, int16_t MY_b__mG, int16_t MZ_b__mG, int16_t Vair_b__cmps, int16_t AoA_b__mdeg, int16_t CW_b__mdeg, int16_t Alt_b__cm, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EKF_DEBUG_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, GX_b__mdps);
    _mav_put_int16_t(buf, 6, GY_b__mdps);
    _mav_put_int16_t(buf, 8, GZ_b__mdps);
    _mav_put_int16_t(buf, 10, AX_b__mg);
    _mav_put_int16_t(buf, 12, AY_b__mg);
    _mav_put_int16_t(buf, 14, AZ_b__mg);
    _mav_put_int16_t(buf, 16, MX_b__mG);
    _mav_put_int16_t(buf, 18, MY_b__mG);
    _mav_put_int16_t(buf, 20, MZ_b__mG);
    _mav_put_int16_t(buf, 22, Vair_b__cmps);
    _mav_put_int16_t(buf, 24, AoA_b__mdeg);
    _mav_put_int16_t(buf, 26, CW_b__mdeg);
    _mav_put_int16_t(buf, 28, Alt_b__cm);
    _mav_put_int16_t(buf, 30, Vair_scale);
    _mav_put_int16_t(buf, 32, AoA_scale);
    _mav_put_int16_t(buf, 34, CW_scale);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    mavlink_ekf_debug_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.GX_b__mdps = GX_b__mdps;
    packet.GY_b__mdps = GY_b__mdps;
    packet.GZ_b__mdps = GZ_b__mdps;
    packet.AX_b__mg = AX_b__mg;
    packet.AY_b__mg = AY_b__mg;
    packet.AZ_b__mg = AZ_b__mg;
    packet.MX_b__mG = MX_b__mG;
    packet.MY_b__mG = MY_b__mG;
    packet.MZ_b__mG = MZ_b__mG;
    packet.Vair_b__cmps = Vair_b__cmps;
    packet.AoA_b__mdeg = AoA_b__mdeg;
    packet.CW_b__mdeg = CW_b__mdeg;
    packet.Alt_b__cm = Alt_b__cm;
    packet.Vair_scale = Vair_scale;
    packet.AoA_scale = AoA_scale;
    packet.CW_scale = CW_scale;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)&packet, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#endif
}

/**
 * @brief Send a ekf_debug message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ekf_debug_send_struct(mavlink_channel_t chan, const mavlink_ekf_debug_t* ekf_debug)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ekf_debug_send(chan, ekf_debug->time_boot_ms, ekf_debug->GX_b__mdps, ekf_debug->GY_b__mdps, ekf_debug->GZ_b__mdps, ekf_debug->AX_b__mg, ekf_debug->AY_b__mg, ekf_debug->AZ_b__mg, ekf_debug->MX_b__mG, ekf_debug->MY_b__mG, ekf_debug->MZ_b__mG, ekf_debug->Vair_b__cmps, ekf_debug->AoA_b__mdeg, ekf_debug->CW_b__mdeg, ekf_debug->Alt_b__cm, ekf_debug->Vair_scale, ekf_debug->AoA_scale, ekf_debug->CW_scale);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)ekf_debug, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#endif
}

#if MAVLINK_MSG_ID_EKF_DEBUG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ekf_debug_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int16_t GX_b__mdps, int16_t GY_b__mdps, int16_t GZ_b__mdps, int16_t AX_b__mg, int16_t AY_b__mg, int16_t AZ_b__mg, int16_t MX_b__mG, int16_t MY_b__mG, int16_t MZ_b__mG, int16_t Vair_b__cmps, int16_t AoA_b__mdeg, int16_t CW_b__mdeg, int16_t Alt_b__cm, int16_t Vair_scale, int16_t AoA_scale, int16_t CW_scale)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int16_t(buf, 4, GX_b__mdps);
    _mav_put_int16_t(buf, 6, GY_b__mdps);
    _mav_put_int16_t(buf, 8, GZ_b__mdps);
    _mav_put_int16_t(buf, 10, AX_b__mg);
    _mav_put_int16_t(buf, 12, AY_b__mg);
    _mav_put_int16_t(buf, 14, AZ_b__mg);
    _mav_put_int16_t(buf, 16, MX_b__mG);
    _mav_put_int16_t(buf, 18, MY_b__mG);
    _mav_put_int16_t(buf, 20, MZ_b__mG);
    _mav_put_int16_t(buf, 22, Vair_b__cmps);
    _mav_put_int16_t(buf, 24, AoA_b__mdeg);
    _mav_put_int16_t(buf, 26, CW_b__mdeg);
    _mav_put_int16_t(buf, 28, Alt_b__cm);
    _mav_put_int16_t(buf, 30, Vair_scale);
    _mav_put_int16_t(buf, 32, AoA_scale);
    _mav_put_int16_t(buf, 34, CW_scale);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, buf, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#else
    mavlink_ekf_debug_t *packet = (mavlink_ekf_debug_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->GX_b__mdps = GX_b__mdps;
    packet->GY_b__mdps = GY_b__mdps;
    packet->GZ_b__mdps = GZ_b__mdps;
    packet->AX_b__mg = AX_b__mg;
    packet->AY_b__mg = AY_b__mg;
    packet->AZ_b__mg = AZ_b__mg;
    packet->MX_b__mG = MX_b__mG;
    packet->MY_b__mG = MY_b__mG;
    packet->MZ_b__mG = MZ_b__mG;
    packet->Vair_b__cmps = Vair_b__cmps;
    packet->AoA_b__mdeg = AoA_b__mdeg;
    packet->CW_b__mdeg = CW_b__mdeg;
    packet->Alt_b__cm = Alt_b__cm;
    packet->Vair_scale = Vair_scale;
    packet->AoA_scale = AoA_scale;
    packet->CW_scale = CW_scale;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EKF_DEBUG, (const char *)packet, MAVLINK_MSG_ID_EKF_DEBUG_MIN_LEN, MAVLINK_MSG_ID_EKF_DEBUG_LEN, MAVLINK_MSG_ID_EKF_DEBUG_CRC);
#endif
}
#endif

#endif

// MESSAGE EKF_DEBUG UNPACKING


/**
 * @brief Get field time_boot_ms from ekf_debug message
 *
 * @return  Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_ekf_debug_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field GX_b__mdps from ekf_debug message
 *
 * @return  Estimated gyro x bias [deg/s]
 */
static inline int16_t mavlink_msg_ekf_debug_get_GX_b__mdps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field GY_b__mdps from ekf_debug message
 *
 * @return  Estimated gyro y bias [deg/s]
 */
static inline int16_t mavlink_msg_ekf_debug_get_GY_b__mdps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field GZ_b__mdps from ekf_debug message
 *
 * @return  Estimated gyro z bias [deg/s]
 */
static inline int16_t mavlink_msg_ekf_debug_get_GZ_b__mdps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field AX_b__mg from ekf_debug message
 *
 * @return  Estimated ax bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AX_b__mg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field AY_b__mg from ekf_debug message
 *
 * @return  Estimated ay bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AY_b__mg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field AZ_b__mg from ekf_debug message
 *
 * @return  Estimated az bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AZ_b__mg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field MX_b__mG from ekf_debug message
 *
 * @return  Estimated mx bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MX_b__mG(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field MY_b__mG from ekf_debug message
 *
 * @return  Estimated my bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MY_b__mG(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field MZ_b__mG from ekf_debug message
 *
 * @return  Estimated mz bias [mG]
 */
static inline int16_t mavlink_msg_ekf_debug_get_MZ_b__mG(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field Vair_b__cmps from ekf_debug message
 *
 * @return  Estimated Vair bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Vair_b__cmps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field AoA_b__mdeg from ekf_debug message
 *
 * @return  Estimated aoa bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AoA_b__mdeg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field CW_b__mdeg from ekf_debug message
 *
 * @return  Estimated cw bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_CW_b__mdeg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field Alt_b__cm from ekf_debug message
 *
 * @return  Estimated alt bias [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Alt_b__cm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field Vair_scale from ekf_debug message
 *
 * @return  Estimated Vair scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_Vair_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field AoA_scale from ekf_debug message
 *
 * @return  Estimated aoa scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_AoA_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field CW_scale from ekf_debug message
 *
 * @return  Estimated cw scale [mg]
 */
static inline int16_t mavlink_msg_ekf_debug_get_CW_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Decode a ekf_debug message into a struct
 *
 * @param msg The message to decode
 * @param ekf_debug C-struct to decode the message contents into
 */
static inline void mavlink_msg_ekf_debug_decode(const mavlink_message_t* msg, mavlink_ekf_debug_t* ekf_debug)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ekf_debug->time_boot_ms = mavlink_msg_ekf_debug_get_time_boot_ms(msg);
    ekf_debug->GX_b__mdps = mavlink_msg_ekf_debug_get_GX_b__mdps(msg);
    ekf_debug->GY_b__mdps = mavlink_msg_ekf_debug_get_GY_b__mdps(msg);
    ekf_debug->GZ_b__mdps = mavlink_msg_ekf_debug_get_GZ_b__mdps(msg);
    ekf_debug->AX_b__mg = mavlink_msg_ekf_debug_get_AX_b__mg(msg);
    ekf_debug->AY_b__mg = mavlink_msg_ekf_debug_get_AY_b__mg(msg);
    ekf_debug->AZ_b__mg = mavlink_msg_ekf_debug_get_AZ_b__mg(msg);
    ekf_debug->MX_b__mG = mavlink_msg_ekf_debug_get_MX_b__mG(msg);
    ekf_debug->MY_b__mG = mavlink_msg_ekf_debug_get_MY_b__mG(msg);
    ekf_debug->MZ_b__mG = mavlink_msg_ekf_debug_get_MZ_b__mG(msg);
    ekf_debug->Vair_b__cmps = mavlink_msg_ekf_debug_get_Vair_b__cmps(msg);
    ekf_debug->AoA_b__mdeg = mavlink_msg_ekf_debug_get_AoA_b__mdeg(msg);
    ekf_debug->CW_b__mdeg = mavlink_msg_ekf_debug_get_CW_b__mdeg(msg);
    ekf_debug->Alt_b__cm = mavlink_msg_ekf_debug_get_Alt_b__cm(msg);
    ekf_debug->Vair_scale = mavlink_msg_ekf_debug_get_Vair_scale(msg);
    ekf_debug->AoA_scale = mavlink_msg_ekf_debug_get_AoA_scale(msg);
    ekf_debug->CW_scale = mavlink_msg_ekf_debug_get_CW_scale(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EKF_DEBUG_LEN? msg->len : MAVLINK_MSG_ID_EKF_DEBUG_LEN;
        memset(ekf_debug, 0, MAVLINK_MSG_ID_EKF_DEBUG_LEN);
    memcpy(ekf_debug, _MAV_PAYLOAD(msg), len);
#endif
}
