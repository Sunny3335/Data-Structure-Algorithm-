#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing DONE"<<endl;
}

int main(){

    // declare
    int num[5];
    cout<<num[3]<<endl;

    // initialize array
    int num1[3]={2,4,6};
    cout<<num1[2]<<endl;

    // another initialize
    int ans[14]={2,3};
    int n=12;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int ans1[12]={0};
    for(int i=0;i<n;i++){
        cout<<ans1[i]<<" ";
    }

    cout<<endl;

    int ans2[12]={2};
    /* for(int i=0;i<n;i++){
        cout<<ans2[i]<<" ";
    } */
    
    printArray(ans2,12);

    // cout<<"all is good"<<endl;

    return 0;
}