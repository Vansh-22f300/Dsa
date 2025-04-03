//first7ocuurence using recursion
#include <iostream>
using namespace std;
int first7ocuurence(int arr[],int n){
    //base case
    if(n==0) return -1;
    //recursive case
    else if(arr[0]==7) return 0;
    int index=first7ocuurence(arr+1,n-1);
    if(index==-1) return -1;
    return index+1;
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<first7ocuurence(arr,n);

}