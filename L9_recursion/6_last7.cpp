//last7ocuurence using recursion
#include <iostream>
using namespace std;


int last7ocuurence(int arr[],int n){
    //base case
    if(n==0) return -1;
    else if(arr[n-1]==7) return n-1;
    int index=last7ocuurence(arr,n-1);
    if(index==-1)return -1;
    return index;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<last7ocuurence(arr,n);

}