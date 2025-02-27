#include  <iostream>
#include <climits>
using namespace std;

double median(int *arr1,int *arr2,int n, int m ){
    if(n>m) return median(arr2,arr1,m,n);
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int mid=(s+e)/2;
        int mid1=(n+m+1)/2-mid-2;
        int leftmaxa=(mid>0)?arr1[mid-1]:INT_MIN;//arr1[mid];
        int leftmaxb=(mid1>0)?arr2[mid1-1]:INT_MIN;
        int rightmina=(mid+1<n)?arr1[mid+1]:INT_MAX;
        int rightminb=(mid1+1<n)?arr2[mid1+1]:INT_MAX;
        if(leftmaxa<=rightminb and leftmaxb<=rightmina){
            if((n+m)%2==1){
                return max(leftmaxa,leftmaxb);
            }
            else{
                return (max(leftmaxa,leftmaxb)+min(rightmina,rightminb))/2.0;
            }
        }
        else if(leftmaxa>rightminb){
            e=mid-1;
        }
        else 
        // (leftmaxb>rightmina)
        {
            s=mid+1;
        }

    }
    return -1;
                            



}
int main(){
    int arr1[]={1,4,7,9,11};
    int arr2[]={2,3,5,6,8,10};

    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    cout<<median(arr1,arr2,n,m);
    // int left=(n+m+1)/2;



    return 0;

}



//Kth smallest product of two sorted arrays