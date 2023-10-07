#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Invoice.h"
#include "Bill.h"
#include "InvoiceType.h"
#include <iostream>

#define SIZE 3
void createBills(Bill *arr[SIZE]);

std::string GetInvoiceNumberOfHighestBillAmount(Bill *arr[SIZE]);

float GetBillAmountWithInvoiceNumber(Bill *arr[SIZE], std::string invoiceNumber);

Invoice **GetInvoicesWithBillAmount(Bill *arr[SIZE], float billAmount);

void FreeMemory(a *arr[SIZE]);

void checkAllBillsEmpty(Bill *arr[SIZE]);

std::string MaximumbillAmount(Bill *arr[SIZE]);

Invoice MinimumbillAmount(Bill *arr[SIZE]);
void PrintMaximumAndMinimumBillAmount(Bill *bills[SIZE]);
#endif // FUNCTIONALITIES_H
