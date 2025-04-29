//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int vis[10005]={0}; //to check if node is visited or not
        //adjacency list is 0 based indexing
        vis[0]=1;
        vector<int>bfs;     //to store bfs traversaland print
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int front=q.front();
            q.pop();
            bfs.push_back(front);
            
            for(auto it:adj[front]){    //it is a vector of vector so we can use it like this
                                        //it is the node which is connected to front node
                
                if(!vis[it]){    //if it is not visited 
                    vis[it]=1;   // then push it in queue 
                    q.push(it);  // and mark it as visited
                               
                    
                }
            }
        }
        return bfs;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        // Use vector of vectors instead of array of vectors.
        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends