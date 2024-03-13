#include <bits/stdc++.h>
using namespace std;
// we can also make class to other file and then attach them to this file also.
// #include "file.cpp"
class Student
{ // creation of class. this is only defined now that does not taking any memory.
public:
    private: // by default it is private.
    int age;
    public:
    int rollNo;
    string niceName;


    // getter
    int getAge(){
        return age;
    }

    //setter. it is used to put any condition like protection and password also.
    void setAge(int a /*, int n */){
        /* if(n==122){ // make some condition if it does not follow the it does not set the desired value.
            age = a;
        }else{ // other wise it set to 0 value.
            age=0;
        } */
        age = a;
    }


};

int main()
{

    // creation of object
    Student ram; // this is statically creation of object. this memory will be automatically deleted after deletion of object
    // NOTE: we can not make the same object name with statically or dynamically.
    // Student *mohan = new Student(); // this is dynamically creation of object. here we are using pointer to create the object. this occupied memory would have to delete manually.

    // cout << sizeof(ram) << endl; // in case of empty class size of object is 1 to keep identity of object.

    // access of public
    // ram.niceName = "sunny";
    // cout << ram.niceName << endl;

    // access of private data.
    cout << ram.getAge() << endl;
    ram.setAge(32);
    cout << ram.getAge() << endl;
    //access for public data.
    ram.rollNo = 43;
    cout << ram.rollNo << endl;

    // making a dynamically object
    Student *ramu = new Student;
    ramu->setAge(786);
    (*ramu).rollNo = 59;
    cout << (*ramu).rollNo << endl;
    cout<<(*ramu).getAge()<<endl;
    cout << endl;

    // other way
    cout << ramu->getAge() << endl;
    cout << ramu->rollNo<< endl;
    return 0;
}