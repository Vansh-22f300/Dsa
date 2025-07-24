#include<bits/stdc++.h>
using namespace std;
int wineProblem(int *prices,int l,int r,int days=1){
    if(l>r ) return 0;
    int op1=prices[l]*days+wineProblem(prices,l+1,r,days+1);    
    int op2=prices[r]*days+wineProblem(prices,l,r-1,days+1);
    return max(op1,op2);

}

int TopDown(int *prices,int l,int r,int days,int dp[][100]){
    if(l>r ) return dp[l][r]=0;
    if(dp[l][r]!=-1) return dp[l][r];
    // dp[l][r] stores the maximum profit from l to r with days
    int op1=prices[l]*days+TopDown(prices,l+1,r,days+1,dp);    
    int op2=prices[r]*days+TopDown(prices,l,r-1,days+1,dp);
    return dp[l][r]=max(op1,op2);

}
int bottomUp(int *prices, int n) {
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    for(int l=n-1;l>=0;l--){
        for(int r=l;r<n;r++){
            int days=n-(r-l);
            int op1=prices[l]*days + (l+1 <= n ? dp[l+1][r] : 0);
            int op2=prices[r]*days + (r-1 >= 0 ? dp[l][r-1] : 0);
            dp[l][r]=max(op1,op2);
        }
    }
    return dp[0][n-1];
    
}
int diagnolWine(int *prices,int n){
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    for(int i=0;i<n;i++){
        int r=i;
        int l=0;
        while(l<n && r<n){
            int days=n-(r-l);
            int op1=prices[l]*days + (l+1 <= n ? dp[l+1][r] : 0);
            int op2=prices[r]*days + (r-1 >= 0 ? dp[l][r-1] : 0);
            dp[l][r]=max(op1,op2);
            l++;
            r++;
        }
    }
    return dp[0][n-1];
}
int main(){
    int prices[]={2,3,5,1,4};
    int n=sizeof(prices)/sizeof(prices[0]);

    cout<<"Recursive: ";
    // Recursive approach
    cout<<wineProblem(prices,0,n-1);
    cout<<endl;
    cout<<"Top Down DP: ";
    int dp[100][100];
    memset(dp,-1,sizeof(dp));
    cout<<TopDown(prices,0,n-1,1,dp);
    cout<<endl;
    cout<<"Bottom Up DP: ";
    cout<<bottomUp(prices,n);
    cout<<endl;
    cout<<"Diagnol DP: ";
    cout<<diagnolWine(prices,n);
    cout<<endl;
}