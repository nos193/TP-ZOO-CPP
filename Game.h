//
// Created by Alexis on 12/06/2022.
//

#ifndef TP_ZOO_CPP_GAME_H
#define TP_ZOO_CPP_GAME_H

#include "Zoo.h"
#include <string>

class Game {
    int _maxYears;
    int _currentRound;
    int _years;
    int _months;
    Zoo *_zoo;
public:
    Game(int Years, float Budget);

    void NextRound();

    void Start();

    string Month(int month);
};


#endif //TP_ZOO_CPP_GAME_H