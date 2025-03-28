#include<iostream>
using namespace std;

void mergearrays(int a[],int b[],int c[],int s,int e){
    int mid=(s+e)/2;
    int i=s,j=s,k=mid+1;
    while(j<=mid && k<=e){
        if(b[j]<c[k]){
            a[i++]=b[j++];
        }
        else{
            a[i++]=c[k++];
        }
    }
    while(j<=mid){                      //check if elements are lrft there in b array
        a[i++]=b[j++];          
    }
    while(k<=e){                        //check if elements are left in c array
        a[i++]=c[k++];
    }
}
void mergesort(int a[],int s,int e){
    //base case
    if(s==e)return;

    //recursion
    //1.divide
    int b[10005],c[10005];
    
    int mid=(s+e)/2;
    for(int i=s;i<=mid;i++){                //copy elemenrs from s to mid in b array
        b[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=a[i];                          //copy elemenrs from mid+1 to end in c array
    }
    //2.sort
    mergesort(b,s,mid);
    mergesort(c,mid+1,e);

    //3.merge
    mergearrays(a,b,c,s,e);
}
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int s=0;
    int e=n-1;
    mergesort(a,s,e);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}