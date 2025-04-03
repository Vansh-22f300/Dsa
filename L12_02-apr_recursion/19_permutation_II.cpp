//permutation II
class Solution {
    public:
        vector<vector<int>> op;
        void solve(vector<int>& ip,int i){
            //base case
            if(i==ip.size()){
                op.push_back(ip);
                return;
            }
            

            //recursive case
            int freq[25]={0};
            for(int j=i;j<ip.size();j++){
                if(freq[ip[j]+10]!=0 ) continue;
                freq[ip[j]+10]=1;
                swap(ip[i],ip[j]);
                solve(ip,i+1);
                swap(ip[i],ip[j]);

            }
        }
        vector<vector<int>> permuteUnique(vector<int>& ip) {
            // vector<int> op;
            solve(ip,0);
            return op;
    
            
        }
    };
