#include "Bill.h"

Bill::Bill(float billAmount, float billTaxAmount, Invoice *billAssociatedInvoice)
:_billAmount(billAmount),_billTaxAmount(billTaxAmount),_billAssociatedInvoice(billAssociatedInvoice)
{
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billAmount: " << rhs._billAmount
       << " _billTaxAmount: " << rhs._billTaxAmount
       << " _billAssociatedInvoice: " << rhs._billAssociatedInvoice;
    return os;
}
