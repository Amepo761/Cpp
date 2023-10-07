#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, VehicleType type, int seatcount, float charge)
:_number(number),_type(type),_seat_count(seatcount),_per_hour_booking_charge(charge)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << DisplayEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}

std::string DisplayEnum(const VehicleType value)
{
    if(value==VehicleType::BIKE)
    {
        return "BIKE";
    }
    else if(value==VehicleType::BUS)
    {
        return "BUS";
    }
    else{
        return "CAB";
    }
}
