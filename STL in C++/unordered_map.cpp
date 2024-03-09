#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> ans;
    ans["sunny"] = 12;
    ans["sintu"] = 62;
    ans["mohan"] = 155;
    ans["fbjbf"] = 1252;

    // for(auto x :ans){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // using iterator
    // for(auto itr=ans.begin(); itr!=ans.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

    // string key = "sunny";
    // if(ans.find(key)!=ans.end()){
    //     cout<<"key found"<<endl;
    // }
    // else{
    //     cout<<"key not found"<<endl;
    // }

    /* if (ans.find(key) != ans.end())
    {
        auto temp = ans.find(key);
        cout << "key is: " << temp->first << endl;
        cout << "key is: " << temp->second << endl;
    } */

    // ans.insert(make_pair("mobile" ,13000)); // make_pair is key word to define key value pair
    // for(auto it=ans.begin();it!=ans.end();it++){
    //     cout<<it->first<<" : "<<it->second<<endl;
    // }
    int arr[] = {1, 2, 3, 6, 4, 5, 2, 5, 8, 3, 6, 2, 1, 5, 9, 6, 1, 2, 5, 3, 6, 5, 4, 1, 2, 5, 8, 45, 2, 5};
    unordered_map<int, int> ump;
    for (int i = 0; i < 30; i++)
    {
        // int key =arr[i];
        ump[arr[i]]++;
    }
    for (auto itr = ump.begin(); itr != ump.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    
    string st = "sunnyjnsjn";
    unordered_map<char, int> t;
    for (int i = 0; i < st.size(); i++)
    {
        cout << t[st[i]] << endl;
    }
    cout << ans.size();
    << endl;
}