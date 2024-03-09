#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(1); // last in first out.

    cout<<"finding the value 9 by using binary "<<binary_search(v.begin(),v.end(),0)<<endl;
    cout<<"finding the value 1 by using binary "<<binary_search(v.begin(),v.end(),1)<<endl;

    // find lower bound
      cout<<"finding lower bound "<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;

      // find upper bound.
      cout<<"finding upper bound "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;


      int a=4;
      int b=9;
      cout<<"maximum: "<<max(a,b)<<endl;
      cout<<"minimum: "<<min(a,b)<<endl;

      swap(a,b);
      cout<<"new value of a: "<<a<<endl;
      cout<<"new value of b: "<<b<<endl;

      string abcd="abcd"; /// reverse the string
      reverse(abcd.begin(),abcd.end());
      cout<<"reversed string: "<<abcd<<endl;

      sort(v.begin(),v.end()); // for th =e sorting the array
      for(auto i:v){
        cout<<i<<" ";
      }cout<<endl;

      rotate(v.begin(),v.begin()+2,v.end()); // here this will rotate the arry from left to right and it will depend on the v.begin()+1/2/3/4.
      for(auto i:v){
        cout<<i<<" ";
      }


    return 0;
}