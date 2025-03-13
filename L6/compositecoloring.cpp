#include <iostream>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int rang[n]={0};
        for(int i=0;i<n;i++) cin>>arr[i];
        int color=1; //color hum 1 se fill krna start karenge
        for(int i=0;i<11;i++){
            int x=prime[i];
            bool kyacolorkiya=false;
            for (int j=0;j<n;j++){
                if (rang[j]!=0){
                    continue; ///ekabarjis par color kr diya dobara nhi karenge
                }
                if (arr[j]%x==0){
                    rang[j]=color;
                    kyacolorkiya=true;
                }
            }
            if(kyacolorkiya) color++;
            
        }
            cout<<color-1<<endl;
            for(int i=0;i<n;i++){
                cout<<rang[i]<<" ";
            }  
            cout<<endl;  
    

        
    }
    return 0;
}


int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
            return n;
        }
    }
}
m