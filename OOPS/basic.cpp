#include <bits/stdc++.h>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    // making getter and setter  for the 'health' property
    // getter to provide the value
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }


    // setter to set the value
    void  setHealth(int h){
        health=h;
    }

    void  setLevel(char ch){
        level=ch;
    }

};

int main(){
    // creating object
    Hero ram;

    // cout<<"size "<<sizeof(ram)<<endl;
    // size is the total size of used data types in the class

    // ram.health=23;
    ram.setHealth(50); // setting the value for private member data using the setter
    ram.level='A';

    cout<<"ram health "<<ram.getHealth()<<endl; // getting the value by using the getter for the private member properties.
     cout<<"ram level "<<ram.level<<endl;

return 0;
}