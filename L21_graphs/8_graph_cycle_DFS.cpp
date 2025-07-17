//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool detect(int node,int parent,vector<vector<int>>& adjList,int vis[]){
        vis[node]=1;
        for(auto i : adjList[node]){
                if(!vis[i]){
                    if(detect(i,node,adjList,vis)==true){
                        return true;
                    }
                }
                else{
                    if(i != parent) return true;
                }
        }
        return false;    
    }

    bool isCycle(int V, vector<vector<int>> adj) {
        vector<vector<int>> adjList(V);
        for (auto edge : adj) {
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        int vis[V] = {0};
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(detect(i,-1, adjList, vis)) return true;
            }
        }
        return false;
    }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends