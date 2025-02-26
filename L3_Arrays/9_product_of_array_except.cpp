#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int left[100];
    int right[100];

    int ans=arr[0];

    left[0]=1;
    for(int i=0;i<n;i++){
        left[i]=ans;
        ans*=arr[i];
    
    
    }
    right[n-1]=1;
    ans=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=ans;
        ans*=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<left[i]*right[i]<<endl;
}
}