#include "Functionalities.h"

// Function to create Objects
void CreateObj(Bill *arr[SIZE])
{
    arr[0] = new Bill(10000.0f, 100,Invoice("1011", InvoiceType::E_BILL, 100));
    arr[1] = new Bill(5799.0f, 460, Invoice("102", InvoiceType::PAPER_SLIP, 200));
    arr[2] = new Bill(47657.0f, 50, Invoice("103", InvoiceType::SMS_GENERATED, 300));
}


std::string HighestBillAmount(Bill *arr[SIZE])
{
    int max = 0;
    for (int i=1; i<SIZE;i++)
    {
        if (arr[i]->getBillAmount() > arr[max]->getBillAmount())
        {
            max = i;
        }
    }
    return arr[max]->getBillAssociatedInvoice().getInvoiceNumber();
}

float BillAmountWithInvoiceNumber(Bill *arr[SIZE], std::string number)
{
    for (int i =0; i<SIZE; i++)
    {
        if (arr[i]->getBillAssociatedInvoice().getInvoiceNumber() == number)
        {
            return arr[i]->getBillAmount();
        }
    }
    //  throw std::runtime_error("Invoice number not found");
    
}


Invoice **InvoicesWithBillAmount(Bill *arr[SIZE], float threshold)
{
    Invoice **invoices = new Invoice *[SIZE];
    int count = 0;
    for (int i =0; i <SIZE; i++)
    {
        if (arr[i]->getBillAmount() >= threshold)
        {
            invoices[count++] = new Invoice(arr[i]->getBillAssociatedInvoice());
        }
    }
    return invoices;
}


void MinMaxBillAmount(Bill *arr[SIZE])
{
    int max=0;
    int min=0;
    
    for (int i =1; i <SIZE; i++)
    {
        if (arr[i]->getBillAmount() > arr[max]->getBillAmount())
        {
            max=i;
        }
        if (arr[i]->getBillAmount() < arr[min]->getBillAmount())
        {
            min=i;
        }
    }
    std::cout << "Invoice Number with max bill amt: " << arr[max]->getBillAssociatedInvoice().getInvoiceNumber() << "\n";
    std::cout << "Invoice Number with min bill amt: " << arr[min]->getBillAssociatedInvoice().getInvoiceNumber() << "\n";
}
void FreeMemory(Bill *arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete arr[i];
    }
}