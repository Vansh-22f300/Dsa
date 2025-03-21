#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,3,-5,9,-1,10};//initialization
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    int ans=INT_MIN;
    bool ispositivepresent=false;
    for (int i=0;i<n;i++){
        if(arr[i]>=0){
            ispositivepresent=true;
        }
        //Store the maximum element of the array if all elements are negative.
        //This is because the maximum sum of subarray will be the maximum element itself.
        ans=max(ans,arr[i]);
    }
    if(ispositivepresent=true){

    //Max Sum Algorithm
    for (int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<0) sum=0;
            ans=max(ans,sum);
        }   
    }
    
    
    cout<<"sum:"<<ans;
    return 0;
}