//sum of array using recursion
#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if (n==0) return 0;
    else{
        return arr[n-1]+sum(arr,n-1);
        //or returm arr[0]+sum(arr+1,n-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<sum(arr,n);
}