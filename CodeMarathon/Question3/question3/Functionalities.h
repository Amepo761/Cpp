#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Invoice.h"
#include "Bill.h"
#include "InvoiceType.h"
#include <iostream>

#define SIZE 3
void CreateObj(Bill *arr[SIZE]);

std::string HighestBillAmount(Bill *arr[SIZE]);

float BillAmountWithInvoiceNumber(Bill *arr[SIZE], std::string invoiceNumber);

Invoice **InvoicesWithBillAmount(Bill *arr[SIZE], float billAmount);

void MinMaxBillAmount(Bill *bills[SIZE]);

void FreeMemory(Bill *arr[SIZE]);
#endif // FUNCTIONALITIES_H
