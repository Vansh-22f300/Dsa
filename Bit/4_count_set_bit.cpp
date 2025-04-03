#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i;/
    int ans=0;
    while(n>0){
        if((n&1)==1){
            ans++;
        }
        n=n>>1;
    }
    cout<<"Number of set bits are "<<ans<<endl;
    return 0;
}