#include "Supply.h"
#include <iostream>
#include <string>

using namespace std;
//simple constructor
Supply::Supply(){
    name = "Supply";
    price = 0;
    growth_factor = 0;
}
//constructor that allows for inputted values
Supply::Supply(string n,int p,int g){
    name = n;
    price = p;
    growth_factor = g;
}
//functions that return name, price, and growth factor
string Supply::getName(){
    return name;
}
int Supply::getPrice(){
    return price;
}
int Supply::getGF(){
    return growth_factor;
}
