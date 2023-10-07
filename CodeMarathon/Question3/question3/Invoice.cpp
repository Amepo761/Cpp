#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumber, InvoiceType invoiceType, int invoiceItems)
: invoiceNumber(invoiceNumber), invoiceType(invoiceType), invoiceItems(invoiceItems)
{
}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "invoiceNumber: " << rhs.invoiceNumber
       << " invoiceType: " <<DisplayEnum(rhs.invoiceType)
       << " invoiceItems: " << rhs.invoiceItems;
    return os;
}

std::string DisplayEnum(InvoiceType type)
{
    if(type == InvoiceType::E_BILL){
        return "E_BILL";
    }
    else if(type == InvoiceType::PAPER_SLIP){
        return "PAPER_SLIP";
    }
    else{
        return "SMS_GENERATED";
    }
}
