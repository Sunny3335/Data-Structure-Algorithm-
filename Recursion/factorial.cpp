#include<iostream>
using namespace std;

int factorial(int n){

    // define base condition.
    if(n==0){
        return 1;
    }
    // int smallerproblem=factorial(n-1);
    // int biggerproblem=n*smallerproblem;

    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans =factorial(n);
    cout<<ans<<endl;
}