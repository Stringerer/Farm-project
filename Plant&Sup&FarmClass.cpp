// define class Plant, Sup, & Farm (Jerrie)

#include <iostream>
using namespace std;

class Plant {
 protected:
  string name;  // in plan doc: Char name;
  int price;
  int growth;

 public:
  Plant(string n, int p, int g) : name(n), price(p), growth(g) {}
  Plant() : Plant("", -1, -1) {}
  string getName() {
    if (growth == 0) return name + " seed";
    return name;
  }
  int getPrice() { return price; }
  int getGrowth() { return growth; }
};

class Sup {
 protected:
  string name;  // in plan doc: Char name;
  int price;
  int growth_factor;

 public:
  Sup(string n, int p, int g) : name(n), price(p), growth_factor(g) {}
  string getName() { return name; }
  int getPrice() { return price; }
  int getGF() { return growth_factor; }
};

class Farm {
 protected:
  int growth_factor;
  Sup* supplies;  // in plan doc: Sup
  Plant* plants;  // in plan doc: Plant
 public:
  Farm() { plants = new Plant[10]; }

  void add_plant(Plant p) {
    /* ... insert code here to check if Player has Plant p seed*/

    // check if there is space/field avalible in farm
    for (int i = 0; i < 10; i++) {
      if (plants[i].getGrowth() == -1) {
        plants[i] = p;
        /* ... insert code here to remove Plant p seed from Player's inventory*/
        cout << p.getName() << " is planted in field_" << i << "!\n";
        return;
      }
    }
    cout << "failed: no room to plant\n";
  };

  // in plan doc: void rem_plant(Plant p)
  // I change argument to int (representing field num) because there can be mutiple apples planted at different time, and rem_plant(apple) doesn't specify which apple to remove
  void rem_plant(int num) {
    Plant p;
    if (plants[num].getGrowth() < 10) {
      cout << plants[num].getName() << " is plucked out from field_" << num
           << endl;
      plants[num] = p;
    } else {
      cout << plants[num].getName() << " is cultivated from field_" << num
           << endl;
      /*... insert code to add plants[num] to Player's inventory*/
      plants[num] = p;
    }
  }
  Plant* return_plants() { return plants; };
  void add_sup(Sup s);

  // a function that print what is in the farm
  void printFarm() {  // not in plan doc
    for (int i = 0; i < 10; i++) {
      cout << "field_" << i << ": " << plants[i].getName() << "|"
           << plants[i].getGrowth() << endl;
    }
  }

  // a function that returns the num of ripe plants in farm (Yang)
  int getRipeNum() {  // not in plan doc
    int sum = 0;
    for (int i = 0; i < 10; i++) {
      if (plants[i].getGrowth() >= 10) sum++;
    }
    return sum;
  }
};

// main function here is used as test and demo for the implemented classes
int main() {
  Plant grape("grape", 10, 0);
  Plant apple("apple", 5, 10);

  Farm f;
  f.printFarm();
  cout << "num of ripe plants: " << f.getRipeNum() << endl << endl;

  f.add_plant(grape);
  f.add_plant(apple);
  f.add_plant(apple);
  f.printFarm();
  cout << "num of ripe plants: " << f.getRipeNum() << endl;
  cout << endl;

  f.rem_plant(1);
  f.printFarm();
  return 0;
}