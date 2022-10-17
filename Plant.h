#ifndef _PLANT_H
#define _PLANT_H
#include <iostream>
#include <string>

using namespace std;
//header file for the plant class
class Plant{
    protected:
    //the values of the plant class
        string name;
        int price;
        int growth;
    public:
    //constructors for plant class
        Plant();
        Plant(string n,int p,int g);
        // functions that get values of the plant 
        string getName();
        int getPrice();
        int getGrowth();
        //function that causes the plant to grow, increasing growth and price
        void grow();
        //function that resets plant growth;
        void reset();
};
#endif