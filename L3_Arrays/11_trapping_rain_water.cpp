#include<iostream>
using namespace std;
int main(){
    int arr[]={0, 2, 1, 3, 0, 1, 2, 1, 2, 1};
    int left[100];
    int right[100];
    int n=sizeof(arr)/sizeof(int);
    if (n==0){
		cout<<0;
		return 0;
	}
    int ans;

    ans=arr[0];
    left[0]=0;
    for(int i=1;i<n;i++){
        left[i]=ans;        //Stores uptil i-1th index building 
        ans=max(ans,arr[i]);    //Stores max till ith building for next iteration
    }


    // arr[n-1]=0;
    ans=arr[n-1];
    right[n-1]=0;
    for(int i=n-2;i>=0;i--){
        right[i]=ans;
        ans=max(ans,arr[i]);
    }


    int total_water=0;
        for(int i=0;i<n;i++){
           int minimum=min(left[i],right[i]);
           if(minimum-arr[i]>0){
            total_water=total_water+(minimum-arr[i]);
           }

    }
    cout<<total_water;
    
    



return 0;

}