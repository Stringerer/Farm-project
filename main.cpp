#include <iostream>
#include <string>
#include "Plant.h"
#include "Player.h"
#include "Farm.h"
#include "Person.h"
#include "Supply.h"
#include "Shop.h"

using namespace std;

int main(){
  //create classes
  Farm f;
  Shop s(9999999); 
  Player p1(200);
  Plant potato("potato",5,0);
  s.add_plant(potato);
  Plant apple("apple",8,0);
  s.add_plant(apple);
  Plant melon("melon",10,0);
  s.add_plant(melon);
  Plant grape("grape",15,0);
  s.add_plant(grape);
  Supply hoe("hoe",50,2);
  s.add_supply(hoe);
  
  //initialize parameters
  int Finish = 0;
  int endday;
  int day = 1;
  int water_check = 0;
  int leave = 0;

  while(1){ //infinite while loop

    endday = 0;//not to trigger ENDDAY function
    if(day == 1){f.printFarm();} 
    if(day > 1 && Finish != 1){ //not to show this on day 1
      //tell player number of ripe plants
      int ripe_num = f.getRipeNum();
      cout << ripe_num << " plants ripe." << endl; 
      cout << endl;
    }
    
    //get players action
    string Pinput;
    cout << "Places to go:\n1.Shop\n2.Farm\n3.Inventory\n999.ENDDAY\n+++.Finish Game: ";
    cout << endl; //atcion choice for player
    cin >> Pinput;
    system("clear");
    //set action ID to match switch state, can be defined to any nums, should match switch case
    int action;

    if(Pinput == "2"){action = 11;}
    else if(Pinput == "1"){action =12;}
    else if(Pinput == "3"){action =14;}
    else if(Pinput == "999"){action =100;}
    else if(Pinput == "+++"){action =888;}
    else{action = 999;}

    //identify actions
    switch(action){
      case 11:// Fram case
          { 
          char Finput;
          string name;
          int num;
          while (leave == 0){ //keep looping if not leaving
              f.printFarm();
              Finput = 'z';  //initialize 
              while (Finput != '1' && Finput != '2' && Finput != '3' && Finput != '4' && Finput != '5'){ //get players' next step
                  cout << "FARM\n1.leave\n2.seed a plant\n3.remove a plant\n4.water plants\n5.help\nenter 1-5: ";
                  cin >> Finput;
                  system("clear");
              }
              switch (Finput){ //switch cases for players' input
              case '1':
                  leave = 1; //is leaving
                  break;
              case '2':
                  cout << "what seed would you like to plant (enter name): ";
                  cin >> name;

                  if (p1.Psell_plant(name,0)==true){ //check if plant is in inventory
                      Plant p(name,0,0);  //Initialize plant for Farm
                      f.add_plant(p);     //add plant to Farm
                  }
                  else {cout << "failed: not in inventory!\n";} 
                  break;
              case '3':
                  f.printFarm();
                  cout << "what plant would you like to remove (enter field num 0-9): ";
                  cin >> num;
                   //add the plant to player and remove the plant in the field which player wants
                  if (0 <= num && num <= 9){p1.Pbuy_plant(f.return_plants(num));f.rem_plant(num);}
                  else {cout << "failed: field num not valid!\n";} 
                  break;
              case '4':
                  if (p1.Check_sup("hoe", 2) == true){ //check if player has hoe
                    water_check = p1.water_plants();   //water the plant
                    cout << "all the plants in the farm is watered!\n"; 
                  }
                  else{cout << "failed: you need a hoe" << endl;} //not watered
                  break;
              case '5':
                  cout << "!!!Farm is a place to grow and cultivate plants!!!\n"; 
                  break;
              }
          }
          leave = 0; //not to leave immedietly when come back again
          break;
          }

      case 12://Shop Case
          {
            string name;
            char growth;
            int iGrowth;
            Plant temp;
            Supply sTemp;
            while (leave ==0){ //keep looping if not leaving
                s.get_money(); 
                char Sinput = 'z';
                while (Sinput != '1' && Sinput != '2' && Sinput != '3' && Sinput != '4' && Sinput != '5'){ //if not these input the n keep aksing for input
                    cout << "SHOP:\n1.leave\n2.buy a plant\n3.sell a plant\n4.buy a tool\nenter 1-5\n";
                    cin >> Sinput;
                    system("clear");
                }
                switch (Sinput){
                case '1':
                    leave = 1; //set leave 
                    break;
                case '2':
                    s.print_plants();
                    cout << "what plant would you want to buy (enter name): ";
                    cin >> name;
                    temp = s.return_plant_name(name); //convert to class names
                    if (temp.getGrowth() == -1){ //if not in shop
                        cout << "fail: invalid name!\n";
                        break;
                    }
                    s.sell_plant(name,0); //take plant from shop
                    p1.buy_plant(name,temp.getPrice());p1.Pbuy_plant(temp); //add plant to player and reduce money
                    break;
                case '3': //sell plant
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
                }   
            }
            leave = 0;
            break;
          }

      case 14: //Inventory case
          { 
          while (leave == 0){
            cout << "you have: $" << p1.get_money() << endl; //print out  player's money
            char input = 'z';
            cout << "INVENTORY\n1.close\n2.see plants\n3.see supplies\nenter 1-3: \n";
            cin >> input;
            system("clear");
            switch (input){
            case '1':
                leave = 1;
                system("clear");
                break;
            case '2':
                p1.print_plants(); 
                break;
            case '3':
                p1.print_supplies();
                break;
            }
          }
          leave =0;
          break;
          }
      case 100:
          {
          string Plantname;
          day++;
          if(water_check == 1){ //if watered then add growth
            for(int i = 0;i < 10; i++){
              if(f.FarmGetGrowth(i) != -1){f.FramGrow(i);} //if there is plant then add growth
            }
          }
          water_check = 0; //reset water for a new day
          cout << "------Day " << day << endl;
          f.printFarm();
          break;
          }
      
      
      case 999: //invalid case
          {
          cout << "Not a valid actioin." << endl; 
          break;
          }

      case 888: //finish case
          
          Finish = 1;
          cout << "Money you earned: " << p1.get_money() << endl;
          cout << "Game Finished." << endl; //???
          break;
                    
    }
   if(Finish == 1)break; //function to break infinite while loop
  }
  return 0;
}
