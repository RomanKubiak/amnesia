#pragma once

#include "Cd22m3494.h"

#define PIN_CS1		29
#define PIN_CS2		28

#define PIN_RESET 	16
#define PIN_STROBE	7
#define PIN_DATA	26

#define PIN_AX0		23
#define PIN_AX1		0
#define PIN_AX2		2
#define PIN_AX3		24
#define PIN_AY0		3
#define PIN_AY1		4
#define PIN_AY2		25

typedef uint8_t pin;
typedef uint8_t inout;
namespace pins
{
	enum gpio
	{
		cs1 	= PIN_CS1,
		cs2 	= PIN_CS2,
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

class Amnesia
{
	public:
		Amnesia();
		~Amnesia();
};