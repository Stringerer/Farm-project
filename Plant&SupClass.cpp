// define class Plant & Sup

#include <iostream>
using namespace std;

class Plant{
    protected:
        string name;
        int price;
        int growth;
    public:
        Plant(string n, int p, int g):name(n),price(p),growth(g){}
        string getName() {
            if (growth == 0)
                return name+" seed";
            return name;}
        int getPrice(){return price;}
        int getGrowth(){return growth;}
};

class Sup{
    protected:
        string name;
        int price;
        int growth_factor;
    public:
        Sup(string n,int p,int g):name(n),price(p),growth_factor(g){}
        string getName(){return name;}
        int getPrice(){return price;}
        int getGF(){return growth_factor;}
};

// the following Farm class implementation isn't done yet. modify it if u wish (Jerrie)
class Farm{
    protected:
        int growth_factor;
        Sup* supplies; // plan doc: Sup
        Plant* plants; // plan doc: Plant
    public:
        void add_plant(Plant p);
        void rem_plant(Plant p);
        Plant * return_plants();
        void add_sup(Sup s);
};

int main(){
    //int day = 1;
    Plant grape("grape",10,0);
    Plant apple("apple",5,10);
    Sup hoe("hoe",25,11);

    cout << grape.getName() << "|" << grape.getPrice() << "|" << grape.getGrowth() << endl;
    cout << apple.getName() << "|" << apple.getPrice() << "|" << apple.getGrowth() << endl;
    cout << hoe.getName() << "|" << hoe.getPrice() << "|" << hoe.getGF() << endl;
    
    return 0;
}