#include<iostream>
using namespace std;
bool ratinmaze(int sol[][100],int i,int j,char maze[][5],int n,int m){
    //base case
    if(i==n-1 && j==m-1){
        sol[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;// to print all cases until false is obtained
    }

    //recursive case
    sol[i][j]=1;

    //right
    if(j+1< m and maze[i][j+1]!='X' and sol[i][j+1]==0){
        bool kyarightjanesebaatbani=ratinmaze(sol,i,j+1,maze,n,m);
        if(kyarightjanesebaatbani) return true;
    }

    //down
    if(i+1<n and maze[i+1][j]!='X'  and sol[i+1][j]==0){
        bool kyadownjanesebaatbani=ratinmaze(sol,i+1,j,maze,n,m);
        if(kyadownjanesebaatbani) return true;

    }

    //upwards
    if(i-1<n and maze[i-1][j]!='X'  and sol[i-1][j]==0){
        bool kyaupjanesebaatbani=ratinmaze(sol,i-1,j,maze,n,m);
        if(kyaupjanesebaatbani) return true;

    }
    //backwards
    if(j-1<n and maze[i][j-1]!='X'  and sol[i][j-1]==0){
        bool kyabackjanesebaatbani=ratinmaze(sol,i,j-1,maze,n,m);
        if(kyabackjanesebaatbani) return true;

    }
    sol[i][j]=0;
    return false;

}
int main(){
    char maze[][6]={
        "0X000",
        "0X0X0",
        "0X0X0",
        "000X0",
    };

    int sol[100][100]={0};
    ratinmaze(sol,0,0,maze,4,5);

}