//
// Created by Alexis on 11/06/2022.
//

#ifndef TP_ZOO_CPP_HABITATEAGLE_H
#define TP_ZOO_CPP_HABITATEAGLE_H

#include "IHabitat.h"
#include "Eagle.h"
#include "Accounting.h"
#include <vector>

class HabitatEagle : public IHabitat {
    vector<Eagle *> _eagles;
public:
    HabitatEagle();
    void AddAnimal(Eagle *eagle);
    void DisplayAnimals();
    void FeedAnimals(Accounting *accounting);
    int Size();
    int GetAnimalPrice(int index);
    void RemoveAnimal(int index);
    void AddMonthToAnimals();
};


#endif //TP_ZOO_CPP_HABITATEAGLE_H
