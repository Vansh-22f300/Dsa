#include <iostream>
using namespace std;
int a[10000005];

int main(){
    //assume all to be true3 initiallly
    for(int i=0;i<10000005;i++){
        a[i]=true;
    }

    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){   //i*i<=n for optimisation
        if (a[i]==true){ // j loop applicable only on those who are true , dobara false pr check nhi karenge
            
            for(int j=i*i;j<=n;j+=i){   //2*i se nahi i*i se start karna hai for optimization
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