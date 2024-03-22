#include <bits/stdc++.h>
using namespace std;

class Stack{
    //properties/ raw data
    public:
    int *arr;
    int  top;
    int size;

    //constructor
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    // push operation
    void push(int element){ // space is persent or not.
        if((size-top)>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack overflow "<<endl;
        }
    }

    // pop operation
    void pop(){ // check element is there or not.
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }

    // peak operation
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    // check empty operation
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};


int main(){
    Stack st(5);
    st.push(34);
    st.push(36);
    st.push(344);
    st.push(342);
    st.push(32);
    st.push(325);

    st.pop();

    st.pop();
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;

    cout<<st.isEmpty()<<endl; // return true or flase value.

return 0;
}

// NOTE: all operation done in TC O(N);