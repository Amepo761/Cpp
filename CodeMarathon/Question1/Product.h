#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include"ProductType.h"
class Product
{
private:
    std::string _productId;
    ProductType _type;
    float _productPrice;
    std::string _productBrand;

public:
    Product(std::string productId,
    ProductType type,
    float productPrice,
    std::string productBrand);

    float TaxAmount();
    ~Product() {
        std::cout<<"Product with id :"<<_productId<<"is destroyed"<<std::endl;
    }

    std::string productId() const { return _productId; }

    ProductType type() const { return _type; }

    float productPrice() const { return _productPrice; }

    std::string productBrand() const { return _productBrand; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    
};
std::string DisplayEnum(const ProductType value);

#endif // PRODUCT_H
