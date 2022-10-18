#ifndef _FARM_H
#define _FARM_H
#include "Plant.h"
#include "Supply.h"

class Farm
{
protected:
    // the attributes of Farm
    int growth_factor; // ... to be implemented
    Plant *plants; // in plan doc: Plant
    // only in plan doc: Sup supplies;
public:
    // constructors for the Farm class
    Farm();

    // functions that add & remove plant from array
    void add_plant(Plant p);
    void rem_plant(int num); // in plan doc: void rem_plant(Plant p). I change argument to int (representing field num) because there can be mutiple apples planted at different time, and rem_plant(apple) doesn't specify which apple to remove

    // a function that returns plants array
    Plant *return_plants();

    // a function that print what is in the farm
    void printFarm(); // not in plan doc

    // a function that returns the num of ripe plants in farm (Yang)
    int getRipeNum(); // not in plan doc
    
    // a function to grow the plant 
    void FramGrow(int num);
        
    // destructor for the Farm class
    ~Farm();

    // only in plan doc: void add_sup(Sup s);
};
#endif
