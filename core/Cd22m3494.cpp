#include "Cd22m3494.h"

Cd22m3494::Cd22m3494(int8_t cs, int8_t reset, int8_t strobe, int8_t data,
		int8_t ax0, int8_t ax1, int8_t ax2, int8_t ax3, 
		int8_t ay0, int8_t ay1, int8_t ay2)
	: cs(cs), reset(reset), strobe(strobe), data(data),
	ax0(ax0), ax1(ax1), ax2(ax2), ax3(ax3),
	ay0(ay0), ay1(ay1), ay2(ay2)
{
	printf("cs=%d reset=%d strobe=%d data=%d\n", cs, reset, strobe, data);
	printf("ax0=%d ax1=%d ax2=%d ax3=%d\nay0=%d ay1=%d ay2=%d\n", ax0, ax1, ax2, ax3, ay0, ay1, ay2);
	pinMode(cs, OUTPUT);
    pinMode(reset, OUTPUT);
    pinMode(strobe, OUTPUT);
    pinMode(data, OUTPUT);

    pinMode(ax0, OUTPUT);
    pinMode(ax1, OUTPUT);
    pinMode(ax2, OUTPUT);
    pinMode(ax3, OUTPUT);
    pinMode(ay0, OUTPUT);
    pinMode(ay1, OUTPUT);
    pinMode(ay2, OUTPUT);

    busSleep();

    digitalWrite(data, LOW);
    digitalWrite(strobe, LOW);
    digitalWrite(reset, LOW);
    digitalWrite(cs, LOW);

    busSleep();
}

bool Cd22m3494::setConnection(int8_t x, int8_t y, bool connect)
{
	printf("[DEBUG] setConnection: got x point connect for x %d, y %d connect?=%d\n", x, y, connect);
	if (x <= MAX_X && y <= MAX_Y)
	{
		digitalWrite(cs, HIGH);
		digitalWrite(data, connect ? HIGH : LOW);
		writeAddressX(x);
		writeAddressY(y);
		busSleep();
		digitalWrite(strobe, HIGH);
		busSleep();
		digitalWrite(strobe, LOW);
		digitalWrite(cs, LOW);
		return true; 
	}
	return false;
}

void Cd22m3494::writeAddressY(int8_t y)
{
	printf("[DEBUG] write y: %d\n", y);
	printf("[DEBUG] \tay0=%d ay1=%d ay2=%d\n", (y >> 0) & 1, (y >> 1) & 1, (y >> 2) & 1);
	digitalWrite(ay0, (y >> 0) & 1);
	digitalWrite(ay1, (y >> 1) & 1);
	digitalWrite(ay2, (y >> 2) & 1);
}

void Cd22m3494::writeAddressX(int8_t x)
{
	printf("[DEBUG] write x: %d\n", x);
	printf("[DEBUG] \tax0=%d ax1=%d ax2=%d ax3=%d\n", (x >> 0) & 1, (x >> 1) & 1, (x >> 2) & 1, (x >> 3) & 1);
	digitalWrite(ax0, (x >> 0) & 1);
	digitalWrite(ax1, (x >> 1) & 1);
	digitalWrite(ax2, (x >> 2) & 1);
	digitalWrite(ax3, (x >> 3) & 1);
}

void Cd22m3494::clearAllConnections()
{
	busSleep();
	digitalWrite(reset, HIGH);
	busSleep();
	digitalWrite(reset, LOW);
}