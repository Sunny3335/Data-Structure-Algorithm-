#include <bits/stdc++.h>
using namespace std;

class Animal{

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }

};

class human: public Animal{

    public:
    void bark(){
        cout<<"speaking"<<endl;
    }

    // NOTE if yha pe koi implementation nhi hoga then it will call the parent function call
};


int main(){

    human sunny;
    sunny.bark();

return 0;
}