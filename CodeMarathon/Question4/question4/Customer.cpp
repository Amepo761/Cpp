#include "Customer.h"

Customer::Customer(std::string name, std::string id, CustomerType customer_type, CreditCard credit_card)
    : _name(name), _id(id), _customer_type(customer_type), _credit_card(credit_card)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs)
{
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _customer_type: " << DisplayEnum(rhs._customer_type)
       << " _credit_card: " << rhs._credit_card;
    return os;
}

std::string DisplayEnum(const CustomerType value)
{
   if(value==CustomerType::ELITE)
   {
    return "ELITE";
   }
   else if(value==CustomerType::PRIVILEGED)
   {
    return "PRIVILEGED";
   }
   else{
     return "PRO";
   }
}
