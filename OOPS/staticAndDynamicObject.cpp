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
    //static allocation
    Hero a;
    // setting the value
    a.setHealth(100);
    a.level='M';
    //acess the properties
    cout<<"health "<<a.getHealth()<<endl;
    cout<<"level "<<a.level<<endl;


    //dynamically allocation of object
    Hero *b= new Hero;
    // setting the value
    b->setHealth(300);
    b->level='N';
    // access the properties
    /* cout<<"health "<<(*b).getHealth()<<endl;
    cout<<"level "<<(*b).level<<endl; */

    //we can also write the above code
    cout<<"health "<<b->getHealth()<<endl;
    cout<<"level "<<b->level<<endl;


return 0;
}