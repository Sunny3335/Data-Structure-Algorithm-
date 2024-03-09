#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rollNum;

public:
    string name;

    // manually created constructor
    // teo argument constructor
    Student(int ans, string str)
    {
        rollNum = ans;
        name = str;
    }

    void print()
    {
        cout << rollNum << " " << name << endl;
    }
};

int main()
{
    Student s(12);
    s.name = "sunny";
    s.print();

    return 0;
}