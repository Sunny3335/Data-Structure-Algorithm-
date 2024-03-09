#include <bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5]={2,3,54,4,6};
    cout<<"Enter the key value "<<endl;
    int key;
    cin>>key;

    bool found=search(arr,5,key);
    if(found){
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Key is absent"<<endl;
    }

return 0;
}