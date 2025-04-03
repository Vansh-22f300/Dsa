// Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.

// Input Format
// String
// Constraints
// Length of string should be between 1 to 1000.
// Output Format
// String

// Sample Input
// abcg
// Sample Output
// badf
#include<bits/stdc++.h>
using namespace std;
int main() {
	string S;
	cin>>S;
	for(int i=0;i<S.length();i++){
		if(i%2==0){	//even case
		cout<<char(S[i]+1);
		}
		else{	
					//odd case
			cout<<char(S[i]-1);			
		}
	}
	return 0;
}