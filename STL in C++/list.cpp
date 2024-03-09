#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    l.push_back(4);
    l.push_front(8);
    l.push_front(6);
    l.push_front(9);
    l.push_front(7);
    // l.pop_front();
    l.pop_back();

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size "<<l.size()<<endl;

    l.erase(l.begin()); // this will remove the first element of list
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> m(5,100);  // initializing the list of variable int with variable name m.
    list<int> n(m); // copying the value of m into n.


    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;




    return 0;
}