#include <iostream>
#include "Person.h"

using namespace std;

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
int Person::get_money(){
    return money;
}
Plant* get_plants(){
    return plants;
}
Supply* get_supplies(){
    return supplies;
}