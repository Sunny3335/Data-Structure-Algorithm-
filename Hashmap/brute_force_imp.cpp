#include <bits/stdc++.h>
using namespace std;
// this is brute force approch that takes much more time to execute when any big amount of data is to count
// like (10e8) operation then query is also (10e8) then total goes to (10e16) that takes much more time because 10^8 operation takes 1 sec.
// T.C is: O(Q*N)
// Q is the number of different elements in array.
int getCount(int arr[],int size,int num) {
  int cnt=0;
  for(int i=0;i<size;i++){
    if(arr[i]==num){
      cnt++;
    }
  }
  return cnt;
}
int main(){
  // brute force approach to storing number count
  int size=5;
  int arr[5]={2,6,3,2,6};
  cout<<"count of 2: "<<getCount(arr,5,2)<<endl;
  cout<<"count of 3: "<<getCount(arr,5,3)<<endl;
  cout<<"count of 6: "<<getCount(arr,5,6)<<endl;


return 0;
}
