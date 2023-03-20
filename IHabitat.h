//
// Created by Alexis on 10/06/2022.
//

#ifndef TP_ZOO_CPP_IHABITAT_H
#define TP_ZOO_CPP_IHABITAT_H

#include <string>
#include "Chicken.h"
#include "Eagle.h"
#include "Tiger.h"

using namespace std;

class IHabitat {
    int _typeOfAnimal;
protected:
    string _Species;
    int _buyingPrice;
    int _sellingPrice;
    int _capacity;
    int _currentCapacity;
    int _looseIfSurpopulationByMonth;
    float _probabilityOfBeingSick;
public:
    IHabitat(int typeOfAnimal);
    int GetTypeOfAnimal();
    int GetCurrentCapacity();
    int GetCapacity();
    int GetBuyingPrice();
    int GetSellingPrice();
};


#endif //TP_ZOO_CPP_IHABITAT_H
