#include<iostream>
using namespace std;

bool palindrome(string str,int i, int j){
    // base case
    if(i>j)
    return true;
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palindrome(str,i++,j--);   // incrementing the first
    }
}
int main(){
    string name="sunny";
    bool ans=palindrome(name,0,name.length()-1);
    if(ans){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

}