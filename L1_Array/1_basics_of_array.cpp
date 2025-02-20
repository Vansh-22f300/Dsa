#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};//initialization
    int n=sizeof(arr)/sizeof(int);
    arr[0]=10;//update
    for (int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

    //Linear Search
    int key=30;
    int i;
    for ( i=0;i<n;i++){
        if (arr[i]==key){
            cout<<"\nElement found at index "<<i<<endl;
            break;
        }
    }
    if (i==n){
        cout<<"\nElement not found\n";
    }
    cout<<endl;
    return 0;
}
