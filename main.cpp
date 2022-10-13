#include <iostream>
#include <string>
#include "Plant.h"
#include "Farm.h"
#include "Player.h"
#include "Supply.h"
#include "Shop.h"

using namespace std;

int main(){
  //create classes 
  Plant ;
  Plant ;
  Plant ;
  Farm f;
  f.printF();
  int endday;
  int day = 1;
  while(1){ //infinite while loop
    endday = 0;//not to trigger ENDDAY function


    string input;
    cout << "Select Actions: (Shop, Pick, Plant or ENDDAY)" << endl; //atcion choice for player
    cout << ": ";
    cin >> input;
    
    //set action ID to match switch state, can be defined to any nums, should match switch case
    int action;

    if(input == "Pick"){action = 11;}
    else if(input == "ENDDAY"){action =100;}
    else if(input == "Shop"){action =12;}
    else if(input == "Plant"){action =13;}
    else if(input == ????){action =???;}
    else{action = 999;}

    //identify actions
    switch(action){
      case 11:
          //tell player number of ripe plants
          int ripe_num = f.get_ripe_num();
          cout << ripe_num << " plants ripe." << endl; 
          cout << endl;
          //player choose field to pick up
          int SlotNum;
          cout << "Which field do you want to pick? (type field number): ";
          cin >> SlotNum;

          f.rem_plant(SlotNum); //pick plant
          f.printF(); //print out field at the end so player can view and select next step

          break;

      case 100:
          day++;
          ...//increase plant growth 
          cout << "------Day " << day << endl;
          break;
      
      case ??:
          ???
          break;

      case ??:
          ???
          break;

      case 999:
          cout << "Not a valid actioin." << endl;
          break;
    }
   ...//some status to exit game (infinit while loop)
  }
  cout << "Game Finished." << endl; //???
}
