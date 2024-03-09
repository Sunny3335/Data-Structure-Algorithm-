#include <iostream>
using namespace std;

void gharpahuchna(int src, int des)
{

    cout << "from " << src << " to " << des << endl;

    // basic condition
    if (src == des)
    {
        cout << "ghar pahuch gaya " << endl;
        return;
    }

    // processing
    src++;

    // recursive relation
    gharpahuchna(src, des);
}
int main()
{
    int src = 1;
    int des = 10;
    gharpahuchna(src, des);
}