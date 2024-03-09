#include<iostream>
using namespace std;

// multiple + heirarical is equal to hybrid

class A{
    public:
    void func(){
        cout<<"i am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am B "<<endl;
    }
};

class D{
    public:
    void func(){
        cout<<"I am B "<<endl;
    }
};

class C: public A, public B{

};

int main(){
    /* A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    // object3.func2();
    object3.func3(); */

    C obj;
    // obj.func();

    obj.A::func(); // inheritance ambiguity

}