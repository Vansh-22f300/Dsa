#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({1,2,3});
    v.push_back({4,5});
    v.push_back({6,7,8});
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}