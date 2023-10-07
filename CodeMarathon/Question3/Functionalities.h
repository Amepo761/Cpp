#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"Invoice.h"
#include"Bill.h"
#define SIZE 3

void CreateObj(Bill* arr[SIZE]);

//return InvoiceNumber of Bill with highest billAmount

Bill* MaxBillAmount(Bill* arr[SIZE]);




/*
A function that prints the invoiceNumber of the Bill obj with max
and min billAmount
*/



/*
Free the memory*/
void FreeMemory(Bill* arr[SIZE]);
#endif // FUNCTIONALITIES_H
