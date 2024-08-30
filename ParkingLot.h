
#ifndef PARKINGLOT_H  
#define PARKINGLOT_H  
#include <vector>  
#include "Vehicle.h" 

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    int maxCapacity;
    int currentCount;

public:
    ParkingLot(int capacity);
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverStayingVehicles(int maxParkingDuration) const;

};

#endif