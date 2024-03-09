#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int> maxi; // for the creation of maximum heap.

    priority_queue<int,vector<int>,greater<int> >mini; // for the creation og minimum heap.

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
    maxi.pop(); // last in first out
    cout<<"size: "<<maxi.size()<<endl;

    cout<<"empty or not "<<mini.empty()<<endl; // this will return true(1) because this queue is fully popped up.

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(6);
    mini.push(5);
    mini.push(45);
    mini.push(89);
    mini.push(02);
    cout<<"empty or not "<<mini.empty()<<endl;  // it will return the false value because this is not fully popped up.

     int t=mini.size();
    for(int i=0;i<t;i++){
        cout<<mini.top()<<" "; // from minimum to maximum
        mini.pop();
    }cout<<endl;

    cout<<"empty or not "<<mini.empty()<<endl; // this will return true(1) because this queue is fully popped up.





    return 0;
}