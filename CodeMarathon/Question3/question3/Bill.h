#ifndef BILL_H
#define BILL_H

#include "Invoice.h"
#include <iostream>
class Bill
{
private:
    float billAmount;
    float billTaxAmount;
    Invoice billAssociatedInvoice;
public:

    Bill(float billAmount, float billTaxAmount, Invoice billAssociatedInvoice);
    Bill(const Bill &) = default;
    virtual ~Bill() {
        std::cout<<"Bill is destroyed"<<std::endl;
    }

    float getBillAmount() const { return billAmount; }

    float getBillTaxAmount() const { return billTaxAmount; }

    Invoice getBillAssociatedInvoice() const { return billAssociatedInvoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
    
};

#endif // BILL_H
