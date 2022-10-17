#include <iostream>
#include <string>
#include "Plant.h"
#include "Supply.h"
#include "Person.h"
#include "Shop.h"

#ifndef _PLAYER_H
#define _PLAYER_H

//header for the player class

using namespace std;
//inherits from shop class
class Player: public Shop
{
public:
//unique functions like constructors and exchanging items
    Player();
    Player(int m);
    void Psell_plant(string pPlant);
    void Pbuy_plant(Plant pPlant);
    void Pbuy_supply(Supply sSupply);
};

#endif