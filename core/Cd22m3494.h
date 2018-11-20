#pragma once
#include <stdio.h>
#include <wiringPi.h>
#include <stdint.h>
#include <time.h>

#define MAX_X 		0x0F
#define MAX_Y 		0x07
static struct timespec busDelay { .tv_sec = 0, .tv_nsec = 2l };

static inline void busSleep()
{
	nanosleep(&busDelay, NULL);
}

class Cd22m3494
{
	public:
		Cd22m3494(int8_t cs=-1, int8_t reset=-1,
			int8_t strobe=-1, int8_t data=-1,
			int8_t ax0=-1, int8_t ax1=-1,
			int8_t ax2=-1, int8_t ax3=-1,
			int8_t ay0=-1, int8_t ay1=-1,
			int8_t ay2=-1);

		void writeAddressX(int8_t x);
		void writeAddressY(int8_t y);
		bool setConnection(int8_t x, int8_t y, bool connect);
		void clearAllConnections();
		
	private:
		int8_t cs, reset, strobe, data;
		int8_t ax0, ax1, ax2, ax3, ay0, ay1, ay2;
};