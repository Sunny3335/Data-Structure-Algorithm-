#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1;i++){
        int minIndex = i;
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {13,46,24,52,20,9};
    selectionSort(arr, 6);
    printArr(arr, 6);

    return 0;
}

// this algorithm is first select then sort the data.
// this algorithm is not stable because it swap the non adjacent element and never retain theiroriginal position of element.
// worst case, best case and average case TC==o(n^2);
// SC==o(1);
// used in small array.