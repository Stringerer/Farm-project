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
    Shop(int m);
    void sell_plant(string pPlant, int growth);
    Plant return_plant_name(string plant);
    void buy_plant(string pPlant, int price);
    void sell_supply(string sSupply);
    Supply return_supply_name(string supply);
    void buy_supply(string sSupply, int price);
};
#endif