#include<iostream>
#include<deque> // dono end pe insertion and deletion hota hai

using namespace std;
int main(){

    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(5);
    d.push_front(25);
    d.push_front(28);
    d.pop_front(); // in pop we will not passing value as a argument for removing element

    for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"empty or not: "<<d.empty()<<endl;
     cout<<"first element of array: "<<d.front()<<endl; // it returns the first element of array.
    cout<<"last element of array: "<<d.back()<<endl; // this will return the last element of array.

    //erasing function

    cout<<"before erase "<<d.size()<<endl;
    cout<<"before erasing"<<endl;
     for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin(),d.begin()+2); // erase krega suru se leke 2 element tk.

    cout<<"after erasing"<<endl;

     for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before erase "<<d.size()<<endl;




    return 0;
}
