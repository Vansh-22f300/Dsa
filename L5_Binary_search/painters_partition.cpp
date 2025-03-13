// Given K painters to paint N boards where each painter takes 1 unit of time to paint 1 unit of boards i.e. if the length of a particular board is 5, it will take 5 units of time to paint the board. Compute the minimum amount of time to paint all the boards.

// Note that:

// Every painter can paint only contiguous segments of boards.
// A board can only be painted by 1 painter at maximum.

// Input Format
// First line contains K which is the number of painters. Second line contains N which indicates the number of boards. Third line contains N space separated integers representing the length of each board.


// Constraints
// 1 <= K <= 10
// 1 <= N <= 10
// 1<= Length of each Board <= 10^8


// Output Format
// Output the minimum time required to paint the board.


// Sample Input
// 2
// 2
// 1 10
// Sample Output
// 10
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