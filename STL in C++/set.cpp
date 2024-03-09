#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s; // it will return the value in sorted form -- increasing order.
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    //printing these above.
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    // s.erase(s.begin()); //it will delete the first element of set.
    // for(auto i:s){
    //     cout<<i<<endl;

    // }
    //using iterator to erase element
    set<int>:: iterator it=s.begin();
    it++; // it will erase the 1st index element
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }

    // count function.
    cout<<"5 is present or not "<<s.count(5)<<endl; // it will return the true value if the element is present other wise it will give 0.
    // find function
    set<int>:: iterator itr=s.find(3);
    cout<<"value present at itr "<<*it<<endl;


    return 0;
}