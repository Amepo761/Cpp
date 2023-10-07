#include "Functionalities.h"

// Function to create Objects
void createBills(Bill *arr[SIZE])
{
    arr[0] = new Bill(1000, 100, Invoice("INV001", InvoiceType::E_BILL, 100));
    arr[1] = new Bill(2000, 200, Invoice("INV002", InvoiceType::PAPER_SLIP, 200));
    arr[2] = new Bill(3000, 300, Invoice("INV003", InvoiceType::SMS_GENERATED, 300));
}

// function to get invoice number of highest Bill Amount
std::string GetInvoiceNumberOfHighestBillAmount(Bill *bills[SIZE])
{
    checkAllBillsEmpty(bills);

    int maxIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() > bills[maxIndex]->getBillAmount())
        {
            maxIndex = i;
        }
    }
    return bills[maxIndex]->getBillAssociatedInvoice().getInvoiceNumber();
}

//  Function to get Bill Amount whose invoice number is given
float GetBillAmountWithInvoiceNumber(Bill *bills[SIZE], std::string invoiceNumber)
{
    checkAllBillsEmpty(bills);

    for (int i = 0; i < SIZE; i++)
    {
        if (bills[i]->getBillAssociatedInvoice().getInvoiceNumber() == invoiceNumber)
        {
            return bills[i]->getBillAmount();
        }
    }
    throw std::runtime_error("Invoice number not found");
}

//  Which returns list of Invoices With invoice bill amount greater than given threshold bill Amount
Invoice **GetInvoicesWithBillAmount(Bill *bills[SIZE], float billAmount)
{
    checkAllBillsEmpty(bills);
    Invoice **invoices = new Invoice *[SIZE];
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() >= billAmount)
        {
            invoices[count++] = new Invoice(bills[i]->getBillAssociatedInvoice());
        }
    }
    if (count == 0)
    {
        throw std::runtime_error("No invoices found");
    }
    return invoices;
}


void FreeMemory(Bill *arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete arr[i];
    }
}



//  Function to get Invoice number with Maximum Bill Amount
std::string MaximumbillAmount(Bill *bills[SIZE])
{
    checkAllBillsEmpty(bills);

    int maxIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() > bills[maxIndex]->getBillAmount())
        {
            maxIndex = i;
        }
    }
    return bills[maxIndex]->getBillAssociatedInvoice().getInvoiceNumber();
}

//  Function to get Invoice with minimum Bill Amount

Invoice MinimumbillAmount(Bill *bills[SIZE])
{
    
    int minIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() < bills[minIndex]->getBillAmount())
        {
            minIndex = i;
        }
    }
    return Invoice(bills[minIndex]->getBillAssociatedInvoice());
}

void PrintMaximumAndMinimumBillAmount(Bill *bills[SIZE])
{
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() > bills[maxIndex]->getBillAmount())
        {
            maxIndex = i;
        }
        if (bills[i]->getBillAmount() < bills[minIndex]->getBillAmount())
        {
            minIndex = i;
        }
    }
    std::cout << "Maximum Bill Amount Invoice Number: " << bills[maxIndex]->getBillAssociatedInvoice().getInvoiceNumber() << "\n";
    std::cout << "Minimum Bill Amount Invoice Number: " << bills[minIndex]->getBillAssociatedInvoice().getInvoiceNumber() << "\n";
}