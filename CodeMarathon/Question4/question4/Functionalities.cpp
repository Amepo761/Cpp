#include "Functionalities.h"

void CreateObj(Customer *arr[SIZE])
{
    arr[0] = new Customer("Ameesha", "101", CustomerType::ELITE,  CreditCard("111 222 3333 4444", CardType::SIGNATURE, 678400.0f, 756));
    arr[1] = new Customer("Dheee", "102", CustomerType::PRIVILEGED,  CreditCard("111 222 333 4444", CardType::NEO, 10000.0f, 899));
    arr[2] = new Customer("Diya", "103", CustomerType::PRO,  CreditCard("111 222 333 4444", CardType::MILES, 12000.0f, 566));
}

std::string MinimumLimitGetCustNumber(Customer *arr[SIZE])
{ 
    float min = arr[0]->creditCard().limit();

    float currentlimit=arr[0]->creditCard().limit();
    
    std::string customer_number = arr[0]->creditCard().number();
    for (int i = 1; i < SIZE; i++)
    {   
        currentlimit=arr[i]->creditCard().limit();
        if (currentlimit < min)
        {
            min = arr[i]->creditCard().limit();
            customer_number = arr[i]->creditCard().number();
        }
    }
    return customer_number;
}

CreditCard **CompareCreditCardType(Customer *arr[SIZE], CardType cardtype)
{
    CreditCard **credit_cards = new CreditCard *[SIZE]{};
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]->creditCard().type() == cardtype)
        {
            credit_cards[count] = new CreditCard(arr[i]->creditCard().number(),arr[i]->creditCard().type(),arr[i]->creditCard().limit(),arr[i]->creditCard().cardCvvNumber());
            count++;
        }
    }
    return credit_cards;
}

CustomerType CustomerTypeUsingId(Customer *customers[SIZE], std::string id)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->id() == id)
        {
            return customers[i]->customerType();
        }
    }
    
}

bool CustomerCardType(Customer *customers[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->creditCard().type() == CardType::SIGNATURE)
        {
            return true;
        }
    }
    return false;
}

void FreeMemory(Customer *arr[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete arr[i];
    }
}

