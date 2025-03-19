#include <iostream>
using namespace std;
int dec(int n){
    if(n==0) return 0;
    else{
        cout<<n<<" ";
        dec(n-1);
        
    }
}

int inc(int n){
    if(n > 0) {
        inc(n - 1);
        cout << n << " ";
    }
}
//iterative method
void printinc(int i,int n){
    if(i==n+1) return;
    cout<<i<<" ";
    printinc(i+1,n);
}
int main(){
    int n=99;
    cout<<"Decrementing: ";
    cout<<dec(n)<<endl;
    // inc(n);
    cout<<"Incrementing: ";
    cout<<inc(n)<<endl;
    cout<<endl;
    cout<<"New method"<<endl;
    cout<<"Incrementing: ";
    printinc(1,n);
    return 0;

}