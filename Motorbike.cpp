#include "Motorbike.h"  

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration(std::time_t currentTime) const {
    double durationInSeconds = difftime(currentTime, timeOfEntry);
    std::cout << "Motorbike parking duration: " << durationInSeconds << " seconds" << std::endl;
    return static_cast<int>(durationInSeconds * 0.85);
}