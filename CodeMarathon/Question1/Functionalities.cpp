#include "Functionalities.h"

void CreateObj(Product *arr[SIZE])
{
    arr[0]=new Product("101",ProductType::APPLIANCE,20000.0f,"Samsung");
    arr[1]=new Product("102",ProductType::PERFUME,20000.0f,"BodyShop");
    arr[2]=new Product("103",ProductType::FMCG,20000.0f,"Abc");
    arr[3]=new Product("104",ProductType::APPLIANCE,50000.0f,"Oppo");
    arr[4]=new Product("105",ProductType::APPLIANCE,10000.0f,"Nokia");

}

float AvgProductPrice(Product *arr[SIZE])
{
    float total=0.0f;
    for(int i=0;i<SIZE;i++){
        total+=arr[i]->productPrice();
    }
    return total/SIZE;
}

Product *ProductTaxAmount(Product *arr[SIZE])
{
    Product* result=arr[0];
    float max=arr[0]->productPrice();
    
    float currentPrice=0.0f;
    for(int i=0;i<SIZE;i++){
        currentPrice=arr[i]->productPrice();
        if(currentPrice > max)
        {
            max=currentPrice;
            result=arr[i];
           
        }
    }
    return result;
    }

Product *MaxProductPrice(Product *arr[SIZE])
    {
    Product* result=arr[0];
    float max=arr[0]->productPrice();
    
    float currentPrice=0.0f;
    for(int i=0;i<SIZE;i++){
        currentPrice=arr[i]->productPrice();
        if(currentPrice > max)
        {
            max=currentPrice;
            result=arr[i];
           
        }
    }
    return result;

    }

void FreeMemory(Product *arr[SIZE])
    {
         for(int i=0;i<SIZE;i++){
            delete arr[i];
        }
    }
