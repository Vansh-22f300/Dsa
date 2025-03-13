#include<iostream>
using namespace std;
int n,totalpainters;
int boards[10005];
bool kyahopaya(int allowed){
	int painters=1;
	int boardspainter=0;
	for(int i=0;i<n;i++){
		if(boardspainter+boards[i]<=allowed){
			boardspainter+=boards[i];
		}
		else{
			painters++;
			boardspainter=boards[i];
		}
	}
	if(painters<=totalpainters) return true;
	else return false;
}
int painterspartition(){
	int s=0;
	int e=0;
	for(int i=0;i<n;i++){
		s=max(s,boards[i]);
		e+=boards[i];
	}
	int ans=0;
	while(s<=e){
		int mid=s+(e-s)/2;
		if (kyahopaya(mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}
int main() {
	// int t;
	// cin>>t;
	// while(t--){
	cin>>n>>totalpainters;
	for(int i=0;i<n;i++){
		cin>>boards[i];
	}
	cout<<painterspartition()<<endl;
// }
	return 0;
}