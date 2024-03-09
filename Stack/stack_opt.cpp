#include <bits/stdc++.h>
using namespace std;

int main(){
    // creation of stack
    stack<int>st;

    // insertion of data in the stack
    st.push(3);
    st.push(5);
    st.push(55);
    st.push(12);

    //pop operation done in the stack
    st.pop();

    // check the stack is empty or not
    cout<<"check empty "<<st.empty()<<endl; // it only gives the boolean value data

    // printing the size of the stack
    cout<<"size: "<<st.size()<<endl;

    cout<<"printing the top element: "<<st.top()<<endl; //it will gives the topest element present in the stack.



return 0;
}