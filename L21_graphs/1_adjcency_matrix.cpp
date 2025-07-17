#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n >>m;
    //graph stored here
    //adjancency matrix very costly
    int adj[n+1][m+1];  //one based indexing
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
}