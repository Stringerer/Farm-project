#ifndef _SUPPLY_H
#define _SUPPLY_H
#include <iostream>
#include <string>

using namespace std;

class Supply{
    protected:
        string name;
        int price;
        int growth_factor;
    public:
        Supply();
        Supply(string n,int p,int g);
        string getName();
        int getPrice();
        int getGF();
};
#endif