#include <iostream>
#include "Person.h"

using namespace std;
//constructors for the person class

Person::Person(){
    money = 0;
    supplies = NULL;
    plants = NULL;
}
Person::Person(m, ssize, psize){
    money = m;
    supplies = new Supply[ssize];
    plants = new Plant[psize];
}
//function that returns the person's money

int Person::get_money(){
    return money;
}
//functions that return the plant and supply arrays

Plant* get_plants(){
    return plants;
}
Supply* get_supplies(){
    return supplies;
}