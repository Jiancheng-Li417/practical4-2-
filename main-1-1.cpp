#include <iostream>  
#include <vector>  
#include <chrono>  
#include <thread>  
#include "Car.h"  
#include "Bus.h"  
#include "Motorbike.h"  

int main() {
    std::vector<Vehicle*> vehicles;

    vehicles.push_back(new Car(1));
    vehicles.push_back(new Bus(2));
    vehicles.push_back(new Motorbike(3));

    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::time_t currentTime = std::time(nullptr);

    for (auto& vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID() << ", Parking Duration: "
            << vehicle->getParkingDuration(currentTime) << " seconds" << std::endl;
    }

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}