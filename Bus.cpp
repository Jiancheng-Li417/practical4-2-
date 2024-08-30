#include "Bus.h"  

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration(std::time_t currentTime) const {
    double durationInSeconds = difftime(currentTime, timeOfEntry);
    std::cout << "Bus parking duration: " << durationInSeconds << " seconds" << std::endl;
    return static_cast<int>(durationInSeconds * 0.75);
}