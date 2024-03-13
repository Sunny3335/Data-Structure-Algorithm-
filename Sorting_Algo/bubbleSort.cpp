#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) {
    for(int i=1;i<n;i++){
        bool swapped = false;
        for (int j = 0; j < n;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped==false){
            return;
        }
    }
}

void printArr(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {13,46,24,52,20,9};
    bubbleSort(arr, 6);
    printArr(arr, 6);

return 0;
}

// An in-place sorting algorithm is an algorithm that does not need an extra space and produces an output in the same memory that contains the data by transforming the input ‘in-place’. However, a small constant extra space used for variables is allowed.

// int &arr[], this is the not correct syntax. we can not writting like that because  array is a constant pointer to the first element of the array and it cannot be modified using reference.
// Yes, Bubble Sort is a stable sorting algorithm like insertion algo.. We swap elements only when A is less than B. If A is equal to B, we do not swap them, hence relative order between equal elements will be maintained.
// best case-> already sorted.
// worse case-> reverse array.
// in this sort ith round me largest element ko sort krte hai
// worst case TC==o(n^2);
// best case TC==o(n); by applying the bool swapped condition in the above code.
// SC==o(1);