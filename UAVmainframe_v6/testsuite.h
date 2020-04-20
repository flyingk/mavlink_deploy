/** @file
 *	@brief MAVLink comm protocol testsuite generated from UAVmainframeX.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef UAVMAINFRAMEX_TESTSUITE_H
#define UAVMAINFRAMEX_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_UAVmainframeX(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_UAVmainframeX(system_id, component_id, last_msg);
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

static void mavlink_test_airdata_5_hole(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_airdata_5_hole_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,18275,199
    };
	mavlink_airdata_5_hole_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.density = packet_in.density;
        	packet1.DP1 = packet_in.DP1;
        	packet1.DP2 = packet_in.DP2;
        	packet1.DP3 = packet_in.DP3;
        	packet1.dynamic_pressure = packet_in.dynamic_pressure;
        	packet1.temperature = packet_in.temperature;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_5_hole_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_airdata_5_hole_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_5_hole_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_5_hole_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_5_hole_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_5_hole_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_airdata_5_hole_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_5_hole_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.dynamic_pressure , packet1.density , packet1.temperature , packet1.DP1 , packet1.DP2 , packet1.DP3 );
	mavlink_msg_airdata_5_hole_decode(last_msg, &packet2);
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
        	packet1.Thrust_1 = packet_in.Thrust_1;
        	packet1.ctrl_aux_2 = packet_in.ctrl_aux_2;
        	packet1.ctrl_aux_3 = packet_in.ctrl_aux_3;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_control_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.Thrust_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
	mavlink_msg_control_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.Thrust_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
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
	mavlink_msg_control_feedback_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.elevator , packet1.rudder , packet1.aileron , packet1.Thrust_1 , packet1.ctrl_aux_2 , packet1.ctrl_aux_3 );
	mavlink_msg_control_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_propulsion(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_propulsion_t packet_in = {
		963497464,45.0,73.0,17859,17963,18067,18171,65
    };
	mavlink_propulsion_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.motor_volt = packet_in.motor_volt;
        	packet1.motor_amp = packet_in.motor_amp;
        	packet1.motor_rpm = packet_in.motor_rpm;
        	packet1.motor_watt = packet_in.motor_watt;
        	packet1.motor_thrust = packet_in.motor_thrust;
        	packet1.motor_torque = packet_in.motor_torque;
        	packet1.motor_temp = packet_in.motor_temp;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_propulsion_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp , packet1.motor_thrust , packet1.motor_torque );
	mavlink_msg_propulsion_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_propulsion_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp , packet1.motor_thrust , packet1.motor_torque );
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
	mavlink_msg_propulsion_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.motor_volt , packet1.motor_amp , packet1.motor_rpm , packet1.motor_watt , packet1.motor_temp , packet1.motor_thrust , packet1.motor_torque );
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
        	packet1.AoA_cal = packet_in.AoA_cal;
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
	mavlink_msg_longitudinal_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.AoA_cal , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
	mavlink_msg_longitudinal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_longitudinal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.AoA_cal , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
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
	mavlink_msg_longitudinal_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.AoA_cal , packet1.q , packet1.ax , packet1.az , packet1.IMU_pitch , packet1.GBL_pitch , packet1.elevator , packet1.elevator_cmd );
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
		963497464,45.0,73.0,101.0,129.0,157.0,77
    };
	mavlink_weather_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
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
	mavlink_msg_weather_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
	mavlink_msg_weather_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_weather_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
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
	mavlink_msg_weather_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Wind_speed , packet1.Wind_dir , packet1.Temp , packet1.Pressure , packet1.Density , packet1.Beaufort );
	mavlink_msg_weather_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_spektrum_link(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_spektrum_link_t packet_in = {
		963497464,17443,17547,17651,17755,17859,175
    };
	mavlink_spektrum_link_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Frame_loss = packet_in.Frame_loss;
        	packet1.Fade_main = packet_in.Fade_main;
        	packet1.Fade_sat_1 = packet_in.Fade_sat_1;
        	packet1.Fade_sat_2 = packet_in.Fade_sat_2;
        	packet1.Fade_sat_3 = packet_in.Fade_sat_3;
        	packet1.Holds = packet_in.Holds;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spektrum_link_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_spektrum_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spektrum_link_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Holds , packet1.Frame_loss , packet1.Fade_main , packet1.Fade_sat_1 , packet1.Fade_sat_2 , packet1.Fade_sat_3 );
	mavlink_msg_spektrum_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spektrum_link_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Holds , packet1.Frame_loss , packet1.Fade_main , packet1.Fade_sat_1 , packet1.Fade_sat_2 , packet1.Fade_sat_3 );
	mavlink_msg_spektrum_link_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_spektrum_link_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spektrum_link_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Holds , packet1.Frame_loss , packet1.Fade_main , packet1.Fade_sat_1 , packet1.Fade_sat_2 , packet1.Fade_sat_3 );
	mavlink_msg_spektrum_link_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_fuel_cell(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_fuel_cell_t packet_in = {
		963497464,17443,17547,17651,17755,17859
    };
	mavlink_fuel_cell_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.FC_Volt = packet_in.FC_Volt;
        	packet1.FC_Amp = packet_in.FC_Amp;
        	packet1.FC_temp = packet_in.FC_temp;
        	packet1.FC_Aux_V1 = packet_in.FC_Aux_V1;
        	packet1.FC_Aux_A1 = packet_in.FC_Aux_A1;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_fuel_cell_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.FC_Volt , packet1.FC_Amp , packet1.FC_temp , packet1.FC_Aux_V1 , packet1.FC_Aux_A1 );
	mavlink_msg_fuel_cell_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.FC_Volt , packet1.FC_Amp , packet1.FC_temp , packet1.FC_Aux_V1 , packet1.FC_Aux_A1 );
	mavlink_msg_fuel_cell_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_fuel_cell_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.FC_Volt , packet1.FC_Amp , packet1.FC_temp , packet1.FC_Aux_V1 , packet1.FC_Aux_A1 );
	mavlink_msg_fuel_cell_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_fuel_cell_detail(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_fuel_cell_detail_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275
    };
	mavlink_fuel_cell_detail_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.FC_Aux_V2 = packet_in.FC_Aux_V2;
        	packet1.FC_Aux_A2 = packet_in.FC_Aux_A2;
        	packet1.FC_Aux_V3 = packet_in.FC_Aux_V3;
        	packet1.FC_Aux_A3 = packet_in.FC_Aux_A3;
        	packet1.FC_Mass_flow = packet_in.FC_Mass_flow;
        	packet1.FC_Pressure = packet_in.FC_Pressure;
        	packet1.FC_Airflow = packet_in.FC_Airflow;
        	packet1.FC_RPM_1 = packet_in.FC_RPM_1;
        	packet1.FC_RPM_2 = packet_in.FC_RPM_2;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_detail_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_fuel_cell_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_detail_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.FC_Aux_V2 , packet1.FC_Aux_A2 , packet1.FC_Aux_V3 , packet1.FC_Aux_A3 , packet1.FC_Mass_flow , packet1.FC_Pressure , packet1.FC_Airflow , packet1.FC_RPM_1 , packet1.FC_RPM_2 );
	mavlink_msg_fuel_cell_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_detail_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.FC_Aux_V2 , packet1.FC_Aux_A2 , packet1.FC_Aux_V3 , packet1.FC_Aux_A3 , packet1.FC_Mass_flow , packet1.FC_Pressure , packet1.FC_Airflow , packet1.FC_RPM_1 , packet1.FC_RPM_2 );
	mavlink_msg_fuel_cell_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_fuel_cell_detail_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_fuel_cell_detail_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.FC_Aux_V2 , packet1.FC_Aux_A2 , packet1.FC_Aux_V3 , packet1.FC_Aux_A3 , packet1.FC_Mass_flow , packet1.FC_Pressure , packet1.FC_Airflow , packet1.FC_RPM_1 , packet1.FC_RPM_2 );
	mavlink_msg_fuel_cell_detail_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pid_tune(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pid_tune_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0
    };
	mavlink_pid_tune_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Cmd_In = packet_in.Cmd_In;
        	packet1.Sensor_Fbk = packet_in.Sensor_Fbk;
        	packet1.Cmd_Out = packet_in.Cmd_Out;
        	packet1.Kp = packet_in.Kp;
        	packet1.Ki = packet_in.Ki;
        	packet1.Kd = packet_in.Kd;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pid_tune_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pid_tune_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pid_tune_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Cmd_In , packet1.Sensor_Fbk , packet1.Cmd_Out , packet1.Kp , packet1.Ki , packet1.Kd );
	mavlink_msg_pid_tune_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pid_tune_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Cmd_In , packet1.Sensor_Fbk , packet1.Cmd_Out , packet1.Kp , packet1.Ki , packet1.Kd );
	mavlink_msg_pid_tune_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pid_tune_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pid_tune_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Cmd_In , packet1.Sensor_Fbk , packet1.Cmd_Out , packet1.Kp , packet1.Ki , packet1.Kd );
	mavlink_msg_pid_tune_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_vehicle_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_vehicle_state_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,19731,19835,19939,20043,20147,20251
    };
	mavlink_vehicle_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.u = packet_in.u;
        	packet1.v = packet_in.v;
        	packet1.w = packet_in.w;
        	packet1.Roll = packet_in.Roll;
        	packet1.Pitch = packet_in.Pitch;
        	packet1.Yaw = packet_in.Yaw;
        	packet1.W_spd = packet_in.W_spd;
        	packet1.W_dir = packet_in.W_dir;
        	packet1.Vair = packet_in.Vair;
        	packet1.AoA = packet_in.AoA;
        	packet1.CW = packet_in.CW;
        	packet1.N = packet_in.N;
        	packet1.E = packet_in.E;
        	packet1.D = packet_in.D;
        	packet1.p = packet_in.p;
        	packet1.q = packet_in.q;
        	packet1.r = packet_in.r;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vehicle_state_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_vehicle_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vehicle_state_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.N , packet1.E , packet1.D , packet1.u , packet1.v , packet1.w , packet1.p , packet1.q , packet1.r , packet1.Roll , packet1.Pitch , packet1.Yaw , packet1.W_spd , packet1.W_dir , packet1.Vair , packet1.AoA , packet1.CW );
	mavlink_msg_vehicle_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vehicle_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.N , packet1.E , packet1.D , packet1.u , packet1.v , packet1.w , packet1.p , packet1.q , packet1.r , packet1.Roll , packet1.Pitch , packet1.Yaw , packet1.W_spd , packet1.W_dir , packet1.Vair , packet1.AoA , packet1.CW );
	mavlink_msg_vehicle_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_vehicle_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vehicle_state_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.N , packet1.E , packet1.D , packet1.u , packet1.v , packet1.w , packet1.p , packet1.q , packet1.r , packet1.Roll , packet1.Pitch , packet1.Yaw , packet1.W_spd , packet1.W_dir , packet1.Vair , packet1.AoA , packet1.CW );
	mavlink_msg_vehicle_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ekf_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_ekf_debug_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795,18899,19003
    };
	mavlink_ekf_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.GX_b__mdps = packet_in.GX_b__mdps;
        	packet1.GY_b__mdps = packet_in.GY_b__mdps;
        	packet1.GZ_b__mdps = packet_in.GZ_b__mdps;
        	packet1.AX_b__mg = packet_in.AX_b__mg;
        	packet1.AY_b__mg = packet_in.AY_b__mg;
        	packet1.AZ_b__mg = packet_in.AZ_b__mg;
        	packet1.MX_b__mG = packet_in.MX_b__mG;
        	packet1.MY_b__mG = packet_in.MY_b__mG;
        	packet1.MZ_b__mG = packet_in.MZ_b__mG;
        	packet1.Vair_b__cmps = packet_in.Vair_b__cmps;
        	packet1.AoA_b__mdeg = packet_in.AoA_b__mdeg;
        	packet1.CW_b__mdeg = packet_in.CW_b__mdeg;
        	packet1.Alt_b__cm = packet_in.Alt_b__cm;
        	packet1.Vair_scale = packet_in.Vair_scale;
        	packet1.AoA_scale = packet_in.AoA_scale;
        	packet1.CW_scale = packet_in.CW_scale;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_ekf_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.GX_b__mdps , packet1.GY_b__mdps , packet1.GZ_b__mdps , packet1.AX_b__mg , packet1.AY_b__mg , packet1.AZ_b__mg , packet1.MX_b__mG , packet1.MY_b__mG , packet1.MZ_b__mG , packet1.Vair_b__cmps , packet1.AoA_b__mdeg , packet1.CW_b__mdeg , packet1.Alt_b__cm , packet1.Vair_scale , packet1.AoA_scale , packet1.CW_scale );
	mavlink_msg_ekf_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.GX_b__mdps , packet1.GY_b__mdps , packet1.GZ_b__mdps , packet1.AX_b__mg , packet1.AY_b__mg , packet1.AZ_b__mg , packet1.MX_b__mG , packet1.MY_b__mG , packet1.MZ_b__mG , packet1.Vair_b__cmps , packet1.AoA_b__mdeg , packet1.CW_b__mdeg , packet1.Alt_b__cm , packet1.Vair_scale , packet1.AoA_scale , packet1.CW_scale );
	mavlink_msg_ekf_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_ekf_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.GX_b__mdps , packet1.GY_b__mdps , packet1.GZ_b__mdps , packet1.AX_b__mg , packet1.AY_b__mg , packet1.AZ_b__mg , packet1.MX_b__mG , packet1.MY_b__mG , packet1.MZ_b__mG , packet1.Vair_b__cmps , packet1.AoA_b__mdeg , packet1.CW_b__mdeg , packet1.Alt_b__cm , packet1.Vair_scale , packet1.AoA_scale , packet1.CW_scale );
	mavlink_msg_ekf_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ekf_residual(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_ekf_residual_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691
    };
	mavlink_ekf_residual_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Pn__cm = packet_in.Pn__cm;
        	packet1.Pe__cm = packet_in.Pe__cm;
        	packet1.Pd__cm = packet_in.Pd__cm;
        	packet1.Vn__cmps = packet_in.Vn__cmps;
        	packet1.Ve__cmps = packet_in.Ve__cmps;
        	packet1.Vd__cmps = packet_in.Vd__cmps;
        	packet1.Vair__cmps = packet_in.Vair__cmps;
        	packet1.AoA__mdeg = packet_in.AoA__mdeg;
        	packet1.CW__mdeg = packet_in.CW__mdeg;
        	packet1.Alt__cm = packet_in.Alt__cm;
        	packet1.Mx__mG = packet_in.Mx__mG;
        	packet1.My__mG = packet_in.My__mG;
        	packet1.Mz__mG = packet_in.Mz__mG;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_residual_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_ekf_residual_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_residual_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Pn__cm , packet1.Pe__cm , packet1.Pd__cm , packet1.Vn__cmps , packet1.Ve__cmps , packet1.Vd__cmps , packet1.Vair__cmps , packet1.AoA__mdeg , packet1.CW__mdeg , packet1.Alt__cm , packet1.Mx__mG , packet1.My__mG , packet1.Mz__mG );
	mavlink_msg_ekf_residual_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_residual_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Pn__cm , packet1.Pe__cm , packet1.Pd__cm , packet1.Vn__cmps , packet1.Ve__cmps , packet1.Vd__cmps , packet1.Vair__cmps , packet1.AoA__mdeg , packet1.CW__mdeg , packet1.Alt__cm , packet1.Mx__mG , packet1.My__mG , packet1.Mz__mG );
	mavlink_msg_ekf_residual_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_ekf_residual_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_ekf_residual_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Pn__cm , packet1.Pe__cm , packet1.Pd__cm , packet1.Vn__cmps , packet1.Ve__cmps , packet1.Vd__cmps , packet1.Vair__cmps , packet1.AoA__mdeg , packet1.CW__mdeg , packet1.Alt__cm , packet1.Mx__mG , packet1.My__mG , packet1.Mz__mG );
	mavlink_msg_ekf_residual_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_tecs_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_tecs_debug_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
	mavlink_tecs_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Alt_Dem = packet_in.Alt_Dem;
        	packet1.Spd_Dem = packet_in.Spd_Dem;
        	packet1.tecs_SPE_dem = packet_in.tecs_SPE_dem;
        	packet1.tecs_SKE_dem = packet_in.tecs_SKE_dem;
        	packet1.tecs_SEB_dem = packet_in.tecs_SEB_dem;
        	packet1.tecs_SPE_est = packet_in.tecs_SPE_est;
        	packet1.tecs_SKE_est = packet_in.tecs_SKE_est;
        	packet1.tecs_SEB_est = packet_in.tecs_SEB_est;
        	packet1.Pitch_Dem = packet_in.Pitch_Dem;
        	packet1.Thr_Dem = packet_in.Thr_Dem;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_tecs_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_tecs_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_tecs_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Alt_Dem , packet1.Spd_Dem , packet1.tecs_SPE_dem , packet1.tecs_SKE_dem , packet1.tecs_SEB_dem , packet1.tecs_SPE_est , packet1.tecs_SKE_est , packet1.tecs_SEB_est , packet1.Pitch_Dem , packet1.Thr_Dem );
	mavlink_msg_tecs_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_tecs_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Alt_Dem , packet1.Spd_Dem , packet1.tecs_SPE_dem , packet1.tecs_SKE_dem , packet1.tecs_SEB_dem , packet1.tecs_SPE_est , packet1.tecs_SKE_est , packet1.tecs_SEB_est , packet1.Pitch_Dem , packet1.Thr_Dem );
	mavlink_msg_tecs_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_tecs_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_tecs_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Alt_Dem , packet1.Spd_Dem , packet1.tecs_SPE_dem , packet1.tecs_SKE_dem , packet1.tecs_SEB_dem , packet1.tecs_SPE_est , packet1.tecs_SKE_est , packet1.tecs_SEB_est , packet1.Pitch_Dem , packet1.Thr_Dem );
	mavlink_msg_tecs_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mr_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_mr_debug_t packet_in = {
		963497464,17443,17547,17651,17755,17859,17963
    };
	mavlink_mr_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.RPM_1 = packet_in.RPM_1;
        	packet1.RPM_2 = packet_in.RPM_2;
        	packet1.RPM_3 = packet_in.RPM_3;
        	packet1.RPM_4 = packet_in.RPM_4;
        	packet1.RPM_5 = packet_in.RPM_5;
        	packet1.RPM_6 = packet_in.RPM_6;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mr_debug_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_mr_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mr_debug_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.RPM_1 , packet1.RPM_2 , packet1.RPM_3 , packet1.RPM_4 , packet1.RPM_5 , packet1.RPM_6 );
	mavlink_msg_mr_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mr_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.RPM_1 , packet1.RPM_2 , packet1.RPM_3 , packet1.RPM_4 , packet1.RPM_5 , packet1.RPM_6 );
	mavlink_msg_mr_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_mr_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mr_debug_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.RPM_1 , packet1.RPM_2 , packet1.RPM_3 , packet1.RPM_4 , packet1.RPM_5 , packet1.RPM_6 );
	mavlink_msg_mr_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_thrust_sensor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_thrust_sensor_t packet_in = {
		963497464,963497672
    };
	mavlink_thrust_sensor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Load_cell = packet_in.Load_cell;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_thrust_sensor_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_thrust_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_thrust_sensor_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.Load_cell );
	mavlink_msg_thrust_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_thrust_sensor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.Load_cell );
	mavlink_msg_thrust_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_thrust_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_thrust_sensor_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.Load_cell );
	mavlink_msg_thrust_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_attitude_sensor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_attitude_sensor_t packet_in = {
		93372036854775807ULL,963497880,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,465.0,493.0,521.0
    };
	mavlink_attitude_sensor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.utc_time_us = packet_in.utc_time_us;
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.Ax = packet_in.Ax;
        	packet1.Ay = packet_in.Ay;
        	packet1.Az = packet_in.Az;
        	packet1.Gx = packet_in.Gx;
        	packet1.Gy = packet_in.Gy;
        	packet1.Gz = packet_in.Gz;
        	packet1.Mx = packet_in.Mx;
        	packet1.My = packet_in.My;
        	packet1.Mz = packet_in.Mz;
        	packet1.IMU_temp = packet_in.IMU_temp;
        	packet1.d1 = packet_in.d1;
        	packet1.d2 = packet_in.d2;
        	packet1.d3 = packet_in.d3;
        	packet1.d4 = packet_in.d4;
        	packet1.d5 = packet_in.d5;
        	packet1.d6 = packet_in.d6;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_sensor_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_attitude_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_sensor_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.utc_time_us , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx , packet1.Gy , packet1.Gz , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp , packet1.d1 , packet1.d2 , packet1.d3 , packet1.d4 , packet1.d5 , packet1.d6 );
	mavlink_msg_attitude_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_sensor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.utc_time_us , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx , packet1.Gy , packet1.Gz , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp , packet1.d1 , packet1.d2 , packet1.d3 , packet1.d4 , packet1.d5 , packet1.d6 );
	mavlink_msg_attitude_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_attitude_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_attitude_sensor_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.utc_time_us , packet1.Ax , packet1.Ay , packet1.Az , packet1.Gx , packet1.Gy , packet1.Gz , packet1.Mx , packet1.My , packet1.Mz , packet1.IMU_temp , packet1.d1 , packet1.d2 , packet1.d3 , packet1.d4 , packet1.d5 , packet1.d6 );
	mavlink_msg_attitude_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_airdata_sensor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_airdata_sensor_t packet_in = {
		93372036854775807ULL,963497880,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0
    };
	mavlink_airdata_sensor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.utc_time_us = packet_in.utc_time_us;
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.absP = packet_in.absP;
        	packet1.dP_1 = packet_in.dP_1;
        	packet1.dp_2 = packet_in.dp_2;
        	packet1.dp_3 = packet_in.dp_3;
        	packet1.Sensor_Temp = packet_in.Sensor_Temp;
        	packet1.Altitude = packet_in.Altitude;
        	packet1.Airspeed = packet_in.Airspeed;
        	packet1.Density = packet_in.Density;
        	packet1.d1 = packet_in.d1;
        	packet1.d2 = packet_in.d2;
        	packet1.d3 = packet_in.d3;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_sensor_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_airdata_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_sensor_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.utc_time_us , packet1.absP , packet1.dP_1 , packet1.dp_2 , packet1.dp_3 , packet1.Sensor_Temp , packet1.Altitude , packet1.Airspeed , packet1.Density , packet1.d1 , packet1.d2 , packet1.d3 );
	mavlink_msg_airdata_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_sensor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.utc_time_us , packet1.absP , packet1.dP_1 , packet1.dp_2 , packet1.dp_3 , packet1.Sensor_Temp , packet1.Altitude , packet1.Airspeed , packet1.Density , packet1.d1 , packet1.d2 , packet1.d3 );
	mavlink_msg_airdata_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_airdata_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_airdata_sensor_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.utc_time_us , packet1.absP , packet1.dP_1 , packet1.dp_2 , packet1.dp_3 , packet1.Sensor_Temp , packet1.Altitude , packet1.Airspeed , packet1.Density , packet1.d1 , packet1.d2 , packet1.d3 );
	mavlink_msg_airdata_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_UAVmainframeX(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_euler_debug(system_id, component_id, last_msg);
	mavlink_test_airdata(system_id, component_id, last_msg);
	mavlink_test_airdata_5_hole(system_id, component_id, last_msg);
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
	mavlink_test_spektrum_link(system_id, component_id, last_msg);
	mavlink_test_fuel_cell(system_id, component_id, last_msg);
	mavlink_test_fuel_cell_detail(system_id, component_id, last_msg);
	mavlink_test_pid_tune(system_id, component_id, last_msg);
	mavlink_test_vehicle_state(system_id, component_id, last_msg);
	mavlink_test_ekf_debug(system_id, component_id, last_msg);
	mavlink_test_ekf_residual(system_id, component_id, last_msg);
	mavlink_test_tecs_debug(system_id, component_id, last_msg);
	mavlink_test_mr_debug(system_id, component_id, last_msg);
	mavlink_test_thrust_sensor(system_id, component_id, last_msg);
	mavlink_test_attitude_sensor(system_id, component_id, last_msg);
	mavlink_test_airdata_sensor(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // UAVMAINFRAMEX_TESTSUITE_H