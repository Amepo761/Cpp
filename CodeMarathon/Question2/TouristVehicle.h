#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include<iostream>
#include"VehicleType.h"
class TouristVehicle
{
private:
    std::string _number;
    VehicleType _type;
    int _seat_count;
    float _per_hour_booking_charge ;

public:
    TouristVehicle(std::string number,
            VehicleType type,
            int seatcount,
            float charge);
    ~TouristVehicle() {
        std::cout<<"Vehicle Number:"<<_number<<"is destroyed"<<std::endl;
    }

    std::string number() const { return _number; }

    VehicleType type() const { return _type; }

    int seatCount() const { return _seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
    
};
std::string DisplayEnum(const VehicleType value);

#endif // TOURISTVEHICLE_H
