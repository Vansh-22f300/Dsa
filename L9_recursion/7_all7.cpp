//all7ocuurences using recursion
#include <iostream>
using namespace std;

void all7ocuurences(int arr[],int n,int i){
    //base case
    if(i==n) return;
    //recursive case
    if(arr[i]==7) cout<<i<<" ";
    all7ocuurences(arr,n,i+1);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    all7ocuurences(arr,n,0);

}