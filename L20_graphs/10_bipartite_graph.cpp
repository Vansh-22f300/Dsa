class Solution {
    public:
        bool check(int start,int V,vector<vector<int>>& graph,int col[]){
            queue<int>q;
            q.push(start);
            col[start]=0;
            while(!q.empty()){
                int node=q.front();
                q.pop();
    
                for(auto i:graph[node]){
                    if(col[i]==-1){
                        col[i]=!col[node];
                        q.push(i);
                    }
                    else if(col[i]==col[node]){
                        return false;
                    }
                }
            }
            return true;
    
        }
        bool isBipartite(vector<vector<int>>& graph) {
            int V=graph.size();
            int col[V];
            for(int i=0;i<V;i++){
                col[i]=-1;
            }
            for(int i=0;i<V;i++){
                if(col[i]==-1){
                    if(check(i,V,graph,col)==false){
                        return false;
                    }
                }
            }
            return true;
            
    
        }
    };
