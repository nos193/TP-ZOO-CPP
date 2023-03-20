//
// Created by Alexis on 11/06/2022.
//

#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include "HabitatTiger.h"
#include "Accounting.h"
#include <iostream>

using namespace std;

HabitatTiger::HabitatTiger() : IHabitat(TIGER) {
    _Species = "tiger";
    _buyingPrice = 2000;
    _sellingPrice = 500;
    _capacity = 2;
    _currentCapacity = 0;
    _looseIfSurpopulationByMonth = 1;
    _probabilityOfBeingSick = 0.2;
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}

void HabitatTiger::AddAnimal(Tiger *tiger) {
    _tigers.push_back(tiger);
    _currentCapacity++;
    cout << "Tiger added" << endl;
}

void HabitatTiger::DisplayAnimals() {
    cout << "Tigers:" << endl;
    for (int i = 0; i < _tigers.size(); i++) {
        cout << "Tiger " << i << ": Age : " << _tigers[i]->Age() << " months, Sex : " << _tigers[i]->Sex() << endl;
    }
}

void HabitatTiger::FeedAnimals(Accounting *accounting) {
    for (int i = 0; i < _tigers.size(); i++) {
        if (accounting->MeatCount() >= _tigers[i]->FoodByDay()) {
            _tigers[i]->Eat();
            accounting->RemoveMeat(_tigers[i]->FoodByDay());
            cout << "Tiger " << i+1 << " ate " << _tigers[i]->FoodByDay() << " of meat" << endl;
        } else {
            cout << "Not enough meat" << endl;
        }
    }
}

int HabitatTiger::Size() {
    return _tigers.size();
}

int HabitatTiger::GetAnimalPrice(int index) {
    return _tigers[index]->SellingPrice();
}

void HabitatTiger::RemoveAnimal(int index) {
    delete _tigers[index];
    _tigers.erase(_tigers.begin() + index);
    _currentCapacity--;
}

void HabitatTiger::AddMonthToAnimals() {
    for (int i = 0; i < _tigers.size(); i++) {
        _tigers[i]->AddMonth();
    }
}