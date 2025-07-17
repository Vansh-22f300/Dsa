//{ Driver Code Starts
//LEETCODE 208 COURSE SCHEDULE-2/PRE REQUISITE TASK
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> findOrder(int V, vector<vector<int>> prerequisites) {
        vector<vector<int>> adj(V);
        for(auto i:prerequisites){
            adj[i[1]].push_back(i[0]);
        }
        //store indegree for all
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        //push in queue if indegree is zero
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        
        //check whose indegree is 0 and store in ans
        vector<int>ans;
        while(!q.empty()){
            int front=q.front();
            ans.push_back(front);
            q.pop();
            
            //neighbour update 
            for(auto it:adj[front]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
                
            }
        }
        if(ans.size()==V)return ans;
        return {};
    }
};


//{ Driver Code Starts.

int check(int V, vector<int> &res, vector<int> adj[]) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u, v});
        }

        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);

        Solution obj;
        vector<int> res = obj.findOrder(n, prerequisites);

        if (check(n, res, adj))
            cout << "true" << endl;

        else
            cout << "false\n";
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends