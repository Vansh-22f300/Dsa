// Take as input S, a string. Write a program that gives the count of substrings of this string which are palindromes and Print the ans.


// Input Format
// Single line input containing a string

// Constraints
// Length of string is between 1 to 1000.

// Output Format
// Integer output showing the number of palindromic substrings.

// Sample Input
// abc
// Sample Output
// 3
// Explanation
// For the given sample case , the palindromic substrings of the string abc are "a","b" and "c".So, the ans is 3.

#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int i,int j){
	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;

}
int countpalindrom(string s){
	int count=0;
	int n=s.length();
	for(int i=0;i<n;i++){		//i=0 start 
		for(int j=i;j<n;j++){	//j==n last index
			// to print subseq// 
            // cout<<s.substr(i,j-i+1)<<endl; //// (start,number_of_elements)///(->i,n)
			if(palindrome(s,i,j)){
				count++;
			}

		}
	}
	return count;
}
int main() {
	string s;
	cin>>s;
	cout<<countpalindrom(s);
	return 0;
}