#ifndef _PERSON_H
#define _PERSON_H
#include <iostream>
#include "Plant.h"
#include "Supply.h"

//the header file for the person abstract class. will be the parent class of the shop
using namespace std;

class Person
{
protected:
//has an int representing money and two class arrays to hold the plants and supplies
    int money;
    Supply* supplies;
    Plant* plants;

public:
//constructors for the person class
    Person();
    Person(int m, int ssize, int psize);
//function that returns the person's money
    int get_money();
//functions that return the plant and supply arrays
    Plant* get_plants();
    Supply* get_supplies();
//virtual functions for buying and selling plants as this function will act differently in child classes
    virtual void sell_plant(Plant pPlant) = 0;
    virtual void buy_plant(Plant pPlant) = 0;
//deconstructor
    ~Person(){if (supplies != nullptr) {delete[] ;}}{if (plants != nullptr) {delete[] ;}}
};
#endif