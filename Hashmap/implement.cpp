#include <bits/stdc++.h>
using namespace std;
int main(){
  // creation of unordered map
  unordered_map<string,int> m;

  // insertion
  // method 01
  // using make pair
  pair<string,int>p=make_pair("babber",3);
  m.insert(p);

  // method 02
  pair<string,int>pair2("love",2);
  m.insert(pair2);

  // method 03
  m["mera"]=1;

  // the below line update the privious data in the map
  // not allow duplicate entry
  // there will be a single element
  m["mera"]=3;

  // searching
  cout<<m["mera"]<<endl;
  cout<<m.at("babber")<<endl;

  cout<<m["bab"]<<endl;
  // m["bab"]=44444;
  cout<<m["bab"]<<endl; // acording to this method it initialize the entry with the value one.
  cout<<m.at("bab")<<endl; // when we want to search any key ehich is not there then it will retutn throw error according to this method.
  // size
  cout<<m.size()<<endl;

  // presence of ele
  // if present then return 1 otherwise return 0.
  cout<<m.count("love")<<endl;

  m.erase("love");
  cout<<m.size()<<endl;

  // this method used to iterate the map
  // for(auto i:m){
  //   cout<<i.first<<" "<<i.second<<endl;
  // }

  unordered_map<string,int> :: iterator it=m.begin();
  while (it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
  }



return 0;
}