//
// Created by Alexis on 11/06/2022.
//

#ifndef TP_ZOO_CPP_HABITATCHICKEN_H
#define TP_ZOO_CPP_HABITATCHICKEN_H

#include "IHabitat.h"
#include "Chicken.h"
#include "Accounting.h"
#include <vector>

class HabitatChicken : public IHabitat {
    vector<Chicken *> _chickens;
public:
    HabitatChicken();

    void AddAnimal(Chicken *chicken);
    void DisplayAnimals();
    void FeedAnimals(Accounting *accounting);
    int Size();
    int GetAnimalPrice(int index);
    void RemoveAnimal(int index);
    void AddMonthToAnimals();
};


#endif //TP_ZOO_CPP_HABITATCHICKEN_H
