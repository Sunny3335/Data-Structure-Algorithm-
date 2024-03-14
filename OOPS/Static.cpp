#include <bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int health;

    public:
        static int timeToComplete;

        static int random(){
            // cout << health << endl; // does not access only access static member.
            return timeToComplete;
        }
};

// initialization of static keyword out of the class.
int Hero::timeToComplete = 5;
int main(){
    // static keyword
    // cout << Hero::timeToComplete << endl; // there is no need of object for the static keyword.
    // static keyword not belong to object but belong to only class.
    // but we can also access using making object but that is not the right way.
   /*  Hero a;
    cout << a.timeToComplete << endl;
    a.timeToComplete = 43;
    cout << a.timeToComplete << endl; */

    // static function
    // no need of object and not a this keyword because it does not have object.
    // static function only access the static keyword

    cout<<Hero::random()<<endl;

    return 0;
}