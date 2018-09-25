#pragma once
#include "amnesia.h"

static struct timespec busDelay { .tv_sec = 0, .tv_nsec = 2l };

static inline void busSleep()
{
	nanosleep(&busDelay, NULL);
}

class Mux
{
	public:
		Mux(pin cs=pins::cs, pin reset=pins::reset,
			pin strobe=pins::strobe, pin data=pins::data,
			pin ax0=pins::ax0, pin ax1=pins::ax1,
			pin ax2=pins::ax2, pin ax3=pins::ax3,
			pin ay0=pins::ay0, pin ay1=pins::ay1,
			pin ay2=pins::ay2);

		void writeAddressX(inout x);
		void writeAddressY(inout y);
		bool setConnection(inout x, inout y, bool connect);
		void clearAllConnections();
		
	private:
		pin cs, reset, strobe, data;
		pin ax0, ax1, ax2, ax3, ay0, ay1, ay2;
};