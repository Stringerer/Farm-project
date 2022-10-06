#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <string>

#include "Farm.h"

using namespace std;

class Shop: public Farm{
    private:
    protected:
    public:    
        int money;
        Supply Sup[99];
        Plant plants[99];
  
        void sell_plant(Plant plant);
        void sell_sup(Supply Sup);
        void buy_plant(plant); 
};
#endif
