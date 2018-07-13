#ifndef COMMUNICATION_MODULE_H
#define COMMUNICATION_MODULE_H

#include <String.h>

#include "moduleConfig/pinoutConfig.h"
#include "moduleConfig/comunicationConfig.h"


class CommModule
{
  public:
  	CommModule(void);
  	CommModule(uint8_t rx, uint8_t tx);

  	#if (USING_MQTT)
    CommModule(unsigned int KeepAlive);
    CommModule(uint8_t rx, uint8_t tx, unsigned int KeepAlive);
    #endif
    
    void turnSimON(void);
    void turnSimOFF(void);

    unsigned long getRTCTime(void);
    unsigned long getNetworkTime(void);

    uint8_t reportInfo(String* p_info);
    uint8_t receiveConfig(String* p_config);
};

#endif