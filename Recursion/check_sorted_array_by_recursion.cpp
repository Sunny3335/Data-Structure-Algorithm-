#include<iostream>
using namespace std;

bool issorted(int *arr, int size){
    // base case
    if(size==0 || size==1){
        return true;
    }
    // processing part

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        // recursion relation
        bool remaining=issorted(arr+1, size-1);
        return remaining;
    }
}
int main(){
    int arr[6]={12,10,9,8,7,6};
    // int size=6;
    bool ans=issorted(arr,6);
    if(ans){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }
}