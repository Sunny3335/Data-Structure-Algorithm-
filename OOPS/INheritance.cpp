#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight=w;
    }

};

class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
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

    Male sintu;
    cout<<sintu.age<<endl;

    cout<<sintu.getHeight()<<endl;


return 0;
}