#include  <iostream>
#include <climits>
using namespace std;

double findMedianSortedArrays(int *arr1,int *arr2,int n, int m ){
    // int n=arr1.size();
    // int m=arr2.size();
    if(n>m) return findMedianSortedArrays(arr2,arr1,m,n);

    int s=0;
    int e=n;
    // int ans;
    while(s<=e){
        int mid=s + (e - s) / 2;
        int mid1=(n+m+1)/2-(mid);
        int leftmaxa=(mid>0)?arr1[mid-1]:INT_MIN;//arr1[mid];
        int leftmaxb=(mid1>0)?arr2[mid1-1]:INT_MIN;
        int rightmina=(mid<n)?arr1[mid]:INT_MAX;
        int rightminb=(mid1<m)?arr2[mid1]:INT_MAX;
        if(leftmaxa<=rightminb and leftmaxb<=rightmina){
            if((n+m)%2==1){
                return max(leftmaxa,leftmaxb);
            }
            else{
                return ((double)(max(leftmaxa,leftmaxb)+min(rightmina,rightminb)))/2.0;
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
    return 0;
                            
   }             




int main(){
    int arr1[]={1,3};
    int arr2[]={2};

    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    cout<<findMedianSortedArrays(arr1,arr2,n,m);
    // int left=(n+m+1)/2;



    return 0;

}



//Kth smallest product of two sorted arrays