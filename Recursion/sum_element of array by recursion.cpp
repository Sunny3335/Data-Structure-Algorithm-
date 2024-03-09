#include<iostream>
using namespace std;

int sum(int arr[],int size){
    // base case
    if(size==0)
    return 0;
    if(size==1){
        return arr[0];
    }

    // recursion relation
    int remaining=sum(arr+1,size-1);
    int ans=arr[0]+remaining;
}
int main(){
    int arr[6]={2,3,6,5,9,8};
    int size=6;
    cout<<"sum of array "<<sum(arr,6);
    return 0;
}