#include <iostream>
#include <string>
#include "Farm.h"
#include "Shop.h"
#include <iostream>
using namespace std;

int day = 1;
Farm f;

void shopMenu()
{
    while (true)
    {
        char input = 'z';
        while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5')
        {
            cout << "SHOP:\n1.leave\n2.buy a plant\n3.sell a plant\n4.buy a tool\n5.sell a tool\nenter 1-5\n";
            cin >> input;
            system("clear");
        }
        switch (input)
        {
        case '1':
            return;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        case '4':
            /* code */
            break;
        case '5':
            /* code */
            break;
        }
    }
}

void farmMenu()
{
    while (true)
    {
        f.printFarm();
        char input = 'z';
        while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5')
        {
            cout << "FARM\n1.leave\n2.seed a plant\n3.remove a plant\n4.water plants\n5.help\nenter 1-5: ";
            cin >> input;
            system("clear");
        }
        switch (input)
        {
        case '1':
            return;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        case '4':
            /* code */
            break;
        case '5':
            cout << "!!!Farm is a place to grow and cultivate plants!!!\n";
            break;
        }
    }
}

void playerMenu()
{
    while (true)
    {
        /* code to print player's $ */
        char input = 'z';
        cout << "INVENTORY\n1.close\n2.see plants\n3.see supplies\nenter 1-3: \n";
        cin >> input;
        system("clear");
        /* code to print player's $ */
        switch (input)
        {
        case '1':
            system("clear");
            return;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        }
    }
}

void placeMenu()
{
    while (true)
    {
        char input = 'z';
            cout << "Places to go:\n1.shop\n2.farm\n3.inventory\n4.main menu\nenter 1-4: ";
            cin >> input;
            system("clear");
        switch (input)
        {
        case '1':
            shopMenu();
            break;
        case '2':
            farmMenu();
            break;
        case '3':
            playerMenu();
            break;
        case '4':
            return;
        }
    }
}

void mainMenu(){
    char input = 'z';
    while (true)
    {
        cout << "= = = = = FARM GAME = = = = =\n1.Start Game\n2.Save Game\n3.Load Game\n4.Quit Game\nenter 1-4: ";
        cin >> input;
        system("clear");
        switch (input)
        {
        case '1':
            placeMenu();
            break;
        case '2':
            /* code */
            break;
        case '3':
            /* code */
            break;
        case '4':
            return;
        }

    }
}

int main()
{
    system("clear");
    mainMenu();
    return 0;
}