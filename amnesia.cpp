#include "Mux.h"
int main(void)
{
    wiringPiSetup();
    Mux mux(pins::cs, pins::reset, pins::strobe, pins::data);
    mux.clearAllConnections();

    while (1)
    {
    	for (int i=0; i<4; i++)
    	{
    		printf("0->%d\n", i);
	    	mux.setConnection(0, i, true);
    	}
    	delay(500);
    	mux.clearAllConnections();
    	delay(500);
    }
    
}