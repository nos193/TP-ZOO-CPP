#define MEAT 0
#define SEEDS 1
#define MALE 0
#define FEMALE 1
#define HONEST true
#define TIGER 0
#define EAGLE 1
#define CHICKEN 2

#include <vector>
#include "iostream"

using namespace std;

#include "Zoo.h"
#include "Game.h"

int main() {
    /*Zoo *z = new Zoo(80000);
    z->bAddHabitat(TIGER);
    z->AddHabitat(TIGER);
    z->AddHaitat(EAGLE);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);
    z->AddHabitat(CHICKEN);

    z->AddAnimal(new Tiger(6, MALE, false));
    z->AddAnimal(new Tiger(6, FEMALE, false));
    z->AddAnimal(new Tiger(48, MALE, false));
    z->AddAnimal(new Tiger(48, FEMALE, false));

    z->AddAnimal(new Eagle(0, MALE, true));
    z->AddAnimal(new Eagle(0, FEMALE, true));
    z->AddAnimal(new Eagle(0, MALE, true));
    z->AddAnimal(new Eagle(0, FEMALE, true));

    z->AddAnimal(new Chicken(0, MALE, false));

    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));
    z->AddAnimal(new Chicken(0, FEMALE, false));

    z->DisplayHabitats();
    z->BuyMeat(200);
    z->BuySeed(2);
    cout << "Budget : " << z->Budget() << endl;
    z->FeedAnimals();
    cout << "Seeds stock : " << z->SeedCount() << endl;
    cout << "Meat stock : " << z->MeatCount() << endl;
    z->SellHabitat(TIGER);
    cout << "Budget : " << z->Budget() << endl;
    z->SellAnimal(TIGER);
    z->SellAnimal(EAGLE);
    z->SellAnimal(CHICKEN);
    cout << z->Budget() << endl;*/

    Game *g = new Game(10, 80000);
    g->Start();

    return 0;
}