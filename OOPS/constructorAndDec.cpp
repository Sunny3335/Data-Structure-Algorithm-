#include <bits/stdc++.h>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;
    char *name; // heap me data to allocate kra rhe hai by dynamically because space jyada hota hai.

    void print(){ // this is pointer to the current object.
        cout<<this->level<<endl; // this target to the parent class
        cout<<this->health<<endl;
    }

    //constructor (by default)

    Hero(){
        cout<<"simple constructor called"<<endl;
        name=new char[100];  // allocating memory on the heap for our property 'name'
    }

    // parametrized constructor
    // with single parameter
    Hero(int health){
        cout<<"this is pointer "<<this<<endl;
        this->health=health;
    }

    // with double parameter constructor
    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }

    // khud ka copy constructor
    Hero(Hero& temp){
        cout<<"copy constructor called"<<endl; // copy constructor called hoga baki constructor mr jayega.
        this->health=temp.health;
        this->level=temp.level;
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

    void setName(cha name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout<<"deconstructor called"<<endl;
    }

};

int main(){
    // object creation statically
    /*Hero yash(19);
    cout<<"adress of ramesh "<<&yash<<endl;
    cout<<yash.getHealth()<<endl;
    yash.level='P';
    yash.print();*/


    // object creating dynamically
    /*Hero *h=new Hero;
    h->level='U';
    h->print();*/

    //NOTE: object statically bnao ya dynamically constructor called hoga in the both the cases.

    // NOTE: jb hm khud ka constructor bnayenge to by defalut constructor called ni hogi

    /*Hero temp(500,'f');
    temp.print();
    cout<<temp.getHealth()<<endl;*/

    //copy constructor

    /* Hero manu(12,'A');
    manu.print(); */

    //copied data

    // Hero tanu(manu);

    /*tanu.health=manu.health;
    tanu.level=manu.level;
    // this is all about the BTS of the copied constructor*/

    // tanu.print();


    //static
    Hero n;

    //dynamic
    Hero *j=new Hero();
    // manually called destructor
    delete j;

return 0;
}