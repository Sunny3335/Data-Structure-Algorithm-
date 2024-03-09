#include<iostream>
#include<array> // this is library of array.
using namespace std;

int main(){

    // int arr[5]={2,3,6};

    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }

    cout<<"element at position 2: "<<a.at(2)<<endl; // it will give the element at position.
    cout<<"element at position 2: "<<a.at(0)<<endl;

    cout<<"empty or not: "<<a.empty()<<endl; //this will give either true or false value of the statement

    cout<<"first element of array: "<<a.front()<<endl; // it returns the first element of array.
    cout<<"last element of array: "<<a.back()<<endl; // this will return the last element of array.


    return 0;
}