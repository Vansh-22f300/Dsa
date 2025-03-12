#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int ans;
int totalcows;
int n;
bool cowsplacedyes(int d){
	int cowsplaced=1;
	int pc=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]-pc>=d){
			cowsplaced++;
			pc=arr[i];
			if(cowsplaced==totalcows) return true;
		}
	}
	return false;
}
int aggressivecows(){
	int s=0;
	int e=arr[n-1]-arr[0];
	ans=0;
	while(s<=e){
		int mid=s+(e-s)/2;
		if (cowsplacedyes(mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int main() {
	cin>>n>>totalcows;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<aggressivecows()<<endl;
	return 0;
}