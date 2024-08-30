#include "Vehicle.h"  

Vehicle::Vehicle(int id) : timeOfEntry(std::time(nullptr)), id(id) {}

int Vehicle::getID() const {
    return id;
}

Vehicle::~Vehicle() {}