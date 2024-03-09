#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[6]={3,5,2,6,8,9};
    int arr2[5]={5,2,6,8,0};


    reverse(arr1,6);
    printArray(arr1,6);

    cout<<endl;
    
    reverse(arr2,5);
    printArray(arr2,5);


return 0;
}