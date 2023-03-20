//
// Created by Alexis on 11/06/2022.
//

#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include "IHabitat.h"
#include "HabitatChicken.h"
#include "Accounting.h"
#include <iostream>
#include <vector>

using namespace std;

HabitatChicken::HabitatChicken() : IHabitat(CHICKEN) {
    _Species = "chicken";
    _buyingPrice = 300;
    _sellingPrice = 50;
    _capacity = 10;
    _currentCapacity = 0;
    _looseIfSurpopulationByMonth = 4;
    _probabilityOfBeingSick = 0.05;
    cout << "Habitat created" << endl;
    cout << "Type of animal: " << _Species << endl;
}

void HabitatChicken::AddAnimal(Chicken *chicken) {
    _chickens.push_back(chicken);
    _currentCapacity++;
    cout << "Chicken added" << endl;
}

void HabitatChicken::DisplayAnimals() {
    cout << "Chickens:" << endl;
    for (int i = 0; i < _chickens.size(); i++) {
        cout << "Chicken " << i << ": Age : " << _chickens[i]->Age() << " months, Sex : " << _chickens[i]->Sex() << endl;
    }
}

void HabitatChicken::FeedAnimals(Accounting *accounting) {
    for (int i = 0; i < _chickens.size(); i++) {
        if (accounting->SeedCount() >= _chickens[i]->FoodByDay()) {
            _chickens[i]->Eat();
            accounting->RemoveSeed(_chickens[i]->FoodByDay());
            cout << "Chicken " << i+1 << " ate " << _chickens[i]->FoodByDay() << " kg of seeds" << endl;
        } else {
            cout << "Not enough seeds" << endl;
        }
    }
}

int HabitatChicken::Size() {
    return _chickens.size();
}

int HabitatChicken::GetAnimalPrice(int index) {
    return _chickens[index]->SellingPrice();
}

void HabitatChicken::RemoveAnimal(int index) {
    delete _chickens[index];
    _chickens.erase(_chickens.begin() + index);
    _currentCapacity--;
}

void HabitatChicken::AddMonthToAnimals() {
    for (int i = 0; i < _chickens.size(); i++) {
        _chickens[i]->AddMonth();
    }
}