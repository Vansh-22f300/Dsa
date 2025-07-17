//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User Function Template
class Solution {
  public:
   vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        // Build adjacency list
        vector<vector<pair<int, int>>> adj(V);
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
        }
        set<pair<int,int>> st;
        vector<int>dis(V,1e9);
        dis[S]=0;
        st.insert({0,S});
        while(!st.empty()){
            auto it=*(st.begin());
            int dist=it.first;
            int node=it.second;
            st.erase(it);
            
            
            for(auto it:adj[node]){
                int adjnode=it.first;
                int edgewt=it.second;
                if(dist+edgewt<dis[adjnode])
                {   if(dis[adjnode]!=1e9) st.erase({dis[adjnode],adjnode});
                
                    dis[adjnode]=dist+edgewt;
                    st.insert({dis[adjnode],adjnode});
                }
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
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            edges.push_back({u, v, w});
            edges.push_back({v, u, w});
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(V, edges, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends