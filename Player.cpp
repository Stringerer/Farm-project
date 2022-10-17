#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

//simple constructor 
Player::Player(){
    money = 0;
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}
//constructor with inputted money

Player::Player(int m){
    money = m;
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}
//function that returns an int when the plants are watered
int Player::water_plants(){
    return 1;
}
//functions that are used to manage supplies and plants in the players inventory
bool Player::Psell_plant(string pPlant, int growth){
    for (int i = 0; i < plcount; i++){
        if (plants[i].getName()==pPlant && plants[i].getGrowth() == growth){
          plants[i].reset();
          return true;
        }
     }
    return false;
}
void Player::Pbuy_plant(Plant pPlant){
    plants[plcount]=pPlant;
    plcount++;
}

void Player::Pbuy_supply(Supply sSupply){
    supplies[supcount]=sSupply;
    supcount++;
}