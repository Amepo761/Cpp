#include<iostream>
#include"Product.h"
#include"Functionalities.h"
#define SIZE 5

int main(){
    Product* arr[SIZE];

    CreateObj(arr);

    std::cout<<"Average Product Price:"<<AvgProductPrice(arr)<<std::endl;

    Product* tax=ProductTaxAmount(arr);
    std::cout<<"Product Tax Amount:"<<tax->TaxAmount()<<std::endl;

    Product* max=MaxProductPrice(arr);
    std::cout<<"Maximum Product Price"<< max->productPrice() <<std::endl;

    FreeMemory(arr);
}