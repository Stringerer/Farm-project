#include <iostream>
#include <string>
#include "Plant.h"
#include "Supply.h"
#include "Person.h"
#ifndef _SHOP_H
#define _SHOP_H


//header for shop object
using namespace std;
//inherits from the Person class with some differences
class Shop: public Person
{
public:
//unique functions such as constructer and exchanging items with player
    Shop();
    Shop(int m, int ssize, int psize);
    void add_plant(Plant nplant);
    void add_supply(Supply nsupply);
    void sell_plant(Plant pPlant);
    void buy_plant(Plant pPlant);
    void sell_supply(Supply sSupply);
    void buy_supply(Supply sSupply);
//deconstructor
    ~Shop(){delete [] supplies; delete [] plants;}
};
#endif