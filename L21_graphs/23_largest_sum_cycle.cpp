//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  void help(long long &sum,vector<int>&edge,int &node){
      sum+=node;
      vector<int>vis(edge.size(),0);
      vis[node]=1;
      int temp=edge[node];
      while(!vis[temp]){
          sum+=temp;
          vis[temp]=1;
          temp=edge[temp];
      }
      
  }
    void cycle(int node,vector<int>&vis,vector<int>&dfs,vector<int>&edge,int &a){
        vis[node]=1;
        dfs[node]=1;
        int next=edge[node];
        if(next!=-1){
            if(!vis[next]){
                cycle(next,vis,dfs,edge,a);
            }
            else if(dfs[next]){
                a=next;
            }
        }
    
    dfs[node]=0;    
    }
    long long largestSumCycle(int n, vector<int> edge) {
        // code here
        vector<int>vis(n,0);
        vector<int>dfs(n,0);
        long long ans=-1;
        
        for(int i=0;i<n;i++){
            int a=-1;
            if(!vis[i]){
                cycle(i,vis,dfs,edge,a);
                if(a!=-1){
                    long long sum=0;
                    help(sum,edge,a);
                    ans=max(ans,sum);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   
cout << "~" << "\n";
}
   return 0;
}
// } Driver Code Ends