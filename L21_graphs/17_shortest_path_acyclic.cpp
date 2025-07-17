//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void topo(int node,int vis[],stack<int>&st,vector<pair<int,int>> adj[]){
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i.first]){
                topo(i.first,vis,st,adj);
            }
        }
        st.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>> adj[V];
        for(int i=0;i<E;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        //topo sort
        int vis[V]={0};
        stack<int> s;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                topo(i,vis,s,adj);
            }
        }

        //dsitance
        
        vector<int>dis(V,1e9);//seting all as infinity
        dis[0]=0;
        while(!s.empty()){
            int front=s.top();
            s.pop();
            //if distance is not infinity then only check for neighbours
            //if distance is infinity then it means that node is not reachable from source node
            if(dis[front]!=1e9){
                for(auto it:adj[front]){
                    int v=it.first;
                    int wt=it.second;
                    if(dis[front]+wt<dis[v]){
                        dis[v]=dis[front]+wt;
                    }
                }
            }
        }   
        for(int i=0;i<dis.size();i++){
            if(dis[i]==1e9){
                dis[i]=-1;
            }
        }
        return dis;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends