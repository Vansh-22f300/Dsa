#include <iostream>
using namespace std;
bool checkithbit(int n,int i){
    int mask=1<<i;
    n=n & mask;
    if(n>0)return true;
    else{
        return false;
    }
}

void setithbit(int &n,int i){
    int mask=1<<i;
    n=(n|mask);
}
int main(){

    int n;
    cin>>n;
    int i;
    if(checkithbit(n,3)){
        cout<<i<<" bit is 1"<<endl;

    }
    else{
        cout<<i<<" bit is 0"<<endl;
    }
    cout<<"Before Update"<<n<<endl;
    setithbit(n,3);
    cout<<"After Update"<<n<<endl;
}