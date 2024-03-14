#include <bits/stdc++.h>
using namespace std;
// parent, super, Base class
class Human{
    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }

};

// child class
class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }

    int getAge(){
        return this->age;
    }

};


int main(){
    /* Male sunny;

    cout<<sunny.age<<endl;
    cout<<sunny.weight<<endl;
    cout<<sunny.height<<endl;
    cout<<sunny.color<<endl;
    sunny.sleep();

    sunny.setWeight(43);
    cout<<sunny.weight<<endl;
 */

    /* Male sintu;
    cout<<sintu.age<<endl;

    cout<<sintu.getHeight()<<endl; */

    Male m1;
    cout << m1.getAge()<< endl;

    return 0;
}

// public mode me inherit krne se parent se aayi hui data member and method public hoti hai in the child class.

// protected accessfier is accessed in the class and also by the child class.

// protected can not be accessed out of the class.