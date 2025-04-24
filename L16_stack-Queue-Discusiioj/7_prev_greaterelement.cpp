#include<bits/stdc++.h>
using namespace std;


vector<int> prevvgreater(vector<int>arr, int n){
    stack<int>s;
    // s.push(-1);
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(!s.empty() && arr[s.top()]<=curr){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
        }
        // ans[i]=s.top();
        s.push(i);          //for index
    }
   
    return ans;
}

int main(){
    stack <int> s;

    int a[]={6,2,1,3,4,4,7};
    int n=sizeof(a)/sizeof(int);
    vector<int>ans=prevvgreater(vector<int>(a, a + n), n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"->"<<ans[i]<<endl;
    }
    
    //2nd apparoch
    int prevgreater[1000];

    for(int i=0;i<n;i++){
        while(!s.empty()&& a[i]>a[s.top()]){

            prevgreater[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        prevgreater[s.top()]=-1;
        s.pop();
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<"->"<<prevgreater[i]<<endl;
    }


}


