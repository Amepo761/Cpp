#include<iostream>
#include"Functionalities.h"
#include"TouristVehicle.h"
#define SIZE 3

int main(){
    TouristVehicle* arr[SIZE];

    CreateObj(arr);

    int seat=seatCount(arr);
    std::cout<<"Seat Count of atleast 4:"<<seat<<std::endl;

    std::cout<<"Seat Count By Pointer:"<<std::endl;
    TouristVehicle **result = SeatCountPointer(arr);
        for (int i=0; i < SIZE; i++)
        {
            if (result[i] != nullptr)
            {
                std::cout << result[i]->number() << "\n";
            }
        }
    
    
    
    std::cout<<"Average Booking Charge:"<<AvgBookingCharge(arr,VehicleType::CAB)<<std::endl;

    TouristVehicle* charge=MaxBookingCharge(arr);
    std::cout<<"Maximum Booking Charge:"<<charge->perHourBookingCharge()<<std::endl;

    FreeMemory(arr);

}