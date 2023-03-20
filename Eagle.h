//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_EAGLE_H
#define TP_ZOO_CPP_EAGLE_H

class Eagle : public IAnimal {
public:
    Eagle(int age, int sex, bool faithful);

    string Species();
    int BuyingPrice();
    int SellingPrice();
};


#endif //TP_ZOO_CPP_EAGLE_H
