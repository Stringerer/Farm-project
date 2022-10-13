#ifndef _PERSON_H
#define _PERSON_H
#include <iostream>
#include "Plant.h"
#include "Supply.h"

using namespace std;

class Person
{
protected:
    int money;
    Supply* supplies;
    Plant* plants;

public:
    Person();
    Person(int m, int ssize, int psize);
    int get_money();
    Plant* get_plants();
    Supply* get_supplies();
    virtual void sell_plant(Plant pPlant) = 0;
    virtual void buy_plant(Plant pPlant) = 0;
    ~Person(){if (supplies != nullptr) {delete[] ;}}{if (plants != nullptr) {delete[] ;}}
};
#endif