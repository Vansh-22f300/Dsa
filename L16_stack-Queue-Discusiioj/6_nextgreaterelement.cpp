#include<bits/stdc++.h>
using namespace std;


int main(){
    stack <int> s;

    int a[]={6,2,1,3,4,4,7};
    int nextgreater[1000];
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        while(!s.empty()&& a[i]>a[s.top()]){

            nextgreater[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        nextgreater[s.top()]=-1;
        s.pop();
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<"->"<<nextgreater[i]<<endl;
    }
}