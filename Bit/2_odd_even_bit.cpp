#include <iostream>
using namespace std;
bool isodd(int n){
    int lsb=n&1;
    if(lsb==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int n=11;
    if(isodd(n)){
        cout<<n<<" is Odd"<<endl;

    }
    else{
        cout<<n<<"is Even"<<endl;
    }
}