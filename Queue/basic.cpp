#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(32);
    q.push(332);
    q.push(312);
    q.push(321);

    q.pop();
    cout << "the size of queue " << q.size() << endl;
    cout << "the first element of queue " << q.front() << endl;
    cout << "the last element of queue " << q.back() << endl;

    q.empty(); // to chechk the queue is empty or not.

    return 0;
}