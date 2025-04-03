class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            //open bracket
            for(int i=0;i<s.length();i++){
                char ch=s[i];
                if(ch=='('|| ch=='{' || ch=='['){
                st.push(ch);
                }
                else{   //closing
                    if(!st.empty()){
                        if(ch== ')' && st.top()=='('){
                            st.pop();
                        }
                        else if(ch=='}' && st.top()=='{'){
                            st.pop();
                        }
                        else if(ch==']' && st.top()=='['){
                            st.pop();
                        }
                        else{
                            //no match
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
    
    
            }
            if(st.size()==0){
                return true;
            }
            else{
                return false;
            }
    
            
        }
    };