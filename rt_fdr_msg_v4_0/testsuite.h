/** @file
 *	@brief MAVLink comm protocol testsuite generated from rt_fdr_msg_v4_0.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef RT_FDR_MSG_V4_0_TESTSUITE_H
#define RT_FDR_MSG_V4_0_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_rt_fdr_msg_v4_0(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_rt_fdr_msg_v4_0(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_euler_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_euler_debug_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0
    };
	mavlink_euler_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.IMU_roll = packet_in.IMU_roll;
        	packet1.IMU_pitch = packet_in.IMU_pitch;
        	packet1.IMU_yaw = packet_in.IMU_yaw;
        	packet1.GBL_roll = packet_in.GBL_roll;
        	packet1.GBL_pitch = packet_in.GBL_pitch;
        	packet1.GBL_yaw = packet_in.GBL_yaw;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_euler_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_euler_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_euler_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.IMU_roll , packet1.IMU_pitch , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_pitch , packet1.GBL_yaw );
	mavlink_msg_euler_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_euler_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.IMU_roll , packet1.IMU_pitch , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_pitch , packet1.GBL_yaw );
	mavlink_msg_euler_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_euler_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_euler_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.IMU_roll , packet1.IMU_pitch , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_pitch , packet1.GBL_yaw );
	mavlink_msg_euler_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_airdata(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_airdata_t packet_in = {
		963497464,45.0,73.0,101.0,129.0
    };
	mavlink_airdata_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.pressure_alt = packet_in.pressure_alt;
        	packet1.airspeed = packet_in.airspeed;
        	packet1.aoa = packet_in.aoa;
        	packet1.sideslip = packet_in.sideslip;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_airdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.pressure_alt , packet1.airspeed , packet1.aoa , packet1.sideslip );
	mavlink_msg_airdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.pressure_alt , packet1.airspeed , packet1.aoa , packet1.sideslip );
	mavlink_msg_airdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_airdata_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.pressure_alt , packet1.airspeed , packet1.aoa , packet1.sideslip );
	mavlink_msg_airdata_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_airdata_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_airdata_debug_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,18275,199
    };
	mavlink_airdata_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.density = packet_in.density;
        	packet1.DP1 = packet_in.DP1;
        	packet1.DP2 = packet_in.DP2;
        	packet1.DP3 = packet_in.DP3;
        	packet1.dynamic_pressure = packet_in.dynamic_pressure;
        	packet1.temperature = packet_in.temperature;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_airdata_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_airdata_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_control_feedback(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_control_feedback_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0
    };
	mavlink_control_feedback_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.elevator = packet_in.elevator;
        	packet1.rudder = packet_in.rudder;
        	packet1.aileron = packet_in.aileron;
        	packet1.ctrl_aux_1 = packet_in.ctrl_aux_1;
        	packet1.ctrl_aux_2 = packet_in.ctrl_aux_2;
        	packet1.ctrl_aux_3 = packet_in.ctrl_aux_3;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_control_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.ctrl_aux_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
	mavlink_msg_control_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.ctrl_aux_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
	mavlink_msg_control_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_control_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.ctrl_aux_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
	mavlink_msg_control_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_propulsion(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_propulsion_t packet_in = {
		963497464,45.0,73.0,101.0,18067,18171
    };
	mavlink_propulsion_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.motor_volt = packet_in.motor_volt;
        	packet1.motor_amp = packet_in.motor_amp;
        	packet1.motor_temp = packet_in.motor_temp;
        	packet1.motor_rpm = packet_in.motor_rpm;
        	packet1.motor_watt = packet_in.motor_watt;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_propulsion_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp );
	mavlink_msg_propulsion_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp );
	mavlink_msg_propulsion_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_propulsion_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp );
	mavlink_msg_propulsion_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_power(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_power_t packet_in = {
		963497464,45.0,73.0,101.0,18067,18171,18275,18379,77,144
    };
	mavlink_power_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Avionics_Volt = packet_in.Avionics_Volt;
        	packet1.Servo_Volt = packet_in.Servo_Volt;
        	packet1.Shunt_temp = packet_in.Shunt_temp;
        	packet1.Avionics_mA = packet_in.Avionics_mA;
        	packet1.Avionics_mAh = packet_in.Avionics_mAh;
        	packet1.Servo_mA = packet_in.Servo_mA;
        	packet1.Main_mAh = packet_in.Main_mAh;
        	packet1.Avionics_Batt = packet_in.Avionics_Batt;
        	packet1.Main_Batt = packet_in.Main_Batt;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_power_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_power_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Avionics_Volt , packet1.Avionics_mA , packet1.Avionics_mAh , packet1.Avionics_Batt , packet1.Servo_Volt , packet1.Servo_mA , packet1.Main_mAh , packet1.Main_Batt , packet1.Shunt_temp );
	mavlink_msg_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_power_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Avionics_Volt , packet1.Avionics_mA , packet1.Avionics_mAh , packet1.Avionics_Batt , packet1.Servo_Volt , packet1.Servo_mA , packet1.Main_mAh , packet1.Main_Batt , packet1.Shunt_temp );
	mavlink_msg_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_power_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_power_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Avionics_Volt , packet1.Avionics_mA , packet1.Avionics_mAh , packet1.Avionics_Batt , packet1.Servo_Volt , packet1.Servo_mA , packet1.Main_mAh , packet1.Main_Batt , packet1.Shunt_temp );
	mavlink_msg_power_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_servo_node(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_servo_node_t packet_in = {
		963497464,17,84,151,218,29,96,163,230
    };
	mavlink_servo_node_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.relay_ch_1 = packet_in.relay_ch_1;
        	packet1.relay_ch_2 = packet_in.relay_ch_2;
        	packet1.relay_ch_3 = packet_in.relay_ch_3;
        	packet1.relay_ch_4 = packet_in.relay_ch_4;
        	packet1.relay_ch_5 = packet_in.relay_ch_5;
        	packet1.relay_ch_6 = packet_in.relay_ch_6;
        	packet1.RC_ch9 = packet_in.RC_ch9;
        	packet1.Override_SW = packet_in.Override_SW;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_servo_node_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_servo_node_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_servo_node_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.relay_ch_1 , packet1.relay_ch_2 , packet1.relay_ch_3 , packet1.relay_ch_4 , packet1.relay_ch_5 , packet1.relay_ch_6 , packet1.RC_ch9 , packet1.Override_SW );
	mavlink_msg_servo_node_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_servo_node_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.relay_ch_1 , packet1.relay_ch_2 , packet1.relay_ch_3 , packet1.relay_ch_4 , packet1.relay_ch_5 , packet1.relay_ch_6 , packet1.RC_ch9 , packet1.Override_SW );
	mavlink_msg_servo_node_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_servo_node_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_servo_node_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.relay_ch_1 , packet1.relay_ch_2 , packet1.relay_ch_3 , packet1.relay_ch_4 , packet1.relay_ch_5 , packet1.relay_ch_6 , packet1.RC_ch9 , packet1.Override_SW );
	mavlink_msg_servo_node_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_imu_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_imu_debug_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275,199
    };
	mavlink_imu_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Ax = packet_in.Ax;
        	packet1.Ay = packet_in.Ay;
        	packet1.Az = packet_in.Az;
        	packet1.Gx_u = packet_in.Gx_u;
        	packet1.Gy_u = packet_in.Gy_u;
        	packet1.Gz_u = packet_in.Gz_u;
        	packet1.Mx = packet_in.Mx;
        	packet1.My = packet_in.My;
        	packet1.Mz = packet_in.Mz;
        	packet1.IMU_temp = packet_in.IMU_temp;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_imu_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx_u , packet1.Gy_u , packet1.Gz_u , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp );
	mavlink_msg_imu_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx_u , packet1.Gy_u , packet1.Gz_u , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp );
	mavlink_msg_imu_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_imu_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx_u , packet1.Gy_u , packet1.Gz_u , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp );
	mavlink_msg_imu_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_accel_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_accel_debug_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587
    };
	mavlink_accel_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.imu_ax = packet_in.imu_ax;
        	packet1.imu_ay = packet_in.imu_ay;
        	packet1.imu_az = packet_in.imu_az;
        	packet1.tail_ax = packet_in.tail_ax;
        	packet1.tail_ay = packet_in.tail_ay;
        	packet1.tail_az = packet_in.tail_az;
        	packet1.wing_ax = packet_in.wing_ax;
        	packet1.wing_ay = packet_in.wing_ay;
        	packet1.wing_az = packet_in.wing_az;
        	packet1.aird_ax = packet_in.aird_ax;
        	packet1.aird_ay = packet_in.aird_ay;
        	packet1.aird_az = packet_in.aird_az;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accel_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_accel_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accel_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.imu_ax , packet1.imu_ay , packet1.imu_az , packet1.tail_ax , packet1.tail_ay , packet1.tail_az , packet1.wing_ax , packet1.wing_ay , packet1.wing_az , packet1.aird_ax , packet1.aird_ay , packet1.aird_az );
	mavlink_msg_accel_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accel_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.imu_ax , packet1.imu_ay , packet1.imu_az , packet1.tail_ax , packet1.tail_ay , packet1.tail_az , packet1.wing_ax , packet1.wing_ay , packet1.wing_az , packet1.aird_ax , packet1.aird_ay , packet1.aird_az );
	mavlink_msg_accel_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_accel_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_accel_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.imu_ax , packet1.imu_ay , packet1.imu_az , packet1.tail_ax , packet1.tail_ay , packet1.tail_az , packet1.wing_ax , packet1.wing_ay , packet1.wing_az , packet1.aird_ax , packet1.aird_ay , packet1.aird_az );
	mavlink_msg_accel_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mag_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_mag_debug_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275
    };
	mavlink_mag_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.imu_mx = packet_in.imu_mx;
        	packet1.imu_my = packet_in.imu_my;
        	packet1.imu_mz = packet_in.imu_mz;
        	packet1.tail_mx = packet_in.tail_mx;
        	packet1.tail_my = packet_in.tail_my;
        	packet1.tail_mz = packet_in.tail_mz;
        	packet1.wing_mx = packet_in.wing_mx;
        	packet1.wing_my = packet_in.wing_my;
        	packet1.wing_mz = packet_in.wing_mz;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_mag_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.imu_mx , packet1.imu_my , packet1.imu_mz , packet1.tail_mx , packet1.tail_my , packet1.tail_mz , packet1.wing_mx , packet1.wing_my , packet1.wing_mz );
	mavlink_msg_mag_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.imu_mx , packet1.imu_my , packet1.imu_mz , packet1.tail_mx , packet1.tail_my , packet1.tail_mz , packet1.wing_mx , packet1.wing_my , packet1.wing_mz );
	mavlink_msg_mag_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_mag_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.imu_mx , packet1.imu_my , packet1.imu_mz , packet1.tail_mx , packet1.tail_my , packet1.tail_mz , packet1.wing_mx , packet1.wing_my , packet1.wing_mz );
	mavlink_msg_mag_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_fdr_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_fdr_status_t packet_in = {
		963497464,17,84,151,218,29,96,163,230,41,108
    };
	mavlink_fdr_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.GPS_SAT = packet_in.GPS_SAT;
        	packet1.GPS_FIX = packet_in.GPS_FIX;
        	packet1.GPS_HDOP = packet_in.GPS_HDOP;
        	packet1.GPS_VDOP = packet_in.GPS_VDOP;
        	packet1.VN200_SAT = packet_in.VN200_SAT;
        	packet1.VN200_FIX = packet_in.VN200_FIX;
        	packet1.VN200_Status = packet_in.VN200_Status;
        	packet1.Radio_txbuff = packet_in.Radio_txbuff;
        	packet1.PWR_Gains = packet_in.PWR_Gains;
        	packet1.CPU_load = packet_in.CPU_load;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fdr_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_fdr_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fdr_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.GPS_SAT , packet1.GPS_FIX , packet1.GPS_HDOP , packet1.GPS_VDOP , packet1.VN200_SAT , packet1.VN200_FIX , packet1.VN200_Status , packet1.Radio_txbuff , packet1.PWR_Gains , packet1.CPU_load );
	mavlink_msg_fdr_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fdr_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.GPS_SAT , packet1.GPS_FIX , packet1.GPS_HDOP , packet1.GPS_VDOP , packet1.VN200_SAT , packet1.VN200_FIX , packet1.VN200_Status , packet1.Radio_txbuff , packet1.PWR_Gains , packet1.CPU_load );
	mavlink_msg_fdr_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_fdr_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fdr_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.GPS_SAT , packet1.GPS_FIX , packet1.GPS_HDOP , packet1.GPS_VDOP , packet1.VN200_SAT , packet1.VN200_FIX , packet1.VN200_Status , packet1.Radio_txbuff , packet1.PWR_Gains , packet1.CPU_load );
	mavlink_msg_fdr_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_longitudinal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_longitudinal_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0
    };
	mavlink_longitudinal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.AoA = packet_in.AoA;
        	packet1.q = packet_in.q;
        	packet1.ax = packet_in.ax;
        	packet1.az = packet_in.az;
        	packet1.IMU_pitch = packet_in.IMU_pitch;
        	packet1.GBL_pitch = packet_in.GBL_pitch;
        	packet1.elevator = packet_in.elevator;
        	packet1.elevator_cmd = packet_in.elevator_cmd;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_longitudinal_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_longitudinal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_longitudinal_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.AoA , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
	mavlink_msg_longitudinal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_longitudinal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.AoA , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
	mavlink_msg_longitudinal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_longitudinal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_longitudinal_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.AoA , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
	mavlink_msg_longitudinal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_lateral(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_lateral_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0
    };
	mavlink_lateral_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Beta = packet_in.Beta;
        	packet1.p = packet_in.p;
        	packet1.r = packet_in.r;
        	packet1.ay = packet_in.ay;
        	packet1.IMU_roll = packet_in.IMU_roll;
        	packet1.IMU_yaw = packet_in.IMU_yaw;
        	packet1.GBL_roll = packet_in.GBL_roll;
        	packet1.GBL_yaw = packet_in.GBL_yaw;
        	packet1.Rudder = packet_in.Rudder;
        	packet1.Aileron = packet_in.Aileron;
        	packet1.Rudder_cmd = packet_in.Rudder_cmd;
        	packet1.Aileron_cmd = packet_in.Aileron_cmd;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_lateral_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_lateral_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_lateral_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Beta , packet1.p , packet1.r , packet1.ay , packet1.IMU_roll , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_yaw , packet1.Rudder , packet1.Aileron , packet1.Rudder_cmd , packet1.Aileron_cmd );
	mavlink_msg_lateral_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_lateral_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Beta , packet1.p , packet1.r , packet1.ay , packet1.IMU_roll , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_yaw , packet1.Rudder , packet1.Aileron , packet1.Rudder_cmd , packet1.Aileron_cmd );
	mavlink_msg_lateral_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_lateral_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_lateral_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Beta , packet1.p , packet1.r , packet1.ay , packet1.IMU_roll , packet1.IMU_yaw , packet1.GBL_roll , packet1.GBL_yaw , packet1.Rudder , packet1.Aileron , packet1.Rudder_cmd , packet1.Aileron_cmd );
	mavlink_msg_lateral_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_weather(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_weather_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,65
    };
	mavlink_weather_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.Wind_speed = packet_in.Wind_speed;
        	packet1.Wind_dir = packet_in.Wind_dir;
        	packet1.Temp = packet_in.Temp;
        	packet1.Pressure = packet_in.Pressure;
        	packet1.Density = packet_in.Density;
        	packet1.Beaufort = packet_in.Beaufort;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_weather_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_weather_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_weather_pack(system_id, component_id, &msg , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
	mavlink_msg_weather_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_weather_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
	mavlink_msg_weather_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_weather_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_weather_send(MAVLINK_COMM_1 , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
	mavlink_msg_weather_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rt_fdr_msg_v4_0(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_euler_debug(system_id, component_id, last_msg);
	mavlink_test_airdata(system_id, component_id, last_msg);
	mavlink_test_airdata_debug(system_id, component_id, last_msg);
	mavlink_test_control_feedback(system_id, component_id, last_msg);
	mavlink_test_propulsion(system_id, component_id, last_msg);
	mavlink_test_power(system_id, component_id, last_msg);
	mavlink_test_servo_node(system_id, component_id, last_msg);
	mavlink_test_imu_debug(system_id, component_id, last_msg);
	mavlink_test_accel_debug(system_id, component_id, last_msg);
	mavlink_test_mag_debug(system_id, component_id, last_msg);
	mavlink_test_fdr_status(system_id, component_id, last_msg);
	mavlink_test_longitudinal(system_id, component_id, last_msg);
	mavlink_test_lateral(system_id, component_id, last_msg);
	mavlink_test_weather(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // RT_FDR_MSG_V4_0_TESTSUITE_H
