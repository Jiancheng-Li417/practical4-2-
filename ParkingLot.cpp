
#include "ParkingLot.h"  
#include <iostream>  

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
    }
    else {
        vehicles.push_back(vehicle);
        ++currentCount;
    }
}

void ParkingLot::unparkVehicle(int id) {
    auto it = vehicles.begin();
    while (it != vehicles.end()) {
        if ((*it)->getID() == id) {
            delete* it; 
            it = vehicles.erase(it);
            --currentCount;
            return;
        }
        ++it;
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return currentCount;
}


int ParkingLot::countOverStayingVehicles(int maxParkingDuration) const {
    int count = 0;
    std::time_t currentTime = std::time(nullptr);
    for (const auto& vehicle : vehicles) {
        int duration = vehicle->getParkingDuration(currentTime);
        if (duration > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}