#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include"Product.h"
#include"ProductType.h"
#define SIZE 5

//Creating 5 object of product in heap
void CreateObj(Product* arr[SIZE]);

//Finding Average Product Price
float AvgProductPrice(Product* arr[SIZE]);

//Finding Product Tax Amount with minimum productPrice
Product* ProductTaxAmount(Product* arr[SIZE]);

//Finding Maximum product price 
Product* MaxProductPrice(Product* arr[SIZE]);

//deeleting all allocation made on the heap
void FreeMemory(Product* arr[SIZE]);
#endif // FUNCTIONALITIES_H
