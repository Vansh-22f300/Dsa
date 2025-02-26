#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,-5,9,-1,10};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                res[i]*=arr[j];
            }
        }
        return res;
    }

return 0;
}