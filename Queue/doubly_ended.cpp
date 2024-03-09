#include <bits/stdc++.h>
using namespace std;

int main(){
    // doubly ended queue STL
    deque<int> d;
    d.push_front(23);
    d.push_back(243);

    d.pop_back();

    /* cout << d.front() << endl;
    cout << d.back() << endl; */
    d.pop_front();
    cout << d.empty() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;



    return 0;
}