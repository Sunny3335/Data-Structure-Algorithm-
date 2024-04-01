#include <bits/stdc++.h>
using namespace std;

int main(){
    // doubly ended queue STL
    deque<int> d;
    d.push_front(23);
    d.push_back(243);

    d.pop_back();
    d.pop_back();

    /* cout << d.front() << endl;
    cout << d.back() << endl; */
    d.pop_front();
    cout << d.empty() << endl;
    cout << d.front() << endl; // 2013069616 it return when empty queue me se uska front nikalemge tb.
    cout << d.back() << endl;

    if(d.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }



    return 0;
}