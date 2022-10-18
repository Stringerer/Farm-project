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
    supcount = 10;
    plants;
    plcount = 10;
}
//constructor with inputted money

Shop::Shop(int m){
    money = m;
    supplies;
    supcount = 10;
    plants;
    plcount = 10;
}

void Shop::add_plant(Plant pInfo){
  int ifadded = 0;
  for(int i = 0; i < this->plcount; i++){
    if(plants[i].getGrowth() == -1){plants[i] = pInfo;ifadded = 1;}
    if(ifadded == 1){break;}
  }
}

void Shop::add_supply(Supply SInfo){
  int ifadded = 0;
  for(int i = 0; i < this->supcount; i++){
    if(supplies[i].getGF() == 0){supplies[i] = SInfo;ifadded = 1;}
    if(ifadded == 1){break;}
  }
}
//buy/sell functions
//sell functions check to make sure the object is in shop before selling
void Shop::sell_plant(string plant, int growth){
    for(int i = 0; i < plcount; i++){
        if (plants[i].getName()==plant && plants[i].getGrowth() == growth){
            money = money + plants[i].getPrice();
        }
    }
}
Plant Shop::return_plant_name(string plant){
    for(int i = 0; i < plcount; i++){
        if (plants[i].getName()==plant){
            return plants[i];
        }
    }
    Plant p;
    return p;
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
        if (supplies[i].getName()==supply){
            return supplies[i];
        }
    }
    Supply s;
    return s;
}
void Shop::buy_supply(string supply, int price){
    money = money - price;
}
