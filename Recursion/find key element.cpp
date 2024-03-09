#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"the size of present array is: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

bool keysearch(int arr[],int size,int key){
    print(arr,size);
    // base case.
    if(size==0)
    return false;

    // processing condition
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining=keysearch(arr+1,size-1,key);
        return remaining;
    }

}
int main(){
    int arr[6]={12,10,9,8,7,6};
    int size=6;
    int ans=keysearch(arr,6,18);
    if(ans){
        cout<<"element is present "<<endl;
    }
    else{
        cout<<"element is not present "<<endl;

    }


}