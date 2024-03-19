#include <iostream>
#include <vector>
#define Z 50

using namespace std;

void displayArr(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << ", ";
  }
  cout << endl;
}

vector<int> insertAtEnd(vector<int> A, int e)
{
  A.push_back(e);
  return A;
}

int main()
{
  vector<int> A = {57, 10, 14, 19, 86, 52, 32, 14, 76, 65, 32, 14};
  cout << "Array before insertion: ";
  displayArr(A);

  cout << "Inserting 58 at the end:" << endl;
  A = insertAtEnd(A, 58);

  cout << "Array after insertion: ";
  displayArr(A);

  cout << "Inserting 225 at the end:" << endl;
  A = insertAtEnd(A, 225);

  cout << "Array after insertion: ";
  displayArr(A);
}