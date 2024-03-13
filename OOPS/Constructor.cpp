#include <bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    int age;
    char *name; // dynamically allot krao because it has more space
    // it is declaration of dynamic char array.

    // constructor
    // NOTE: A default constructor is called like ram.Student(). It will call automatically when you create an object without
    // default constructor has no parameter and no return value.

    Hero(){ // default constructor do shallow copy in which there are same memory that access both the class. so changes reflect on both the object.
        cout << "default constructor called" << endl;
        name = new char[100]; // making the same char array.
    }

    // parametrized cons
    // when we make own constructor then default will be deleted.
    // single parametrized cons.
    Hero (int health){
        cout << this << endl;
        this->health = health; // this stroe the address of current object.
        cout << "para constructor called" << endl;
    }

    //double parametrized cons
    Hero (int health, int age){
        this->health = health;
        this->age= age;
        cout << "pe pe" << endl;
    }

    // make own copy constructor
    // manually defined constructor make deep copy
    Hero(Hero &temp){ // here we pass the object by reference if we pass it by value then it make a copy of object then call copy constructor then again make copy this loop then become infinite.
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name); // to copy element.
        this->name = ch;
        this->health = temp.health;
        // this->level = temp.level;
        this->level = temp.level;
        // this->level = temp.level;
        cout << "copy c-tor called" << endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    void print(){
        cout << this->health << endl;
        cout << this->level << endl; // showing garbage value
        // cout << this->age << endl;
        cout << this ->name << endl;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout << "destructor called" << endl;
    }
};

int main(){

    // statically creation of obj
    // Hero mohan(); // called constructor mohan.Hero()
    // dynamically creation of object using new

    // Hero *ram = new Hero(54);  // ram is a pointer to the memory address
    // also called constructor either make dynamically or statically.

    // Hero aman(32);
    // cout << &aman << endl; // address of aman object.
    // cout << mohan.getHealth() << endl;

    // Hero sunny(3);
    // Hero sunny(3,44);

    // copy const
    // Hero s(40, 87); //called parametrized cons
    // s.print();
    // Hero r(s);   // calling copy constructor Hero(const Hero&)
    // r.print(); // s.health=r.health

    /* // shallow copy
    Hero h1;
    h1.setHealth(22);
    h1.level = 'F';

    char name[6] = "sunny";
    h1.name = name;
    h1.print();

    Hero h2(h1);
    // Hero h2 = h1;
    h2.print();

    h1.name[0] = 'f';
    h1.print();
    h2.print();

    // copy assignment operator
    h1 = h2;// h2 ke value ko h1 me copy kr rhe hai. */

    // destructor
    //static
    Hero s; // when the scope of object will ended then desctructor called

    //dynamic
    Hero *p = new Hero(); // but in case of dynamic we have to manually delete that destructor.
    delete p;

    return 0;
}