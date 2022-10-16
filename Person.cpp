#include <iostream>
#include "Person.h"
#include "Plant.h"
#include "Supply.h"
#include <string>


using namespace std;
//constructors for the person class

Person::Person(){
    money = 0;
    supplies = NULL;
    supcount = 0;
    plants = NULL;
    plcount = 0;
}
Person::Person(int m, int ssize, int psize){
    money = m;
    supplies = new Supply[ssize];
    supcount = 0;
    plants = new Plant[psize];
    plcount = 0;
}
//function that returns the person's money

int Person::get_money(){
    return money;
}
//functions that return the plant and supply arrays

Plant* Person::get_plants(){
    return plants;
}
Supply* Person::get_supplies(){
    return supplies;
}