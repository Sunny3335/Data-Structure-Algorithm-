#include <bits/stdc++.h>
using namespace std;
void printArray(int *&dArray, int size)
{
  for (int j = 0; j < size; j++)
  {
    cout << dArray[j];
    cout << " ";
  }
}

void update(int *&dArray, int i)
{
  dArray[i] = 31;
}

int main()
{
  int size = 4;
  int *dArray = new int[4];
  dArray[0] = 4;
  dArray[1] = 45;
  dArray[2] = 41;
  dArray[3] = 24;

  update(dArray, 1);
  printArray(dArray, size);

  delete[] dArray; // deletion of array

  return 0;
}