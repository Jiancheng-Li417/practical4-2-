#ifndef BUS_H  
#define BUS_H  

#include "Vehicle.h"  

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration(std::time_t currentTime) const override;
};

#endif