#include <iostream>
using namespace std;

int partion(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    // place the pivot index at right place
    int pivotindex = s + cnt;
    swap(arr[pivotindex], arr[s]);

    // solve left and right part
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}
void mergesort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;
    // call partion function .
    int p = partion(arr, s, e);

    // sort the left part
    mergesort(arr, s, p - 1);

    // sort the right part.
    mergesort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {5, 3, 9, 1, 2};
    int n = 5;

    mergesort(arr, 0, n - 1);
    // printing the quick sort array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


