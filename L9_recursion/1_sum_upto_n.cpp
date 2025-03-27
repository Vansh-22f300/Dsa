#include<iostream>
using namespace std;
int sumupton(int n){
    if (n==0) return n;
    return (n+sumupton(n-1));
}
int main(){
int n;
cin>>n;
cout<<sumupton(n);
}
