#include<iostream>
using namespace std;
int incseq(int n){
    if (n==0) return n;
    return (n+incseq(n-1));
}
int main(){
int n;
cin>>n;
cout<<incseq(n);
}
