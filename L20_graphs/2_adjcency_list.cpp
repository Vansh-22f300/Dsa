#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n >>m;
    //graph stored here
    //adjancency List very costly   
    // TIME COMPLEXITY:O[2E]
    vector<int> adj[n+1];  //one based indexing
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}