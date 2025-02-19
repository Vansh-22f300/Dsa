#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};//initialization
    int n=sizeof(arr)/sizeof(int);
    arr[0]=10;//update
    for (int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}
