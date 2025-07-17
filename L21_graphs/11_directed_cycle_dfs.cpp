//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool dfscheck(int node, vector<vector<int>>&adjList, int vis[], int pathvis[]) {
        vis[node] = 1;
        pathvis[node] = 1;
        
        for (auto i : adjList[node]) {
            if (!vis[i]) {
                if (dfscheck(i, adjList, vis, pathvis) == true)
                    return true;
            }
            else if (pathvis[i])
                return true;
        }
        
        pathvis[node] = 0;
        return false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adjList(V);
        for (auto &edge : edges) {
            adjList[edge[0]].push_back(edge[1]); // Convert edge list to adjacency list
        }

        int vis[V] = {0};
        int pathvis[V] = {0};
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfscheck(i, adjList, vis, pathvis) == true)
                    return true;
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
        bool ans = obj.isCyclic(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
    }
    return 0;
}
// } Driver Code Ends