#include<bits/stdc++.h>
using namespace std;


vector<int> nextsmaller(vector<int>arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);          //for index
    }
   
    return ans;
}

int main(){
    stack <int> s;

    int a[]={2,1,5,6,2,3};
    int n=sizeof(a)/sizeof(int);
    vector<int>ans=nextsmaller(vector<int>(a, a + n), n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"->"<<ans[i]<<endl;
    }
    
}