#include <iostream>
#include <string>
#include "Person.h"



using namespace std;
//constructors for the person class

Person::Person(){
    money = 0;
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}
Person::Person(int m){
    money = m;
    supplies;
    supcount = 0;
    plants;
    plcount = 0;
}
//functions to add plants and supplies
bool Person::add_plant(Plant newplant){
    if (plcount < 10){
        plants[plcount] = newplant;
        plcount++;
        return true;
    }
    return false;
}

bool Person::add_supply(Supply newsupply){
    if (supcount < 10){
        supplies[supcount] = newsupply;
        supcount++;
        return true;
    }
    return false;
}


//function that returns the person's money

int Person::get_money(){
    return money;
}
//functions that print the plant and supply arrays

void Person::print_plants(){
    for (int i = 0; i < plcount; i++){
        if (plants[i].getGrowth()!=-1){
            cout << "Name: "<<plants[i].getName() <<"  | Price: $" << plants[i].getPrice() << endl;
        }
    }
}
void Person::print_supplies(){
    for (int i = 0; i < supcount; i++){

        cout << "Name: " <<supplies[i].getName() <<"  | Price: $" << supplies[i].getPrice() << endl;
    }
}
