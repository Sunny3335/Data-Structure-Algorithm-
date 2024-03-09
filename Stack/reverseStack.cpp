#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="sunny";

    // initialize a stack
    stack<char> s;

    // string ko stack me push krenge
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        s.push(ch);
    }

    // poping up the charater and added to  empty string.
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans+=ch;
        s.pop();
    }

    cout<<ans<<endl;

return 0;
}