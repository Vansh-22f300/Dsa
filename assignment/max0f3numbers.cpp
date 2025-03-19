#include<iostream>
#include <climits>
using namespace std;
int main() {
    int arr[100];
    int max1=INT_MIN;
	for(int i=0;i<3;i++){
	cin>>arr[i];
    if(arr[i]>max1)
    max1=arr[i];
	}
	cout<<max1;
	return 0;
}
