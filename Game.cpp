//
// Created by Alexis on 12/06/2022.
//
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2
#define MALE 0
#define FEMALE 1

#include "Game.h"
#include "iostream"
#include <string>

using namespace std;

Game::Game(int Years, float Budget) {
    _maxYears = Years;
    _currentRound = 1;
    _years = 0;
    _months = 1;
    _zoo = new Zoo(Budget);
}

void Game::Start() {
    cout << "                          ___   __   __\n"
            "                         [_  | /  \\ /  \\\n"
            "                          / /_| () | () |\n"
            "                        _|____]\\__/ \\__/_\n"
            "                    _.-\"|   |   |   |   |\"-._\n"
            "                _.-\"|   |   |   |   |   |   |\"-._\n"
            "            _.-\"|   |   |   |   |   |   |   |   |\"-._\n"
            "       _.-\"`|   |   |   |   |   |   |   |   |   |   |`\"-._\n"
            "   _.-\" |   |   | __|.-~|~-.|   |_..|.__|   |   |   |   | \"-._\n"
            "  \" |   |   |   |'  | ` |  \\|~\"~|   |   |`-.|   |   |   |   | \"\n"
            "    |   |   |  /| _ |   |)  |\\  |   |   |   |\\  |   |   |   |\n"
            "    |   |   | /`| a)|   |   | | |   |   |   | `\\|   |   |   |\n"
            "    |   |   |:` |   |  /|   | | |   |   |   |   |   |   |   |\n"
            "    |   |`-.||` |.-.| ( |   |/  |.  |   |   | `;|\\  |   |   |\n"
            "    |   |`-.|`--|_.'|.;\\|__/|   |   |  .|   |  ||\\\\ |   |   |\n"
            "    | _ |   |:--|   | | |   |  /|   |/  |   | .'| \\\\|   |   |\n"
            "    |(\"\\|  /|/  |   | | |   | ' |   |   |   | / |  :|;  |   |\n"
            "    |`\\'|_/`|   |   | .\\|   |/`~|=-.|   |   |/  |  `|   |   |\n"
            "    |  `|_.'|   |   | /`|   ||  |   |\\  |   |(  |   |   |   |\n"
            "    |   |   |   |   |/  |\\  ||  |   | `Y|  /| \\ |   |   |   |\n"
            "    |   |   |   |   |  /| Y ||  |   |  || /`|  \\|   |   |   |\n"
            "    |   |   |   |  /| | | | ||  |   |  || | ||  |   |   |   |\n"
            "    |   |   |   | \"-|-\" |/__||  |   | /_|_| |/__|   |   |   |\n"
            "    |   |   |   |   |   |'\"\"|   |   | '\"|\"  |\"\"\"|   |   |   |\n"
            "  __|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__\n" << endl;
    cout << "Welcome to the Zoo Simulator" << endl;
    cout << "You have " << _maxYears << " years to simulate" << endl;
    cout << "You have $" << _zoo->Budget() << " to spend" << endl;

    cout << "Press enter to start" << endl;
    cin.get();

    while (_years != _maxYears) {
        cout << "Current round : " << _currentRound << " | Month : " << this->Month(_months) << " | Year : " << _years
             << endl;
        cout << endl;
        cout << "Actual budget : $" << _zoo->Budget() << endl;
        cout << endl;

        int choice;
        while (true) {
            cout << "1. See your zoo" << endl;
            cout << "2. Buy / sell an animal" << endl;
            cout << "3. Buy food for your animals" << endl;
            cout << "4. Buy / sell an habitat" << endl;
            cout << "5. Next round" << endl;

            cout << "What would you like to do ? : ";
            cin >> choice;
            cout << endl;


            if (choice == 1) {
                _zoo->SeeZoo();
            } else if (choice == 2) {
                cout << "What do you want to do?" << endl;
                cout << "1. Buy an animal" << endl;
                cout << "2. Sell an animal" << endl;
                cout << "3. Exit" << endl;
                int choice;
                cin >> choice;
                switch (choice) {
                    case 1:
                    {
                        cout << "What do you want to buy?" << endl;
                        cout << "1. Tiger" << endl;
                        cout << "2. Eagle" << endl;
                        cout << "3. Chicken" << endl;
                        cout << endl;
                        cout << "Enter your choice : ";
                        int typeOfAnimal;
                        cin >> typeOfAnimal;
                        cout << endl;

                        switch (typeOfAnimal) {
                            case 1: {
                                cout << "1. 6 Months old, Male = $3000" << endl;
                                cout << "2. 6 Months old, Female = $3000" << endl;
                                cout << "3. 4 Years old, Male = $120 000" << endl;
                                cout << "4. 4 Years old, Female = $120 000" << endl;
                                cout << "5. 14 Years old, Male = $60 000" << endl;
                                cout << "6. 14 Years old, Female = $60 000" << endl;
                                cout << endl;

                                cout << "Which one : ";
                                int choiceAnimal;
                                cin >> choiceAnimal;

                                switch (choiceAnimal) {
                                    case 1:
                                        _zoo->BuyAnimal(TIGER, 6, MALE);
                                        break;
                                    case 2:
                                        _zoo->BuyAnimal(TIGER, 6, FEMALE);
                                        break;
                                    case 3:
                                        _zoo->BuyAnimal(TIGER, 4 * 12, MALE);
                                        break;
                                    case 4:
                                        _zoo->BuyAnimal(TIGER, 4 * 12, FEMALE);
                                        break;
                                    case 5:
                                        _zoo->BuyAnimal(TIGER, 14 * 12, MALE);
                                        break;
                                    case 6:
                                        _zoo->BuyAnimal(TIGER, 14 * 12, FEMALE);
                                        break;
                                }
                            }
                            case 2: {
                                cout << "1. 6 Months old, Male = $1000" << endl;
                                cout << "2. 6 Months old, Female = $1000" << endl;
                                cout << "3. 4 Years old, Male = $4000" << endl;
                                cout << "4. 4 Years old, Female = $4000" << endl;
                                cout << "5. 14 Years old, Male = $2000" << endl;
                                cout << "6. 14 Years old, Female = $2000" << endl;
                                cout << endl;

                                cout << "Which one : ";
                                int choiceAnimal;
                                cin >> choiceAnimal;

                                switch (choiceAnimal) {
                                    case 1:
                                        _zoo->BuyAnimal(EAGLE, 6, MALE);
                                        break;
                                    case 2:
                                        _zoo->BuyAnimal(EAGLE, 6, FEMALE);
                                        break;
                                    case 3:
                                        _zoo->BuyAnimal(EAGLE, 4 * 12, MALE);
                                        break;
                                    case 4:
                                        _zoo->BuyAnimal(EAGLE, 4 * 12, FEMALE);
                                        break;
                                    case 5:
                                        _zoo->BuyAnimal(EAGLE, 14 * 12, MALE);
                                        break;
                                    case 6:
                                        _zoo->BuyAnimal(EAGLE, 14 * 12, FEMALE);
                                        break;
                                }
                            }
                            case 3: {
                                cout << "1. 6 Months old, Male = $100" << endl;
                                cout << "2. 6 Months old, Female = $20" << endl;
                                cout << endl;

                                cout << "Which one : ";
                                int choiceAnimal;
                                cin >> choiceAnimal;
                                switch (choiceAnimal) {
                                    case 1:
                                        _zoo->BuyAnimal(CHICKEN, 6, MALE);
                                        break;
                                    case 2:
                                        _zoo->BuyAnimal(CHICKEN, 6, FEMALE);
                                        break;
                                }
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "What do you want to sell?" << endl;
                        cout << "1. Tiger" << endl;
                        cout << "2. Eagle" << endl;
                        cout << "3. Chicken" << endl;
                        cout << endl;
                        cout << "Enter your choice : ";
                        int typeOfAnimal;
                        cin >> typeOfAnimal;
                        _zoo->SellAnimal(typeOfAnimal-1);
                        break;
                    }
                    case 3:
                    {
                        break;
                    }
                    default:
                    {
                        cout << "Invalid choice" << endl;
                        break;
                    }
                }
            } else if (choice == 3) {
                cout << "What do you want to buy?" << endl;
                cout << "1. Meat" << endl;
                cout << "2. Seeds" << endl;
                cout << endl;
                cout << "Enter your choice : ";
                int typeOfFood;
                cin >> typeOfFood;
                cout << endl;
                cout << "How much do you want to buy? : ";
                int amount;
                cin >> amount;
                cout << endl;
                switch (typeOfFood) {
                    case 1:
                        _zoo->BuyMeat(amount);
                        break;
                    case 2:
                        _zoo->BuySeed(amount);
                        break;
                }
            } else if (choice == 4) {
                cout << "What do you want to do?" << endl;
                cout << "1. Buy an habitat" << endl;
                cout << "2. Sell an habitat" << endl;
                cout << "3. Exit" << endl;
                int choice;
                cin >> choice;
                switch (choice) {
                    case 1:
                    {
                        cout << "What do you want to buy ?" << endl;
                        cout << "1. Habitat for tigers" << endl;
                        cout << "2. Habitat for eagles" << endl;
                        cout << "3. Habitat for chickens" << endl;
                        cout << endl;
                        cout << "Enter your choice : ";
                        int typeOfHabitat;
                        cin >> typeOfHabitat;
                        _zoo->BuyHabitat(typeOfHabitat-1);
                        break;
                    }
                    case 2:
                    {
                        cout << "What habitat do you want to sell ?" << endl;
                        cout << "1. Habitat for tigers" << endl;
                        cout << "2. Habitat for eagles" << endl;
                        cout << "3. Habitat for chickens" << endl;
                        cout << endl;
                        cout << "Enter your choice : ";
                        int typeOfHabitat;
                        cin >> typeOfHabitat;
                        _zoo->SellHabitat(typeOfHabitat-1);
                        break;
                    }
                }
            } else if (choice == 5) {
                break;
            } else {
                cout << "Invalid choice" << endl;
            }
        }
        this->NextRound();

    }
    cout << "Game over" << endl;
}

void Game::NextRound() {
    if (_months == 12) {
        _years++;
        _months = 0;
    }
    _currentRound++;
    _months++;
    _zoo->AddMonthToAnimals();
}

string Game::Month(int month) {
    string monthName;
    switch (month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
    }
    return monthName;
}