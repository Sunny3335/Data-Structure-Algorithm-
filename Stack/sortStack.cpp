void insertSorted(stack<int> &stack,int ele){
  // base case
  if(stack.empty() || (!stack.empty() && stack.top()<ele)){
    stack.push(ele);
  }
  // processing
  int ans=stack.top();
  stack.pop();
  // RR
  insertSorted(stack,ele);
  stack.push(ans);
}
void sortStack(stack<int> &stack){
  // base case
  if(stack.empty()){
    return;
  }
  // processing
  int num=stack.top();
  stack.pop();

  // RR
  sortStack(stack);
  insertSorted(stack,num);
}