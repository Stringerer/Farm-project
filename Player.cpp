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
Player::int water_plants(){
    return 1;
}
//functions that are used to manage supplies and plants in the players inventory
void Player::Psell_plant(string pPlant){
    for (int i = 0; i < plcount; i++){
        if (plants[i].getName()==pPlant){
          plants[i].reset();  
        }
     }
}
void Player::Pbuy_plant(Plant pPlant){
    plants[plcount]=pPlant;
    plcount++;
}

void Player::Pbuy_supply(Supply sSupply){
    supplies[supcount]=sSupply;
    supcount++;
}