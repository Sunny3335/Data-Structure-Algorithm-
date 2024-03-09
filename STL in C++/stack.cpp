#include<iostream>
#include<stack> // lats in first out.
using namespace std;
int main(){
    stack<string> s;
    s.push("sunny");
    s.push("kumar");
    s.push("20061");

    cout<<"top element "<<s.top()<<endl;

    // cout<<s.pop()<<endl; .// we can not written this type because it does not have return value.
    s.pop();

    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"empty or not  "<<s.empty()<<endl;



    return 0;
}