#include<iostream>
#include"Functionalities.h"
#include"Bill.h"
#include"Invoice.h"

void CreateObj(Bill* arr[SIZE]){

    arr[0]=new Bill(56832.0f,100.0f,new Invoice("101",InvoiceType::E_BILL,3) );
    arr[1]=new Bill(7832.0f,100.0f,new Invoice("102",InvoiceType::PAPER_SLIP,2) );
    arr[2]=new Bill(4832.0f,500.0f,new Invoice("102",InvoiceType::SMS_GENERATED,5) );

}
Bill* MaxBillAmount(Bill* arr[SIZE])
{
    Bill* result=arr[0];
    float max=arr[0]->billAmount();
    
    float currentPrice=0.0f;
    for(int i=0;i<SIZE;i++){
        currentPrice=arr[i]->billAmount();
        if(currentPrice > max)
        {
            max=currentPrice;
            result=arr[i];
           
        }
    }
    return result;
    }
    
