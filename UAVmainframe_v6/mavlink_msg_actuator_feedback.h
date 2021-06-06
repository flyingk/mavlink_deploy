#pragma once
// MESSAGE ACTUATOR_FEEDBACK PACKING

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK 225


typedef struct __mavlink_actuator_feedback_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float Elevator_Unit_deg; /*<  Elevator angle in deg*/
 float Rudder_Unit_deg; /*<  Rudder angle in deg*/
 float Aileron_Unit_deg; /*<  Aileron angle in deg*/
 float Thrust_1_Unit_kg; /*<  Thrust engine 1 in kg*/
 float Aux_1; /*<  Aux channel 2 in deg*/
 float Aux_2; /*<  Aux channel 3 in deg*/
 float d1; /*<  tbd 1*/
 float d2; /*<  tbd 2*/
 float d3; /*<  tbd 3*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
} mavlink_actuator_feedback_t;

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN 50
#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN 50
#define MAVLINK_MSG_ID_225_LEN 50
#define MAVLINK_MSG_ID_225_MIN_LEN 50

#define MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC 37
#define MAVLINK_MSG_ID_225_CRC 37



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_FEEDBACK { \
    225, \
    "ACTUATOR_FEEDBACK", \
    13, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_actuator_feedback_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_actuator_feedback_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_actuator_feedback_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_actuator_feedback_t, Recorded_time_UNIT_100us) }, \
         { "Elevator_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_actuator_feedback_t, Elevator_Unit_deg) }, \
         { "Rudder_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_actuator_feedback_t, Rudder_Unit_deg) }, \
         { "Aileron_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_actuator_feedback_t, Aileron_Unit_deg) }, \
         { "Thrust_1_Unit_kg", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_actuator_feedback_t, Thrust_1_Unit_kg) }, \
         { "Aux_1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_actuator_feedback_t, Aux_1) }, \
         { "Aux_2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_actuator_feedback_t, Aux_2) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_actuator_feedback_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_actuator_feedback_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_actuator_feedback_t, d3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_FEEDBACK { \
    "ACTUATOR_FEEDBACK", \
    13, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_actuator_feedback_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_actuator_feedback_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_actuator_feedback_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_actuator_feedback_t, Recorded_time_UNIT_100us) }, \
         { "Elevator_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_actuator_feedback_t, Elevator_Unit_deg) }, \
         { "Rudder_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_actuator_feedback_t, Rudder_Unit_deg) }, \
         { "Aileron_Unit_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_actuator_feedback_t, Aileron_Unit_deg) }, \
         { "Thrust_1_Unit_kg", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_actuator_feedback_t, Thrust_1_Unit_kg) }, \
         { "Aux_1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_actuator_feedback_t, Aux_1) }, \
         { "Aux_2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_actuator_feedback_t, Aux_2) }, \
         { "d1", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_actuator_feedback_t, d1) }, \
         { "d2", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_actuator_feedback_t, d2) }, \
         { "d3", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_actuator_feedback_t, d3) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Elevator_Unit_deg  Elevator angle in deg
 * @param Rudder_Unit_deg  Rudder angle in deg
 * @param Aileron_Unit_deg  Aileron angle in deg
 * @param Thrust_1_Unit_kg  Thrust engine 1 in kg
 * @param Aux_1  Aux channel 2 in deg
 * @param Aux_2  Aux channel 3 in deg
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Elevator_Unit_deg, float Rudder_Unit_deg, float Aileron_Unit_deg, float Thrust_1_Unit_kg, float Aux_1, float Aux_2, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Elevator_Unit_deg);
    _mav_put_float(buf, 16, Rudder_Unit_deg);
    _mav_put_float(buf, 20, Aileron_Unit_deg);
    _mav_put_float(buf, 24, Thrust_1_Unit_kg);
    _mav_put_float(buf, 28, Aux_1);
    _mav_put_float(buf, 32, Aux_2);
    _mav_put_float(buf, 36, d1);
    _mav_put_float(buf, 40, d2);
    _mav_put_float(buf, 44, d3);
    _mav_put_int16_t(buf, 48, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#else
    mavlink_actuator_feedback_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Elevator_Unit_deg = Elevator_Unit_deg;
    packet.Rudder_Unit_deg = Rudder_Unit_deg;
    packet.Aileron_Unit_deg = Aileron_Unit_deg;
    packet.Thrust_1_Unit_kg = Thrust_1_Unit_kg;
    packet.Aux_1 = Aux_1;
    packet.Aux_2 = Aux_2;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
}

/**
 * @brief Pack a actuator_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Elevator_Unit_deg  Elevator angle in deg
 * @param Rudder_Unit_deg  Rudder angle in deg
 * @param Aileron_Unit_deg  Aileron angle in deg
 * @param Thrust_1_Unit_kg  Thrust engine 1 in kg
 * @param Aux_1  Aux channel 2 in deg
 * @param Aux_2  Aux channel 3 in deg
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,float Elevator_Unit_deg,float Rudder_Unit_deg,float Aileron_Unit_deg,float Thrust_1_Unit_kg,float Aux_1,float Aux_2,float d1,float d2,float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Elevator_Unit_deg);
    _mav_put_float(buf, 16, Rudder_Unit_deg);
    _mav_put_float(buf, 20, Aileron_Unit_deg);
    _mav_put_float(buf, 24, Thrust_1_Unit_kg);
    _mav_put_float(buf, 28, Aux_1);
    _mav_put_float(buf, 32, Aux_2);
    _mav_put_float(buf, 36, d1);
    _mav_put_float(buf, 40, d2);
    _mav_put_float(buf, 44, d3);
    _mav_put_int16_t(buf, 48, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#else
    mavlink_actuator_feedback_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Elevator_Unit_deg = Elevator_Unit_deg;
    packet.Rudder_Unit_deg = Rudder_Unit_deg;
    packet.Aileron_Unit_deg = Aileron_Unit_deg;
    packet.Thrust_1_Unit_kg = Thrust_1_Unit_kg;
    packet.Aux_1 = Aux_1;
    packet.Aux_2 = Aux_2;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
}

/**
 * @brief Encode a actuator_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_feedback_t* actuator_feedback)
{
    return mavlink_msg_actuator_feedback_pack(system_id, component_id, msg, actuator_feedback->Sensor_time_UNIT_100us, actuator_feedback->Sync_data_Unit_variable, actuator_feedback->Sensor_processing_time_UNIT_us, actuator_feedback->Recorded_time_UNIT_100us, actuator_feedback->Elevator_Unit_deg, actuator_feedback->Rudder_Unit_deg, actuator_feedback->Aileron_Unit_deg, actuator_feedback->Thrust_1_Unit_kg, actuator_feedback->Aux_1, actuator_feedback->Aux_2, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
}

/**
 * @brief Encode a actuator_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_feedback_t* actuator_feedback)
{
    return mavlink_msg_actuator_feedback_pack_chan(system_id, component_id, chan, msg, actuator_feedback->Sensor_time_UNIT_100us, actuator_feedback->Sync_data_Unit_variable, actuator_feedback->Sensor_processing_time_UNIT_us, actuator_feedback->Recorded_time_UNIT_100us, actuator_feedback->Elevator_Unit_deg, actuator_feedback->Rudder_Unit_deg, actuator_feedback->Aileron_Unit_deg, actuator_feedback->Thrust_1_Unit_kg, actuator_feedback->Aux_1, actuator_feedback->Aux_2, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
}

/**
 * @brief Send a actuator_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Elevator_Unit_deg  Elevator angle in deg
 * @param Rudder_Unit_deg  Rudder angle in deg
 * @param Aileron_Unit_deg  Aileron angle in deg
 * @param Thrust_1_Unit_kg  Thrust engine 1 in kg
 * @param Aux_1  Aux channel 2 in deg
 * @param Aux_2  Aux channel 3 in deg
 * @param d1  tbd 1
 * @param d2  tbd 2
 * @param d3  tbd 3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_feedback_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Elevator_Unit_deg, float Rudder_Unit_deg, float Aileron_Unit_deg, float Thrust_1_Unit_kg, float Aux_1, float Aux_2, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Elevator_Unit_deg);
    _mav_put_float(buf, 16, Rudder_Unit_deg);
    _mav_put_float(buf, 20, Aileron_Unit_deg);
    _mav_put_float(buf, 24, Thrust_1_Unit_kg);
    _mav_put_float(buf, 28, Aux_1);
    _mav_put_float(buf, 32, Aux_2);
    _mav_put_float(buf, 36, d1);
    _mav_put_float(buf, 40, d2);
    _mav_put_float(buf, 44, d3);
    _mav_put_int16_t(buf, 48, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#else
    mavlink_actuator_feedback_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Elevator_Unit_deg = Elevator_Unit_deg;
    packet.Rudder_Unit_deg = Rudder_Unit_deg;
    packet.Aileron_Unit_deg = Aileron_Unit_deg;
    packet.Thrust_1_Unit_kg = Thrust_1_Unit_kg;
    packet.Aux_1 = Aux_1;
    packet.Aux_2 = Aux_2;
    packet.d1 = d1;
    packet.d2 = d2;
    packet.d3 = d3;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a actuator_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_feedback_send_struct(mavlink_channel_t chan, const mavlink_actuator_feedback_t* actuator_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_feedback_send(chan, actuator_feedback->Sensor_time_UNIT_100us, actuator_feedback->Sync_data_Unit_variable, actuator_feedback->Sensor_processing_time_UNIT_us, actuator_feedback->Recorded_time_UNIT_100us, actuator_feedback->Elevator_Unit_deg, actuator_feedback->Rudder_Unit_deg, actuator_feedback->Aileron_Unit_deg, actuator_feedback->Thrust_1_Unit_kg, actuator_feedback->Aux_1, actuator_feedback->Aux_2, actuator_feedback->d1, actuator_feedback->d2, actuator_feedback->d3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)actuator_feedback, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Elevator_Unit_deg, float Rudder_Unit_deg, float Aileron_Unit_deg, float Thrust_1_Unit_kg, float Aux_1, float Aux_2, float d1, float d2, float d3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Elevator_Unit_deg);
    _mav_put_float(buf, 16, Rudder_Unit_deg);
    _mav_put_float(buf, 20, Aileron_Unit_deg);
    _mav_put_float(buf, 24, Thrust_1_Unit_kg);
    _mav_put_float(buf, 28, Aux_1);
    _mav_put_float(buf, 32, Aux_2);
    _mav_put_float(buf, 36, d1);
    _mav_put_float(buf, 40, d2);
    _mav_put_float(buf, 44, d3);
    _mav_put_int16_t(buf, 48, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, buf, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#else
    mavlink_actuator_feedback_t *packet = (mavlink_actuator_feedback_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Elevator_Unit_deg = Elevator_Unit_deg;
    packet->Rudder_Unit_deg = Rudder_Unit_deg;
    packet->Aileron_Unit_deg = Aileron_Unit_deg;
    packet->Thrust_1_Unit_kg = Thrust_1_Unit_kg;
    packet->Aux_1 = Aux_1;
    packet->Aux_2 = Aux_2;
    packet->d1 = d1;
    packet->d2 = d2;
    packet->d3 = d3;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_FEEDBACK UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from actuator_feedback message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_actuator_feedback_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from actuator_feedback message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_actuator_feedback_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from actuator_feedback message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_actuator_feedback_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from actuator_feedback message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_actuator_feedback_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field Elevator_Unit_deg from actuator_feedback message
 *
 * @return  Elevator angle in deg
 */
static inline float mavlink_msg_actuator_feedback_get_Elevator_Unit_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Rudder_Unit_deg from actuator_feedback message
 *
 * @return  Rudder angle in deg
 */
static inline float mavlink_msg_actuator_feedback_get_Rudder_Unit_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Aileron_Unit_deg from actuator_feedback message
 *
 * @return  Aileron angle in deg
 */
static inline float mavlink_msg_actuator_feedback_get_Aileron_Unit_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Thrust_1_Unit_kg from actuator_feedback message
 *
 * @return  Thrust engine 1 in kg
 */
static inline float mavlink_msg_actuator_feedback_get_Thrust_1_Unit_kg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Aux_1 from actuator_feedback message
 *
 * @return  Aux channel 2 in deg
 */
static inline float mavlink_msg_actuator_feedback_get_Aux_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field Aux_2 from actuator_feedback message
 *
 * @return  Aux channel 3 in deg
 */
static inline float mavlink_msg_actuator_feedback_get_Aux_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field d1 from actuator_feedback message
 *
 * @return  tbd 1
 */
static inline float mavlink_msg_actuator_feedback_get_d1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field d2 from actuator_feedback message
 *
 * @return  tbd 2
 */
static inline float mavlink_msg_actuator_feedback_get_d2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field d3 from actuator_feedback message
 *
 * @return  tbd 3
 */
static inline float mavlink_msg_actuator_feedback_get_d3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a actuator_feedback message into a struct
 *
 * @param msg The message to decode
 * @param actuator_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_feedback_decode(const mavlink_message_t* msg, mavlink_actuator_feedback_t* actuator_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_feedback->Sensor_time_UNIT_100us = mavlink_msg_actuator_feedback_get_Sensor_time_UNIT_100us(msg);
    actuator_feedback->Sync_data_Unit_variable = mavlink_msg_actuator_feedback_get_Sync_data_Unit_variable(msg);
    actuator_feedback->Recorded_time_UNIT_100us = mavlink_msg_actuator_feedback_get_Recorded_time_UNIT_100us(msg);
    actuator_feedback->Elevator_Unit_deg = mavlink_msg_actuator_feedback_get_Elevator_Unit_deg(msg);
    actuator_feedback->Rudder_Unit_deg = mavlink_msg_actuator_feedback_get_Rudder_Unit_deg(msg);
    actuator_feedback->Aileron_Unit_deg = mavlink_msg_actuator_feedback_get_Aileron_Unit_deg(msg);
    actuator_feedback->Thrust_1_Unit_kg = mavlink_msg_actuator_feedback_get_Thrust_1_Unit_kg(msg);
    actuator_feedback->Aux_1 = mavlink_msg_actuator_feedback_get_Aux_1(msg);
    actuator_feedback->Aux_2 = mavlink_msg_actuator_feedback_get_Aux_2(msg);
    actuator_feedback->d1 = mavlink_msg_actuator_feedback_get_d1(msg);
    actuator_feedback->d2 = mavlink_msg_actuator_feedback_get_d2(msg);
    actuator_feedback->d3 = mavlink_msg_actuator_feedback_get_d3(msg);
    actuator_feedback->Sensor_processing_time_UNIT_us = mavlink_msg_actuator_feedback_get_Sensor_processing_time_UNIT_us(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN;
        memset(actuator_feedback, 0, MAVLINK_MSG_ID_ACTUATOR_FEEDBACK_LEN);
    memcpy(actuator_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
