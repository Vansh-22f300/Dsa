//transpose
#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;//n=rows,m=columns
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //logic for transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    //cout
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 
