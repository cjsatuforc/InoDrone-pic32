/*
 * QuadCopter.h
 *
 *  Created on: 19 janv. 2013
 *      Author: marc
 */

#ifndef QUADCOPTER_H_
#define QUADCOPTER_H_

#include "IMU.h"
#include "Protocol.h"
#include "UAVLink.h"
#include "UAV.h"

IMU::attitude12f attitude;

unsigned long timerMain=0;
unsigned long timerMain_old=0;
float G_Dt	= 0.01; //Integration time
float cpu_load=0;
unsigned long timer_end=0;
unsigned long telemetryTimer=0;
unsigned long safe_timer=0;

IMU imu;
UAV uav;

void receiveMessage(uavlink_message_t msg);


#endif /* QUADCOPTER_H_ */
