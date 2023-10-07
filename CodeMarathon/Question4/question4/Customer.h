#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerType.h"
#include <iostream>
#include "CardType.h"
#include "CreditCard.h"
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCard _credit_card;

public:
     Customer()=default;
     Customer(const Customer&)=default;
    Customer(std::string name, std::string id, CustomerType customer_type, CreditCard credit_card);
    

    ~Customer() {
        std::cout << "Customer destructor called\n";
    }

    std::string name() const { return _name; }

    CustomerType customerType() const { return _customer_type; }

    CreditCard creditCard() const { return _credit_card; }

    std::string id() const { return _id; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    
};

std::string DisplayEnum(const CustomerType value);

#endif // CUSTOMER_H
