#include "Functionalities.h"
#include <iostream>

int main()
{
    std::cout << "Create Objects.....\n";
    Bill *bills[SIZE];
    Bill *exceptionBill[SIZE]={nullptr};
    try
    {
        createBills(bills);

        std::cout << "Get Invoice Number of Highest Bill Amount.....";
        std::cout << GetInvoiceNumberOfHighestBillAmount(bills) << "\n";
        std::cout << "Get Bill Amount with Invoice Number.....";

        std::cout << GetBillAmountWithInvoiceNumber(bills, "INV002") << "\n";
        std::cout << "Get Invoices with Bill Amount.....\n";
        Invoice **invoices = GetInvoicesWithBillAmount(bills, 2000);
        for (int i = 0; i < SIZE; i++)
        {
            if (invoices[i] != nullptr)
            {
                std::cout << *invoices[i] << "\n";
            }
        }
        std::cout << "Maximum Bill Amount.....\n";
        std::cout << MaximumbillAmount(bills) << "\n";
        std::cout << "Minimum Bill Amount.....\n";
        std::cout << MinimumbillAmount(bills) << "\n";
        PrintMaximumAndMinimumBillAmount(bills);
        std::cout << "Free Invoices.....\n";
        FreeInvoices(bills);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}