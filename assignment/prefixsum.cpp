#include <iostream>
using namespace std;
int main() {
int arr[100000];    
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ps[100000];
ps[0]=arr[0];
for(int i=1;i<n;i++){
    ps[i]=ps[i-1]+arr[i];
}
for(int i=0;i<n;i++)
{
    cout<<ps[i]<<" ";
}

return 0;
}

