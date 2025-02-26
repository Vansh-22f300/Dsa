#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,0,3,2,5};
    int left[100];
    int right[100];
    int n=sizeof(arr)/sizeof(int);


    left[0]=0;
    int ans=arr[0];
    for(int i=1;i<n;i++){
        left[i]=ans;        //Stores uptil i-1th index building 
        ans=max(ans,arr[i]);    //Stores max till ith building for next iteration
    }


    // arr[n-1]=0;
    right[n-1]=0;
    ans=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=ans;
        ans=max(ans,arr[i]);
    }


    int total_water=0;{
        for(int i=0;i<n;i++){
           int minimum=min(left[i],right[i]);
           if(minimum-arr[i]>0){
            total_water=total_water+(minimum-arr[i]);
           }

    }
    cout<<total_water;
    }
    



return 0;

}