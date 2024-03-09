#include<iostream>
#include<queue> // first in first out.
using namespace std;
int main(){

    queue<string> q;
    q.push("sunny");
    q.push("kumar");
    q.push("raj");

    cout<<"size before pop "<<q.size()<<endl;
    cout<<"first element of queue "<<q.front()<<endl;

    q.pop();
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"first element of queue "<<q.front()<<endl;


    return 0;
}