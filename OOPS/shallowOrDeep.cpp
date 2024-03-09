#include <bits/stdc++.h>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;
    char *name; // heap me data to allocate kra rhe hai
    static int timeToComplete;

    void print(){
        cout<<this->name<<endl;
        cout<<this->level<<endl;
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

    // with double parameter
    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }

    // khud ka copy constructor
    Hero(Hero& temp){
        // deep copy
        char *ch = new char[strlen(temp.name) +1];
        this->name = ch;

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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

};

int Hero::timeToComplete = 5;

int main(){

    /*Hero hero1;
    hero1.setHealth(34);
    hero1.level='Y';
    char name[6] = "sunny";
    hero1.setName(name);
    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    // Hero hero2=hero1;
    hero2.print();

    hero1.name[0]='G';
    hero1.print();

    hero2.print();*/

    // use of static keyword

    // cout<<Hero::timeToComplete<<endl;

    /*Hero c;
    cout<<c.timeToComplete<<endl; // this is not recommondend

    Hero p;
    p.timeToComplete=49494;
    cout<<p.timeToComplete<<endl;*/

    cout<<Hero::random()<<endl;





return 0;
}