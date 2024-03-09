#include<iostream>
using namespace std;

int stair(int n){
    // base case.
    if(n==0)
    return 1;
    if(n<0){
        return 0;
    }
    // recursive  relation.
    int ans =stair(n-1)+stair(n-2);
    return ans;
}


int main (){
    int n;
    cin>>n;
    cout<<stair(n)<<endl;

}