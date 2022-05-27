#pragma once
// MESSAGE ADC_ARDUINO_8CH PACKING

#define MAVLINK_MSG_ID_ADC_ARDUINO_8CH 228


typedef struct __mavlink_adc_arduino_8ch_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_Unit_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float CH_1_UNIT_V; /*<  ADC Channel 1 [V]*/
 float CH_2_UNIT_V; /*<  ADC Channel 2 [V]*/
 float CH_3_UNIT_V; /*<  ADC Channel 3 [V]*/
 float CH_4_UNIT_V; /*<  ADC Channel 4 [V]*/
 float CH_5_UNIT_V; /*<  ADC Channel 5 [V]*/
 float CH_6_UNIT_V; /*<  ADC Channel 6 [V]*/
 float CH_7_UNIT_V; /*<  ADC Channel 7 [V]*/
 float CH_8_UNIT_V; /*<  ADC Channel 8 [V]*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
 uint16_t RPM_UNIT_1_d_s; /*<  RPM counter [rpm]*/
} mavlink_adc_arduino_8ch_t;

#define MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN 48
#define MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN 48
#define MAVLINK_MSG_ID_228_LEN 48
#define MAVLINK_MSG_ID_228_MIN_LEN 48

#define MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC 223
#define MAVLINK_MSG_ID_228_CRC 223



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ADC_ARDUINO_8CH { \
    228, \
    "ADC_ARDUINO_8CH", \
    13, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_adc_arduino_8ch_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_adc_arduino_8ch_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_adc_arduino_8ch_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_adc_arduino_8ch_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_adc_arduino_8ch_t, CH_1_UNIT_V) }, \
         { "CH_2_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_adc_arduino_8ch_t, CH_2_UNIT_V) }, \
         { "CH_3_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_adc_arduino_8ch_t, CH_3_UNIT_V) }, \
         { "CH_4_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_adc_arduino_8ch_t, CH_4_UNIT_V) }, \
         { "CH_5_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_adc_arduino_8ch_t, CH_5_UNIT_V) }, \
         { "CH_6_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_adc_arduino_8ch_t, CH_6_UNIT_V) }, \
         { "CH_7_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_adc_arduino_8ch_t, CH_7_UNIT_V) }, \
         { "CH_8_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_adc_arduino_8ch_t, CH_8_UNIT_V) }, \
         { "RPM_UNIT_1_d_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_adc_arduino_8ch_t, RPM_UNIT_1_d_s) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ADC_ARDUINO_8CH { \
    "ADC_ARDUINO_8CH", \
    13, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_adc_arduino_8ch_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_Unit_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_adc_arduino_8ch_t, Sync_data_Unit_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_adc_arduino_8ch_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_adc_arduino_8ch_t, Recorded_time_UNIT_100us) }, \
         { "CH_1_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_adc_arduino_8ch_t, CH_1_UNIT_V) }, \
         { "CH_2_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_adc_arduino_8ch_t, CH_2_UNIT_V) }, \
         { "CH_3_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_adc_arduino_8ch_t, CH_3_UNIT_V) }, \
         { "CH_4_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_adc_arduino_8ch_t, CH_4_UNIT_V) }, \
         { "CH_5_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_adc_arduino_8ch_t, CH_5_UNIT_V) }, \
         { "CH_6_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_adc_arduino_8ch_t, CH_6_UNIT_V) }, \
         { "CH_7_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_adc_arduino_8ch_t, CH_7_UNIT_V) }, \
         { "CH_8_UNIT_V", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_adc_arduino_8ch_t, CH_8_UNIT_V) }, \
         { "RPM_UNIT_1_d_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_adc_arduino_8ch_t, RPM_UNIT_1_d_s) }, \
         } \
}
#endif

/**
 * @brief Pack a adc_arduino_8ch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_V  ADC Channel 1 [V]
 * @param CH_2_UNIT_V  ADC Channel 2 [V]
 * @param CH_3_UNIT_V  ADC Channel 3 [V]
 * @param CH_4_UNIT_V  ADC Channel 4 [V]
 * @param CH_5_UNIT_V  ADC Channel 5 [V]
 * @param CH_6_UNIT_V  ADC Channel 6 [V]
 * @param CH_7_UNIT_V  ADC Channel 7 [V]
 * @param CH_8_UNIT_V  ADC Channel 8 [V]
 * @param RPM_UNIT_1_d_s  RPM counter [rpm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_adc_arduino_8ch_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float CH_1_UNIT_V, float CH_2_UNIT_V, float CH_3_UNIT_V, float CH_4_UNIT_V, float CH_5_UNIT_V, float CH_6_UNIT_V, float CH_7_UNIT_V, float CH_8_UNIT_V, uint16_t RPM_UNIT_1_d_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, CH_1_UNIT_V);
    _mav_put_float(buf, 16, CH_2_UNIT_V);
    _mav_put_float(buf, 20, CH_3_UNIT_V);
    _mav_put_float(buf, 24, CH_4_UNIT_V);
    _mav_put_float(buf, 28, CH_5_UNIT_V);
    _mav_put_float(buf, 32, CH_6_UNIT_V);
    _mav_put_float(buf, 36, CH_7_UNIT_V);
    _mav_put_float(buf, 40, CH_8_UNIT_V);
    _mav_put_int16_t(buf, 44, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 46, RPM_UNIT_1_d_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN);
#else
    mavlink_adc_arduino_8ch_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.CH_1_UNIT_V = CH_1_UNIT_V;
    packet.CH_2_UNIT_V = CH_2_UNIT_V;
    packet.CH_3_UNIT_V = CH_3_UNIT_V;
    packet.CH_4_UNIT_V = CH_4_UNIT_V;
    packet.CH_5_UNIT_V = CH_5_UNIT_V;
    packet.CH_6_UNIT_V = CH_6_UNIT_V;
    packet.CH_7_UNIT_V = CH_7_UNIT_V;
    packet.CH_8_UNIT_V = CH_8_UNIT_V;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_s = RPM_UNIT_1_d_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ADC_ARDUINO_8CH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
}

/**
 * @brief Pack a adc_arduino_8ch message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_V  ADC Channel 1 [V]
 * @param CH_2_UNIT_V  ADC Channel 2 [V]
 * @param CH_3_UNIT_V  ADC Channel 3 [V]
 * @param CH_4_UNIT_V  ADC Channel 4 [V]
 * @param CH_5_UNIT_V  ADC Channel 5 [V]
 * @param CH_6_UNIT_V  ADC Channel 6 [V]
 * @param CH_7_UNIT_V  ADC Channel 7 [V]
 * @param CH_8_UNIT_V  ADC Channel 8 [V]
 * @param RPM_UNIT_1_d_s  RPM counter [rpm]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_adc_arduino_8ch_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_Unit_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,float CH_1_UNIT_V,float CH_2_UNIT_V,float CH_3_UNIT_V,float CH_4_UNIT_V,float CH_5_UNIT_V,float CH_6_UNIT_V,float CH_7_UNIT_V,float CH_8_UNIT_V,uint16_t RPM_UNIT_1_d_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, CH_1_UNIT_V);
    _mav_put_float(buf, 16, CH_2_UNIT_V);
    _mav_put_float(buf, 20, CH_3_UNIT_V);
    _mav_put_float(buf, 24, CH_4_UNIT_V);
    _mav_put_float(buf, 28, CH_5_UNIT_V);
    _mav_put_float(buf, 32, CH_6_UNIT_V);
    _mav_put_float(buf, 36, CH_7_UNIT_V);
    _mav_put_float(buf, 40, CH_8_UNIT_V);
    _mav_put_int16_t(buf, 44, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 46, RPM_UNIT_1_d_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN);
#else
    mavlink_adc_arduino_8ch_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.CH_1_UNIT_V = CH_1_UNIT_V;
    packet.CH_2_UNIT_V = CH_2_UNIT_V;
    packet.CH_3_UNIT_V = CH_3_UNIT_V;
    packet.CH_4_UNIT_V = CH_4_UNIT_V;
    packet.CH_5_UNIT_V = CH_5_UNIT_V;
    packet.CH_6_UNIT_V = CH_6_UNIT_V;
    packet.CH_7_UNIT_V = CH_7_UNIT_V;
    packet.CH_8_UNIT_V = CH_8_UNIT_V;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_s = RPM_UNIT_1_d_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ADC_ARDUINO_8CH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
}

/**
 * @brief Encode a adc_arduino_8ch struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param adc_arduino_8ch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_adc_arduino_8ch_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_adc_arduino_8ch_t* adc_arduino_8ch)
{
    return mavlink_msg_adc_arduino_8ch_pack(system_id, component_id, msg, adc_arduino_8ch->Sensor_time_UNIT_100us, adc_arduino_8ch->Sync_data_Unit_variable, adc_arduino_8ch->Sensor_processing_time_UNIT_us, adc_arduino_8ch->Recorded_time_UNIT_100us, adc_arduino_8ch->CH_1_UNIT_V, adc_arduino_8ch->CH_2_UNIT_V, adc_arduino_8ch->CH_3_UNIT_V, adc_arduino_8ch->CH_4_UNIT_V, adc_arduino_8ch->CH_5_UNIT_V, adc_arduino_8ch->CH_6_UNIT_V, adc_arduino_8ch->CH_7_UNIT_V, adc_arduino_8ch->CH_8_UNIT_V, adc_arduino_8ch->RPM_UNIT_1_d_s);
}

/**
 * @brief Encode a adc_arduino_8ch struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param adc_arduino_8ch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_adc_arduino_8ch_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_adc_arduino_8ch_t* adc_arduino_8ch)
{
    return mavlink_msg_adc_arduino_8ch_pack_chan(system_id, component_id, chan, msg, adc_arduino_8ch->Sensor_time_UNIT_100us, adc_arduino_8ch->Sync_data_Unit_variable, adc_arduino_8ch->Sensor_processing_time_UNIT_us, adc_arduino_8ch->Recorded_time_UNIT_100us, adc_arduino_8ch->CH_1_UNIT_V, adc_arduino_8ch->CH_2_UNIT_V, adc_arduino_8ch->CH_3_UNIT_V, adc_arduino_8ch->CH_4_UNIT_V, adc_arduino_8ch->CH_5_UNIT_V, adc_arduino_8ch->CH_6_UNIT_V, adc_arduino_8ch->CH_7_UNIT_V, adc_arduino_8ch->CH_8_UNIT_V, adc_arduino_8ch->RPM_UNIT_1_d_s);
}

/**
 * @brief Send a adc_arduino_8ch message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_Unit_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param CH_1_UNIT_V  ADC Channel 1 [V]
 * @param CH_2_UNIT_V  ADC Channel 2 [V]
 * @param CH_3_UNIT_V  ADC Channel 3 [V]
 * @param CH_4_UNIT_V  ADC Channel 4 [V]
 * @param CH_5_UNIT_V  ADC Channel 5 [V]
 * @param CH_6_UNIT_V  ADC Channel 6 [V]
 * @param CH_7_UNIT_V  ADC Channel 7 [V]
 * @param CH_8_UNIT_V  ADC Channel 8 [V]
 * @param RPM_UNIT_1_d_s  RPM counter [rpm]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_adc_arduino_8ch_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float CH_1_UNIT_V, float CH_2_UNIT_V, float CH_3_UNIT_V, float CH_4_UNIT_V, float CH_5_UNIT_V, float CH_6_UNIT_V, float CH_7_UNIT_V, float CH_8_UNIT_V, uint16_t RPM_UNIT_1_d_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, CH_1_UNIT_V);
    _mav_put_float(buf, 16, CH_2_UNIT_V);
    _mav_put_float(buf, 20, CH_3_UNIT_V);
    _mav_put_float(buf, 24, CH_4_UNIT_V);
    _mav_put_float(buf, 28, CH_5_UNIT_V);
    _mav_put_float(buf, 32, CH_6_UNIT_V);
    _mav_put_float(buf, 36, CH_7_UNIT_V);
    _mav_put_float(buf, 40, CH_8_UNIT_V);
    _mav_put_int16_t(buf, 44, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 46, RPM_UNIT_1_d_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH, buf, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
#else
    mavlink_adc_arduino_8ch_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.CH_1_UNIT_V = CH_1_UNIT_V;
    packet.CH_2_UNIT_V = CH_2_UNIT_V;
    packet.CH_3_UNIT_V = CH_3_UNIT_V;
    packet.CH_4_UNIT_V = CH_4_UNIT_V;
    packet.CH_5_UNIT_V = CH_5_UNIT_V;
    packet.CH_6_UNIT_V = CH_6_UNIT_V;
    packet.CH_7_UNIT_V = CH_7_UNIT_V;
    packet.CH_8_UNIT_V = CH_8_UNIT_V;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet.RPM_UNIT_1_d_s = RPM_UNIT_1_d_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH, (const char *)&packet, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
#endif
}

/**
 * @brief Send a adc_arduino_8ch message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_adc_arduino_8ch_send_struct(mavlink_channel_t chan, const mavlink_adc_arduino_8ch_t* adc_arduino_8ch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_adc_arduino_8ch_send(chan, adc_arduino_8ch->Sensor_time_UNIT_100us, adc_arduino_8ch->Sync_data_Unit_variable, adc_arduino_8ch->Sensor_processing_time_UNIT_us, adc_arduino_8ch->Recorded_time_UNIT_100us, adc_arduino_8ch->CH_1_UNIT_V, adc_arduino_8ch->CH_2_UNIT_V, adc_arduino_8ch->CH_3_UNIT_V, adc_arduino_8ch->CH_4_UNIT_V, adc_arduino_8ch->CH_5_UNIT_V, adc_arduino_8ch->CH_6_UNIT_V, adc_arduino_8ch->CH_7_UNIT_V, adc_arduino_8ch->CH_8_UNIT_V, adc_arduino_8ch->RPM_UNIT_1_d_s);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH, (const char *)adc_arduino_8ch, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
#endif
}

#if MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_adc_arduino_8ch_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_Unit_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float CH_1_UNIT_V, float CH_2_UNIT_V, float CH_3_UNIT_V, float CH_4_UNIT_V, float CH_5_UNIT_V, float CH_6_UNIT_V, float CH_7_UNIT_V, float CH_8_UNIT_V, uint16_t RPM_UNIT_1_d_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_Unit_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, CH_1_UNIT_V);
    _mav_put_float(buf, 16, CH_2_UNIT_V);
    _mav_put_float(buf, 20, CH_3_UNIT_V);
    _mav_put_float(buf, 24, CH_4_UNIT_V);
    _mav_put_float(buf, 28, CH_5_UNIT_V);
    _mav_put_float(buf, 32, CH_6_UNIT_V);
    _mav_put_float(buf, 36, CH_7_UNIT_V);
    _mav_put_float(buf, 40, CH_8_UNIT_V);
    _mav_put_int16_t(buf, 44, Sensor_processing_time_UNIT_us);
    _mav_put_uint16_t(buf, 46, RPM_UNIT_1_d_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH, buf, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
#else
    mavlink_adc_arduino_8ch_t *packet = (mavlink_adc_arduino_8ch_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_Unit_variable = Sync_data_Unit_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->CH_1_UNIT_V = CH_1_UNIT_V;
    packet->CH_2_UNIT_V = CH_2_UNIT_V;
    packet->CH_3_UNIT_V = CH_3_UNIT_V;
    packet->CH_4_UNIT_V = CH_4_UNIT_V;
    packet->CH_5_UNIT_V = CH_5_UNIT_V;
    packet->CH_6_UNIT_V = CH_6_UNIT_V;
    packet->CH_7_UNIT_V = CH_7_UNIT_V;
    packet->CH_8_UNIT_V = CH_8_UNIT_V;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;
    packet->RPM_UNIT_1_d_s = RPM_UNIT_1_d_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ADC_ARDUINO_8CH, (const char *)packet, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_MIN_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_CRC);
#endif
}
#endif

#endif

// MESSAGE ADC_ARDUINO_8CH UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from adc_arduino_8ch message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_adc_arduino_8ch_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_Unit_variable from adc_arduino_8ch message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_adc_arduino_8ch_get_Sync_data_Unit_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from adc_arduino_8ch message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_adc_arduino_8ch_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from adc_arduino_8ch message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_adc_arduino_8ch_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field CH_1_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 1 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_1_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field CH_2_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 2 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_2_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field CH_3_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 3 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_3_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field CH_4_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 4 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_4_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field CH_5_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 5 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_5_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field CH_6_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 6 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_6_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field CH_7_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 7 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_7_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field CH_8_UNIT_V from adc_arduino_8ch message
 *
 * @return  ADC Channel 8 [V]
 */
static inline float mavlink_msg_adc_arduino_8ch_get_CH_8_UNIT_V(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field RPM_UNIT_1_d_s from adc_arduino_8ch message
 *
 * @return  RPM counter [rpm]
 */
static inline uint16_t mavlink_msg_adc_arduino_8ch_get_RPM_UNIT_1_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Decode a adc_arduino_8ch message into a struct
 *
 * @param msg The message to decode
 * @param adc_arduino_8ch C-struct to decode the message contents into
 */
static inline void mavlink_msg_adc_arduino_8ch_decode(const mavlink_message_t* msg, mavlink_adc_arduino_8ch_t* adc_arduino_8ch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    adc_arduino_8ch->Sensor_time_UNIT_100us = mavlink_msg_adc_arduino_8ch_get_Sensor_time_UNIT_100us(msg);
    adc_arduino_8ch->Sync_data_Unit_variable = mavlink_msg_adc_arduino_8ch_get_Sync_data_Unit_variable(msg);
    adc_arduino_8ch->Recorded_time_UNIT_100us = mavlink_msg_adc_arduino_8ch_get_Recorded_time_UNIT_100us(msg);
    adc_arduino_8ch->CH_1_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_1_UNIT_V(msg);
    adc_arduino_8ch->CH_2_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_2_UNIT_V(msg);
    adc_arduino_8ch->CH_3_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_3_UNIT_V(msg);
    adc_arduino_8ch->CH_4_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_4_UNIT_V(msg);
    adc_arduino_8ch->CH_5_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_5_UNIT_V(msg);
    adc_arduino_8ch->CH_6_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_6_UNIT_V(msg);
    adc_arduino_8ch->CH_7_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_7_UNIT_V(msg);
    adc_arduino_8ch->CH_8_UNIT_V = mavlink_msg_adc_arduino_8ch_get_CH_8_UNIT_V(msg);
    adc_arduino_8ch->Sensor_processing_time_UNIT_us = mavlink_msg_adc_arduino_8ch_get_Sensor_processing_time_UNIT_us(msg);
    adc_arduino_8ch->RPM_UNIT_1_d_s = mavlink_msg_adc_arduino_8ch_get_RPM_UNIT_1_d_s(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN? msg->len : MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN;
        memset(adc_arduino_8ch, 0, MAVLINK_MSG_ID_ADC_ARDUINO_8CH_LEN);
    memcpy(adc_arduino_8ch, _MAV_PAYLOAD(msg), len);
#endif
}
