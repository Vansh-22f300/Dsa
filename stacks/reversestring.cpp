#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s="hellojee";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        st.push(ch);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}