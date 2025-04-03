#include<iostream>
#include<string.h>
using namespace std;
int findindex(char a[]){
    int k=-1;
    int i=strlen(a)-2;
    cout<<i;
    for(int i=strlen(a)-2;i>=0;i--){
        if(a[i]<a[i+1]){
            k=i;
            break;
        }
    }
    return k;
}
void reverse(char a[],int i,int j){
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    char a[100];
    cin>>a;
    cout<<strlen(a)<<endl;
    //1.find index 
    int k=findindex(a);
    //2a check if it is last permutation or not 
    if(k==-1){
        //last permutation hai isse bada nhi hai 
        //reverse/sort it and print the first permutation
        reverse(a,0,strlen(a)-1);//rev from starting till last index
        cout<<a<<endl;
    }
    else{
        //2.finding bigger char than k
        int j=strlen(a)-1;
        // char x=a[k];
        while(j>k){
            if(a[j]>a[k]){
                swap(a[j],a[k]);
                break;
            }
            j--;
        }
        //3.sort the array from k+1 to len-1
        reverse(a,k+1,strlen(a)-1);
        cout<<a<<endl;
    }

   
}
