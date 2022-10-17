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
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}
//constructor with inputted money

Shop::Shop(int m){
    money = m;
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}


//buy/sell functions
//sell functions check to make sure the object is in shop before selling
void Shop::sell_plant(string plant, int growth){
    for(int i = 0; i < plcount; i++){
        if (plants[i].getName()==plant && plants[i].getGrowth == growth){
            money = money + plants[i].getPrice();
        }
    }
}
Plant Shop::return_plant_name(string plant){
    for(int i = 0; i < plcount; i++){
        if (plants[i].getName()==Plant);
        return plants[i];
    }
}
void Shop::buy_plant(string plant, int price){
    money = money - price;
}
void Shop::sell_supply(string supply){
    for(int i = 0; i < supcount; i++){
        if (supplies[i].getName()==supply){
            money = money + supplies[i].getPrice();
        }
    }
}
Supply Shop::return_supply_name(string supply){
    for(int i = 0; i < supcount; i++){
        if (supplies[i].getName()==supply);
        return supplies[i];
    }
void Shop::buy_supply(string supply, int price){
    money = money - price;
}