#include <iostream>
#include <string>
#include "Plant.h"
#include "Supply.h"
#include "Person.h"
#include "Shop.h"

using namespace std; 

int main(){

    Shop s1(100);
    Plant p1("flower",1,1);
    Supply z1("tool",1,1);
    s1.add_plant(p1);
    s1.add_supply(z1);
    s1.print_plants();
    s1.print_supplies();
    s1.sell_plant("flower");
    cout << s1.get_money() << endl;
    return 0;
}