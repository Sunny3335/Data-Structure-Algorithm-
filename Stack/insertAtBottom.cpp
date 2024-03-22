void solve(stack<int>&s,int num){
  // base case
  if(s.empty()){
    s.push(num);
    return ;
  }
  // processing the stack
  int ans=s.top();
  s.pop();

  // recursive call
  solve(s,num);
  s.push(ans);
}
stack<int> pushAtBottom(stack<int>& myStack, int x){
  solve(myStack, x);
  return mystack;
}