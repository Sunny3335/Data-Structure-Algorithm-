#include<iostream>
#include<vector> // this is library of vector.
using namespace std;
int main(){
    vector<int> v; // this is dynamic array.
    cout<<"size--> "<<v.capacity()<<endl; // this wll give the size the array.


    v.push_back(1); // this will insert the new element in the array.
    cout<<"first element "<<v.front()<<endl; // return first element
    cout<<"last element "<<v.back()<<endl; // return last element
     cout<<"size--> "<<v.capacity()<<endl; //return the size of array


    v.push_back(3);
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;
     cout<<"size--> "<<v.capacity()<<endl;


    v.push_back(5);
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;
     cout<<"size--> "<<v.capacity()<<endl;
     cout<<"element at position 2: "<<v.at(2)<<endl;

     cout<<"before pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }
     cout<<endl;

     v.pop_back();  // this will remove the element from last.

     cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;
     cout<<"size--> "<<v.capacity()<<endl;

     cout<<"after pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }
     cout<<endl;


     v.clear(); // this will clear all the element of array.
     cout<<"size--> "<<v.size()<<endl;
     cout<<"capacity "<<v.capacity()<<endl; // this will states the capacity of dynamic array which can not be changed even hm array ko pop kre ya fir clear kre

    //  cout<<v.begin()<<endl; // used for initialization
    // another way for initialization.

    vector<int> a(5,5); // initializing the vector.

    vector<int> copy(a); // copy all the element in new array.
      cout<<"print last"<<endl;
     for(int i:copy){
        cout<<i<<" ";
     }
     cout<<endl;






    return 0;
}