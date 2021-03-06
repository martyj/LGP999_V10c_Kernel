/*
 * Copyright (C) 2010 LGE Inc.
 * Star Motion header file.
 * 2010/06/024
 */

#ifndef __STAR_MOTION_H__
#define __STAR_MOTION_H__


/*==================================================================================================
  LGE Definitions
  ==================================================================================================*/

#define  STAR_MOTION_SENSOR_NAME		"motion_sensor"		/* platform device*/
#define  STAR_MOTION_IOCTL_NAME			"motion_daemon"		/* for star_motion(gyro) daemon process */
#define  STAR_ACCEL_IOCTL_NAME			"accel_daemon"		/* for star_motion(accel) daemon process */
#define  STAR_COMPASS_IOCTL_NAME		"compass_daemon"	/* for star_motion(compass) daemon process */
#define  STAR_MOTION_INPUT_NAME			"gyro_accel"		/*"lge_gesture"*/
#define  STAR_I2C_ACCEL_NAME			"star_accel"
#define  STAR_I2C_GYRO_NAME				"star_gyro"

#define  MISC_DYNAMIC_MINOR         255
#define  MAX_MOTION_DATA_LENGTH     10
#define  MIN_MOTION_POLLING_TIME    10

typedef enum {
	STAR_SENSOR_NONE	= 0x00,
	STAR_ACCELEROMETER	= 0x01,
	STAR_ORIENTATION	= 0x02,
	STAR_TILT			= 0x04,
	STAR_SHAKE			= 0x08,
	STAR_SNAP			= 0x10,
	STAR_FLIP			= 0x20,
	STAR_TAP			= 0x40,
	STAR_YAWIMAGE		= 0x80,
	STAR_GYRO			= 0x100,
	STAR_COMPASS		= 0x200,
} star_sensor_enum_type;


/*-------------------------------------------------------------------*/
/*		   			                   IOCTL					                        */
/*-------------------------------------------------------------------*/

/*----------------- motion daemon process -------------------------*/
#define MOTION_MAGIC					     		0xA2

#define MOTION_IOCTL_ENABLE_DISABLE	    		_IOWR(MOTION_MAGIC, 0x01, short)
#define MOTION_IOCTL_SENSOR_DELAY	    		_IOWR(MOTION_MAGIC, 0x02, short)
#define MOTION_IOCTL_READ_ACCEL_DATA   			_IOWR(MOTION_MAGIC, 0x03, char[10])   // ACCEL RAW DATA
#define MOTION_IOCTL_ACCEL_RAW      	    	_IOWR(MOTION_MAGIC, 0x04, int[5])
#define MOTION_IOCTL_TILT            	    	_IOWR(MOTION_MAGIC, 0x05, int[5])
#define MOTION_IOCTL_SHAKE        	    	    _IOWR(MOTION_MAGIC, 0x06, int[5])
#define MOTION_IOCTL_SNAP        	    	    _IOWR(MOTION_MAGIC, 0x07, int[5])
#define MOTION_IOCTL_FLIP        	    	    _IOWR(MOTION_MAGIC, 0x08, int[5])
#define MOTION_IOCTL_TAP             	    	_IOWR(MOTION_MAGIC, 0x09, int[5])
#define MOTION_IOCTL_COMPOSITE         	    _IOWR(MOTION_MAGIC, 0x0A, int[12])
#define MOTION_IOCTL_YAWIMAGE         	    	_IOWR(MOTION_MAGIC, 0x0B, int[5])
//#define MOTION_IOCTL_GYRO_RAW      	    		_IOWR(MOTION_MAGIC, 0x0C, int[5])


// for  MPL library - MPU3050 Gyroscpoe
#define MOTION_IOCTL_ACCEL_COMPASS_SLEEP_WAKE_UP 		_IOWR(MOTION_MAGIC, 0x0C, short)
#define MOTION_IOCTL_ACCEL_COMPASS_SLEEP_MODE   		_IOWR(MOTION_MAGIC, 0x0D, short)
#define MOTION_IOCTL_MPU3050_I2C_READ     	   	_IOWR(MOTION_MAGIC, 0x0E, char[200])
#define MOTION_IOCTL_MPU3050_I2C_WRITE   	   	_IOWR(MOTION_MAGIC, 0x0F, char[200])

#define MOTION_IOCTL_GYRO_RAW      	    		_IOWR(MOTION_MAGIC, 0x11, int[5])
#define MOTION_IOCTL_SENSOR_SUSPEND_RESUME	    		_IOWR(MOTION_MAGIC, 0x12, short)
//#define MOTION_IOCTL_WAIT_SENSOR_INIT	    		_IOWR(MOTION_MAGIC, 0x13, int)

#endif //__MPU3050_H__

