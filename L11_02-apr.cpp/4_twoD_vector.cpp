#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int m=5;
    vector<vector<int>> v(n, vector<int>(m));
        int num=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=num;
                num++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
