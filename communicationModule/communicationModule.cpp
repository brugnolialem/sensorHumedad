#include "communicationModule.h"

CommModule::CommModule(void)
{

}


CommModule::CommModule(uint8_t rx, uint8_t tx)
{

}


#if (USING_MQTT)
CommModule::CommModule(unsigned int KeepAlive) : MQTT(KeepAlive)
{

}


CommModule::CommModule(uint8_t rx, uint8_t tx, unsigned int KeepAlive)
{

}
#endif





/* Sim Power Control */
void CommModule::turnSimON(void)
{
	digitalWrite(SIM_POWER_CONTROL, HIGH);

	delay(10000);

	/*
	Check for AT response
	.
	.
	.
	*/
}


void CommModule::turnSimOFF(void)
{

	digitalWrite(SIM_POWER_CONTROL, LOW);
}



