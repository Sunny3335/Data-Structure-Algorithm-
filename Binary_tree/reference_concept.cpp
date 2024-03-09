#include <bits/stdc++.h>
using namespace std;

void modify(int &x){
    x *= 2;
}

int main(){
    int num = 5;
    cout << num << endl;

    modify(num);
    cout << "after modify " << num << endl;

    return 0;
}