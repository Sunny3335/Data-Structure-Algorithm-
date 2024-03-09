#include<iostream>
using namespace std;

void print(int arr[], int s ,int e){

    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

bool binarysearch(int arr[],int s, int e, int k){
    print(arr,s,e);
    // base case
    // element not found
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    // if element is found
    if(k==arr[mid]){
        return true;
    }
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);  // search in right
    }else{
        return binarysearch(arr,s,mid-1,k);  // search in left
    }
}
int main(){
    int arr[6]={6,7,8,9,10,11};
    int size=6;
    int key=10;
    cout<<"element is present or not "<<binarysearch(arr,0,5,key);
}