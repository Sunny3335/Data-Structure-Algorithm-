#include <bits/stdc++.h>
using namespace std;

void insertEle(int arr[], int size, int pos, int e) {
  for (int i = size; i >=pos; i--) {
    arr[i] = arr[i - 1];
  }
  arr[pos] = e;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

// deletion of array elements
void deleteEle(int arr[], int size, int pos) {
  for (int i = pos; i < size; i++) {
    arr[i] = arr[i + 1];
  }
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int size, e, pos;
  int arr[100] = {1, 20, 5, 78, 30};
  // insertEle(arr, 6, 2, 200);
  deleteEle(arr,5,2);
  return 0;
}