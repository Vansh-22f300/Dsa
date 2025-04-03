#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}