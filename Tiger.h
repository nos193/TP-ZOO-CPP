//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_TIGER_H
#define TP_ZOO_CPP_TIGER_H

class Tiger : public IAnimal {
public:
    Tiger(int age, int sex, bool faithful);

    string Species();
    int BuyingPrice();
    int SellingPrice();
};

#endif //TP_ZOO_CPP_TIGER_H
