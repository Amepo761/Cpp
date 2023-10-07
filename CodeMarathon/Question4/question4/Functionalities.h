#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#include "CustomerType.h"
#include "CardType.h"
#include "CreditCard.h"
#define SIZE 3
void CreateObj(Customer* arr[SIZE]);

std::string MinimumLimitGetCustNumber(Customer* arr[SIZE]);

CreditCard** CompareCreditCardType(Customer* arr[SIZE], CardType card_type);

CustomerType CustomerTypeUsingId(Customer* arr[SIZE], std::string id);

bool CustomerCardType(Customer* arr[SIZE]);

void FreeMemory(Customer* arr[SIZE]);

#endif // FUNCTIONALITIES_H
