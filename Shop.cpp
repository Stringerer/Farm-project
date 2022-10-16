#include <iostream>
#include <string>
#include "Plant.h"
#include "Supply.h"
#include "Person.h"
#include "Shop.h"

using namespace std;
//base constructor for shop

Shop::Shop(){
    money = 0;
    supplies = NULL;
    supcount = 0;
    plants = NULL;
    plcount = 0;
}
//constructor with values

Shop::Shop(int m, int ssize, int psize){
    money = m;
    supplies = new Supply[ssize];
    supcount = 0;
    plants = new Plant[psize];
    plcount = 0;
}
//functions that add items to shop
void Shop::add_plant(Plant nplant){
    plants[plcount]=nplant;
}
void Shop::add_supply(Supply nsupply){
    supplies[supcount]=nsupply;
}

//buy/sell functions
//sell functions check to make sure the object is in shop before selling
void Shop::sell_plant(string plant){
    for(int i = 0; i < plcount; i++){
        if (plants[i].getName()==plant){
            money = money + plants[i].getPrice;
        }
    }
}
void Shop::buy_plant(string plant, int price){
    money = money - price;
}
void Shop::sell_supply(string supply){
    for(int i = 0; i < supcount; i++){
        if (supplies[i].getName()==supply){
            money = money + supplies[i].getPrice;
        }
    }
}

void Shop::buy_supply(string supply, int price){
    money = money - price;
}