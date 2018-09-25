#pragma once

#include <stdio.h>
#include <wiringPi.h>
#include <stdint.h>
#include <time.h>

#define PIN_CS		0
#define PIN_RESET 	25
#define PIN_STROBE	6
#define PIN_DATA	27
#define PIN_AX0		4
#define PIN_AX1		5
#define PIN_AX2		26
#define PIN_AX3		3
#define PIN_AY0		24
#define PIN_AY1		23
#define PIN_AY2		2

 
#define MAX_X 		0x0F
#define MAX_Y 		0x07

typedef uint8_t pin;
typedef uint8_t inout;
namespace pins
{
	enum gpio
	{
		cs 		= PIN_CS,
		reset 	= PIN_RESET,
		strobe 	= PIN_STROBE,
		data 	= PIN_DATA,
		ax0 	= PIN_AX0,
		ax1 	= PIN_AX1,
		ax2 	= PIN_AX2,
		ax3 	= PIN_AX3,
		ay0 	= PIN_AY0,
		ay1 	= PIN_AY1,
		ay2 	= PIN_AY2
	};
};