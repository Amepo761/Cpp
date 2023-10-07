#include "Functionalities.h"

void CreateObj(TouristVehicle *arr[SIZE])
{
    arr[0]=new TouristVehicle("101",VehicleType::CAB,5,2000.0f);
    arr[1]=new TouristVehicle("102",VehicleType::BUS,10,100.0f);
    arr[2]=new TouristVehicle("103",VehicleType::CAB,5,500.0f);

}

int seatCount(TouristVehicle *arr[SIZE])
{ 
   int count=0;
   for(int i=0;i<SIZE;i++)
   {
    if(arr[i]->seatCount()>4);
    count++;
   }
   
    return count;
   }

   TouristVehicle** SeatCountPointer(TouristVehicle *arr[SIZE])
   {    
       
       TouristVehicle** result = new TouristVehicle*[SIZE];
       int count = 0;
       for (int i = 0; i < SIZE; i++)
        {
        if (arr[i]->seatCount() > 4)
        {
            result[count++] = arr[i];
        }
    }
    return result;
   }


   float AvgBookingCharge(TouristVehicle *arr[SIZE], VehicleType type)
   {
       float total = 0.0f;
       for (int i = 0; i < SIZE; i++)
       {
           if (VehicleType(type) == type)
           {
               total += arr[i]->perHourBookingCharge();
           }
       }
       return total / SIZE;
}

TouristVehicle *MaxBookingCharge(TouristVehicle *arr[SIZE])
{
    
    TouristVehicle* result=arr[0];
    float max=arr[0]->perHourBookingCharge();
    
    float currentPrice=0.0f;
    for(int i=0;i<SIZE;i++){
        currentPrice=arr[i]->perHourBookingCharge();
        if(currentPrice > max)
        {
            max=currentPrice;
            result=arr[i];
           
        }
    }
    return result;

    }

    void FreeMemory(TouristVehicle *arr[SIZE])
    {
        for(int i=0;i<SIZE;i++){
            delete arr[i];

    }
    }

