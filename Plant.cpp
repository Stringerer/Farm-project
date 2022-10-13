#include "Plant.h"
#include <iostream>
#include <string>

using namespace std;

Plant::Plant(){
    name = "Plant";
    price = 0;
    growth = 0;
}
Plant::Plant(string n, int p, int g){
    name = n;
    price = p;
    growth = g;
}
string Plant::getName(){
    if(growth == 0){
        return name+"seed";
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
void Plant::grow(){
    growth++;
}