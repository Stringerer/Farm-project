#ifndef _PLANT_H
#define _PLANT_H
#include <iostream>
#include <string>

using namespace std;

class Plant{
    protected:
        string name;
        int price;
        int growth;
    public:
        Plant();
        Plant(string n,int p,int g);
        string getName();
        int getPrice();
        int getGrowth();
        void grow();
};
#endif