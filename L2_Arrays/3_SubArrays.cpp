#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,3,-5,9,-1,10};//initialization
    int n=sizeof(arr)/sizeof(int);
    int sum;
    int ans=INT_MIN;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            // cout<<i<<","<<j<<endl;
            sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            // ans=max(ans,sum);
            if(sum>ans){
                ans=sum;
            }
            cout<<"Sum: "<<sum;
            cout<<endl;
        }
    }
    cout<<"Max:"<<ans;

    return 0;
}