#include<iostream>
using namespace std;

void reverse(string str, int i, int j){
    cout<<"call reversed string "<<str<<endl;
    // base case
    if(i>j){
        return ;
    }
    // processing condition
    swap(str[i],str[j]);
    i++;
    j--;

    // recursion relation
    reverse(str,i,j);
}
int main(){
    string str="sunny";
    reverse(str,0,str.length()-1);
    // when we pass variable name in function and direct call the function to print the reverse of string
    cout<<endl;
    // cout<<str<<endl; //but when we cout the variable the the original string will be printed because the change was done in copy string not in original strinal so to overcome the error we can pass tha varibale in function after making it reference variable


}