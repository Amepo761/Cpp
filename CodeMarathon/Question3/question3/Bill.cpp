#include "Bill.h"
#include<iostream>
Bill::Bill(float billAmount, float billTaxAmount, Invoice billAssociatedInvoice)
: billAmount(billAmount),billAssociatedInvoice(billAssociatedInvoice)
{
    if(billTaxAmount<billAmount){
        this->billTaxAmount = billTaxAmount;
    }
    else{
        std::cout<<"Bill Tax Amount cannot be greater than bill Amount"<<std::endl;
    }
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "billAmount: " << rhs.billAmount
       << " billTaxAmount: " << rhs.billTaxAmount
       << " billAssociatedInvoice: " << rhs.billAssociatedInvoice;
    return os;
}
