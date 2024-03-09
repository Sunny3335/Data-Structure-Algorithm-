#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    // base case
    if(n==0 || n==1){ // because this show sorted array
        return; // after this program will not execute
    }

     for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
     }
    // recursion call
    bubblesort(arr,n-1);

}
int main(){
    int arr[6]={5,6,8,4,2,1};

    bubblesort(arr,6);

    // for printing array
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}