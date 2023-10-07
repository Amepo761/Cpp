#include "Functionalities.h"
#include <iostream>

int main()
{
    Bill *arr[SIZE];
    
        CreateObj(arr);

        std::cout <<  "Get Invoice Number of Highest Bill Amount"<<HighestBillAmount(arr) << std::endl;
        

        std::cout << "Bill Amount with Invoice Number:"<<BillAmountWithInvoiceNumber(arr, "1011") << std::endl;
        
        Invoice **invoices = InvoicesWithBillAmount(arr, 2000);
        for (int i = 0; i < SIZE; i++)
        {
            if (invoices[i] != nullptr)
            {
                std::cout << *invoices[i] << "\n";
            }
        }
    
        MinMaxBillAmount(arr);
        std::cout << "Free Invoices.....\n";
        FreeMemory(arr);
    }
    
