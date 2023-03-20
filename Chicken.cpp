//
// Created by Alexis on 10/06/2022.
//
#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true

#include <string>

using namespace std;

#include "IAnimal.h"
#include "Chicken.h"

Chicken::Chicken(int age, int sex, bool faithful) :
        IAnimal(age, sex, SEEDS, 8, 15, faithful) {
    switch (sex) {
        case MALE:
            _foodByDay = 0.18;
            _daysBeforeHunger = 2;
            _sexualMaturity = 6;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 0.15;
            _daysBeforeHunger = 1;
            _sexualMaturity = 6;
            _pregnancy = 42;
            _infantMortality = 0.5;
            break;
    }
}

string Chicken::Species() {
    return "chicken";
}

int Chicken::BuyingPrice() {
    switch (this->SexInt()) {
        case MALE:
            return 100;
        case FEMALE:
            return 20;
    }
}

int Chicken::SellingPrice() {
    switch (this->SexInt()) {
        case MALE:
            return 20;
        case FEMALE:
            return 10;
    }
}