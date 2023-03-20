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
#include "Eagle.h"

Eagle::Eagle(int age, int sex, bool faithful) :
        IAnimal(age, sex, MEAT, 14, 25, faithful) {
    switch (sex) {
        case MALE:
            _foodByDay = 0.25;
            _daysBeforeHunger = 10;
            _sexualMaturity = 48;
            _pregnancy = 0;
            _infantMortality = 0;
            break;
        case FEMALE:
            _foodByDay = 0.3;
            _daysBeforeHunger = 10;
            _sexualMaturity = 48;
            _pregnancy = 45;
            _infantMortality = 0.5;
            break;
    }
}

string Eagle::Species() {
    return "eagle";
}

int Eagle::BuyingPrice() {
    if (this->Age() <= 6) {
        return 1000;
    }
    if (this->Age() <= 48) {
        return 4000;
    }
    if (this->Age() <= 168) {
        return 2000;
    }
}

int Eagle::SellingPrice() {
    if (this->Age() <= 6) {
        return 500;
    }
    if (this->Age() <= 48) {
        return 2000;
    }
    if (this->Age() <= 168) {
        return 400;
    }
}