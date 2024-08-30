#ifndef CAR_H  
#define CAR_H  

#include "Vehicle.h"  

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration(std::time_t currentTime) const override;
};

#endif