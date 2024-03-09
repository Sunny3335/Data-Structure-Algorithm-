#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        // go to right part
        if(key>arr[mid]){
            start=mid+1;
        }
        // go to left part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }

    return -1; // it will  return -1 when the element is not found in it.
}


int main(){
    // both array should be monotonic.
    int even[6]={2,5,6,9,11,14};
    int odd[5]={9,11,13,15,19};

    int index=binarysearch(even,6,14); // pass value in ordered pair.
    int index_odd=binarysearch(odd,5,110);

    cout<<index<<endl;
    cout<<index_odd<<endl;


    return 0;
}