#include<bits/stdc++.h>
using namespace std;
int elephantways(int i,int j){
    //base case
    if(i==0 and j==0){
        return 1;
    }
    // if(i<0 || j<0){
    //     return 0;
    // }//YEH NHI HOGA OR NHI AAYGA AND AAYGA

    //recursive case
    int ans=0;
    for(int k=0;k<i;k++){
        ans+=elephantways(k,j);
    }
    for(int k=0;k<j;k++){
        ans+=elephantways(i,k);
    }

    return ans;


}
int main(){
    int i=5;
    int j=8;
    // int n=4
    cout<<elephantways(i,j);
}