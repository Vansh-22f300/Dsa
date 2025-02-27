// More Optimised Approach

#include <iostream>
using namespace std;
int main(){
    int arr[]={10,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int res[100] = {1};
    res[0]=1;
    int ans=arr[0];
    for(int i=1;i<n;i++){
       res[i]=ans;
       ans*=arr[i];    
    }
    // right[n-1]=1;
    ans=arr[n-1];
    for(int i=n-2;i>=0;i--){
        res[i]*=ans;
        ans*=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
}
}