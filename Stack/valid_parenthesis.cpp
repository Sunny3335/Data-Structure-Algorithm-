// implement the function only
bool isValidParenthesis(string s){
  // make a char type stack
  stack<char>st;
  // traverse the s
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    if((ch=='(') || (ch=='{') || (ch=='[')){
      s.push(ch);
    }else{
      if(!st.empty()){
        char c=st.top();
        if((c=='(' && ch==')')||(c=='{' && ch=='}') ||(c=='[' && ch==']')){
          st.pop();
        }else{
          return false;
        }
      }
    }
  }
  if(st.empty()) return true;
  else return false;
}
