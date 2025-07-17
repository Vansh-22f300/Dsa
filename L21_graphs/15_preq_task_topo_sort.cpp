//{ Driver Code Starts
//LEETCODE 207 COURSE SCHEDULE/PRE REQUISITE TASK
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPossible(int V, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto i:prerequisites){
            adj[i.first].push_back(i.second);
        }
        //store indegree for all
        int indegree[V]={0};
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
        if(ans.size()==V)return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends