#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,3,-5,9,-1,10};//initialization
    int n=sizeof(arr)/sizeof(int);
    int sum;
    int ans=INT_MIN;
    int si,sj;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            // cout<<i<<","<<j<<endl;
            sum=0;
            for(int k=i;k<=j;k++){
                // cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            if (sum>ans){
                ans=sum;
                si=i;//Stores the starting index of maximum sub array
                sj=j;//Stores the ending index of maximum sub array
            }
        }
    }
    cout<<"Max:"<<ans<<endl;
    for (int i=si;i<=sj;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}