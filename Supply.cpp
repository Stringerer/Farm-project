#include "Supply.h"
#include <iostream>
#include <string>

using namespace std;

Supply::Supply(){
    name = "Supply";
    price = 0;
    growth_factor = 0;
}

Supply::Supply(string n,int p,int g){
    name = n;
    price = p;
    growth_factor = g;
}
string Supply::getName(){
    return name;
}
int Supply::getPrice(){
    return price;
}
int Supply::getGF(){
    return growth_factor;
}