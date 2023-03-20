//
// Created by Alexis on 10/06/2022.
//

#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include <iostream>

using namespace std;

/*Habitat::Habitat(int typeOfAnimal) {
    switch (typeOfAnimal) {
        case TIGER:
            _typeOfAnimal = TIGER;
            _Species = "tiger";
            _buyingPrice = 2000;
            _sellingPrice = 500;
            _capacity = 2;
            _currentCapacity = 0;
            _looseIfSurpopulationByMonth = 1;
            _probabilityOfBeingSick = 0.2;
            break;
        case EAGLE:
            _typeOfAnimal = EAGLE;
            _Species = "eagle";
            _buyingPrice = 2000;
            _sellingPrice = 500;
            _capacity = 4;
            _currentCapacity = 0;
            _looseIfSurpopulationByMonth = 1;
            _probabilityOfBeingSick = 0.1;
            break;
        case CHICKEN:
            _typeOfAnimal = CHICKEN;
            _Species = "chicken";
            _buyingPrice = 300;
            _sellingPrice = 50;
            _capacity = 10;
            _currentCapacity = 0;
            _looseIfSurpopulationByMonth = 4;
            _probabilityOfBeingSick = 0.05;
            break;
    }
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}*/

IHabitat::IHabitat(int typeOfAnimal) : _typeOfAnimal(typeOfAnimal), _currentCapacity(0) {}

int IHabitat::GetTypeOfAnimal() {
    return _typeOfAnimal;
}

int IHabitat::GetCapacity() {
    return _capacity;
}

int IHabitat::GetCurrentCapacity() {
    return _currentCapacity;
}

int IHabitat::GetBuyingPrice() {
    return _buyingPrice;
}

int IHabitat::GetSellingPrice() {
    return _sellingPrice;
}