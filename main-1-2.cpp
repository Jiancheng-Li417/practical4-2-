#include <iostream>  
#include <string>  
#include "ParkingLot.h"  
#include "Car.h"  
#include "Bus.h"  
#include "Motorbike.h"  

int main() {
    ParkingLot lot(10);
 
    std::string type;
    int id;

    for (int i = 0; i < 11; ++i) { 
        std::cout << "Enter vehicle type (Car, Bus, Motorbike) or 'exit' to stop: ";
        std::cin >> type;
        if (type == "exit") break;

        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        Vehicle* vehicle = nullptr;
        if (type == "Car") {
            vehicle = new Car(id);
        }
        else if (type == "Bus") {
            vehicle = new Bus(id);
        }
        else if (type == "Motorbike") {
            vehicle = new Motorbike(id);
        }

        if (vehicle) {
            lot.parkVehicle(vehicle);
            if (lot.getCount() == 10) {
                std::cout << "Parking lot is full." << std::endl;
                break;
            }
        }
    }

    std::cout << "Enter vehicle ID to unpark or 'exit' to stop: ";
    std::cin >> id;
    while (id != -1) { 
        lot.unparkVehicle(id);
        std::cout << "Enter vehicle ID to unpark or 'exit' to stop: ";
        std::cin >> id;
    }

    return 0;
}
