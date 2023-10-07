#include "Functionalities.h"

int main()
{
         Customer *arr[SIZE];
        CreateObj(arr);
        std::cout << "Customer with minimum limit: " << MinimumLimitGetCustNumber(arr) << "\n";
        std::cout << "Customer type of following id: " << DisplayEnum(CustomerTypeUsingId(arr, "101")) << "\n";
        
        if (CustomerCardType(arr))
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
        std::cout << "Customer with  card type: "<<std::endl;
        CreditCard **creditcard = CompareCreditCardType(arr, CardType::SIGNATURE);
        for (int i = 0; i < SIZE; i++)
        {
            if (creditcard[i] != nullptr)
            {
                std::cout << *creditcard[i] << "\n";
            }
        }
        FreeMemory(arr);
    }
    
