#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am A "<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am B "<<endl;
    }
};

class C: public A, public B{


};

int main(){

    // :: scope resolution
    C obj;
    obj.A::func();
    obj.B::func();

return 0;
}

// Ambugity is created when a class is inherited from two classes but two parent class has the same  function with different implementation. then this situation is called the amugity.

// so resolve this issue we are using the scope resolution(::) operator.