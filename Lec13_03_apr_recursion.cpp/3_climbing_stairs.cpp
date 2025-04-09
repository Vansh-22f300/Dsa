#include<iostream>
using namespace std;
int climbstairs(int n,int k){
    //base case
    if(n==0) return 1;
    if(n<0) return 0; //invalid case
    //recursive case
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        ans+=climbstairs(n-i,k);
    }
    return ans;

}

int main(){
    int n=5;
    int k=4;
    cout<<climbstairs(n,k);
}