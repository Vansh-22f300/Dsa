#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<int> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='(' || ch=='+'|| ch=='-'|| ch=='*'|| ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            bool isredundant=true;
            while(!st.empty() and st.top()!='('){
                char temp=st.top();
                if(temp=='+' || temp=='-' || temp=='*'|| temp=='/'){
                    isredundant=false;
                   
                }
                st.pop();
            }
             st.pop();
             if(isredundant==true)return true;
        }
    }
    return false;
    // Write your code here.
}
