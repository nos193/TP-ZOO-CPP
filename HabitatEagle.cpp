//
// Created by Alexis on 11/06/2022.
//

#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include "HabitatEagle.h"
#include "Eagle.h"
#include "Accounting.h"
#include <iostream>
#include <vector>

using namespace std;

HabitatEagle::HabitatEagle() : IHabitat(EAGLE) {
    _Species = "eagle";
    _buyingPrice = 2000;
    _sellingPrice = 500;
    _capacity = 4;
    _currentCapacity = 0;
    _looseIfSurpopulationByMonth = 1;
    _probabilityOfBeingSick = 0.1;
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}

void HabitatEagle::AddAnimal(Eagle *eagle) {
    _eagles.push_back(eagle);
    _currentCapacity++;
    cout << "Eagle added" << endl;
}

void HabitatEagle::DisplayAnimals() {
    cout << "Eagles:" << endl;
    for (int i = 0; i < _eagles.size(); i++) {
        cout << "Eagle " << i << ": Age : " << _eagles[i]->Age() << " months, Sex : " << _eagles[i]->Sex() << endl;
    }
}

void HabitatEagle::FeedAnimals(Accounting *accounting) {
    for (int i = 0; i < _eagles.size(); i++) {
        if (accounting->MeatCount() >= _eagles[i]->FoodByDay()) {
            _eagles[i]->Eat();
            accounting->RemoveMeat(_eagles[i]->FoodByDay());
            cout << "Eagle " << i+1 << " ate " << _eagles[i]->FoodByDay() << " kg of meat" << endl;
        } else {
            cout << "Not enough meat" << endl;
        }
    }
}

int HabitatEagle::Size() {
    return _eagles.size();
}

int HabitatEagle::GetAnimalPrice(int index) {
    return _eagles[index]->SellingPrice();
}

void HabitatEagle::RemoveAnimal(int index) {
    delete _eagles[index];
    _eagles.erase(_eagles.begin() + index);
    _currentCapacity--;
}

void HabitatEagle::AddMonthToAnimals() {
    for (int i = 0; i < _eagles.size(); i++) {
        _eagles[i]->AddMonth();
    }
}