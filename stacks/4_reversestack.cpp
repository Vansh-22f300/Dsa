#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int x){
    if(st.size()==0 ){
        st.push(x);
        return ;
    }
    int temp=st.top();
    st.pop();
    
    insertAtBottom(st,x);
    st.push(temp);

        
}
void reversestack(stack<int>&st){
    if(st.empty()){     //base case
        return ;
    }
    else{
        // 1st case
        int temp=st.top();
        st.pop();

        // recursive case
        reversestack(st);

        //call insert at botton
        insertAtBottom(st,temp);
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    //     st.push()
    // }
    reversestack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    

}