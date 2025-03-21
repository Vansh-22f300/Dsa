#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;//n=rows,m=columns
    cin>>n>>m;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //spiral print
    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
    //1.sr
    for(int c=col_start;c<=col_end;c++){
        cout<<a[row_start][c]<<" ";
    }
    row_start++;
    //2.ec
    for(int r=row_start;r<=row_end;r++){
        cout<<a[r][col_end]<<" ";
    }
    col_end--;
    //3.er
    if(row_start<row_end){
        for(int c=col_end;c>=col_start ;c--){
            cout<<a[row_end][c]<<" ";
        }
    }
    row_end--;

    //4.sc
    if(col_start<col_end){
        for(int r=row_end;r>=row_start;r--){
            cout<<a[r][col_start]<<" ";
        }
    }
    col_start++;
    }
   
    return 0;
}