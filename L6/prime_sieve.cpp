#include <iostream>
using namespace std;
int main(){
    int a[100005];
    //assume all to be true3 initiallly
    for(int i=0;i<100005;i++){
        a[i]=true;
    }
    // int m;
    // cin>>m;
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        if (a[i]==true){ // j loop applicable only on those who are true , dobara false pr check nhi karenge
            for(int j=2*i;j<=n;j+=i){
                a[j]=false; //jahan composite vahan false krdo
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==true){
            cout<<i<<" ";
        }
    }
}