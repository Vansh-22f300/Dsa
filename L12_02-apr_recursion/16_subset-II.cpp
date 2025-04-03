#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& ip) {
    vector<vector<int>> ans;
    vector<int>op;
    sort(ip.begin(),ip.end());
    solve(ip,0,op,ans);
    return ans;
    
}

void solve(vector<int>& ip, int i, vector<int> &op,vector<vector<int>> &ans){
    //all op are answers
    ans.push_back(op);
    //base case
    if(i==ip.size()) return;
    //recursive case
    for(int j=i;j<ip.size();j++){
        if(j!=i && ip[j]==ip[j-1]) continue;

        op.push_back(ip[j]);
        solve(ip,j+1,op,ans);
        op.pop_back();

    }
    // return ans;
}
