#include "Plant.h"
#include <iostream>
#include <string>

using namespace std;
//constructors for plant class
Plant::Plant(){
    name = "Plant";
    price = 0;
    growth = -1;
}
//constructor with inputted values
Plant::Plant(string n, int p, int g){
    name = n;
    price = p;
    growth = g;
}
//several functions to return values of the plant
string Plant::getName(){
    if(growth == 0){
        return name+"_seed";
    }
    else{
        return name;
    }
}
int Plant::getPrice(){
    return price;
}
int Plant::getGrowth(){
    return growth;
}
//function that makes plant grow, increasing growth and price
void Plant::grow(){
    growth++;
    price = price + 1;
}
//function resets plant
void Plant::reset(){
    name = "Plant";
    price = price - growth;
    growth = -1;
}