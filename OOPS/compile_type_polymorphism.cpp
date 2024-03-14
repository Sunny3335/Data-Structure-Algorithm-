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
    // return type changes is not allowed in function over loading.
    // if we want to make the same function the we should change function signature like the input parameter like int char or bool etc
};




int main(){

    A obj;
    obj.sayHello();
    // obj.sayHello(ram);
    return 0;
}

// compile time poly.. has two types.
// 1. function overloading
// 2. operator overloading .


// Compile time
// convert high level language to machine understanding language.
// During compile time, the source code is translated to a byte code like from .cpp to .exe , During compile time the compiler check for the syntax, semantic, and type of the code.
// Runtime Error
// A program’s life cycle is a runtime when the program is in execution. Following are the different types of runtime errors:

// Division by zero – when a number is divided by zero (0)
// Dereferencing a null pointer – when a program attempts to access memory with a NULL
// Running out of memory – when a computer has no memory to allocate to programs