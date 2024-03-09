#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"sunny kumar "<<endl;
    }

    void sayHello(string name){
        cout<<"Hello  "<<name<<endl;
    }

    int  sayHello(string name,int n){
        cout<<"Hello  "<<name<<endl;
        return n;
    }
    // ek he class me we can not make the same function even they have different return value but we can not use them.
    // if we want to make the same object the we should change the input parameter like int char or bool etc
};




int main(){

    A obj;
    obj.sayHello();
    // obj.sayHello(ram);
    return 0;
}
