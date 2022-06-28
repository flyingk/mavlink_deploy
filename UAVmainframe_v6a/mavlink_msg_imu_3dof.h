#pragma once
// MESSAGE IMU_3DoF PACKING

#define MAVLINK_MSG_ID_IMU_3DoF 229


typedef struct __mavlink_imu_3dof_t {
 uint32_t Sensor_time_UNIT_100us; /*<  Sensor time in 100 usec*/
 uint32_t Sync_data_UNIT_variable; /*<  Sync count or time in 100 usec*/
 uint32_t Recorded_time_UNIT_100us; /*<  recording timestamp in 100 usec*/
 float Roll_UNIT_deg; /*<  Roll angle estimate [deg]*/
 float Pitch_UNIT_deg; /*<  Pitch angle estimate [deg]*/
 float Yaw_UNIT_deg; /*<  Yaw angle estimate [deg]*/
 float Roll_Rate_UNIT_deg_d_s; /*<  Roll rate estimate [deg/s]*/
 float Pitch_Rate_UNIT_deg_d_s; /*<  Pitch rate estimate [deg/s]*/
 float Yaw_Rate_UNIT_deg_d_s; /*<  Yaw rate estimate [deg/s]*/
 float RollU_UNIT_deg; /*<  Roll angle uncertainty [deg]*/
 float PitchU_UNIT_deg; /*<  Pitch angle uncertainty [deg]*/
 float YawU_UNIT_deg; /*<  Yaw angle uncertainty [deg]*/
 float q0_UNIT_none; /*<  q0 estimate [-]*/
 float q1_UNIT_none; /*<  q1 estimate [-]*/
 float q2_UNIT_none; /*<  q2 estimate [-]*/
 float q3_UNIT_none; /*<  q3 estimate [-]*/
 float Gyro_X_bias_UNIT_deg_d_s; /*<  Gyro bias estimate X [deg/s]*/
 float Gyro_Y_bias_UNIT_deg_d_s; /*<  Gyro bias estimate Y [deg/s]*/
 float Gyro_Z_bias_UNIT_deg_d_s; /*<  Gyro bias estimate Z [deg/s]*/
 float Accel_X_bias_UNIT_g; /*<  Accel bias estimate X [g]*/
 float Accel_Y_bias_UNIT_g; /*<  Accel bias estimate Y [g]*/
 float Accel_Z_bias_UNIT_g; /*<  Accel bias estimate Z [g]*/
 float Mag_X_bias_UNIT_uT; /*<  Mag bias estimate X [uT]*/
 float Mag_Y_bias_UNIT_uT; /*<  Mag bias estimate Y [uT]*/
 float Mag_Z_bias_UNIT_uT; /*<  Mag bias estimate Z [uT]*/
 float U_Gyro_X_UNIT_deg_d_s; /*<  Gyro input X [deg/s]*/
 float U_Gyro_Y_UNIT_deg_d_s; /*<  Gyro input Y [deg/s]*/
 float U_Gyro_Z_UNIT_deg_d_s; /*<  Gyro input Z [deg/s]*/
 float Z_Mag_X_UNIT_uT; /*<  Mag measurement X [uT]*/
 float Z_Mag_Y_UNIT_uT; /*<  Mag measurement Y [uT]*/
 float Z_Mag_Z_UNIT_uT; /*<  Mag measurement Z [uT]*/
 float Z_Acc_X_UNIT_g; /*<  Acc measurement X [g]*/
 float Z_Acc_Y_UNIT_g; /*<  Acc measurement Y [g]*/
 float Z_Acc_Z_UNIT_g; /*<  Acc measurement Z [g]*/
 float Y_Mag_X_UNIT_uT; /*<  Mag predicted measurement X [uT]*/
 float Y_Mag_Y_UNIT_uT; /*<  Mag predicted measurement Y [uT]*/
 float Y_Mag_Z_UNIT_uT; /*<  Mag predicted measurement Z [uT]*/
 float Y_Acc_X_UNIT_g; /*<  Acc predicted measurement X [g]*/
 float Y_Acc_Y_UNIT_g; /*<  Acc predicted measurement Y [g]*/
 float Y_Acc_Z_UNIT_g; /*<  Acc predicted measurement Z [g]*/
 float q0_U_UNIT_none; /*<  q0 uncertainty [-]*/
 float q1_U_UNIT_none; /*<  q1 uncertainty [-]*/
 float q2_U_UNIT_none; /*<  q2 uncertainty [-]*/
 float q3_U_UNIT_none; /*<  q3 uncertainty [-]*/
 float Gyro_X_bias_U_UNIT_deg_d_s; /*<  Gyro bias uncertainty X [deg/s]*/
 float Gyro_Y_bias_U_UNIT_deg_d_s; /*<  Gyro bias uncertainty Y [deg/s]*/
 float Gyro_Z_bias_U_UNIT_deg_d_s; /*<  Gyro bias uncertainty Z [deg/s]*/
 float Accel_X_bias_U_UNIT_g; /*<  Accel bias uncertainty X [g]*/
 float Accel_Y_bias_U_UNIT_g; /*<  Accel bias uncertainty Y [g]*/
 float Accel_Z_bias_U_UNIT_g; /*<  Accel bias uncertainty Z [g]*/
 float Mag_X_bias_U_UNIT_uT; /*<  Mag bias uncertainty X [uT]*/
 float Mag_Y_bias_U_UNIT_uT; /*<  Mag bias uncertainty Y [uT]*/
 float Mag_Z_bias_U_UNIT_uT; /*<  Mag bias uncertainty Z [uT]*/
 int16_t Sensor_processing_time_UNIT_us; /*<  Sensor processing time in usec, -1 for unknown*/
} mavlink_imu_3dof_t;

#define MAVLINK_MSG_ID_IMU_3DoF_LEN 214
#define MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN 214
#define MAVLINK_MSG_ID_229_LEN 214
#define MAVLINK_MSG_ID_229_MIN_LEN 214

#define MAVLINK_MSG_ID_IMU_3DoF_CRC 41
#define MAVLINK_MSG_ID_229_CRC 41



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IMU_3DoF { \
    229, \
    "IMU_3DoF", \
    54, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_imu_3dof_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_UNIT_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_imu_3dof_t, Sync_data_UNIT_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 212, offsetof(mavlink_imu_3dof_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_imu_3dof_t, Recorded_time_UNIT_100us) }, \
         { "Roll_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_imu_3dof_t, Roll_UNIT_deg) }, \
         { "Pitch_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_imu_3dof_t, Pitch_UNIT_deg) }, \
         { "Yaw_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_imu_3dof_t, Yaw_UNIT_deg) }, \
         { "Roll_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_imu_3dof_t, Roll_Rate_UNIT_deg_d_s) }, \
         { "Pitch_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_imu_3dof_t, Pitch_Rate_UNIT_deg_d_s) }, \
         { "Yaw_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_imu_3dof_t, Yaw_Rate_UNIT_deg_d_s) }, \
         { "RollU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_imu_3dof_t, RollU_UNIT_deg) }, \
         { "PitchU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_imu_3dof_t, PitchU_UNIT_deg) }, \
         { "YawU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_imu_3dof_t, YawU_UNIT_deg) }, \
         { "q0_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_imu_3dof_t, q0_UNIT_none) }, \
         { "q1_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_imu_3dof_t, q1_UNIT_none) }, \
         { "q2_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_imu_3dof_t, q2_UNIT_none) }, \
         { "q3_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_imu_3dof_t, q3_UNIT_none) }, \
         { "Gyro_X_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_imu_3dof_t, Gyro_X_bias_UNIT_deg_d_s) }, \
         { "Gyro_Y_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_imu_3dof_t, Gyro_Y_bias_UNIT_deg_d_s) }, \
         { "Gyro_Z_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_imu_3dof_t, Gyro_Z_bias_UNIT_deg_d_s) }, \
         { "Accel_X_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_imu_3dof_t, Accel_X_bias_UNIT_g) }, \
         { "Accel_Y_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_imu_3dof_t, Accel_Y_bias_UNIT_g) }, \
         { "Accel_Z_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_imu_3dof_t, Accel_Z_bias_UNIT_g) }, \
         { "Mag_X_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_imu_3dof_t, Mag_X_bias_UNIT_uT) }, \
         { "Mag_Y_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_imu_3dof_t, Mag_Y_bias_UNIT_uT) }, \
         { "Mag_Z_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_imu_3dof_t, Mag_Z_bias_UNIT_uT) }, \
         { "U_Gyro_X_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_imu_3dof_t, U_Gyro_X_UNIT_deg_d_s) }, \
         { "U_Gyro_Y_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_imu_3dof_t, U_Gyro_Y_UNIT_deg_d_s) }, \
         { "U_Gyro_Z_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_imu_3dof_t, U_Gyro_Z_UNIT_deg_d_s) }, \
         { "Z_Mag_X_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_imu_3dof_t, Z_Mag_X_UNIT_uT) }, \
         { "Z_Mag_Y_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_imu_3dof_t, Z_Mag_Y_UNIT_uT) }, \
         { "Z_Mag_Z_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_imu_3dof_t, Z_Mag_Z_UNIT_uT) }, \
         { "Z_Acc_X_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 124, offsetof(mavlink_imu_3dof_t, Z_Acc_X_UNIT_g) }, \
         { "Z_Acc_Y_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_imu_3dof_t, Z_Acc_Y_UNIT_g) }, \
         { "Z_Acc_Z_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_imu_3dof_t, Z_Acc_Z_UNIT_g) }, \
         { "Y_Mag_X_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_imu_3dof_t, Y_Mag_X_UNIT_uT) }, \
         { "Y_Mag_Y_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_imu_3dof_t, Y_Mag_Y_UNIT_uT) }, \
         { "Y_Mag_Z_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 144, offsetof(mavlink_imu_3dof_t, Y_Mag_Z_UNIT_uT) }, \
         { "Y_Acc_X_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 148, offsetof(mavlink_imu_3dof_t, Y_Acc_X_UNIT_g) }, \
         { "Y_Acc_Y_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 152, offsetof(mavlink_imu_3dof_t, Y_Acc_Y_UNIT_g) }, \
         { "Y_Acc_Z_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 156, offsetof(mavlink_imu_3dof_t, Y_Acc_Z_UNIT_g) }, \
         { "q0_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 160, offsetof(mavlink_imu_3dof_t, q0_U_UNIT_none) }, \
         { "q1_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 164, offsetof(mavlink_imu_3dof_t, q1_U_UNIT_none) }, \
         { "q2_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 168, offsetof(mavlink_imu_3dof_t, q2_U_UNIT_none) }, \
         { "q3_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 172, offsetof(mavlink_imu_3dof_t, q3_U_UNIT_none) }, \
         { "Gyro_X_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 176, offsetof(mavlink_imu_3dof_t, Gyro_X_bias_U_UNIT_deg_d_s) }, \
         { "Gyro_Y_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 180, offsetof(mavlink_imu_3dof_t, Gyro_Y_bias_U_UNIT_deg_d_s) }, \
         { "Gyro_Z_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 184, offsetof(mavlink_imu_3dof_t, Gyro_Z_bias_U_UNIT_deg_d_s) }, \
         { "Accel_X_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 188, offsetof(mavlink_imu_3dof_t, Accel_X_bias_U_UNIT_g) }, \
         { "Accel_Y_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 192, offsetof(mavlink_imu_3dof_t, Accel_Y_bias_U_UNIT_g) }, \
         { "Accel_Z_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 196, offsetof(mavlink_imu_3dof_t, Accel_Z_bias_U_UNIT_g) }, \
         { "Mag_X_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 200, offsetof(mavlink_imu_3dof_t, Mag_X_bias_U_UNIT_uT) }, \
         { "Mag_Y_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 204, offsetof(mavlink_imu_3dof_t, Mag_Y_bias_U_UNIT_uT) }, \
         { "Mag_Z_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 208, offsetof(mavlink_imu_3dof_t, Mag_Z_bias_U_UNIT_uT) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IMU_3DoF { \
    "IMU_3DoF", \
    54, \
    {  { "Sensor_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_imu_3dof_t, Sensor_time_UNIT_100us) }, \
         { "Sync_data_UNIT_variable", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_imu_3dof_t, Sync_data_UNIT_variable) }, \
         { "Sensor_processing_time_UNIT_us", NULL, MAVLINK_TYPE_INT16_T, 0, 212, offsetof(mavlink_imu_3dof_t, Sensor_processing_time_UNIT_us) }, \
         { "Recorded_time_UNIT_100us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_imu_3dof_t, Recorded_time_UNIT_100us) }, \
         { "Roll_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_imu_3dof_t, Roll_UNIT_deg) }, \
         { "Pitch_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_imu_3dof_t, Pitch_UNIT_deg) }, \
         { "Yaw_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_imu_3dof_t, Yaw_UNIT_deg) }, \
         { "Roll_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_imu_3dof_t, Roll_Rate_UNIT_deg_d_s) }, \
         { "Pitch_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_imu_3dof_t, Pitch_Rate_UNIT_deg_d_s) }, \
         { "Yaw_Rate_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_imu_3dof_t, Yaw_Rate_UNIT_deg_d_s) }, \
         { "RollU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_imu_3dof_t, RollU_UNIT_deg) }, \
         { "PitchU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_imu_3dof_t, PitchU_UNIT_deg) }, \
         { "YawU_UNIT_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_imu_3dof_t, YawU_UNIT_deg) }, \
         { "q0_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_imu_3dof_t, q0_UNIT_none) }, \
         { "q1_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_imu_3dof_t, q1_UNIT_none) }, \
         { "q2_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_imu_3dof_t, q2_UNIT_none) }, \
         { "q3_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_imu_3dof_t, q3_UNIT_none) }, \
         { "Gyro_X_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_imu_3dof_t, Gyro_X_bias_UNIT_deg_d_s) }, \
         { "Gyro_Y_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_imu_3dof_t, Gyro_Y_bias_UNIT_deg_d_s) }, \
         { "Gyro_Z_bias_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_imu_3dof_t, Gyro_Z_bias_UNIT_deg_d_s) }, \
         { "Accel_X_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_imu_3dof_t, Accel_X_bias_UNIT_g) }, \
         { "Accel_Y_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_imu_3dof_t, Accel_Y_bias_UNIT_g) }, \
         { "Accel_Z_bias_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_imu_3dof_t, Accel_Z_bias_UNIT_g) }, \
         { "Mag_X_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_imu_3dof_t, Mag_X_bias_UNIT_uT) }, \
         { "Mag_Y_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_imu_3dof_t, Mag_Y_bias_UNIT_uT) }, \
         { "Mag_Z_bias_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_imu_3dof_t, Mag_Z_bias_UNIT_uT) }, \
         { "U_Gyro_X_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_imu_3dof_t, U_Gyro_X_UNIT_deg_d_s) }, \
         { "U_Gyro_Y_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_imu_3dof_t, U_Gyro_Y_UNIT_deg_d_s) }, \
         { "U_Gyro_Z_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_imu_3dof_t, U_Gyro_Z_UNIT_deg_d_s) }, \
         { "Z_Mag_X_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_imu_3dof_t, Z_Mag_X_UNIT_uT) }, \
         { "Z_Mag_Y_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_imu_3dof_t, Z_Mag_Y_UNIT_uT) }, \
         { "Z_Mag_Z_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_imu_3dof_t, Z_Mag_Z_UNIT_uT) }, \
         { "Z_Acc_X_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 124, offsetof(mavlink_imu_3dof_t, Z_Acc_X_UNIT_g) }, \
         { "Z_Acc_Y_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_imu_3dof_t, Z_Acc_Y_UNIT_g) }, \
         { "Z_Acc_Z_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_imu_3dof_t, Z_Acc_Z_UNIT_g) }, \
         { "Y_Mag_X_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_imu_3dof_t, Y_Mag_X_UNIT_uT) }, \
         { "Y_Mag_Y_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_imu_3dof_t, Y_Mag_Y_UNIT_uT) }, \
         { "Y_Mag_Z_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 144, offsetof(mavlink_imu_3dof_t, Y_Mag_Z_UNIT_uT) }, \
         { "Y_Acc_X_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 148, offsetof(mavlink_imu_3dof_t, Y_Acc_X_UNIT_g) }, \
         { "Y_Acc_Y_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 152, offsetof(mavlink_imu_3dof_t, Y_Acc_Y_UNIT_g) }, \
         { "Y_Acc_Z_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 156, offsetof(mavlink_imu_3dof_t, Y_Acc_Z_UNIT_g) }, \
         { "q0_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 160, offsetof(mavlink_imu_3dof_t, q0_U_UNIT_none) }, \
         { "q1_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 164, offsetof(mavlink_imu_3dof_t, q1_U_UNIT_none) }, \
         { "q2_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 168, offsetof(mavlink_imu_3dof_t, q2_U_UNIT_none) }, \
         { "q3_U_UNIT_none", NULL, MAVLINK_TYPE_FLOAT, 0, 172, offsetof(mavlink_imu_3dof_t, q3_U_UNIT_none) }, \
         { "Gyro_X_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 176, offsetof(mavlink_imu_3dof_t, Gyro_X_bias_U_UNIT_deg_d_s) }, \
         { "Gyro_Y_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 180, offsetof(mavlink_imu_3dof_t, Gyro_Y_bias_U_UNIT_deg_d_s) }, \
         { "Gyro_Z_bias_U_UNIT_deg_d_s", NULL, MAVLINK_TYPE_FLOAT, 0, 184, offsetof(mavlink_imu_3dof_t, Gyro_Z_bias_U_UNIT_deg_d_s) }, \
         { "Accel_X_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 188, offsetof(mavlink_imu_3dof_t, Accel_X_bias_U_UNIT_g) }, \
         { "Accel_Y_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 192, offsetof(mavlink_imu_3dof_t, Accel_Y_bias_U_UNIT_g) }, \
         { "Accel_Z_bias_U_UNIT_g", NULL, MAVLINK_TYPE_FLOAT, 0, 196, offsetof(mavlink_imu_3dof_t, Accel_Z_bias_U_UNIT_g) }, \
         { "Mag_X_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 200, offsetof(mavlink_imu_3dof_t, Mag_X_bias_U_UNIT_uT) }, \
         { "Mag_Y_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 204, offsetof(mavlink_imu_3dof_t, Mag_Y_bias_U_UNIT_uT) }, \
         { "Mag_Z_bias_U_UNIT_uT", NULL, MAVLINK_TYPE_FLOAT, 0, 208, offsetof(mavlink_imu_3dof_t, Mag_Z_bias_U_UNIT_uT) }, \
         } \
}
#endif

/**
 * @brief Pack a imu_3dof message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Roll_UNIT_deg  Roll angle estimate [deg]
 * @param Pitch_UNIT_deg  Pitch angle estimate [deg]
 * @param Yaw_UNIT_deg  Yaw angle estimate [deg]
 * @param Roll_Rate_UNIT_deg_d_s  Roll rate estimate [deg/s]
 * @param Pitch_Rate_UNIT_deg_d_s  Pitch rate estimate [deg/s]
 * @param Yaw_Rate_UNIT_deg_d_s  Yaw rate estimate [deg/s]
 * @param RollU_UNIT_deg  Roll angle uncertainty [deg]
 * @param PitchU_UNIT_deg  Pitch angle uncertainty [deg]
 * @param YawU_UNIT_deg  Yaw angle uncertainty [deg]
 * @param q0_UNIT_none  q0 estimate [-]
 * @param q1_UNIT_none  q1 estimate [-]
 * @param q2_UNIT_none  q2 estimate [-]
 * @param q3_UNIT_none  q3 estimate [-]
 * @param Gyro_X_bias_UNIT_deg_d_s  Gyro bias estimate X [deg/s]
 * @param Gyro_Y_bias_UNIT_deg_d_s  Gyro bias estimate Y [deg/s]
 * @param Gyro_Z_bias_UNIT_deg_d_s  Gyro bias estimate Z [deg/s]
 * @param Accel_X_bias_UNIT_g  Accel bias estimate X [g]
 * @param Accel_Y_bias_UNIT_g  Accel bias estimate Y [g]
 * @param Accel_Z_bias_UNIT_g  Accel bias estimate Z [g]
 * @param Mag_X_bias_UNIT_uT  Mag bias estimate X [uT]
 * @param Mag_Y_bias_UNIT_uT  Mag bias estimate Y [uT]
 * @param Mag_Z_bias_UNIT_uT  Mag bias estimate Z [uT]
 * @param U_Gyro_X_UNIT_deg_d_s  Gyro input X [deg/s]
 * @param U_Gyro_Y_UNIT_deg_d_s  Gyro input Y [deg/s]
 * @param U_Gyro_Z_UNIT_deg_d_s  Gyro input Z [deg/s]
 * @param Z_Mag_X_UNIT_uT  Mag measurement X [uT]
 * @param Z_Mag_Y_UNIT_uT  Mag measurement Y [uT]
 * @param Z_Mag_Z_UNIT_uT  Mag measurement Z [uT]
 * @param Z_Acc_X_UNIT_g  Acc measurement X [g]
 * @param Z_Acc_Y_UNIT_g  Acc measurement Y [g]
 * @param Z_Acc_Z_UNIT_g  Acc measurement Z [g]
 * @param Y_Mag_X_UNIT_uT  Mag predicted measurement X [uT]
 * @param Y_Mag_Y_UNIT_uT  Mag predicted measurement Y [uT]
 * @param Y_Mag_Z_UNIT_uT  Mag predicted measurement Z [uT]
 * @param Y_Acc_X_UNIT_g  Acc predicted measurement X [g]
 * @param Y_Acc_Y_UNIT_g  Acc predicted measurement Y [g]
 * @param Y_Acc_Z_UNIT_g  Acc predicted measurement Z [g]
 * @param q0_U_UNIT_none  q0 uncertainty [-]
 * @param q1_U_UNIT_none  q1 uncertainty [-]
 * @param q2_U_UNIT_none  q2 uncertainty [-]
 * @param q3_U_UNIT_none  q3 uncertainty [-]
 * @param Gyro_X_bias_U_UNIT_deg_d_s  Gyro bias uncertainty X [deg/s]
 * @param Gyro_Y_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Y [deg/s]
 * @param Gyro_Z_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Z [deg/s]
 * @param Accel_X_bias_U_UNIT_g  Accel bias uncertainty X [g]
 * @param Accel_Y_bias_U_UNIT_g  Accel bias uncertainty Y [g]
 * @param Accel_Z_bias_U_UNIT_g  Accel bias uncertainty Z [g]
 * @param Mag_X_bias_U_UNIT_uT  Mag bias uncertainty X [uT]
 * @param Mag_Y_bias_U_UNIT_uT  Mag bias uncertainty Y [uT]
 * @param Mag_Z_bias_U_UNIT_uT  Mag bias uncertainty Z [uT]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_3dof_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Roll_UNIT_deg, float Pitch_UNIT_deg, float Yaw_UNIT_deg, float Roll_Rate_UNIT_deg_d_s, float Pitch_Rate_UNIT_deg_d_s, float Yaw_Rate_UNIT_deg_d_s, float RollU_UNIT_deg, float PitchU_UNIT_deg, float YawU_UNIT_deg, float q0_UNIT_none, float q1_UNIT_none, float q2_UNIT_none, float q3_UNIT_none, float Gyro_X_bias_UNIT_deg_d_s, float Gyro_Y_bias_UNIT_deg_d_s, float Gyro_Z_bias_UNIT_deg_d_s, float Accel_X_bias_UNIT_g, float Accel_Y_bias_UNIT_g, float Accel_Z_bias_UNIT_g, float Mag_X_bias_UNIT_uT, float Mag_Y_bias_UNIT_uT, float Mag_Z_bias_UNIT_uT, float U_Gyro_X_UNIT_deg_d_s, float U_Gyro_Y_UNIT_deg_d_s, float U_Gyro_Z_UNIT_deg_d_s, float Z_Mag_X_UNIT_uT, float Z_Mag_Y_UNIT_uT, float Z_Mag_Z_UNIT_uT, float Z_Acc_X_UNIT_g, float Z_Acc_Y_UNIT_g, float Z_Acc_Z_UNIT_g, float Y_Mag_X_UNIT_uT, float Y_Mag_Y_UNIT_uT, float Y_Mag_Z_UNIT_uT, float Y_Acc_X_UNIT_g, float Y_Acc_Y_UNIT_g, float Y_Acc_Z_UNIT_g, float q0_U_UNIT_none, float q1_U_UNIT_none, float q2_U_UNIT_none, float q3_U_UNIT_none, float Gyro_X_bias_U_UNIT_deg_d_s, float Gyro_Y_bias_U_UNIT_deg_d_s, float Gyro_Z_bias_U_UNIT_deg_d_s, float Accel_X_bias_U_UNIT_g, float Accel_Y_bias_U_UNIT_g, float Accel_Z_bias_U_UNIT_g, float Mag_X_bias_U_UNIT_uT, float Mag_Y_bias_U_UNIT_uT, float Mag_Z_bias_U_UNIT_uT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMU_3DoF_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Roll_UNIT_deg);
    _mav_put_float(buf, 16, Pitch_UNIT_deg);
    _mav_put_float(buf, 20, Yaw_UNIT_deg);
    _mav_put_float(buf, 24, Roll_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 28, Pitch_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 32, Yaw_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 36, RollU_UNIT_deg);
    _mav_put_float(buf, 40, PitchU_UNIT_deg);
    _mav_put_float(buf, 44, YawU_UNIT_deg);
    _mav_put_float(buf, 48, q0_UNIT_none);
    _mav_put_float(buf, 52, q1_UNIT_none);
    _mav_put_float(buf, 56, q2_UNIT_none);
    _mav_put_float(buf, 60, q3_UNIT_none);
    _mav_put_float(buf, 64, Gyro_X_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 68, Gyro_Y_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 72, Gyro_Z_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 76, Accel_X_bias_UNIT_g);
    _mav_put_float(buf, 80, Accel_Y_bias_UNIT_g);
    _mav_put_float(buf, 84, Accel_Z_bias_UNIT_g);
    _mav_put_float(buf, 88, Mag_X_bias_UNIT_uT);
    _mav_put_float(buf, 92, Mag_Y_bias_UNIT_uT);
    _mav_put_float(buf, 96, Mag_Z_bias_UNIT_uT);
    _mav_put_float(buf, 100, U_Gyro_X_UNIT_deg_d_s);
    _mav_put_float(buf, 104, U_Gyro_Y_UNIT_deg_d_s);
    _mav_put_float(buf, 108, U_Gyro_Z_UNIT_deg_d_s);
    _mav_put_float(buf, 112, Z_Mag_X_UNIT_uT);
    _mav_put_float(buf, 116, Z_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 120, Z_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 124, Z_Acc_X_UNIT_g);
    _mav_put_float(buf, 128, Z_Acc_Y_UNIT_g);
    _mav_put_float(buf, 132, Z_Acc_Z_UNIT_g);
    _mav_put_float(buf, 136, Y_Mag_X_UNIT_uT);
    _mav_put_float(buf, 140, Y_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 144, Y_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 148, Y_Acc_X_UNIT_g);
    _mav_put_float(buf, 152, Y_Acc_Y_UNIT_g);
    _mav_put_float(buf, 156, Y_Acc_Z_UNIT_g);
    _mav_put_float(buf, 160, q0_U_UNIT_none);
    _mav_put_float(buf, 164, q1_U_UNIT_none);
    _mav_put_float(buf, 168, q2_U_UNIT_none);
    _mav_put_float(buf, 172, q3_U_UNIT_none);
    _mav_put_float(buf, 176, Gyro_X_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 180, Gyro_Y_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 184, Gyro_Z_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 188, Accel_X_bias_U_UNIT_g);
    _mav_put_float(buf, 192, Accel_Y_bias_U_UNIT_g);
    _mav_put_float(buf, 196, Accel_Z_bias_U_UNIT_g);
    _mav_put_float(buf, 200, Mag_X_bias_U_UNIT_uT);
    _mav_put_float(buf, 204, Mag_Y_bias_U_UNIT_uT);
    _mav_put_float(buf, 208, Mag_Z_bias_U_UNIT_uT);
    _mav_put_int16_t(buf, 212, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_3DoF_LEN);
#else
    mavlink_imu_3dof_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Roll_UNIT_deg = Roll_UNIT_deg;
    packet.Pitch_UNIT_deg = Pitch_UNIT_deg;
    packet.Yaw_UNIT_deg = Yaw_UNIT_deg;
    packet.Roll_Rate_UNIT_deg_d_s = Roll_Rate_UNIT_deg_d_s;
    packet.Pitch_Rate_UNIT_deg_d_s = Pitch_Rate_UNIT_deg_d_s;
    packet.Yaw_Rate_UNIT_deg_d_s = Yaw_Rate_UNIT_deg_d_s;
    packet.RollU_UNIT_deg = RollU_UNIT_deg;
    packet.PitchU_UNIT_deg = PitchU_UNIT_deg;
    packet.YawU_UNIT_deg = YawU_UNIT_deg;
    packet.q0_UNIT_none = q0_UNIT_none;
    packet.q1_UNIT_none = q1_UNIT_none;
    packet.q2_UNIT_none = q2_UNIT_none;
    packet.q3_UNIT_none = q3_UNIT_none;
    packet.Gyro_X_bias_UNIT_deg_d_s = Gyro_X_bias_UNIT_deg_d_s;
    packet.Gyro_Y_bias_UNIT_deg_d_s = Gyro_Y_bias_UNIT_deg_d_s;
    packet.Gyro_Z_bias_UNIT_deg_d_s = Gyro_Z_bias_UNIT_deg_d_s;
    packet.Accel_X_bias_UNIT_g = Accel_X_bias_UNIT_g;
    packet.Accel_Y_bias_UNIT_g = Accel_Y_bias_UNIT_g;
    packet.Accel_Z_bias_UNIT_g = Accel_Z_bias_UNIT_g;
    packet.Mag_X_bias_UNIT_uT = Mag_X_bias_UNIT_uT;
    packet.Mag_Y_bias_UNIT_uT = Mag_Y_bias_UNIT_uT;
    packet.Mag_Z_bias_UNIT_uT = Mag_Z_bias_UNIT_uT;
    packet.U_Gyro_X_UNIT_deg_d_s = U_Gyro_X_UNIT_deg_d_s;
    packet.U_Gyro_Y_UNIT_deg_d_s = U_Gyro_Y_UNIT_deg_d_s;
    packet.U_Gyro_Z_UNIT_deg_d_s = U_Gyro_Z_UNIT_deg_d_s;
    packet.Z_Mag_X_UNIT_uT = Z_Mag_X_UNIT_uT;
    packet.Z_Mag_Y_UNIT_uT = Z_Mag_Y_UNIT_uT;
    packet.Z_Mag_Z_UNIT_uT = Z_Mag_Z_UNIT_uT;
    packet.Z_Acc_X_UNIT_g = Z_Acc_X_UNIT_g;
    packet.Z_Acc_Y_UNIT_g = Z_Acc_Y_UNIT_g;
    packet.Z_Acc_Z_UNIT_g = Z_Acc_Z_UNIT_g;
    packet.Y_Mag_X_UNIT_uT = Y_Mag_X_UNIT_uT;
    packet.Y_Mag_Y_UNIT_uT = Y_Mag_Y_UNIT_uT;
    packet.Y_Mag_Z_UNIT_uT = Y_Mag_Z_UNIT_uT;
    packet.Y_Acc_X_UNIT_g = Y_Acc_X_UNIT_g;
    packet.Y_Acc_Y_UNIT_g = Y_Acc_Y_UNIT_g;
    packet.Y_Acc_Z_UNIT_g = Y_Acc_Z_UNIT_g;
    packet.q0_U_UNIT_none = q0_U_UNIT_none;
    packet.q1_U_UNIT_none = q1_U_UNIT_none;
    packet.q2_U_UNIT_none = q2_U_UNIT_none;
    packet.q3_U_UNIT_none = q3_U_UNIT_none;
    packet.Gyro_X_bias_U_UNIT_deg_d_s = Gyro_X_bias_U_UNIT_deg_d_s;
    packet.Gyro_Y_bias_U_UNIT_deg_d_s = Gyro_Y_bias_U_UNIT_deg_d_s;
    packet.Gyro_Z_bias_U_UNIT_deg_d_s = Gyro_Z_bias_U_UNIT_deg_d_s;
    packet.Accel_X_bias_U_UNIT_g = Accel_X_bias_U_UNIT_g;
    packet.Accel_Y_bias_U_UNIT_g = Accel_Y_bias_U_UNIT_g;
    packet.Accel_Z_bias_U_UNIT_g = Accel_Z_bias_U_UNIT_g;
    packet.Mag_X_bias_U_UNIT_uT = Mag_X_bias_U_UNIT_uT;
    packet.Mag_Y_bias_U_UNIT_uT = Mag_Y_bias_U_UNIT_uT;
    packet.Mag_Z_bias_U_UNIT_uT = Mag_Z_bias_U_UNIT_uT;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_3DoF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMU_3DoF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
}

/**
 * @brief Pack a imu_3dof message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Roll_UNIT_deg  Roll angle estimate [deg]
 * @param Pitch_UNIT_deg  Pitch angle estimate [deg]
 * @param Yaw_UNIT_deg  Yaw angle estimate [deg]
 * @param Roll_Rate_UNIT_deg_d_s  Roll rate estimate [deg/s]
 * @param Pitch_Rate_UNIT_deg_d_s  Pitch rate estimate [deg/s]
 * @param Yaw_Rate_UNIT_deg_d_s  Yaw rate estimate [deg/s]
 * @param RollU_UNIT_deg  Roll angle uncertainty [deg]
 * @param PitchU_UNIT_deg  Pitch angle uncertainty [deg]
 * @param YawU_UNIT_deg  Yaw angle uncertainty [deg]
 * @param q0_UNIT_none  q0 estimate [-]
 * @param q1_UNIT_none  q1 estimate [-]
 * @param q2_UNIT_none  q2 estimate [-]
 * @param q3_UNIT_none  q3 estimate [-]
 * @param Gyro_X_bias_UNIT_deg_d_s  Gyro bias estimate X [deg/s]
 * @param Gyro_Y_bias_UNIT_deg_d_s  Gyro bias estimate Y [deg/s]
 * @param Gyro_Z_bias_UNIT_deg_d_s  Gyro bias estimate Z [deg/s]
 * @param Accel_X_bias_UNIT_g  Accel bias estimate X [g]
 * @param Accel_Y_bias_UNIT_g  Accel bias estimate Y [g]
 * @param Accel_Z_bias_UNIT_g  Accel bias estimate Z [g]
 * @param Mag_X_bias_UNIT_uT  Mag bias estimate X [uT]
 * @param Mag_Y_bias_UNIT_uT  Mag bias estimate Y [uT]
 * @param Mag_Z_bias_UNIT_uT  Mag bias estimate Z [uT]
 * @param U_Gyro_X_UNIT_deg_d_s  Gyro input X [deg/s]
 * @param U_Gyro_Y_UNIT_deg_d_s  Gyro input Y [deg/s]
 * @param U_Gyro_Z_UNIT_deg_d_s  Gyro input Z [deg/s]
 * @param Z_Mag_X_UNIT_uT  Mag measurement X [uT]
 * @param Z_Mag_Y_UNIT_uT  Mag measurement Y [uT]
 * @param Z_Mag_Z_UNIT_uT  Mag measurement Z [uT]
 * @param Z_Acc_X_UNIT_g  Acc measurement X [g]
 * @param Z_Acc_Y_UNIT_g  Acc measurement Y [g]
 * @param Z_Acc_Z_UNIT_g  Acc measurement Z [g]
 * @param Y_Mag_X_UNIT_uT  Mag predicted measurement X [uT]
 * @param Y_Mag_Y_UNIT_uT  Mag predicted measurement Y [uT]
 * @param Y_Mag_Z_UNIT_uT  Mag predicted measurement Z [uT]
 * @param Y_Acc_X_UNIT_g  Acc predicted measurement X [g]
 * @param Y_Acc_Y_UNIT_g  Acc predicted measurement Y [g]
 * @param Y_Acc_Z_UNIT_g  Acc predicted measurement Z [g]
 * @param q0_U_UNIT_none  q0 uncertainty [-]
 * @param q1_U_UNIT_none  q1 uncertainty [-]
 * @param q2_U_UNIT_none  q2 uncertainty [-]
 * @param q3_U_UNIT_none  q3 uncertainty [-]
 * @param Gyro_X_bias_U_UNIT_deg_d_s  Gyro bias uncertainty X [deg/s]
 * @param Gyro_Y_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Y [deg/s]
 * @param Gyro_Z_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Z [deg/s]
 * @param Accel_X_bias_U_UNIT_g  Accel bias uncertainty X [g]
 * @param Accel_Y_bias_U_UNIT_g  Accel bias uncertainty Y [g]
 * @param Accel_Z_bias_U_UNIT_g  Accel bias uncertainty Z [g]
 * @param Mag_X_bias_U_UNIT_uT  Mag bias uncertainty X [uT]
 * @param Mag_Y_bias_U_UNIT_uT  Mag bias uncertainty Y [uT]
 * @param Mag_Z_bias_U_UNIT_uT  Mag bias uncertainty Z [uT]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_3dof_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Sensor_time_UNIT_100us,uint32_t Sync_data_UNIT_variable,int16_t Sensor_processing_time_UNIT_us,uint32_t Recorded_time_UNIT_100us,float Roll_UNIT_deg,float Pitch_UNIT_deg,float Yaw_UNIT_deg,float Roll_Rate_UNIT_deg_d_s,float Pitch_Rate_UNIT_deg_d_s,float Yaw_Rate_UNIT_deg_d_s,float RollU_UNIT_deg,float PitchU_UNIT_deg,float YawU_UNIT_deg,float q0_UNIT_none,float q1_UNIT_none,float q2_UNIT_none,float q3_UNIT_none,float Gyro_X_bias_UNIT_deg_d_s,float Gyro_Y_bias_UNIT_deg_d_s,float Gyro_Z_bias_UNIT_deg_d_s,float Accel_X_bias_UNIT_g,float Accel_Y_bias_UNIT_g,float Accel_Z_bias_UNIT_g,float Mag_X_bias_UNIT_uT,float Mag_Y_bias_UNIT_uT,float Mag_Z_bias_UNIT_uT,float U_Gyro_X_UNIT_deg_d_s,float U_Gyro_Y_UNIT_deg_d_s,float U_Gyro_Z_UNIT_deg_d_s,float Z_Mag_X_UNIT_uT,float Z_Mag_Y_UNIT_uT,float Z_Mag_Z_UNIT_uT,float Z_Acc_X_UNIT_g,float Z_Acc_Y_UNIT_g,float Z_Acc_Z_UNIT_g,float Y_Mag_X_UNIT_uT,float Y_Mag_Y_UNIT_uT,float Y_Mag_Z_UNIT_uT,float Y_Acc_X_UNIT_g,float Y_Acc_Y_UNIT_g,float Y_Acc_Z_UNIT_g,float q0_U_UNIT_none,float q1_U_UNIT_none,float q2_U_UNIT_none,float q3_U_UNIT_none,float Gyro_X_bias_U_UNIT_deg_d_s,float Gyro_Y_bias_U_UNIT_deg_d_s,float Gyro_Z_bias_U_UNIT_deg_d_s,float Accel_X_bias_U_UNIT_g,float Accel_Y_bias_U_UNIT_g,float Accel_Z_bias_U_UNIT_g,float Mag_X_bias_U_UNIT_uT,float Mag_Y_bias_U_UNIT_uT,float Mag_Z_bias_U_UNIT_uT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMU_3DoF_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Roll_UNIT_deg);
    _mav_put_float(buf, 16, Pitch_UNIT_deg);
    _mav_put_float(buf, 20, Yaw_UNIT_deg);
    _mav_put_float(buf, 24, Roll_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 28, Pitch_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 32, Yaw_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 36, RollU_UNIT_deg);
    _mav_put_float(buf, 40, PitchU_UNIT_deg);
    _mav_put_float(buf, 44, YawU_UNIT_deg);
    _mav_put_float(buf, 48, q0_UNIT_none);
    _mav_put_float(buf, 52, q1_UNIT_none);
    _mav_put_float(buf, 56, q2_UNIT_none);
    _mav_put_float(buf, 60, q3_UNIT_none);
    _mav_put_float(buf, 64, Gyro_X_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 68, Gyro_Y_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 72, Gyro_Z_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 76, Accel_X_bias_UNIT_g);
    _mav_put_float(buf, 80, Accel_Y_bias_UNIT_g);
    _mav_put_float(buf, 84, Accel_Z_bias_UNIT_g);
    _mav_put_float(buf, 88, Mag_X_bias_UNIT_uT);
    _mav_put_float(buf, 92, Mag_Y_bias_UNIT_uT);
    _mav_put_float(buf, 96, Mag_Z_bias_UNIT_uT);
    _mav_put_float(buf, 100, U_Gyro_X_UNIT_deg_d_s);
    _mav_put_float(buf, 104, U_Gyro_Y_UNIT_deg_d_s);
    _mav_put_float(buf, 108, U_Gyro_Z_UNIT_deg_d_s);
    _mav_put_float(buf, 112, Z_Mag_X_UNIT_uT);
    _mav_put_float(buf, 116, Z_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 120, Z_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 124, Z_Acc_X_UNIT_g);
    _mav_put_float(buf, 128, Z_Acc_Y_UNIT_g);
    _mav_put_float(buf, 132, Z_Acc_Z_UNIT_g);
    _mav_put_float(buf, 136, Y_Mag_X_UNIT_uT);
    _mav_put_float(buf, 140, Y_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 144, Y_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 148, Y_Acc_X_UNIT_g);
    _mav_put_float(buf, 152, Y_Acc_Y_UNIT_g);
    _mav_put_float(buf, 156, Y_Acc_Z_UNIT_g);
    _mav_put_float(buf, 160, q0_U_UNIT_none);
    _mav_put_float(buf, 164, q1_U_UNIT_none);
    _mav_put_float(buf, 168, q2_U_UNIT_none);
    _mav_put_float(buf, 172, q3_U_UNIT_none);
    _mav_put_float(buf, 176, Gyro_X_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 180, Gyro_Y_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 184, Gyro_Z_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 188, Accel_X_bias_U_UNIT_g);
    _mav_put_float(buf, 192, Accel_Y_bias_U_UNIT_g);
    _mav_put_float(buf, 196, Accel_Z_bias_U_UNIT_g);
    _mav_put_float(buf, 200, Mag_X_bias_U_UNIT_uT);
    _mav_put_float(buf, 204, Mag_Y_bias_U_UNIT_uT);
    _mav_put_float(buf, 208, Mag_Z_bias_U_UNIT_uT);
    _mav_put_int16_t(buf, 212, Sensor_processing_time_UNIT_us);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_3DoF_LEN);
#else
    mavlink_imu_3dof_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Roll_UNIT_deg = Roll_UNIT_deg;
    packet.Pitch_UNIT_deg = Pitch_UNIT_deg;
    packet.Yaw_UNIT_deg = Yaw_UNIT_deg;
    packet.Roll_Rate_UNIT_deg_d_s = Roll_Rate_UNIT_deg_d_s;
    packet.Pitch_Rate_UNIT_deg_d_s = Pitch_Rate_UNIT_deg_d_s;
    packet.Yaw_Rate_UNIT_deg_d_s = Yaw_Rate_UNIT_deg_d_s;
    packet.RollU_UNIT_deg = RollU_UNIT_deg;
    packet.PitchU_UNIT_deg = PitchU_UNIT_deg;
    packet.YawU_UNIT_deg = YawU_UNIT_deg;
    packet.q0_UNIT_none = q0_UNIT_none;
    packet.q1_UNIT_none = q1_UNIT_none;
    packet.q2_UNIT_none = q2_UNIT_none;
    packet.q3_UNIT_none = q3_UNIT_none;
    packet.Gyro_X_bias_UNIT_deg_d_s = Gyro_X_bias_UNIT_deg_d_s;
    packet.Gyro_Y_bias_UNIT_deg_d_s = Gyro_Y_bias_UNIT_deg_d_s;
    packet.Gyro_Z_bias_UNIT_deg_d_s = Gyro_Z_bias_UNIT_deg_d_s;
    packet.Accel_X_bias_UNIT_g = Accel_X_bias_UNIT_g;
    packet.Accel_Y_bias_UNIT_g = Accel_Y_bias_UNIT_g;
    packet.Accel_Z_bias_UNIT_g = Accel_Z_bias_UNIT_g;
    packet.Mag_X_bias_UNIT_uT = Mag_X_bias_UNIT_uT;
    packet.Mag_Y_bias_UNIT_uT = Mag_Y_bias_UNIT_uT;
    packet.Mag_Z_bias_UNIT_uT = Mag_Z_bias_UNIT_uT;
    packet.U_Gyro_X_UNIT_deg_d_s = U_Gyro_X_UNIT_deg_d_s;
    packet.U_Gyro_Y_UNIT_deg_d_s = U_Gyro_Y_UNIT_deg_d_s;
    packet.U_Gyro_Z_UNIT_deg_d_s = U_Gyro_Z_UNIT_deg_d_s;
    packet.Z_Mag_X_UNIT_uT = Z_Mag_X_UNIT_uT;
    packet.Z_Mag_Y_UNIT_uT = Z_Mag_Y_UNIT_uT;
    packet.Z_Mag_Z_UNIT_uT = Z_Mag_Z_UNIT_uT;
    packet.Z_Acc_X_UNIT_g = Z_Acc_X_UNIT_g;
    packet.Z_Acc_Y_UNIT_g = Z_Acc_Y_UNIT_g;
    packet.Z_Acc_Z_UNIT_g = Z_Acc_Z_UNIT_g;
    packet.Y_Mag_X_UNIT_uT = Y_Mag_X_UNIT_uT;
    packet.Y_Mag_Y_UNIT_uT = Y_Mag_Y_UNIT_uT;
    packet.Y_Mag_Z_UNIT_uT = Y_Mag_Z_UNIT_uT;
    packet.Y_Acc_X_UNIT_g = Y_Acc_X_UNIT_g;
    packet.Y_Acc_Y_UNIT_g = Y_Acc_Y_UNIT_g;
    packet.Y_Acc_Z_UNIT_g = Y_Acc_Z_UNIT_g;
    packet.q0_U_UNIT_none = q0_U_UNIT_none;
    packet.q1_U_UNIT_none = q1_U_UNIT_none;
    packet.q2_U_UNIT_none = q2_U_UNIT_none;
    packet.q3_U_UNIT_none = q3_U_UNIT_none;
    packet.Gyro_X_bias_U_UNIT_deg_d_s = Gyro_X_bias_U_UNIT_deg_d_s;
    packet.Gyro_Y_bias_U_UNIT_deg_d_s = Gyro_Y_bias_U_UNIT_deg_d_s;
    packet.Gyro_Z_bias_U_UNIT_deg_d_s = Gyro_Z_bias_U_UNIT_deg_d_s;
    packet.Accel_X_bias_U_UNIT_g = Accel_X_bias_U_UNIT_g;
    packet.Accel_Y_bias_U_UNIT_g = Accel_Y_bias_U_UNIT_g;
    packet.Accel_Z_bias_U_UNIT_g = Accel_Z_bias_U_UNIT_g;
    packet.Mag_X_bias_U_UNIT_uT = Mag_X_bias_U_UNIT_uT;
    packet.Mag_Y_bias_U_UNIT_uT = Mag_Y_bias_U_UNIT_uT;
    packet.Mag_Z_bias_U_UNIT_uT = Mag_Z_bias_U_UNIT_uT;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_3DoF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMU_3DoF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
}

/**
 * @brief Encode a imu_3dof struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param imu_3dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_3dof_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_imu_3dof_t* imu_3dof)
{
    return mavlink_msg_imu_3dof_pack(system_id, component_id, msg, imu_3dof->Sensor_time_UNIT_100us, imu_3dof->Sync_data_UNIT_variable, imu_3dof->Sensor_processing_time_UNIT_us, imu_3dof->Recorded_time_UNIT_100us, imu_3dof->Roll_UNIT_deg, imu_3dof->Pitch_UNIT_deg, imu_3dof->Yaw_UNIT_deg, imu_3dof->Roll_Rate_UNIT_deg_d_s, imu_3dof->Pitch_Rate_UNIT_deg_d_s, imu_3dof->Yaw_Rate_UNIT_deg_d_s, imu_3dof->RollU_UNIT_deg, imu_3dof->PitchU_UNIT_deg, imu_3dof->YawU_UNIT_deg, imu_3dof->q0_UNIT_none, imu_3dof->q1_UNIT_none, imu_3dof->q2_UNIT_none, imu_3dof->q3_UNIT_none, imu_3dof->Gyro_X_bias_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_UNIT_deg_d_s, imu_3dof->Accel_X_bias_UNIT_g, imu_3dof->Accel_Y_bias_UNIT_g, imu_3dof->Accel_Z_bias_UNIT_g, imu_3dof->Mag_X_bias_UNIT_uT, imu_3dof->Mag_Y_bias_UNIT_uT, imu_3dof->Mag_Z_bias_UNIT_uT, imu_3dof->U_Gyro_X_UNIT_deg_d_s, imu_3dof->U_Gyro_Y_UNIT_deg_d_s, imu_3dof->U_Gyro_Z_UNIT_deg_d_s, imu_3dof->Z_Mag_X_UNIT_uT, imu_3dof->Z_Mag_Y_UNIT_uT, imu_3dof->Z_Mag_Z_UNIT_uT, imu_3dof->Z_Acc_X_UNIT_g, imu_3dof->Z_Acc_Y_UNIT_g, imu_3dof->Z_Acc_Z_UNIT_g, imu_3dof->Y_Mag_X_UNIT_uT, imu_3dof->Y_Mag_Y_UNIT_uT, imu_3dof->Y_Mag_Z_UNIT_uT, imu_3dof->Y_Acc_X_UNIT_g, imu_3dof->Y_Acc_Y_UNIT_g, imu_3dof->Y_Acc_Z_UNIT_g, imu_3dof->q0_U_UNIT_none, imu_3dof->q1_U_UNIT_none, imu_3dof->q2_U_UNIT_none, imu_3dof->q3_U_UNIT_none, imu_3dof->Gyro_X_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_U_UNIT_deg_d_s, imu_3dof->Accel_X_bias_U_UNIT_g, imu_3dof->Accel_Y_bias_U_UNIT_g, imu_3dof->Accel_Z_bias_U_UNIT_g, imu_3dof->Mag_X_bias_U_UNIT_uT, imu_3dof->Mag_Y_bias_U_UNIT_uT, imu_3dof->Mag_Z_bias_U_UNIT_uT);
}

/**
 * @brief Encode a imu_3dof struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param imu_3dof C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_3dof_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_imu_3dof_t* imu_3dof)
{
    return mavlink_msg_imu_3dof_pack_chan(system_id, component_id, chan, msg, imu_3dof->Sensor_time_UNIT_100us, imu_3dof->Sync_data_UNIT_variable, imu_3dof->Sensor_processing_time_UNIT_us, imu_3dof->Recorded_time_UNIT_100us, imu_3dof->Roll_UNIT_deg, imu_3dof->Pitch_UNIT_deg, imu_3dof->Yaw_UNIT_deg, imu_3dof->Roll_Rate_UNIT_deg_d_s, imu_3dof->Pitch_Rate_UNIT_deg_d_s, imu_3dof->Yaw_Rate_UNIT_deg_d_s, imu_3dof->RollU_UNIT_deg, imu_3dof->PitchU_UNIT_deg, imu_3dof->YawU_UNIT_deg, imu_3dof->q0_UNIT_none, imu_3dof->q1_UNIT_none, imu_3dof->q2_UNIT_none, imu_3dof->q3_UNIT_none, imu_3dof->Gyro_X_bias_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_UNIT_deg_d_s, imu_3dof->Accel_X_bias_UNIT_g, imu_3dof->Accel_Y_bias_UNIT_g, imu_3dof->Accel_Z_bias_UNIT_g, imu_3dof->Mag_X_bias_UNIT_uT, imu_3dof->Mag_Y_bias_UNIT_uT, imu_3dof->Mag_Z_bias_UNIT_uT, imu_3dof->U_Gyro_X_UNIT_deg_d_s, imu_3dof->U_Gyro_Y_UNIT_deg_d_s, imu_3dof->U_Gyro_Z_UNIT_deg_d_s, imu_3dof->Z_Mag_X_UNIT_uT, imu_3dof->Z_Mag_Y_UNIT_uT, imu_3dof->Z_Mag_Z_UNIT_uT, imu_3dof->Z_Acc_X_UNIT_g, imu_3dof->Z_Acc_Y_UNIT_g, imu_3dof->Z_Acc_Z_UNIT_g, imu_3dof->Y_Mag_X_UNIT_uT, imu_3dof->Y_Mag_Y_UNIT_uT, imu_3dof->Y_Mag_Z_UNIT_uT, imu_3dof->Y_Acc_X_UNIT_g, imu_3dof->Y_Acc_Y_UNIT_g, imu_3dof->Y_Acc_Z_UNIT_g, imu_3dof->q0_U_UNIT_none, imu_3dof->q1_U_UNIT_none, imu_3dof->q2_U_UNIT_none, imu_3dof->q3_U_UNIT_none, imu_3dof->Gyro_X_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_U_UNIT_deg_d_s, imu_3dof->Accel_X_bias_U_UNIT_g, imu_3dof->Accel_Y_bias_U_UNIT_g, imu_3dof->Accel_Z_bias_U_UNIT_g, imu_3dof->Mag_X_bias_U_UNIT_uT, imu_3dof->Mag_Y_bias_U_UNIT_uT, imu_3dof->Mag_Z_bias_U_UNIT_uT);
}

/**
 * @brief Send a imu_3dof message
 * @param chan MAVLink channel to send the message
 *
 * @param Sensor_time_UNIT_100us  Sensor time in 100 usec
 * @param Sync_data_UNIT_variable  Sync count or time in 100 usec
 * @param Sensor_processing_time_UNIT_us  Sensor processing time in usec, -1 for unknown
 * @param Recorded_time_UNIT_100us  recording timestamp in 100 usec
 * @param Roll_UNIT_deg  Roll angle estimate [deg]
 * @param Pitch_UNIT_deg  Pitch angle estimate [deg]
 * @param Yaw_UNIT_deg  Yaw angle estimate [deg]
 * @param Roll_Rate_UNIT_deg_d_s  Roll rate estimate [deg/s]
 * @param Pitch_Rate_UNIT_deg_d_s  Pitch rate estimate [deg/s]
 * @param Yaw_Rate_UNIT_deg_d_s  Yaw rate estimate [deg/s]
 * @param RollU_UNIT_deg  Roll angle uncertainty [deg]
 * @param PitchU_UNIT_deg  Pitch angle uncertainty [deg]
 * @param YawU_UNIT_deg  Yaw angle uncertainty [deg]
 * @param q0_UNIT_none  q0 estimate [-]
 * @param q1_UNIT_none  q1 estimate [-]
 * @param q2_UNIT_none  q2 estimate [-]
 * @param q3_UNIT_none  q3 estimate [-]
 * @param Gyro_X_bias_UNIT_deg_d_s  Gyro bias estimate X [deg/s]
 * @param Gyro_Y_bias_UNIT_deg_d_s  Gyro bias estimate Y [deg/s]
 * @param Gyro_Z_bias_UNIT_deg_d_s  Gyro bias estimate Z [deg/s]
 * @param Accel_X_bias_UNIT_g  Accel bias estimate X [g]
 * @param Accel_Y_bias_UNIT_g  Accel bias estimate Y [g]
 * @param Accel_Z_bias_UNIT_g  Accel bias estimate Z [g]
 * @param Mag_X_bias_UNIT_uT  Mag bias estimate X [uT]
 * @param Mag_Y_bias_UNIT_uT  Mag bias estimate Y [uT]
 * @param Mag_Z_bias_UNIT_uT  Mag bias estimate Z [uT]
 * @param U_Gyro_X_UNIT_deg_d_s  Gyro input X [deg/s]
 * @param U_Gyro_Y_UNIT_deg_d_s  Gyro input Y [deg/s]
 * @param U_Gyro_Z_UNIT_deg_d_s  Gyro input Z [deg/s]
 * @param Z_Mag_X_UNIT_uT  Mag measurement X [uT]
 * @param Z_Mag_Y_UNIT_uT  Mag measurement Y [uT]
 * @param Z_Mag_Z_UNIT_uT  Mag measurement Z [uT]
 * @param Z_Acc_X_UNIT_g  Acc measurement X [g]
 * @param Z_Acc_Y_UNIT_g  Acc measurement Y [g]
 * @param Z_Acc_Z_UNIT_g  Acc measurement Z [g]
 * @param Y_Mag_X_UNIT_uT  Mag predicted measurement X [uT]
 * @param Y_Mag_Y_UNIT_uT  Mag predicted measurement Y [uT]
 * @param Y_Mag_Z_UNIT_uT  Mag predicted measurement Z [uT]
 * @param Y_Acc_X_UNIT_g  Acc predicted measurement X [g]
 * @param Y_Acc_Y_UNIT_g  Acc predicted measurement Y [g]
 * @param Y_Acc_Z_UNIT_g  Acc predicted measurement Z [g]
 * @param q0_U_UNIT_none  q0 uncertainty [-]
 * @param q1_U_UNIT_none  q1 uncertainty [-]
 * @param q2_U_UNIT_none  q2 uncertainty [-]
 * @param q3_U_UNIT_none  q3 uncertainty [-]
 * @param Gyro_X_bias_U_UNIT_deg_d_s  Gyro bias uncertainty X [deg/s]
 * @param Gyro_Y_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Y [deg/s]
 * @param Gyro_Z_bias_U_UNIT_deg_d_s  Gyro bias uncertainty Z [deg/s]
 * @param Accel_X_bias_U_UNIT_g  Accel bias uncertainty X [g]
 * @param Accel_Y_bias_U_UNIT_g  Accel bias uncertainty Y [g]
 * @param Accel_Z_bias_U_UNIT_g  Accel bias uncertainty Z [g]
 * @param Mag_X_bias_U_UNIT_uT  Mag bias uncertainty X [uT]
 * @param Mag_Y_bias_U_UNIT_uT  Mag bias uncertainty Y [uT]
 * @param Mag_Z_bias_U_UNIT_uT  Mag bias uncertainty Z [uT]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_imu_3dof_send(mavlink_channel_t chan, uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Roll_UNIT_deg, float Pitch_UNIT_deg, float Yaw_UNIT_deg, float Roll_Rate_UNIT_deg_d_s, float Pitch_Rate_UNIT_deg_d_s, float Yaw_Rate_UNIT_deg_d_s, float RollU_UNIT_deg, float PitchU_UNIT_deg, float YawU_UNIT_deg, float q0_UNIT_none, float q1_UNIT_none, float q2_UNIT_none, float q3_UNIT_none, float Gyro_X_bias_UNIT_deg_d_s, float Gyro_Y_bias_UNIT_deg_d_s, float Gyro_Z_bias_UNIT_deg_d_s, float Accel_X_bias_UNIT_g, float Accel_Y_bias_UNIT_g, float Accel_Z_bias_UNIT_g, float Mag_X_bias_UNIT_uT, float Mag_Y_bias_UNIT_uT, float Mag_Z_bias_UNIT_uT, float U_Gyro_X_UNIT_deg_d_s, float U_Gyro_Y_UNIT_deg_d_s, float U_Gyro_Z_UNIT_deg_d_s, float Z_Mag_X_UNIT_uT, float Z_Mag_Y_UNIT_uT, float Z_Mag_Z_UNIT_uT, float Z_Acc_X_UNIT_g, float Z_Acc_Y_UNIT_g, float Z_Acc_Z_UNIT_g, float Y_Mag_X_UNIT_uT, float Y_Mag_Y_UNIT_uT, float Y_Mag_Z_UNIT_uT, float Y_Acc_X_UNIT_g, float Y_Acc_Y_UNIT_g, float Y_Acc_Z_UNIT_g, float q0_U_UNIT_none, float q1_U_UNIT_none, float q2_U_UNIT_none, float q3_U_UNIT_none, float Gyro_X_bias_U_UNIT_deg_d_s, float Gyro_Y_bias_U_UNIT_deg_d_s, float Gyro_Z_bias_U_UNIT_deg_d_s, float Accel_X_bias_U_UNIT_g, float Accel_Y_bias_U_UNIT_g, float Accel_Z_bias_U_UNIT_g, float Mag_X_bias_U_UNIT_uT, float Mag_Y_bias_U_UNIT_uT, float Mag_Z_bias_U_UNIT_uT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMU_3DoF_LEN];
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Roll_UNIT_deg);
    _mav_put_float(buf, 16, Pitch_UNIT_deg);
    _mav_put_float(buf, 20, Yaw_UNIT_deg);
    _mav_put_float(buf, 24, Roll_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 28, Pitch_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 32, Yaw_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 36, RollU_UNIT_deg);
    _mav_put_float(buf, 40, PitchU_UNIT_deg);
    _mav_put_float(buf, 44, YawU_UNIT_deg);
    _mav_put_float(buf, 48, q0_UNIT_none);
    _mav_put_float(buf, 52, q1_UNIT_none);
    _mav_put_float(buf, 56, q2_UNIT_none);
    _mav_put_float(buf, 60, q3_UNIT_none);
    _mav_put_float(buf, 64, Gyro_X_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 68, Gyro_Y_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 72, Gyro_Z_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 76, Accel_X_bias_UNIT_g);
    _mav_put_float(buf, 80, Accel_Y_bias_UNIT_g);
    _mav_put_float(buf, 84, Accel_Z_bias_UNIT_g);
    _mav_put_float(buf, 88, Mag_X_bias_UNIT_uT);
    _mav_put_float(buf, 92, Mag_Y_bias_UNIT_uT);
    _mav_put_float(buf, 96, Mag_Z_bias_UNIT_uT);
    _mav_put_float(buf, 100, U_Gyro_X_UNIT_deg_d_s);
    _mav_put_float(buf, 104, U_Gyro_Y_UNIT_deg_d_s);
    _mav_put_float(buf, 108, U_Gyro_Z_UNIT_deg_d_s);
    _mav_put_float(buf, 112, Z_Mag_X_UNIT_uT);
    _mav_put_float(buf, 116, Z_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 120, Z_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 124, Z_Acc_X_UNIT_g);
    _mav_put_float(buf, 128, Z_Acc_Y_UNIT_g);
    _mav_put_float(buf, 132, Z_Acc_Z_UNIT_g);
    _mav_put_float(buf, 136, Y_Mag_X_UNIT_uT);
    _mav_put_float(buf, 140, Y_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 144, Y_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 148, Y_Acc_X_UNIT_g);
    _mav_put_float(buf, 152, Y_Acc_Y_UNIT_g);
    _mav_put_float(buf, 156, Y_Acc_Z_UNIT_g);
    _mav_put_float(buf, 160, q0_U_UNIT_none);
    _mav_put_float(buf, 164, q1_U_UNIT_none);
    _mav_put_float(buf, 168, q2_U_UNIT_none);
    _mav_put_float(buf, 172, q3_U_UNIT_none);
    _mav_put_float(buf, 176, Gyro_X_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 180, Gyro_Y_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 184, Gyro_Z_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 188, Accel_X_bias_U_UNIT_g);
    _mav_put_float(buf, 192, Accel_Y_bias_U_UNIT_g);
    _mav_put_float(buf, 196, Accel_Z_bias_U_UNIT_g);
    _mav_put_float(buf, 200, Mag_X_bias_U_UNIT_uT);
    _mav_put_float(buf, 204, Mag_Y_bias_U_UNIT_uT);
    _mav_put_float(buf, 208, Mag_Z_bias_U_UNIT_uT);
    _mav_put_int16_t(buf, 212, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_3DoF, buf, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
#else
    mavlink_imu_3dof_t packet;
    packet.Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet.Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet.Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet.Roll_UNIT_deg = Roll_UNIT_deg;
    packet.Pitch_UNIT_deg = Pitch_UNIT_deg;
    packet.Yaw_UNIT_deg = Yaw_UNIT_deg;
    packet.Roll_Rate_UNIT_deg_d_s = Roll_Rate_UNIT_deg_d_s;
    packet.Pitch_Rate_UNIT_deg_d_s = Pitch_Rate_UNIT_deg_d_s;
    packet.Yaw_Rate_UNIT_deg_d_s = Yaw_Rate_UNIT_deg_d_s;
    packet.RollU_UNIT_deg = RollU_UNIT_deg;
    packet.PitchU_UNIT_deg = PitchU_UNIT_deg;
    packet.YawU_UNIT_deg = YawU_UNIT_deg;
    packet.q0_UNIT_none = q0_UNIT_none;
    packet.q1_UNIT_none = q1_UNIT_none;
    packet.q2_UNIT_none = q2_UNIT_none;
    packet.q3_UNIT_none = q3_UNIT_none;
    packet.Gyro_X_bias_UNIT_deg_d_s = Gyro_X_bias_UNIT_deg_d_s;
    packet.Gyro_Y_bias_UNIT_deg_d_s = Gyro_Y_bias_UNIT_deg_d_s;
    packet.Gyro_Z_bias_UNIT_deg_d_s = Gyro_Z_bias_UNIT_deg_d_s;
    packet.Accel_X_bias_UNIT_g = Accel_X_bias_UNIT_g;
    packet.Accel_Y_bias_UNIT_g = Accel_Y_bias_UNIT_g;
    packet.Accel_Z_bias_UNIT_g = Accel_Z_bias_UNIT_g;
    packet.Mag_X_bias_UNIT_uT = Mag_X_bias_UNIT_uT;
    packet.Mag_Y_bias_UNIT_uT = Mag_Y_bias_UNIT_uT;
    packet.Mag_Z_bias_UNIT_uT = Mag_Z_bias_UNIT_uT;
    packet.U_Gyro_X_UNIT_deg_d_s = U_Gyro_X_UNIT_deg_d_s;
    packet.U_Gyro_Y_UNIT_deg_d_s = U_Gyro_Y_UNIT_deg_d_s;
    packet.U_Gyro_Z_UNIT_deg_d_s = U_Gyro_Z_UNIT_deg_d_s;
    packet.Z_Mag_X_UNIT_uT = Z_Mag_X_UNIT_uT;
    packet.Z_Mag_Y_UNIT_uT = Z_Mag_Y_UNIT_uT;
    packet.Z_Mag_Z_UNIT_uT = Z_Mag_Z_UNIT_uT;
    packet.Z_Acc_X_UNIT_g = Z_Acc_X_UNIT_g;
    packet.Z_Acc_Y_UNIT_g = Z_Acc_Y_UNIT_g;
    packet.Z_Acc_Z_UNIT_g = Z_Acc_Z_UNIT_g;
    packet.Y_Mag_X_UNIT_uT = Y_Mag_X_UNIT_uT;
    packet.Y_Mag_Y_UNIT_uT = Y_Mag_Y_UNIT_uT;
    packet.Y_Mag_Z_UNIT_uT = Y_Mag_Z_UNIT_uT;
    packet.Y_Acc_X_UNIT_g = Y_Acc_X_UNIT_g;
    packet.Y_Acc_Y_UNIT_g = Y_Acc_Y_UNIT_g;
    packet.Y_Acc_Z_UNIT_g = Y_Acc_Z_UNIT_g;
    packet.q0_U_UNIT_none = q0_U_UNIT_none;
    packet.q1_U_UNIT_none = q1_U_UNIT_none;
    packet.q2_U_UNIT_none = q2_U_UNIT_none;
    packet.q3_U_UNIT_none = q3_U_UNIT_none;
    packet.Gyro_X_bias_U_UNIT_deg_d_s = Gyro_X_bias_U_UNIT_deg_d_s;
    packet.Gyro_Y_bias_U_UNIT_deg_d_s = Gyro_Y_bias_U_UNIT_deg_d_s;
    packet.Gyro_Z_bias_U_UNIT_deg_d_s = Gyro_Z_bias_U_UNIT_deg_d_s;
    packet.Accel_X_bias_U_UNIT_g = Accel_X_bias_U_UNIT_g;
    packet.Accel_Y_bias_U_UNIT_g = Accel_Y_bias_U_UNIT_g;
    packet.Accel_Z_bias_U_UNIT_g = Accel_Z_bias_U_UNIT_g;
    packet.Mag_X_bias_U_UNIT_uT = Mag_X_bias_U_UNIT_uT;
    packet.Mag_Y_bias_U_UNIT_uT = Mag_Y_bias_U_UNIT_uT;
    packet.Mag_Z_bias_U_UNIT_uT = Mag_Z_bias_U_UNIT_uT;
    packet.Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_3DoF, (const char *)&packet, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
#endif
}

/**
 * @brief Send a imu_3dof message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_imu_3dof_send_struct(mavlink_channel_t chan, const mavlink_imu_3dof_t* imu_3dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_imu_3dof_send(chan, imu_3dof->Sensor_time_UNIT_100us, imu_3dof->Sync_data_UNIT_variable, imu_3dof->Sensor_processing_time_UNIT_us, imu_3dof->Recorded_time_UNIT_100us, imu_3dof->Roll_UNIT_deg, imu_3dof->Pitch_UNIT_deg, imu_3dof->Yaw_UNIT_deg, imu_3dof->Roll_Rate_UNIT_deg_d_s, imu_3dof->Pitch_Rate_UNIT_deg_d_s, imu_3dof->Yaw_Rate_UNIT_deg_d_s, imu_3dof->RollU_UNIT_deg, imu_3dof->PitchU_UNIT_deg, imu_3dof->YawU_UNIT_deg, imu_3dof->q0_UNIT_none, imu_3dof->q1_UNIT_none, imu_3dof->q2_UNIT_none, imu_3dof->q3_UNIT_none, imu_3dof->Gyro_X_bias_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_UNIT_deg_d_s, imu_3dof->Accel_X_bias_UNIT_g, imu_3dof->Accel_Y_bias_UNIT_g, imu_3dof->Accel_Z_bias_UNIT_g, imu_3dof->Mag_X_bias_UNIT_uT, imu_3dof->Mag_Y_bias_UNIT_uT, imu_3dof->Mag_Z_bias_UNIT_uT, imu_3dof->U_Gyro_X_UNIT_deg_d_s, imu_3dof->U_Gyro_Y_UNIT_deg_d_s, imu_3dof->U_Gyro_Z_UNIT_deg_d_s, imu_3dof->Z_Mag_X_UNIT_uT, imu_3dof->Z_Mag_Y_UNIT_uT, imu_3dof->Z_Mag_Z_UNIT_uT, imu_3dof->Z_Acc_X_UNIT_g, imu_3dof->Z_Acc_Y_UNIT_g, imu_3dof->Z_Acc_Z_UNIT_g, imu_3dof->Y_Mag_X_UNIT_uT, imu_3dof->Y_Mag_Y_UNIT_uT, imu_3dof->Y_Mag_Z_UNIT_uT, imu_3dof->Y_Acc_X_UNIT_g, imu_3dof->Y_Acc_Y_UNIT_g, imu_3dof->Y_Acc_Z_UNIT_g, imu_3dof->q0_U_UNIT_none, imu_3dof->q1_U_UNIT_none, imu_3dof->q2_U_UNIT_none, imu_3dof->q3_U_UNIT_none, imu_3dof->Gyro_X_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Y_bias_U_UNIT_deg_d_s, imu_3dof->Gyro_Z_bias_U_UNIT_deg_d_s, imu_3dof->Accel_X_bias_U_UNIT_g, imu_3dof->Accel_Y_bias_U_UNIT_g, imu_3dof->Accel_Z_bias_U_UNIT_g, imu_3dof->Mag_X_bias_U_UNIT_uT, imu_3dof->Mag_Y_bias_U_UNIT_uT, imu_3dof->Mag_Z_bias_U_UNIT_uT);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_3DoF, (const char *)imu_3dof, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
#endif
}

#if MAVLINK_MSG_ID_IMU_3DoF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_imu_3dof_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Sensor_time_UNIT_100us, uint32_t Sync_data_UNIT_variable, int16_t Sensor_processing_time_UNIT_us, uint32_t Recorded_time_UNIT_100us, float Roll_UNIT_deg, float Pitch_UNIT_deg, float Yaw_UNIT_deg, float Roll_Rate_UNIT_deg_d_s, float Pitch_Rate_UNIT_deg_d_s, float Yaw_Rate_UNIT_deg_d_s, float RollU_UNIT_deg, float PitchU_UNIT_deg, float YawU_UNIT_deg, float q0_UNIT_none, float q1_UNIT_none, float q2_UNIT_none, float q3_UNIT_none, float Gyro_X_bias_UNIT_deg_d_s, float Gyro_Y_bias_UNIT_deg_d_s, float Gyro_Z_bias_UNIT_deg_d_s, float Accel_X_bias_UNIT_g, float Accel_Y_bias_UNIT_g, float Accel_Z_bias_UNIT_g, float Mag_X_bias_UNIT_uT, float Mag_Y_bias_UNIT_uT, float Mag_Z_bias_UNIT_uT, float U_Gyro_X_UNIT_deg_d_s, float U_Gyro_Y_UNIT_deg_d_s, float U_Gyro_Z_UNIT_deg_d_s, float Z_Mag_X_UNIT_uT, float Z_Mag_Y_UNIT_uT, float Z_Mag_Z_UNIT_uT, float Z_Acc_X_UNIT_g, float Z_Acc_Y_UNIT_g, float Z_Acc_Z_UNIT_g, float Y_Mag_X_UNIT_uT, float Y_Mag_Y_UNIT_uT, float Y_Mag_Z_UNIT_uT, float Y_Acc_X_UNIT_g, float Y_Acc_Y_UNIT_g, float Y_Acc_Z_UNIT_g, float q0_U_UNIT_none, float q1_U_UNIT_none, float q2_U_UNIT_none, float q3_U_UNIT_none, float Gyro_X_bias_U_UNIT_deg_d_s, float Gyro_Y_bias_U_UNIT_deg_d_s, float Gyro_Z_bias_U_UNIT_deg_d_s, float Accel_X_bias_U_UNIT_g, float Accel_Y_bias_U_UNIT_g, float Accel_Z_bias_U_UNIT_g, float Mag_X_bias_U_UNIT_uT, float Mag_Y_bias_U_UNIT_uT, float Mag_Z_bias_U_UNIT_uT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Sensor_time_UNIT_100us);
    _mav_put_uint32_t(buf, 4, Sync_data_UNIT_variable);
    _mav_put_uint32_t(buf, 8, Recorded_time_UNIT_100us);
    _mav_put_float(buf, 12, Roll_UNIT_deg);
    _mav_put_float(buf, 16, Pitch_UNIT_deg);
    _mav_put_float(buf, 20, Yaw_UNIT_deg);
    _mav_put_float(buf, 24, Roll_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 28, Pitch_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 32, Yaw_Rate_UNIT_deg_d_s);
    _mav_put_float(buf, 36, RollU_UNIT_deg);
    _mav_put_float(buf, 40, PitchU_UNIT_deg);
    _mav_put_float(buf, 44, YawU_UNIT_deg);
    _mav_put_float(buf, 48, q0_UNIT_none);
    _mav_put_float(buf, 52, q1_UNIT_none);
    _mav_put_float(buf, 56, q2_UNIT_none);
    _mav_put_float(buf, 60, q3_UNIT_none);
    _mav_put_float(buf, 64, Gyro_X_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 68, Gyro_Y_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 72, Gyro_Z_bias_UNIT_deg_d_s);
    _mav_put_float(buf, 76, Accel_X_bias_UNIT_g);
    _mav_put_float(buf, 80, Accel_Y_bias_UNIT_g);
    _mav_put_float(buf, 84, Accel_Z_bias_UNIT_g);
    _mav_put_float(buf, 88, Mag_X_bias_UNIT_uT);
    _mav_put_float(buf, 92, Mag_Y_bias_UNIT_uT);
    _mav_put_float(buf, 96, Mag_Z_bias_UNIT_uT);
    _mav_put_float(buf, 100, U_Gyro_X_UNIT_deg_d_s);
    _mav_put_float(buf, 104, U_Gyro_Y_UNIT_deg_d_s);
    _mav_put_float(buf, 108, U_Gyro_Z_UNIT_deg_d_s);
    _mav_put_float(buf, 112, Z_Mag_X_UNIT_uT);
    _mav_put_float(buf, 116, Z_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 120, Z_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 124, Z_Acc_X_UNIT_g);
    _mav_put_float(buf, 128, Z_Acc_Y_UNIT_g);
    _mav_put_float(buf, 132, Z_Acc_Z_UNIT_g);
    _mav_put_float(buf, 136, Y_Mag_X_UNIT_uT);
    _mav_put_float(buf, 140, Y_Mag_Y_UNIT_uT);
    _mav_put_float(buf, 144, Y_Mag_Z_UNIT_uT);
    _mav_put_float(buf, 148, Y_Acc_X_UNIT_g);
    _mav_put_float(buf, 152, Y_Acc_Y_UNIT_g);
    _mav_put_float(buf, 156, Y_Acc_Z_UNIT_g);
    _mav_put_float(buf, 160, q0_U_UNIT_none);
    _mav_put_float(buf, 164, q1_U_UNIT_none);
    _mav_put_float(buf, 168, q2_U_UNIT_none);
    _mav_put_float(buf, 172, q3_U_UNIT_none);
    _mav_put_float(buf, 176, Gyro_X_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 180, Gyro_Y_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 184, Gyro_Z_bias_U_UNIT_deg_d_s);
    _mav_put_float(buf, 188, Accel_X_bias_U_UNIT_g);
    _mav_put_float(buf, 192, Accel_Y_bias_U_UNIT_g);
    _mav_put_float(buf, 196, Accel_Z_bias_U_UNIT_g);
    _mav_put_float(buf, 200, Mag_X_bias_U_UNIT_uT);
    _mav_put_float(buf, 204, Mag_Y_bias_U_UNIT_uT);
    _mav_put_float(buf, 208, Mag_Z_bias_U_UNIT_uT);
    _mav_put_int16_t(buf, 212, Sensor_processing_time_UNIT_us);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_3DoF, buf, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
#else
    mavlink_imu_3dof_t *packet = (mavlink_imu_3dof_t *)msgbuf;
    packet->Sensor_time_UNIT_100us = Sensor_time_UNIT_100us;
    packet->Sync_data_UNIT_variable = Sync_data_UNIT_variable;
    packet->Recorded_time_UNIT_100us = Recorded_time_UNIT_100us;
    packet->Roll_UNIT_deg = Roll_UNIT_deg;
    packet->Pitch_UNIT_deg = Pitch_UNIT_deg;
    packet->Yaw_UNIT_deg = Yaw_UNIT_deg;
    packet->Roll_Rate_UNIT_deg_d_s = Roll_Rate_UNIT_deg_d_s;
    packet->Pitch_Rate_UNIT_deg_d_s = Pitch_Rate_UNIT_deg_d_s;
    packet->Yaw_Rate_UNIT_deg_d_s = Yaw_Rate_UNIT_deg_d_s;
    packet->RollU_UNIT_deg = RollU_UNIT_deg;
    packet->PitchU_UNIT_deg = PitchU_UNIT_deg;
    packet->YawU_UNIT_deg = YawU_UNIT_deg;
    packet->q0_UNIT_none = q0_UNIT_none;
    packet->q1_UNIT_none = q1_UNIT_none;
    packet->q2_UNIT_none = q2_UNIT_none;
    packet->q3_UNIT_none = q3_UNIT_none;
    packet->Gyro_X_bias_UNIT_deg_d_s = Gyro_X_bias_UNIT_deg_d_s;
    packet->Gyro_Y_bias_UNIT_deg_d_s = Gyro_Y_bias_UNIT_deg_d_s;
    packet->Gyro_Z_bias_UNIT_deg_d_s = Gyro_Z_bias_UNIT_deg_d_s;
    packet->Accel_X_bias_UNIT_g = Accel_X_bias_UNIT_g;
    packet->Accel_Y_bias_UNIT_g = Accel_Y_bias_UNIT_g;
    packet->Accel_Z_bias_UNIT_g = Accel_Z_bias_UNIT_g;
    packet->Mag_X_bias_UNIT_uT = Mag_X_bias_UNIT_uT;
    packet->Mag_Y_bias_UNIT_uT = Mag_Y_bias_UNIT_uT;
    packet->Mag_Z_bias_UNIT_uT = Mag_Z_bias_UNIT_uT;
    packet->U_Gyro_X_UNIT_deg_d_s = U_Gyro_X_UNIT_deg_d_s;
    packet->U_Gyro_Y_UNIT_deg_d_s = U_Gyro_Y_UNIT_deg_d_s;
    packet->U_Gyro_Z_UNIT_deg_d_s = U_Gyro_Z_UNIT_deg_d_s;
    packet->Z_Mag_X_UNIT_uT = Z_Mag_X_UNIT_uT;
    packet->Z_Mag_Y_UNIT_uT = Z_Mag_Y_UNIT_uT;
    packet->Z_Mag_Z_UNIT_uT = Z_Mag_Z_UNIT_uT;
    packet->Z_Acc_X_UNIT_g = Z_Acc_X_UNIT_g;
    packet->Z_Acc_Y_UNIT_g = Z_Acc_Y_UNIT_g;
    packet->Z_Acc_Z_UNIT_g = Z_Acc_Z_UNIT_g;
    packet->Y_Mag_X_UNIT_uT = Y_Mag_X_UNIT_uT;
    packet->Y_Mag_Y_UNIT_uT = Y_Mag_Y_UNIT_uT;
    packet->Y_Mag_Z_UNIT_uT = Y_Mag_Z_UNIT_uT;
    packet->Y_Acc_X_UNIT_g = Y_Acc_X_UNIT_g;
    packet->Y_Acc_Y_UNIT_g = Y_Acc_Y_UNIT_g;
    packet->Y_Acc_Z_UNIT_g = Y_Acc_Z_UNIT_g;
    packet->q0_U_UNIT_none = q0_U_UNIT_none;
    packet->q1_U_UNIT_none = q1_U_UNIT_none;
    packet->q2_U_UNIT_none = q2_U_UNIT_none;
    packet->q3_U_UNIT_none = q3_U_UNIT_none;
    packet->Gyro_X_bias_U_UNIT_deg_d_s = Gyro_X_bias_U_UNIT_deg_d_s;
    packet->Gyro_Y_bias_U_UNIT_deg_d_s = Gyro_Y_bias_U_UNIT_deg_d_s;
    packet->Gyro_Z_bias_U_UNIT_deg_d_s = Gyro_Z_bias_U_UNIT_deg_d_s;
    packet->Accel_X_bias_U_UNIT_g = Accel_X_bias_U_UNIT_g;
    packet->Accel_Y_bias_U_UNIT_g = Accel_Y_bias_U_UNIT_g;
    packet->Accel_Z_bias_U_UNIT_g = Accel_Z_bias_U_UNIT_g;
    packet->Mag_X_bias_U_UNIT_uT = Mag_X_bias_U_UNIT_uT;
    packet->Mag_Y_bias_U_UNIT_uT = Mag_Y_bias_U_UNIT_uT;
    packet->Mag_Z_bias_U_UNIT_uT = Mag_Z_bias_U_UNIT_uT;
    packet->Sensor_processing_time_UNIT_us = Sensor_processing_time_UNIT_us;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_3DoF, (const char *)packet, MAVLINK_MSG_ID_IMU_3DoF_MIN_LEN, MAVLINK_MSG_ID_IMU_3DoF_LEN, MAVLINK_MSG_ID_IMU_3DoF_CRC);
#endif
}
#endif

#endif

// MESSAGE IMU_3DoF UNPACKING


/**
 * @brief Get field Sensor_time_UNIT_100us from imu_3dof message
 *
 * @return  Sensor time in 100 usec
 */
static inline uint32_t mavlink_msg_imu_3dof_get_Sensor_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Sync_data_UNIT_variable from imu_3dof message
 *
 * @return  Sync count or time in 100 usec
 */
static inline uint32_t mavlink_msg_imu_3dof_get_Sync_data_UNIT_variable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field Sensor_processing_time_UNIT_us from imu_3dof message
 *
 * @return  Sensor processing time in usec, -1 for unknown
 */
static inline int16_t mavlink_msg_imu_3dof_get_Sensor_processing_time_UNIT_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  212);
}

/**
 * @brief Get field Recorded_time_UNIT_100us from imu_3dof message
 *
 * @return  recording timestamp in 100 usec
 */
static inline uint32_t mavlink_msg_imu_3dof_get_Recorded_time_UNIT_100us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field Roll_UNIT_deg from imu_3dof message
 *
 * @return  Roll angle estimate [deg]
 */
static inline float mavlink_msg_imu_3dof_get_Roll_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Pitch_UNIT_deg from imu_3dof message
 *
 * @return  Pitch angle estimate [deg]
 */
static inline float mavlink_msg_imu_3dof_get_Pitch_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Yaw_UNIT_deg from imu_3dof message
 *
 * @return  Yaw angle estimate [deg]
 */
static inline float mavlink_msg_imu_3dof_get_Yaw_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field Roll_Rate_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Roll rate estimate [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Roll_Rate_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field Pitch_Rate_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Pitch rate estimate [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Pitch_Rate_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field Yaw_Rate_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Yaw rate estimate [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Yaw_Rate_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field RollU_UNIT_deg from imu_3dof message
 *
 * @return  Roll angle uncertainty [deg]
 */
static inline float mavlink_msg_imu_3dof_get_RollU_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field PitchU_UNIT_deg from imu_3dof message
 *
 * @return  Pitch angle uncertainty [deg]
 */
static inline float mavlink_msg_imu_3dof_get_PitchU_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field YawU_UNIT_deg from imu_3dof message
 *
 * @return  Yaw angle uncertainty [deg]
 */
static inline float mavlink_msg_imu_3dof_get_YawU_UNIT_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field q0_UNIT_none from imu_3dof message
 *
 * @return  q0 estimate [-]
 */
static inline float mavlink_msg_imu_3dof_get_q0_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field q1_UNIT_none from imu_3dof message
 *
 * @return  q1 estimate [-]
 */
static inline float mavlink_msg_imu_3dof_get_q1_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field q2_UNIT_none from imu_3dof message
 *
 * @return  q2 estimate [-]
 */
static inline float mavlink_msg_imu_3dof_get_q2_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field q3_UNIT_none from imu_3dof message
 *
 * @return  q3 estimate [-]
 */
static inline float mavlink_msg_imu_3dof_get_q3_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field Gyro_X_bias_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias estimate X [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_X_bias_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field Gyro_Y_bias_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias estimate Y [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_Y_bias_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field Gyro_Z_bias_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias estimate Z [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_Z_bias_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field Accel_X_bias_UNIT_g from imu_3dof message
 *
 * @return  Accel bias estimate X [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_X_bias_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field Accel_Y_bias_UNIT_g from imu_3dof message
 *
 * @return  Accel bias estimate Y [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_Y_bias_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field Accel_Z_bias_UNIT_g from imu_3dof message
 *
 * @return  Accel bias estimate Z [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_Z_bias_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field Mag_X_bias_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias estimate X [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_X_bias_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field Mag_Y_bias_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias estimate Y [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_Y_bias_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field Mag_Z_bias_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias estimate Z [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_Z_bias_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Get field U_Gyro_X_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro input X [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_U_Gyro_X_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  100);
}

/**
 * @brief Get field U_Gyro_Y_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro input Y [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_U_Gyro_Y_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  104);
}

/**
 * @brief Get field U_Gyro_Z_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro input Z [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_U_Gyro_Z_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  108);
}

/**
 * @brief Get field Z_Mag_X_UNIT_uT from imu_3dof message
 *
 * @return  Mag measurement X [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Mag_X_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  112);
}

/**
 * @brief Get field Z_Mag_Y_UNIT_uT from imu_3dof message
 *
 * @return  Mag measurement Y [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Mag_Y_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  116);
}

/**
 * @brief Get field Z_Mag_Z_UNIT_uT from imu_3dof message
 *
 * @return  Mag measurement Z [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Mag_Z_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  120);
}

/**
 * @brief Get field Z_Acc_X_UNIT_g from imu_3dof message
 *
 * @return  Acc measurement X [g]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Acc_X_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  124);
}

/**
 * @brief Get field Z_Acc_Y_UNIT_g from imu_3dof message
 *
 * @return  Acc measurement Y [g]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Acc_Y_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  128);
}

/**
 * @brief Get field Z_Acc_Z_UNIT_g from imu_3dof message
 *
 * @return  Acc measurement Z [g]
 */
static inline float mavlink_msg_imu_3dof_get_Z_Acc_Z_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  132);
}

/**
 * @brief Get field Y_Mag_X_UNIT_uT from imu_3dof message
 *
 * @return  Mag predicted measurement X [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Mag_X_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  136);
}

/**
 * @brief Get field Y_Mag_Y_UNIT_uT from imu_3dof message
 *
 * @return  Mag predicted measurement Y [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Mag_Y_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  140);
}

/**
 * @brief Get field Y_Mag_Z_UNIT_uT from imu_3dof message
 *
 * @return  Mag predicted measurement Z [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Mag_Z_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  144);
}

/**
 * @brief Get field Y_Acc_X_UNIT_g from imu_3dof message
 *
 * @return  Acc predicted measurement X [g]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Acc_X_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  148);
}

/**
 * @brief Get field Y_Acc_Y_UNIT_g from imu_3dof message
 *
 * @return  Acc predicted measurement Y [g]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Acc_Y_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  152);
}

/**
 * @brief Get field Y_Acc_Z_UNIT_g from imu_3dof message
 *
 * @return  Acc predicted measurement Z [g]
 */
static inline float mavlink_msg_imu_3dof_get_Y_Acc_Z_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  156);
}

/**
 * @brief Get field q0_U_UNIT_none from imu_3dof message
 *
 * @return  q0 uncertainty [-]
 */
static inline float mavlink_msg_imu_3dof_get_q0_U_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  160);
}

/**
 * @brief Get field q1_U_UNIT_none from imu_3dof message
 *
 * @return  q1 uncertainty [-]
 */
static inline float mavlink_msg_imu_3dof_get_q1_U_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  164);
}

/**
 * @brief Get field q2_U_UNIT_none from imu_3dof message
 *
 * @return  q2 uncertainty [-]
 */
static inline float mavlink_msg_imu_3dof_get_q2_U_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  168);
}

/**
 * @brief Get field q3_U_UNIT_none from imu_3dof message
 *
 * @return  q3 uncertainty [-]
 */
static inline float mavlink_msg_imu_3dof_get_q3_U_UNIT_none(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  172);
}

/**
 * @brief Get field Gyro_X_bias_U_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias uncertainty X [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_X_bias_U_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  176);
}

/**
 * @brief Get field Gyro_Y_bias_U_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias uncertainty Y [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_Y_bias_U_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  180);
}

/**
 * @brief Get field Gyro_Z_bias_U_UNIT_deg_d_s from imu_3dof message
 *
 * @return  Gyro bias uncertainty Z [deg/s]
 */
static inline float mavlink_msg_imu_3dof_get_Gyro_Z_bias_U_UNIT_deg_d_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  184);
}

/**
 * @brief Get field Accel_X_bias_U_UNIT_g from imu_3dof message
 *
 * @return  Accel bias uncertainty X [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_X_bias_U_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  188);
}

/**
 * @brief Get field Accel_Y_bias_U_UNIT_g from imu_3dof message
 *
 * @return  Accel bias uncertainty Y [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_Y_bias_U_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  192);
}

/**
 * @brief Get field Accel_Z_bias_U_UNIT_g from imu_3dof message
 *
 * @return  Accel bias uncertainty Z [g]
 */
static inline float mavlink_msg_imu_3dof_get_Accel_Z_bias_U_UNIT_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  196);
}

/**
 * @brief Get field Mag_X_bias_U_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias uncertainty X [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_X_bias_U_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  200);
}

/**
 * @brief Get field Mag_Y_bias_U_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias uncertainty Y [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_Y_bias_U_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  204);
}

/**
 * @brief Get field Mag_Z_bias_U_UNIT_uT from imu_3dof message
 *
 * @return  Mag bias uncertainty Z [uT]
 */
static inline float mavlink_msg_imu_3dof_get_Mag_Z_bias_U_UNIT_uT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  208);
}

/**
 * @brief Decode a imu_3dof message into a struct
 *
 * @param msg The message to decode
 * @param imu_3dof C-struct to decode the message contents into
 */
static inline void mavlink_msg_imu_3dof_decode(const mavlink_message_t* msg, mavlink_imu_3dof_t* imu_3dof)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    imu_3dof->Sensor_time_UNIT_100us = mavlink_msg_imu_3dof_get_Sensor_time_UNIT_100us(msg);
    imu_3dof->Sync_data_UNIT_variable = mavlink_msg_imu_3dof_get_Sync_data_UNIT_variable(msg);
    imu_3dof->Recorded_time_UNIT_100us = mavlink_msg_imu_3dof_get_Recorded_time_UNIT_100us(msg);
    imu_3dof->Roll_UNIT_deg = mavlink_msg_imu_3dof_get_Roll_UNIT_deg(msg);
    imu_3dof->Pitch_UNIT_deg = mavlink_msg_imu_3dof_get_Pitch_UNIT_deg(msg);
    imu_3dof->Yaw_UNIT_deg = mavlink_msg_imu_3dof_get_Yaw_UNIT_deg(msg);
    imu_3dof->Roll_Rate_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Roll_Rate_UNIT_deg_d_s(msg);
    imu_3dof->Pitch_Rate_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Pitch_Rate_UNIT_deg_d_s(msg);
    imu_3dof->Yaw_Rate_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Yaw_Rate_UNIT_deg_d_s(msg);
    imu_3dof->RollU_UNIT_deg = mavlink_msg_imu_3dof_get_RollU_UNIT_deg(msg);
    imu_3dof->PitchU_UNIT_deg = mavlink_msg_imu_3dof_get_PitchU_UNIT_deg(msg);
    imu_3dof->YawU_UNIT_deg = mavlink_msg_imu_3dof_get_YawU_UNIT_deg(msg);
    imu_3dof->q0_UNIT_none = mavlink_msg_imu_3dof_get_q0_UNIT_none(msg);
    imu_3dof->q1_UNIT_none = mavlink_msg_imu_3dof_get_q1_UNIT_none(msg);
    imu_3dof->q2_UNIT_none = mavlink_msg_imu_3dof_get_q2_UNIT_none(msg);
    imu_3dof->q3_UNIT_none = mavlink_msg_imu_3dof_get_q3_UNIT_none(msg);
    imu_3dof->Gyro_X_bias_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_X_bias_UNIT_deg_d_s(msg);
    imu_3dof->Gyro_Y_bias_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_Y_bias_UNIT_deg_d_s(msg);
    imu_3dof->Gyro_Z_bias_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_Z_bias_UNIT_deg_d_s(msg);
    imu_3dof->Accel_X_bias_UNIT_g = mavlink_msg_imu_3dof_get_Accel_X_bias_UNIT_g(msg);
    imu_3dof->Accel_Y_bias_UNIT_g = mavlink_msg_imu_3dof_get_Accel_Y_bias_UNIT_g(msg);
    imu_3dof->Accel_Z_bias_UNIT_g = mavlink_msg_imu_3dof_get_Accel_Z_bias_UNIT_g(msg);
    imu_3dof->Mag_X_bias_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_X_bias_UNIT_uT(msg);
    imu_3dof->Mag_Y_bias_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_Y_bias_UNIT_uT(msg);
    imu_3dof->Mag_Z_bias_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_Z_bias_UNIT_uT(msg);
    imu_3dof->U_Gyro_X_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_U_Gyro_X_UNIT_deg_d_s(msg);
    imu_3dof->U_Gyro_Y_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_U_Gyro_Y_UNIT_deg_d_s(msg);
    imu_3dof->U_Gyro_Z_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_U_Gyro_Z_UNIT_deg_d_s(msg);
    imu_3dof->Z_Mag_X_UNIT_uT = mavlink_msg_imu_3dof_get_Z_Mag_X_UNIT_uT(msg);
    imu_3dof->Z_Mag_Y_UNIT_uT = mavlink_msg_imu_3dof_get_Z_Mag_Y_UNIT_uT(msg);
    imu_3dof->Z_Mag_Z_UNIT_uT = mavlink_msg_imu_3dof_get_Z_Mag_Z_UNIT_uT(msg);
    imu_3dof->Z_Acc_X_UNIT_g = mavlink_msg_imu_3dof_get_Z_Acc_X_UNIT_g(msg);
    imu_3dof->Z_Acc_Y_UNIT_g = mavlink_msg_imu_3dof_get_Z_Acc_Y_UNIT_g(msg);
    imu_3dof->Z_Acc_Z_UNIT_g = mavlink_msg_imu_3dof_get_Z_Acc_Z_UNIT_g(msg);
    imu_3dof->Y_Mag_X_UNIT_uT = mavlink_msg_imu_3dof_get_Y_Mag_X_UNIT_uT(msg);
    imu_3dof->Y_Mag_Y_UNIT_uT = mavlink_msg_imu_3dof_get_Y_Mag_Y_UNIT_uT(msg);
    imu_3dof->Y_Mag_Z_UNIT_uT = mavlink_msg_imu_3dof_get_Y_Mag_Z_UNIT_uT(msg);
    imu_3dof->Y_Acc_X_UNIT_g = mavlink_msg_imu_3dof_get_Y_Acc_X_UNIT_g(msg);
    imu_3dof->Y_Acc_Y_UNIT_g = mavlink_msg_imu_3dof_get_Y_Acc_Y_UNIT_g(msg);
    imu_3dof->Y_Acc_Z_UNIT_g = mavlink_msg_imu_3dof_get_Y_Acc_Z_UNIT_g(msg);
    imu_3dof->q0_U_UNIT_none = mavlink_msg_imu_3dof_get_q0_U_UNIT_none(msg);
    imu_3dof->q1_U_UNIT_none = mavlink_msg_imu_3dof_get_q1_U_UNIT_none(msg);
    imu_3dof->q2_U_UNIT_none = mavlink_msg_imu_3dof_get_q2_U_UNIT_none(msg);
    imu_3dof->q3_U_UNIT_none = mavlink_msg_imu_3dof_get_q3_U_UNIT_none(msg);
    imu_3dof->Gyro_X_bias_U_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_X_bias_U_UNIT_deg_d_s(msg);
    imu_3dof->Gyro_Y_bias_U_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_Y_bias_U_UNIT_deg_d_s(msg);
    imu_3dof->Gyro_Z_bias_U_UNIT_deg_d_s = mavlink_msg_imu_3dof_get_Gyro_Z_bias_U_UNIT_deg_d_s(msg);
    imu_3dof->Accel_X_bias_U_UNIT_g = mavlink_msg_imu_3dof_get_Accel_X_bias_U_UNIT_g(msg);
    imu_3dof->Accel_Y_bias_U_UNIT_g = mavlink_msg_imu_3dof_get_Accel_Y_bias_U_UNIT_g(msg);
    imu_3dof->Accel_Z_bias_U_UNIT_g = mavlink_msg_imu_3dof_get_Accel_Z_bias_U_UNIT_g(msg);
    imu_3dof->Mag_X_bias_U_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_X_bias_U_UNIT_uT(msg);
    imu_3dof->Mag_Y_bias_U_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_Y_bias_U_UNIT_uT(msg);
    imu_3dof->Mag_Z_bias_U_UNIT_uT = mavlink_msg_imu_3dof_get_Mag_Z_bias_U_UNIT_uT(msg);
    imu_3dof->Sensor_processing_time_UNIT_us = mavlink_msg_imu_3dof_get_Sensor_processing_time_UNIT_us(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IMU_3DoF_LEN? msg->len : MAVLINK_MSG_ID_IMU_3DoF_LEN;
        memset(imu_3dof, 0, MAVLINK_MSG_ID_IMU_3DoF_LEN);
    memcpy(imu_3dof, _MAV_PAYLOAD(msg), len);
#endif
}
