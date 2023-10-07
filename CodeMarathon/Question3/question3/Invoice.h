#ifndef INVOICE_H
#define INVOICE_H
#include "InvoiceType.h"
#include <iostream>
class Invoice
{
private:
    std::string invoiceNumber;
    InvoiceType invoiceType;
    int invoiceItems;

public:
    Invoice(std::string invoiceNumber, InvoiceType invoiceType, int invoiceItems);

    Invoice(const Invoice &) = default;
    ~Invoice() {
        // std::cout<<"Invoice Destructor Called()....\n";
    }

    std::string getInvoiceNumber() const { return invoiceNumber; }

    InvoiceType getInvoiceType() const { return invoiceType; }

    int getInvoiceItems() const { return invoiceItems; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

    
};

std::string DisplayEnum(InvoiceType type);

#endif // INVOICE_H
