void insertAtBottom(stack<int> &stack,int ele){
    // base case
    if(stack.empty()){
        stack.push(ele);
        return;
    }
    // processing
    int num=stack.top();
    stack.pop();
    // RR
    insertAtBottom(stack,ele);
    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty()){
        return;
    }
    // processing
    int ans=stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);
    insertAtBottom(stack,ans);
}