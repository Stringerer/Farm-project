#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include "Plant.h"
#include "Supply.h"

//the header file for the person abstract class. will be the parent class of the shop
using namespace std;

class Person
{
protected:
//has an int representing money and two class arrays to hold the plants and supplies
    int money;
    Supply supplies[10];
    int supcount;
    Plant plants[10];
    int plcount;

public:
//constructors for the person class
    Person();
    Person(int m);

    bool add_plant(Plant newplant);
    bool add_supply(Supply newsupply);
//function that returns the person's money
    int get_money();
//functions that print the plant and supply arrays
    void print_plants();
    void print_supplies();
//virtual functions for buying and selling plants as this function will act differently in child classes
    virtual void sell_plant(string Plant) = 0;
    virtual void buy_plant(string Plant, int price) = 0;

};
#endif