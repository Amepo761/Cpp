#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"VehicleType.h"
#include"TouristVehicle.h"
#include<iostream>
#define SIZE 3

//Creating 3 objects
void CreateObj(TouristVehicle* arr[SIZE]);

//A function to return count of Vehicle more than 4
int seatCount(TouristVehicle* arr[SIZE]);

//A function to return pointer to all instance of TouristVehicle in an array
//that has seat count of atleast 4
TouristVehicle **SeatCountPointer(TouristVehicle *vehicles[SIZE]);

//A function to find Average Booking Charge
float AvgBookingCharge(TouristVehicle* arr[SIZE],VehicleType type);

//Function to calculatr Maximun Booking Charge
TouristVehicle* MaxBookingCharge(TouristVehicle* arr[SIZE]);

//A function to delete all allocation made on the heap
void FreeMemory(TouristVehicle* arr[SIZE]);

#endif // FUNCTIONALITIES_H
