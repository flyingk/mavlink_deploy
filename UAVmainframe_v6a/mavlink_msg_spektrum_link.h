#pragma once
// MESSAGE SPEKTRUM_LINK PACKING

#define MAVLINK_MSG_ID_SPEKTRUM_LINK 194


typedef struct __mavlink_spektrum_link_t {
 uint32_t time_boot_ms; /*<  Timestamp (milliseconds since system boot)*/
 uint16_t Frame_loss; /*<  Lost Frames*/
 uint16_t Fade_main; /*<  Main link loss*/
 uint16_t Fade_sat_1; /*<  Sat 1 link loss*/
 uint16_t Fade_sat_2; /*<  Sat 2 link loss*/
 uint16_t Fade_sat_3; /*<  Sat 3 link loss*/
 uint8_t Holds; /*<  Number of failsave events*/
} mavlink_spektrum_link_t;

#define MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN 15
#define MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN 15
#define MAVLINK_MSG_ID_194_LEN 15
#define MAVLINK_MSG_ID_194_MIN_LEN 15

#define MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC 42
#define MAVLINK_MSG_ID_194_CRC 42



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SPEKTRUM_LINK { \
    194, \
    "SPEKTRUM_LINK", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_spektrum_link_t, time_boot_ms) }, \
         { "Holds", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_spektrum_link_t, Holds) }, \
         { "Frame_loss", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_spektrum_link_t, Frame_loss) }, \
         { "Fade_main", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_spektrum_link_t, Fade_main) }, \
         { "Fade_sat_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_spektrum_link_t, Fade_sat_1) }, \
         { "Fade_sat_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_spektrum_link_t, Fade_sat_2) }, \
         { "Fade_sat_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_spektrum_link_t, Fade_sat_3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SPEKTRUM_LINK { \
    "SPEKTRUM_LINK", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_spektrum_link_t, time_boot_ms) }, \
         { "Holds", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_spektrum_link_t, Holds) }, \
         { "Frame_loss", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_spektrum_link_t, Frame_loss) }, \
         { "Fade_main", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_spektrum_link_t, Fade_main) }, \
         { "Fade_sat_1", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_spektrum_link_t, Fade_sat_1) }, \
         { "Fade_sat_2", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_spektrum_link_t, Fade_sat_2) }, \
         { "Fade_sat_3", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_spektrum_link_t, Fade_sat_3) }, \
         } \
}
#endif

/**
 * @brief Pack a spektrum_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param Holds  Number of failsave events
 * @param Frame_loss  Lost Frames
 * @param Fade_main  Main link loss
 * @param Fade_sat_1  Sat 1 link loss
 * @param Fade_sat_2  Sat 2 link loss
 * @param Fade_sat_3  Sat 3 link loss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_spektrum_link_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t Holds, uint16_t Frame_loss, uint16_t Fade_main, uint16_t Fade_sat_1, uint16_t Fade_sat_2, uint16_t Fade_sat_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, Frame_loss);
    _mav_put_uint16_t(buf, 6, Fade_main);
    _mav_put_uint16_t(buf, 8, Fade_sat_1);
    _mav_put_uint16_t(buf, 10, Fade_sat_2);
    _mav_put_uint16_t(buf, 12, Fade_sat_3);
    _mav_put_uint8_t(buf, 14, Holds);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN);
#else
    mavlink_spektrum_link_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.Frame_loss = Frame_loss;
    packet.Fade_main = Fade_main;
    packet.Fade_sat_1 = Fade_sat_1;
    packet.Fade_sat_2 = Fade_sat_2;
    packet.Fade_sat_3 = Fade_sat_3;
    packet.Holds = Holds;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SPEKTRUM_LINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
}

/**
 * @brief Pack a spektrum_link message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param Holds  Number of failsave events
 * @param Frame_loss  Lost Frames
 * @param Fade_main  Main link loss
 * @param Fade_sat_1  Sat 1 link loss
 * @param Fade_sat_2  Sat 2 link loss
 * @param Fade_sat_3  Sat 3 link loss
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_spektrum_link_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t Holds,uint16_t Frame_loss,uint16_t Fade_main,uint16_t Fade_sat_1,uint16_t Fade_sat_2,uint16_t Fade_sat_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, Frame_loss);
    _mav_put_uint16_t(buf, 6, Fade_main);
    _mav_put_uint16_t(buf, 8, Fade_sat_1);
    _mav_put_uint16_t(buf, 10, Fade_sat_2);
    _mav_put_uint16_t(buf, 12, Fade_sat_3);
    _mav_put_uint8_t(buf, 14, Holds);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN);
#else
    mavlink_spektrum_link_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.Frame_loss = Frame_loss;
    packet.Fade_main = Fade_main;
    packet.Fade_sat_1 = Fade_sat_1;
    packet.Fade_sat_2 = Fade_sat_2;
    packet.Fade_sat_3 = Fade_sat_3;
    packet.Holds = Holds;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SPEKTRUM_LINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
}

/**
 * @brief Encode a spektrum_link struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param spektrum_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_spektrum_link_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_spektrum_link_t* spektrum_link)
{
    return mavlink_msg_spektrum_link_pack(system_id, component_id, msg, spektrum_link->time_boot_ms, spektrum_link->Holds, spektrum_link->Frame_loss, spektrum_link->Fade_main, spektrum_link->Fade_sat_1, spektrum_link->Fade_sat_2, spektrum_link->Fade_sat_3);
}

/**
 * @brief Encode a spektrum_link struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param spektrum_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_spektrum_link_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_spektrum_link_t* spektrum_link)
{
    return mavlink_msg_spektrum_link_pack_chan(system_id, component_id, chan, msg, spektrum_link->time_boot_ms, spektrum_link->Holds, spektrum_link->Frame_loss, spektrum_link->Fade_main, spektrum_link->Fade_sat_1, spektrum_link->Fade_sat_2, spektrum_link->Fade_sat_3);
}

/**
 * @brief Send a spektrum_link message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param Holds  Number of failsave events
 * @param Frame_loss  Lost Frames
 * @param Fade_main  Main link loss
 * @param Fade_sat_1  Sat 1 link loss
 * @param Fade_sat_2  Sat 2 link loss
 * @param Fade_sat_3  Sat 3 link loss
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_spektrum_link_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t Holds, uint16_t Frame_loss, uint16_t Fade_main, uint16_t Fade_sat_1, uint16_t Fade_sat_2, uint16_t Fade_sat_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, Frame_loss);
    _mav_put_uint16_t(buf, 6, Fade_main);
    _mav_put_uint16_t(buf, 8, Fade_sat_1);
    _mav_put_uint16_t(buf, 10, Fade_sat_2);
    _mav_put_uint16_t(buf, 12, Fade_sat_3);
    _mav_put_uint8_t(buf, 14, Holds);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPEKTRUM_LINK, buf, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
#else
    mavlink_spektrum_link_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.Frame_loss = Frame_loss;
    packet.Fade_main = Fade_main;
    packet.Fade_sat_1 = Fade_sat_1;
    packet.Fade_sat_2 = Fade_sat_2;
    packet.Fade_sat_3 = Fade_sat_3;
    packet.Holds = Holds;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPEKTRUM_LINK, (const char *)&packet, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
#endif
}

/**
 * @brief Send a spektrum_link message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_spektrum_link_send_struct(mavlink_channel_t chan, const mavlink_spektrum_link_t* spektrum_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_spektrum_link_send(chan, spektrum_link->time_boot_ms, spektrum_link->Holds, spektrum_link->Frame_loss, spektrum_link->Fade_main, spektrum_link->Fade_sat_1, spektrum_link->Fade_sat_2, spektrum_link->Fade_sat_3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPEKTRUM_LINK, (const char *)spektrum_link, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_spektrum_link_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t Holds, uint16_t Frame_loss, uint16_t Fade_main, uint16_t Fade_sat_1, uint16_t Fade_sat_2, uint16_t Fade_sat_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint16_t(buf, 4, Frame_loss);
    _mav_put_uint16_t(buf, 6, Fade_main);
    _mav_put_uint16_t(buf, 8, Fade_sat_1);
    _mav_put_uint16_t(buf, 10, Fade_sat_2);
    _mav_put_uint16_t(buf, 12, Fade_sat_3);
    _mav_put_uint8_t(buf, 14, Holds);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPEKTRUM_LINK, buf, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
#else
    mavlink_spektrum_link_t *packet = (mavlink_spektrum_link_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->Frame_loss = Frame_loss;
    packet->Fade_main = Fade_main;
    packet->Fade_sat_1 = Fade_sat_1;
    packet->Fade_sat_2 = Fade_sat_2;
    packet->Fade_sat_3 = Fade_sat_3;
    packet->Holds = Holds;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SPEKTRUM_LINK, (const char *)packet, MAVLINK_MSG_ID_SPEKTRUM_LINK_MIN_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN, MAVLINK_MSG_ID_SPEKTRUM_LINK_CRC);
#endif
}
#endif

#endif

// MESSAGE SPEKTRUM_LINK UNPACKING


/**
 * @brief Get field time_boot_ms from spektrum_link message
 *
 * @return  Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_spektrum_link_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Holds from spektrum_link message
 *
 * @return  Number of failsave events
 */
static inline uint8_t mavlink_msg_spektrum_link_get_Holds(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field Frame_loss from spektrum_link message
 *
 * @return  Lost Frames
 */
static inline uint16_t mavlink_msg_spektrum_link_get_Frame_loss(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field Fade_main from spektrum_link message
 *
 * @return  Main link loss
 */
static inline uint16_t mavlink_msg_spektrum_link_get_Fade_main(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field Fade_sat_1 from spektrum_link message
 *
 * @return  Sat 1 link loss
 */
static inline uint16_t mavlink_msg_spektrum_link_get_Fade_sat_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field Fade_sat_2 from spektrum_link message
 *
 * @return  Sat 2 link loss
 */
static inline uint16_t mavlink_msg_spektrum_link_get_Fade_sat_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field Fade_sat_3 from spektrum_link message
 *
 * @return  Sat 3 link loss
 */
static inline uint16_t mavlink_msg_spektrum_link_get_Fade_sat_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Decode a spektrum_link message into a struct
 *
 * @param msg The message to decode
 * @param spektrum_link C-struct to decode the message contents into
 */
static inline void mavlink_msg_spektrum_link_decode(const mavlink_message_t* msg, mavlink_spektrum_link_t* spektrum_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    spektrum_link->time_boot_ms = mavlink_msg_spektrum_link_get_time_boot_ms(msg);
    spektrum_link->Frame_loss = mavlink_msg_spektrum_link_get_Frame_loss(msg);
    spektrum_link->Fade_main = mavlink_msg_spektrum_link_get_Fade_main(msg);
    spektrum_link->Fade_sat_1 = mavlink_msg_spektrum_link_get_Fade_sat_1(msg);
    spektrum_link->Fade_sat_2 = mavlink_msg_spektrum_link_get_Fade_sat_2(msg);
    spektrum_link->Fade_sat_3 = mavlink_msg_spektrum_link_get_Fade_sat_3(msg);
    spektrum_link->Holds = mavlink_msg_spektrum_link_get_Holds(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN? msg->len : MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN;
        memset(spektrum_link, 0, MAVLINK_MSG_ID_SPEKTRUM_LINK_LEN);
    memcpy(spektrum_link, _MAV_PAYLOAD(msg), len);
#endif
}
