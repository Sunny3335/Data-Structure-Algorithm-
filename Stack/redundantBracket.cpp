bool findRedundantBrackets(string &s){
  // implement a stack
  stack<char>st;
  // traverse the whole string s
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    if((ch=='(')||(ch=='+') ||(ch=='-') ||(ch=='*') || (ch=='/')){
      st.push(ch);
    }else{
      if(ch==')'){
        bool redundant=true;
        while(st.top()!='('){
          char c=st.top();
          if((c=='+') ||(c=='-') ||(c=='*') || (c=='/')){
            redundant=false;
          }
          st.pop();
        }
        if(redundant==true){
          return true;
        }else{
          return false;
        }
        st.pop();
      }
    }
  }

}