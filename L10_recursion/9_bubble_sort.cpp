#include<iostream>
using namespace std;
void bubblesort(int arr[],int n ,int i){               //by loops
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
 void bubblesortbyrecursion(int arr[],int n,int i){
    //base case

    if(i==n-1) return;


    //recursive case
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //ek maine kr diya baaki recursion sambhalega
    bubblesortbyrecursion(arr,n,i+1);
 }
void bubblesortbyrecursion1(int arr[],int n,int i,int j){
    //base case

    if(i==n-1) return;

    //recursive case
       
    
    //ek maine kr diya baaki recursion sambhalega
    if(j==n-i-1){
        return bubblesortbyrecursion1(arr,n,i+1,0);
    }
    else{
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        bubblesortbyrecursion1(arr,n,i,j+1);

    }
   
 }
int main(){
    int arr[]={5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(int);
    bubblesortbyrecursion1(arr,n,0,0);
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
