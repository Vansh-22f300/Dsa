#include<iostream>
#include<stack>
using namespace std;
void insertinsortedstack(stack<int> &st,int element){
    //base case
    if(st.empty()|| element>st.top()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();

    //recursion
    insertinsortedstack(st,element);

    //backtracking
    st.push(temp);


}
int main(){
        stack<int> st;
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
    
        insertinsortedstack(st,0);
    
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        
        
    
    }
