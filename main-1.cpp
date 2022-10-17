#include <iostream>
#include <string>
#include "Player.h"
#include "Farm.h"
#include "Shop.h"
#include <iostream>
using namespace std;

int day = 1;
int water_check = 0;
Farm f;
Player p1;
Shop s;
Plant potato("potato",5,0);
Plant apple("apple",8,0);
Plant melon("melon",10,0);
Plant grape("grape",15,0);
Supply hoe("hoe",50,2);


void shopMenu()
{
    string name;
    char growth;
    int iGrowth;
    Plant temp;
    Supply sTemp;
    while (true)
    {
        s.get_money();
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
            s.print_plants();
            cout << "what plant would you want to buy (enter name): ";
            cin >> name;
            temp = s.return_plant_name(name);
            if (temp.getGrowth() == -1){
                cout << "fail: invalid name!\n";
                break;
            }
            s.sell_plant(name,0);
            p1.buy_plant(name,temp.getPrice());p1.Pbuy_plant(temp);
            break;
        case '3':
            p1.print_plants();
            cout << "what plant would you want to sell (enter name & growth): ";
            cin >> name;
            cin >> growth;
            iGrowth = growth-48;
            p1.sell_plant(name,iGrowth);
            p1.Psell_plant(name,iGrowth);
            break;
        case '4':
            s.print_supplies();
            cout << "what tool would you want to buy (enter name): ";
            cin >> name;
            sTemp = s.return_supply_name(name);
            if (sTemp.getGF() == 0){
                cout << "fail: invalid name!\n";
                break;
            }
            s.sell_supply(name);
            p1.buy_supply(name,sTemp.getPrice());p1.Pbuy_supply(sTemp);
            break;
            break;
        case '5':
            /* code */
            break;
        }
    }
}

void farmMenu()
{
    char input;
    string name;
    int num;
    while (true)
    {
        f.printFarm();
        input = 'z';
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
            cout << "what seed would you like to plant (enter name): ";
            cin >> name;

            if (p1.Psell_plant(name,0)==true){
                Plant p(name,0,0);
                f.add_plant(p);
            }
            else {
                cout << "failed: not in inventory!\n";
            }
            break;
        case '3':
            cout << "what plant would you like to remove (enter field num 0-9): ";
            cin >> num;
            if (0 <= num && num <= 9){
                f.rem_plant(num);
            }
            else {
                cout << "failed: field num not valid!\n";
            }
            break;
        case '4':
            water_check = p1.water_plants();
            cout << "all the plants in the farm is watered!\n";
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
        cout << "you have: $" << p1.get_money() << endl;
        char input = 'z';
        cout << "INVENTORY\n1.close\n2.see plants\n3.see supplies\nenter 1-3: \n";
        cin >> input;
        system("clear");
        switch (input)
        {
        case '1':
            system("clear");
            return;
        case '2':
            p1.print_plants();
            break;
        case '3':
            p1.print_supplies();
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
    s.add_plant(potato);
    s.add_plant(apple);
    s.add_supply(hoe);
    system("clear");
    mainMenu();
    return 0;
}