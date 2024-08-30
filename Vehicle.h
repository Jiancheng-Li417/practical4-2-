#ifndef VEHICLE_H  
#define VEHICLE_H  

#include <ctime>  
#include <iostream>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int id;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration(std::time_t currentTime) const = 0;
    virtual ~Vehicle();
};

#endif