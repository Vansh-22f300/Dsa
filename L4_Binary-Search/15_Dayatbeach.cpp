#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[10005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int leftmax[10005],rightmin[10005];
    leftmax[0]=arr[0];
    int ans=arr[0];
    for(int i=1;i<n;i++){
        leftmax[i]=ans;
        ans=max(ans,arr[i]);
    }

    rightmin[n-1]=arr[n-1];
    ans=arr[n-1];
    for(int i=n-1;i>=0;i--){
        ans=min(ans,arr[i]);
        rightmin[i]=ans;

    }
    
    int res=1; //Block =partition+1;
    for(int i=1;i<n;i++){// started from 1 because if we make 0 then empty paartiton will be made
        if(leftmax[i]<=rightmin[i]){
            res=res+1;
        }
    }
    cout<<res<<endl;



}



