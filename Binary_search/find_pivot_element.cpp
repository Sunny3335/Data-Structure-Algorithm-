#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    //pivot element is the first or last element of an unsorted subarray.
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return s;
}
int main() {

    int array_name[6]={3,8,10,2,4,6};

    cout<<pivot(array_name,6);
    return 0;
}