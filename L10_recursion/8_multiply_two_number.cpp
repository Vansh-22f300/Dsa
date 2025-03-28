#include<iostream>
using namespace std;
int solve(int a, int b){
    //base case
    if(b==0) return 0;
    int ans=solve(a,b-1)+a;
    return ans;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<solve(m,n);

}