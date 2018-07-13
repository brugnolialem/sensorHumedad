#ifndef COMMUNICATION_MODULE_H
#define COMMUNICATION_MODULE_H

#include <String.h>

#include "comunicationConfig/comunicationConfig.h"


class COMMUNICATION_MODULE
{
  public:
  	CommModule(void);
  	CommModule(uint8_t rx, uint8_t tx);
    CommModule(unsigned int KeepAlive);
    CommModule(uint8_t rx, uint8_t tx, unsigned int KeepAlive);
    
    void turnSimON(void);
    void turnSimOFF(void);

    unsigned long getRTCTime(void);
    unsigned long getNetworkTime(void);

    uint8_t reportInfo(String* p_info);
    uint8_t receiveConfig(String* p_config);
};

#endif