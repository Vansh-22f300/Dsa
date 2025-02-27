#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;

        if (arr[mid]==target){
            return mid;
        }
        else if (arr[start]<=arr[mid]){
            if(target>=arr[start] and target<arr[mid]){
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        else {
            if(target>arr[mid] and target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

    }
    return -1;
}
}
int main(){

    int arr[]={4,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    int target=9;
    cout<<binarysearch(arr,n,target);

    return 0;
}