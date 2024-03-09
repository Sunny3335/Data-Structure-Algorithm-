#include <iostream>
using namespace std;

void print(int n)
{
    // base condition.
    if (n == 0)
    {
        return ; // here function will be khatam when n==0 and move to previous continued recursion.
    }
    // recursive relation.
    print(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    cout << endl;
    print(n);
}