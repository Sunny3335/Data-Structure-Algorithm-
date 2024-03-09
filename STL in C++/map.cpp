#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="sunny";
    m[5]="kumar";
    m[3]="raj";
    m[9]="mohan";
    m[10]="mohan";

    // we can also insert new key value pair by using other method,
    m.insert({2,"eng"});

    /* for(auto i:m){
        cout<<i.first<<endl;

    }
    cout<<endl; */


    /* for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl; */

    // finding the element present or not.
    cout<<"is present 5 "<< m.count(5)<<endl; // we have need to pass argument value and it will only gives the true or false value only .

 // erase method

    m.erase(5); // we have need to pass argument value
    /* for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl; */

    // we can using iterator
    auto it=m.find(3);  // it will start from the value 3. and also required of argument value.
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
        
    }



}