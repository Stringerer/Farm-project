#include "Farm.h"
#include <iostream>
using namespace std;

Farm::Farm() { plants = new Plant[10]; }

void Farm::add_plant(Plant p)
{
    /* ... insert code here to check if Player has Plant p seed*/
    // check if there is space/field avalible in farm
    for (int i = 0; i < 10; i++)
    {
        if (plants[i].getGrowth() == -1)
        {
            plants[i] = p;
            /* ... insert code here to remove Plant p seed from Player's inventory*/
            cout << p.getName() << " is planted in field_" << i << "!\n";
            return;
        }
    }
    cout << "failed: no room to plant\n";
}

void Farm::rem_plant(int num)
{
    Plant p;
    if (plants[num].getGrowth() == -1)
    {
        cout << " no plant at field_" << num << endl;
    }
    else if (plants[num].getGrowth() < 10)
    {
        cout << plants[num].getName() << " is plucked out from field_" << num << endl;
        plants[num] = p;
    }
    else
    {
        cout << plants[num].getName() << " is cultivated from field_" << num << endl;
        /*... insert code to add plants[num] to Player's inventory*/
        plants[num] = p;
    }
}

Plant *Farm::return_plants() { return plants; }

void Farm::printFarm()
{
    for (int i = 0; i < 10; i++)
    {
        if (plants[i].getGrowth() != -1)
            cout << "field_" << i << ": " << plants[i].getName() << "|" << plants[i].getGrowth() << "|$" << plants[i].getPrice() << endl;
    }
}

int Farm::getRipeNum()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (plants[i].getGrowth() >= 10)
            sum++;
    }
    return sum;
}

Farm::~Farm()
{
    cout << "destructor_Farm: delete[] plants\n";
    delete[] plants;
}