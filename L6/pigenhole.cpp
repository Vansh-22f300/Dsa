#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};//initialization
    int n=sizeof(arr)/sizeof(int);
    //1.Fonding prefix sum
    int ps[100]={0};
    //Prefix sum of range
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];
        //ps[i]=[0,1] range sum
        //ps[i-1]=[0,i-1]range sum
    }
    ///2.Taking mod of ps[i]
    for(int i=0;i<n;i++){
        ps[i]=ps[i]%n;
    }

    //3. finding remainder count
    int remaindercount[100]={1};
    //{1,0,0,0,0,0,0,0,0,0  .............}

    for(int i=0;i<n;i++){
        remaindercount[ps[i]]++;
    }

    // 4. combination rule
    int ans=0;
    for(int i=0;i<n;i++){
    ans+=(remaindercount[i]*(remaindercount[i]-1))/2;


    }
    cout<<"Total Subarrays:"<<ans<<endl;

    return 0;
}