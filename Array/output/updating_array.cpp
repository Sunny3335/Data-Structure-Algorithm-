#include <bits/stdc++.h>
using namespace std;

void updateArray(int arr[],int size){
    cout<<"updating the array"<<endl;
    arr[0]=123;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"back to function"<<endl;
}

int main(){
    int num[100]={2,3,5};
    int n=3;
    updateArray(num,n);
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }

return 0;
}

// here we see the updation in the both function because update function only pass the address of the array not passing th earray memory size