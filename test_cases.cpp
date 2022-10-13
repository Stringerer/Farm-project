// this file stores the test cases used when developing (not final)
#include <iostream>
using namespace std;

int main() {
  // test cases for Sup & Plant class
  cout << grape.getName() << "|" << grape.getPrice() << "|" << grape.getGrowth() << endl;
  cout << apple.getName() << "|" << apple.getPrice() << "|" << apple.getGrowth() << endl;
  cout << hoe.getName() << "|" << hoe.getPrice() << "|" << hoe.getGF() << endl;

  // test cases for Farm class
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