// implement only the function.
// implement solve function
void solve(stack<int>&inputStack, int cnt, int n){
  // base case
  if(cnt==n/2){
    inputStack.pop();
    return;
  }
  // process
  int ans=inputStack.top();
  inputStack.pop();

  // recursion call
  solve(inputStack,cnt+1,n);
  inputStack.push(ans);
}
void deleteMiddle(stack<int>&inputStack, int n){
  // make a function call
  int cnt=0;
  solve(inputStack, cnt, n);
}