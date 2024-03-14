#include<iostream>
using namespace std;

// multiple + heirarical is equal to hybrid

class A{
    public:
    void func1(){
        cout<<"i am A"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout<<"I am B "<<endl;
    }
};

class D{
    public:
    void func3(){
        cout<<"I am D "<<endl;
    }
};

class C: public A, public D{

};

int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    D object3;
    object3.func3();

    cout << "hybrid " << endl;

    C object4;
    object4.func1();
    // object3.func2();
    object4.func3();


}