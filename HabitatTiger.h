//
// Created by Alexis on 11/06/2022.
//

#ifndef TP_ZOO_CPP_HABITATTIGER_H
#define TP_ZOO_CPP_HABITATTIGER_H

#include "IHabitat.h"
#include "Accounting.h"
#include "Tiger.h"
#include <vector>

class HabitatTiger : public IHabitat {
    vector<Tiger *> _tigers;
public:
    HabitatTiger();
    void AddAnimal(Tiger *tiger);
    void DisplayAnimals();
    void FeedAnimals(Accounting *accounting);
    int Size();
    int GetAnimalPrice(int index);
    void RemoveAnimal(int index);
    void AddMonthToAnimals();
};


#endif //TP_ZOO_CPP_HABITATTIGER_H
