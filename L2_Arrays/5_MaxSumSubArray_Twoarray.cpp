#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int arr[]={8 ,-8, 9 ,-9 ,10 ,-11 ,12};//initialization
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    // cout<<arr[i]<<" ";
    int sum;
    int ans=INT_MIN;
    int si,sj;
    int ps[100]={0};
    //Prefix sum of range
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];
        //ps[i]=[0,1] range sum
        //ps[i-1]=[0,i-1]range sum
    }
    //Max Sum Algorithm
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            // cout<<i<<","<<j<<endl;
            if(i-1>=0){
                sum=ps[j]-ps[i-1];
                // sum=ps[i];
            }
            else{
               sum=ps[j];
            }
            // sum=ps[j]-(i-1>0?ps[i-1]:0);
            //using Ternary Operator
            if (sum>ans){
                ans=sum;
                si=i;//Stores the starting index of maximum sub array
                sj=j;//Stores the ending index of maximum sub array
            }
        }
    }
    cout<<"Sum:"<<ans<<endl;
    for (int i=si;i<=sj;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}



