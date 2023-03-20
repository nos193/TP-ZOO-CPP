//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_ACCOUNTING_H
#define TP_ZOO_CPP_ACCOUNTING_H


class Accounting {
    float _budget;
    float _seedPrice;
    float _meatPrice;
    float _seedCount;
    float _meatCount;
    int _adultTicketPrice;
    int _childTicketPrice;
    int _subventionForEagle;
    int _subventionForTiger;
public:
    Accounting(int budget);
    void BuySeed(float seedCount);
    void BuyMeat(float meatCount);
    float Budget();
    float SeedCount();
    float MeatCount();
    void RemoveMeat(float meatCount);
    void RemoveSeed(float seedCount);
    void Buy(float price);
    void Sell(float price);
};


#endif //TP_ZOO_CPP_ACCOUNTING_H
