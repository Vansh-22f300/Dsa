// Given a string S, the task is to identify the character that appears most frequently. It is guaranteed that only one character has the highest frequency.

// Input Format
// A single string S (1 ≤ |S| ≤ 100), consisting of lowercase and uppercase English letters.

// Constraints
// A string of length between 1 to 100.

// Output Format
// A single character that appears most frequently in the given string.


// Sample Input
// aaabacB
// Sample Output
// a
// Explanation
// Frequency of each character in the string:

// 'a' → 4 times
// 'b' → 2 times
// 'c' → 1 time
// 'B' → 1 time
// Note: Since 'B' (uppercase) is different from 'b' (lowercase), they are counted separately.

// The character with the highest frequency is 'a' (appearing 4 times).

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int count[10005]={0};
	int maxfreq=0;
	char max_ch=s[0];
	for(int i=0;i<s.length();i++){
		char ch=s[i];
		count[ch]++;
		if(count[ch]>maxfreq){
			maxfreq=count[ch];
			max_ch=ch;
		}
	}
	cout<<max_ch;
	return 0;
}