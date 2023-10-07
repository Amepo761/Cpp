#ifndef INVOICE_H
#define INVOICE_H
#include<iostream>
#include"InvoiceType.h"
class Invoice
{
private:
    std::string _invoiceNumber;
    InvoiceType _type;
    int _invoiceItems;

public:
    Invoice()=delete;
    Invoice(const Invoice&)=delete;
    Invoice(std::string invoiceNumber,InvoiceType type,int invoiceItems);
    ~Invoice() {
        std::cout<<"Invoice Number"<<_invoiceNumber<<"is destroyed";
    }

    std::string invoiceNumber() const { return _invoiceNumber; }

    int invoiceItems() const { return _invoiceItems; }

    InvoiceType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);
    

};
std::string DisplayEnum(const InvoiceType value);

#endif // INVOICE_H
