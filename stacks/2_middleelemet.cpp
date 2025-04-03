#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st,int &pos,int &ans){
    //base case
    if(pos==1) {
        ans=st.top();
        return;
    }
    //1 ek case mai karunga baki recursion karge
    pos--;
    int temp=st.top();
    st.pop();

    solve(st,pos,ans);          //recursive case

    //to get back original stack        //backtrack
    st.push(temp);

    
}
int getmiddle(stack<int> &st){
    if(st.empty()){
        return -1;
    }
    else{
        int pos=0;
        int size=st.size();
        if(size % 2==0){            //even
            pos=size/2;
        }
        else{
            pos=(size/2)+1;         //odd
        }
    
    int ans=-1;
    solve(st,pos,ans);
    return ans;
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<getmiddle(st);

}