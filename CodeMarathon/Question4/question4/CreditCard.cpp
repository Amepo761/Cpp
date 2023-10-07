#include "CreditCard.h"

CreditCard::CreditCard(std::string number, CardType type, float limit, int card_cvv_number)
    : _number(number), _type(type), _limit(limit)
{
    if(card_cvv_number>100 && card_cvv_number<1000){
        _card_cvv_number = card_cvv_number;
    }
    else{
       std::cout<<"Card Number not valid"<<std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs)
{
    os << "_number: " << rhs._number
       << " _type: " << DisplayCardType(rhs._type)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayCardType(CardType value)
{
    if (value == CardType::MILES)
    {
        return "MILES";
    }
    else if (value == CardType::NEO)
    {
        return "NEO";
    }
    else
        return "SIGNATURE";
}
