#ifndef _SUPPLY_H
#define _SUPPLY_H
#include <iostream>
#include <string>

using namespace std;
//header file for supply class
class Supply{
    protected:
    //protected contains name, price and growth factor of the supply
        string name;
        int price;
        int growth_factor;
    public:
    //constructors for the class and simple functions that return the values of the supply
        Supply();
        Supply(string n,int p,int g);
        string getName();
        int getPrice();
        int getGF();
};
#endif