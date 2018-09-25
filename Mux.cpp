#include "Mux.h"

Mux::Mux(pin cs, pin reset, pin strobe, pin data,
		pin ax0, pin ax1, pin ax2, pin ax3, 
		pin ay0, pin ay1, pin ay2)
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

bool Mux::setConnection(inout x, inout y, bool connect)
{
	printf("setConnection: got x point connect for x %d, y %d connect?=%d\n", x, y, connect);
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

void Mux::writeAddressY(inout y)
{
	printf("write y: %d\n", y);
	printf("\tay0=%d ay1=%d ay2=%d\n", (y >> 0) & 1, (y >> 1) & 1, (y >> 2) & 1);
	digitalWrite(ay0, (y >> 0) & 1);
	digitalWrite(ay1, (y >> 1) & 1);
	digitalWrite(ay2, (y >> 2) & 1);
}

void Mux::writeAddressX(inout x)
{
	printf("write x: %d\n", x);
	printf("\tax0=%d ax1=%d ax2=%d ax3=%d\n", (x >> 0) & 1, (x >> 1) & 1, (x >> 2) & 1, (x >> 3) & 1);
	digitalWrite(ax0, (x >> 0) & 1);
	digitalWrite(ax1, (x >> 1) & 1);
	digitalWrite(ax2, (x >> 2) & 1);
	digitalWrite(ax3, (x >> 3) & 1);
}

void Mux::clearAllConnections()
{
	busSleep();
	digitalWrite(reset, HIGH);
	busSleep();
	digitalWrite(reset, LOW);
}