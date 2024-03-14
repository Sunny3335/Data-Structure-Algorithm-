#include <bits/stdc++.h>
using namespace std;

class Animal{

    public:
    void speaking(){
        cout<<"Animal is barking"<<endl;
    }

};

class Dog: public Animal{

    public:
    void speaking(){ // it is called function overriding and method overriding.
        cout<<"Dog is barking"<<endl;
    }

    // NOTE if yha pe koi implementation nhi hoga then it will call the parent function call
};


int main(){

    Dog d;
    d.speaking();

return 0;
}