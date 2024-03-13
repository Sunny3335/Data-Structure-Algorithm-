#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift the array
                arr[j+1]=arr[j];
            }
            else{ // in case of temp>arr[j];
                break;
            }
        }
        arr[j+1]=temp; // since array shift krne ke bad j one index piche chla jayega
    }
}


void printArr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[6] = {13,46,24,52,20,9};
    insertionSort(arr, 6);
    printArr(arr, 6);

return 0;
}

// use case after each iteration we are almost doing the sorting of array.
// Insertion Sort is adaptive, that means it reduces its total number of steps if given a partially sorted list, hence it increases its efficiency. Its space complexity is less. Insertion sort requires a single additional memory space
// yes stable
// best case TC==o(n)
// worst case TC==o(n^2)
// SC==o(1) because taking the constant space variable.
// A graphical example of insertion sort. The partial sorted list (black) initially contains only the first element in the list. With each iteration one element (red) is removed from the "not yet checked for order" input data and inserted in-place into the sorted list.