#include <iostream>  
#include <chrono>  
#include <thread> 
#include "Bus.h"  
#include "Car.h"  
#include "Motorbike.h"  
#include "ParkingLot.h"  

int main() {
    ParkingLot parkingLot(10);

    for (int i = 0; i < 5; ++i) {
        Car* car = new Car(i + 1);
        parkingLot.parkVehicle(car);
        if (parkingLot.getCount() >= 10) {
            std::cout << "Parking lot is full after parking a car." << std::endl;
            break;
        }
    }

    for (int i = 0; i < 3; ++i) {
        Bus* bus = new Bus(i + 6);
        parkingLot.parkVehicle(bus);
        if (parkingLot.getCount() >= 10) {
            std::cout << "Parking lot is full after parking a bus." << std::endl;
            break;
        }
    }

    for (int i = 0; i < 2; ++i) {
        Motorbike* motorbike = new Motorbike(i + 9);
        parkingLot.parkVehicle(motorbike);
        if (parkingLot.getCount() >= 10) {
            std::cout << "Parking lot is full after parking a motorbike." << std::endl;
            break;
        }
    }
 
    std::this_thread::sleep_for(std::chrono::seconds(18));
    std::time_t currentTime = std::time(nullptr);
    int overStayingCount = parkingLot.countOverStayingVehicles(15);
    std::cout << "Number of vehicles overstaying for more than 15 seconds: " << overStayingCount << std::endl;


    return 0;
}