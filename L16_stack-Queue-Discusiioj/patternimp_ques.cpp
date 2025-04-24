#include<bits/stdc++.h>
using namespace std;
void solve(int n,int inc){
    cout<<n<<" ";

    if(n>=53){
        cout<<n<<" ";
        return;
    }
        solve(n+inc,inc+4);
        cout<<n<<" ";
    
}
int main(){

    solve(3,2);
    return 0;
}