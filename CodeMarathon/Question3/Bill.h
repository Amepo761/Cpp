#ifndef BILL_H
#define BILL_H
#include<iostream>
#include"Invoice.h"

class Bill
{
private:
    float _billAmount;
    float _billTaxAmount;
    Invoice* _billAssociatedInvoice;
public:
    Bill()=delete;
    Bill(const Bill& obj)=delete;
    Bill(float billAmount, float billTaxAmount,Invoice* billAssociatedInvoice) ;
    ~Bill() {
        delete billAssociatedInvoice();
        std::cout<<"Bill is destroyed"<<std::endl;
    }

    float billAmount() const { return _billAmount; }

    float billTaxAmount() const { return _billTaxAmount; }

    Invoice* billAssociatedInvoice() const { return _billAssociatedInvoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
    

};

#endif // BILL_H
